#ifndef SA_H
#define SA_H

#include <QtGui/QMainWindow>
#include "ui_sa.h"
#include "LinkedList.h"

class SA : public QMainWindow
{
	Q_OBJECT

	public:
		SA(QWidget *parent = 0, Qt::WFlags flags = 0);
		~SA();

	private:
		Ui::SAClass ui;

		// m�todo auxiliar para setar item na tabela
		void setarValorNaTabela(int row, int col, QVariant val) {
			QTableWidgetItem* item = new QTableWidgetItem;
			item->setText(val.toString());
			ui.mainTable->setItem(row, col, item);
		}

		// m�todo para setar valores na tabela
		void setarValoresNaTabela(LinkedList* jobs) {
			if(ui.txtSliceRr->text().isEmpty()) ui.txtSliceRr->setText("1");

			jobs->calcularFcfs();
			jobs->calcularSjf();
			jobs->calcularRr(ui.txtSliceRr->text().toInt());

			for(int i=0; i < jobs->getSize(); ++i) {
				Job* j = jobs->get(i);
				// setar fcfs | coluna 2
				setarValorNaTabela(j->getId()-1, 2, QVariant(j->getFcfs()));
				// setar rr | coluna 3
				setarValorNaTabela(j->getId()-1, 3, QVariant(j->getRr()));
				// setar sjf | coluna 4
				setarValorNaTabela(j->getId()-1, 4, QVariant(j->getSjf()));
			}
		}

		// m�todo para pegar lenghts da tabela e instanciar jobs
		LinkedList instanciarListaDeJobs() {
			ui.mainTable->sortItems(1, Qt::AscendingOrder);
			LinkedList jobs;
			for(int i=0; i < ui.mainTable->rowCount(); ++i) {
				int lenght = ui.mainTable->item(i, 1)->text().toInt();
				int id = ui.mainTable->item(i, 0)->text().toInt();
				jobs.insert(*new Job(id, lenght));
			};
			ui.mainTable->sortItems(0, Qt::AscendingOrder);
			// setar troca de contexto
			if(ui.txtContextChange->text().isEmpty()) ui.txtContextChange->setText("0");
			jobs.setContextChange(ui.txtContextChange->text().toInt());
			return jobs;
		}

		// m�todo para add linha em uma tabela
		void addRow(QTableWidget* table) {
			table->insertRow(table->rowCount());
			int rowNumber = table->rowCount() - 1;
			QTableWidgetItem* item = new QTableWidgetItem;
			item->setText(QVariant(rowNumber+1).toString());
			table->setItem(rowNumber, 0, item);
		}

		// m�todo para remover linha em uma tabela
		void removeRow(QTableWidget* table) {
			table->removeRow(table->rowCount()-1);
		}

	// m�todos para eventos no Qt
	public slots:
		// m�todo para add job
		void addJob() {
			addRow(ui.mainTable);
		};

		// m�todo para realizar os c�lculos e preencher a tabela
		void calcular() {
			LinkedList jobs = instanciarListaDeJobs();
			setarValoresNaTabela(&jobs);
		};
	
		// m�todo para add queue para mlfq
		void addQueue() {
			addRow(ui.tblQueueMlfq);
		}

		// m�todo para remover job
		void removeJob() {
			removeRow(ui.mainTable);
		}

		// m�todo para remover queue para mlfq
		void removeQueue() {
			removeRow(ui.tblQueueMlfq);
		}
};

#endif // SA_H
