/********************************************************************************
** Form generated from reading UI file 'sa.ui'
**
** Created: Fri 26. Oct 09:43:42 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SA_H
#define UI_SA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *mainTable;
    QVBoxLayout *lay_params;
    QVBoxLayout *lay_slice;
    QLabel *lblContextChange;
    QLineEdit *txtContextChange;
    QLabel *lblSliceRr;
    QLineEdit *txtSliceRr;
    QLabel *lblQueuesMlfq;
    QTableWidget *tblQueueMlfq;
    QPushButton *btnRemoveQueue;
    QPushButton *btnAddQueue;
    QSpacerItem *verticalSpacer;
    QPushButton *btnRemoveJob;
    QPushButton *btnAddJob;
    QPushButton *calcular;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SAClass)
    {
        if (SAClass->objectName().isEmpty())
            SAClass->setObjectName(QString::fromUtf8("SAClass"));
        SAClass->resize(800, 500);
        SAClass->setMinimumSize(QSize(800, 500));
        centralWidget = new QWidget(SAClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainTable = new QTableWidget(centralWidget);
        if (mainTable->columnCount() < 6)
            mainTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mainTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (mainTable->rowCount() < 1)
            mainTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mainTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mainTable->setItem(0, 0, __qtablewidgetitem7);
        mainTable->setObjectName(QString::fromUtf8("mainTable"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainTable->sizePolicy().hasHeightForWidth());
        mainTable->setSizePolicy(sizePolicy);
        mainTable->setMinimumSize(QSize(620, 0));
        mainTable->setAutoFillBackground(false);
        mainTable->setGridStyle(Qt::SolidLine);
        mainTable->setWordWrap(true);
        mainTable->setCornerButtonEnabled(true);
        mainTable->horizontalHeader()->setCascadingSectionResizes(false);
        mainTable->horizontalHeader()->setDefaultSectionSize(100);
        mainTable->horizontalHeader()->setStretchLastSection(false);
        mainTable->verticalHeader()->setVisible(false);
        mainTable->verticalHeader()->setCascadingSectionResizes(false);
        mainTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        mainTable->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(mainTable, 0, 0, 1, 1);

        lay_params = new QVBoxLayout();
        lay_params->setSpacing(6);
        lay_params->setObjectName(QString::fromUtf8("lay_params"));
        lay_slice = new QVBoxLayout();
        lay_slice->setSpacing(6);
        lay_slice->setObjectName(QString::fromUtf8("lay_slice"));
        lblContextChange = new QLabel(centralWidget);
        lblContextChange->setObjectName(QString::fromUtf8("lblContextChange"));

        lay_slice->addWidget(lblContextChange);

        txtContextChange = new QLineEdit(centralWidget);
        txtContextChange->setObjectName(QString::fromUtf8("txtContextChange"));
        txtContextChange->setMaximumSize(QSize(40, 16777215));

        lay_slice->addWidget(txtContextChange);

        lblSliceRr = new QLabel(centralWidget);
        lblSliceRr->setObjectName(QString::fromUtf8("lblSliceRr"));

        lay_slice->addWidget(lblSliceRr);

        txtSliceRr = new QLineEdit(centralWidget);
        txtSliceRr->setObjectName(QString::fromUtf8("txtSliceRr"));
        txtSliceRr->setMaximumSize(QSize(40, 16777215));

        lay_slice->addWidget(txtSliceRr);

        lblQueuesMlfq = new QLabel(centralWidget);
        lblQueuesMlfq->setObjectName(QString::fromUtf8("lblQueuesMlfq"));

        lay_slice->addWidget(lblQueuesMlfq);

        tblQueueMlfq = new QTableWidget(centralWidget);
        if (tblQueueMlfq->columnCount() < 2)
            tblQueueMlfq->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblQueueMlfq->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblQueueMlfq->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        if (tblQueueMlfq->rowCount() < 1)
            tblQueueMlfq->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tblQueueMlfq->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tblQueueMlfq->setItem(0, 0, __qtablewidgetitem11);
        tblQueueMlfq->setObjectName(QString::fromUtf8("tblQueueMlfq"));
        tblQueueMlfq->setMaximumSize(QSize(152, 150));
        tblQueueMlfq->horizontalHeader()->setDefaultSectionSize(73);
        tblQueueMlfq->horizontalHeader()->setMinimumSectionSize(10);
        tblQueueMlfq->verticalHeader()->setVisible(false);
        tblQueueMlfq->verticalHeader()->setHighlightSections(true);

        lay_slice->addWidget(tblQueueMlfq);

        btnRemoveQueue = new QPushButton(centralWidget);
        btnRemoveQueue->setObjectName(QString::fromUtf8("btnRemoveQueue"));

        lay_slice->addWidget(btnRemoveQueue);

        btnAddQueue = new QPushButton(centralWidget);
        btnAddQueue->setObjectName(QString::fromUtf8("btnAddQueue"));

        lay_slice->addWidget(btnAddQueue);


        lay_params->addLayout(lay_slice);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        lay_params->addItem(verticalSpacer);

        btnRemoveJob = new QPushButton(centralWidget);
        btnRemoveJob->setObjectName(QString::fromUtf8("btnRemoveJob"));
        btnRemoveJob->setMinimumSize(QSize(154, 25));

        lay_params->addWidget(btnRemoveJob);

        btnAddJob = new QPushButton(centralWidget);
        btnAddJob->setObjectName(QString::fromUtf8("btnAddJob"));
        btnAddJob->setMinimumSize(QSize(154, 25));

        lay_params->addWidget(btnAddJob);

        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QString::fromUtf8("calcular"));
        calcular->setMinimumSize(QSize(154, 50));

        lay_params->addWidget(calcular);


        gridLayout->addLayout(lay_params, 0, 1, 1, 1);

        SAClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SAClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SAClass->setStatusBar(statusBar);

        retranslateUi(SAClass);
        QObject::connect(btnAddJob, SIGNAL(clicked()), SAClass, SLOT(addJob()));
        QObject::connect(calcular, SIGNAL(clicked()), SAClass, SLOT(calcular()));
        QObject::connect(btnAddQueue, SIGNAL(clicked()), SAClass, SLOT(addQueue()));
        QObject::connect(btnRemoveJob, SIGNAL(clicked()), SAClass, SLOT(removeJob()));
        QObject::connect(btnRemoveQueue, SIGNAL(clicked()), SAClass, SLOT(removeQueue()));

        QMetaObject::connectSlotsByName(SAClass);
    } // setupUi

    void retranslateUi(QMainWindow *SAClass)
    {
        SAClass->setWindowTitle(QApplication::translate("SAClass", "Scheduling Algorithms Calculator", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mainTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SAClass", "Job", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mainTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SAClass", "Lenght", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mainTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SAClass", "FCFS", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mainTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SAClass", "RR", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = mainTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SAClass", "SJF", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = mainTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SAClass", "MLFQ", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mainTable->isSortingEnabled();
        mainTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = mainTable->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("SAClass", "1", 0, QApplication::UnicodeUTF8));
        mainTable->setSortingEnabled(__sortingEnabled);

        lblContextChange->setText(QApplication::translate("SAClass", "Change of context", 0, QApplication::UnicodeUTF8));
        lblSliceRr->setText(QApplication::translate("SAClass", "Slice for Round Robin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        txtSliceRr->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lblQueuesMlfq->setText(QApplication::translate("SAClass", "Queues for MLFQ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tblQueueMlfq->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("SAClass", "Priority", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tblQueueMlfq->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("SAClass", "Slice", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = tblQueueMlfq->isSortingEnabled();
        tblQueueMlfq->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tblQueueMlfq->item(0, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("SAClass", "1", 0, QApplication::UnicodeUTF8));
        tblQueueMlfq->setSortingEnabled(__sortingEnabled1);

        btnRemoveQueue->setText(QApplication::translate("SAClass", "Remove queue", 0, QApplication::UnicodeUTF8));
        btnAddQueue->setText(QApplication::translate("SAClass", "Add queue", 0, QApplication::UnicodeUTF8));
        btnRemoveJob->setText(QApplication::translate("SAClass", "Remove job", 0, QApplication::UnicodeUTF8));
        btnAddJob->setText(QApplication::translate("SAClass", "Add job", 0, QApplication::UnicodeUTF8));
        calcular->setText(QApplication::translate("SAClass", "Calcular", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SAClass: public Ui_SAClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SA_H
