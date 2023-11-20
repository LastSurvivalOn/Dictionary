/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(336, 155);
        verticalLayout = new QVBoxLayout(Edit);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Edit);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Edit);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label = new QLabel(Edit);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(Edit);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        buttonBox = new QDialogButtonBox(Edit);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Edit);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Edit, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Edit, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Edit", "\320\220\320\275\320\263\320\273\321\226\320\271\321\201\321\214\320\272\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("Edit", "\320\243\320\272\321\200\320\260\321\227\320\275\321\201\321\214\320\272\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
