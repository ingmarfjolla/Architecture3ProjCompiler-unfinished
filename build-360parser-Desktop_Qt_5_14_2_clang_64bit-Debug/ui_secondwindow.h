/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Secondwindow
{
public:

    void setupUi(QWidget *Secondwindow)
    {
        if (Secondwindow->objectName().isEmpty())
            Secondwindow->setObjectName(QString::fromUtf8("Secondwindow"));
        Secondwindow->resize(400, 300);

        retranslateUi(Secondwindow);

        QMetaObject::connectSlotsByName(Secondwindow);
    } // setupUi

    void retranslateUi(QWidget *Secondwindow)
    {
        Secondwindow->setWindowTitle(QCoreApplication::translate("Secondwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Secondwindow: public Ui_Secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
