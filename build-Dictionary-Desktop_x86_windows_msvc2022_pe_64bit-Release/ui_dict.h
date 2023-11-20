/********************************************************************************
** Form generated from reading UI file 'dict.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICT_H
#define UI_DICT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dict
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dict)
    {
        if (Dict->objectName().isEmpty())
            Dict->setObjectName("Dict");
        Dict->resize(800, 600);
        centralwidget = new QWidget(Dict);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        Dict->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dict);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Dict->setMenuBar(menubar);
        statusbar = new QStatusBar(Dict);
        statusbar->setObjectName("statusbar");
        Dict->setStatusBar(statusbar);

        retranslateUi(Dict);

        QMetaObject::connectSlotsByName(Dict);
    } // setupUi

    void retranslateUi(QMainWindow *Dict)
    {
        Dict->setWindowTitle(QCoreApplication::translate("Dict", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dict", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dict", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\321\202\320\270 \320\267\320\260 \320\260\320\273\321\204\320\260\320\262\321\226\321\202\320\276\320\274", nullptr));

        pushButton->setText(QCoreApplication::translate("Dict", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\201\320\273\320\276\320\262\320\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dict", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\201\320\273\320\276\320\262\320\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dict", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270 \321\201\320\273\320\276\320\262\320\276", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dict", "\320\227\320\275\320\260\320\271\321\202\320\270 \321\201\320\273\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dict: public Ui_Dict {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICT_H
