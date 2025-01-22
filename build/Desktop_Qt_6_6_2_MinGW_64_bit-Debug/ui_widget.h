/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_reinicar;
    QPushButton *btn_move;
    QPushButton *btn_rotate;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sp_ejeX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *sp_ejeY;
    QComboBox *cmb_fondo;
    QPushButton *btn_scale;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(199, 260);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 171, 251));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 151, 242));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_reinicar = new QPushButton(verticalLayoutWidget);
        btn_reinicar->setObjectName("btn_reinicar");

        verticalLayout->addWidget(btn_reinicar);

        btn_move = new QPushButton(verticalLayoutWidget);
        btn_move->setObjectName("btn_move");

        verticalLayout->addWidget(btn_move);

        btn_rotate = new QPushButton(verticalLayoutWidget);
        btn_rotate->setObjectName("btn_rotate");

        verticalLayout->addWidget(btn_rotate);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        sp_ejeX = new QSpinBox(verticalLayoutWidget);
        sp_ejeX->setObjectName("sp_ejeX");

        horizontalLayout->addWidget(sp_ejeX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        sp_ejeY = new QSpinBox(verticalLayoutWidget);
        sp_ejeY->setObjectName("sp_ejeY");

        horizontalLayout_2->addWidget(sp_ejeY);


        verticalLayout->addLayout(horizontalLayout_2);

        cmb_fondo = new QComboBox(verticalLayoutWidget);
        cmb_fondo->setObjectName("cmb_fondo");

        verticalLayout->addWidget(cmb_fondo);

        btn_scale = new QPushButton(verticalLayoutWidget);
        btn_scale->setObjectName("btn_scale");

        verticalLayout->addWidget(btn_scale);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "PANEL", nullptr));
        btn_reinicar->setText(QCoreApplication::translate("Widget", "REINICIAR", nullptr));
        btn_move->setText(QCoreApplication::translate("Widget", "TRASLADAR", nullptr));
        btn_rotate->setText(QCoreApplication::translate("Widget", "ROTAR", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Eje X:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "EJE Y:", nullptr));
        btn_scale->setText(QCoreApplication::translate("Widget", "SCALAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
