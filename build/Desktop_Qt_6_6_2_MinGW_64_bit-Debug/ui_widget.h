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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_move;
    QPushButton *btn_rotate;
    QPushButton *btn_scale;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(274, 260);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 231, 251));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 211, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_move = new QPushButton(verticalLayoutWidget);
        btn_move->setObjectName("btn_move");

        verticalLayout->addWidget(btn_move);

        btn_rotate = new QPushButton(verticalLayoutWidget);
        btn_rotate->setObjectName("btn_rotate");

        verticalLayout->addWidget(btn_rotate);

        btn_scale = new QPushButton(verticalLayoutWidget);
        btn_scale->setObjectName("btn_scale");

        verticalLayout->addWidget(btn_scale);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "PANEL", nullptr));
        btn_move->setText(QCoreApplication::translate("Widget", "TRASLADAR", nullptr));
        btn_rotate->setText(QCoreApplication::translate("Widget", "ROTAR", nullptr));
        btn_scale->setText(QCoreApplication::translate("Widget", "SCALAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
