#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;

class LinkedList {
	Node* headNode;
	int size;
	int contextChange;

	public:
		LinkedList():size(0) {};
		int getSize() { return size; }
		void setContextChange(int cc) { this->contextChange = cc; }
		int getContextChange() { return this->contextChange; }

		// inserir na lista
		void insert(Job val) {
			if(size==0) headNode = new Node(val);
			else {
				Node* node = headNode;
				while(node->next!=nullptr) node = node->next;
				node->next = &*new Node(val);
			}
			++size;
		};

		// pegar job pelo id
		Job* getById(int id) {
			Node* node = headNode;
			while(node->value.getId() != id) node = node->next;
			return &node->value;
		}

		// pegar job pela posição x
		Job* get(int x) {
			int count = 0;
			Node* node = headNode;
			while(count < x) { 
				node = node->next;
				++count;
			}
			return &node->value;
		}

		// método para calcular FCFS de cada job da lista
		void calcularFcfs() {
			int timeFcfs = 0;
			for(int i=0; i < this->size; ++i) {
				Job* j = this->getById(i+1);
				timeFcfs += j->getLenght();
				j->setFcfs(timeFcfs);
				timeFcfs += contextChange;
			}
		}

		// método para calcular SJF de cada job da lista
		void calcularSjf() {
			int timeSjf = 0;
			for(int i=0; i < this->size; ++i) {
				Job* j = this->get(i);
				timeSjf += j->getLenght();
				j->setSjf(timeSjf);
				timeSjf += contextChange;
			}
		}

		// método para calcular RR de cada job da lista
		// ((lenght/slice)*10)+((lenght/slice)*((list.size)-1)
		void calcularRr(int slice) {
			int timeRr = 0;
			vector<int> consumido;
			for(int i=0; i < this->size; ++i) consumido.push_back(0);

			for(int i=0; i < consumido.size(); ++i) {
				Job* j = this->getById(i+1);
				while(consumido[i] < j->getLenght()) {
					for(int k=0; k < consumido.size(); ++k) {
						Job* j2 = this->getById(k+1);
						if(consumido[k] < j2->getLenght()) {
							consumido[k] += slice;
							timeRr += slice + contextChange;
							if(consumido[k] >= j2->getLenght() && j2->getRr() < 0) {
								if(consumido[k] > j2->getLenght()) timeRr -= consumido[k] - j2->getLenght();
								j2->setRr(timeRr);
							}
						}
					}
				}
			}
			// limpar troca de contexto do último job
			this->get(this->size-1)->setRr((this->get(this->size-1)->getRr())-contextChange);
			// liberar memória do vetor
			// VER COMO FAZER!!!
		}
};