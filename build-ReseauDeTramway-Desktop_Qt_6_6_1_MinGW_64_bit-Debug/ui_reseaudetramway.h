/********************************************************************************
** Form generated from reading UI file 'reseaudetramway.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESEAUDETRAMWAY_H
#define UI_RESEAUDETRAMWAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReseauDeTramway
{
public:

    void setupUi(QWidget *ReseauDeTramway)
    {
        if (ReseauDeTramway->objectName().isEmpty())
            ReseauDeTramway->setObjectName("ReseauDeTramway");
        ReseauDeTramway->resize(800, 600);

        retranslateUi(ReseauDeTramway);

        QMetaObject::connectSlotsByName(ReseauDeTramway);
    } // setupUi

    void retranslateUi(QWidget *ReseauDeTramway)
    {
        ReseauDeTramway->setWindowTitle(QCoreApplication::translate("ReseauDeTramway", "ReseauDeTramway", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReseauDeTramway: public Ui_ReseauDeTramway {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESEAUDETRAMWAY_H
