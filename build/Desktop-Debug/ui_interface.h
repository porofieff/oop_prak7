/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_5;
    QLabel *i_label;
    QLineEdit *im_edit;
    QLineEdit *re_edit;
    QLabel *a_label;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *choice_label;
    QGridLayout *gridLayout_2;
    QRadioButton *sin_but;
    QRadioButton *si_but;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *accure_edit;
    QLabel *accur_lable;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QPushButton *do_but;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *res_line;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(319, 344);
        Interface->setCursor(QCursor(Qt::ArrowCursor));
        Interface->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(Interface);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 313, 336));
        gridLayout_8 = new QGridLayout(layoutWidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        i_label = new QLabel(layoutWidget);
        i_label->setObjectName(QString::fromUtf8("i_label"));

        gridLayout_5->addWidget(i_label, 0, 2, 1, 1);

        im_edit = new QLineEdit(layoutWidget);
        im_edit->setObjectName(QString::fromUtf8("im_edit"));

        gridLayout_5->addWidget(im_edit, 0, 3, 1, 1);

        re_edit = new QLineEdit(layoutWidget);
        re_edit->setObjectName(QString::fromUtf8("re_edit"));

        gridLayout_5->addWidget(re_edit, 0, 1, 1, 1);

        a_label = new QLabel(layoutWidget);
        a_label->setObjectName(QString::fromUtf8("a_label"));

        gridLayout_5->addWidget(a_label, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        choice_label = new QLabel(layoutWidget);
        choice_label->setObjectName(QString::fromUtf8("choice_label"));

        gridLayout_3->addWidget(choice_label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sin_but = new QRadioButton(layoutWidget);
        sin_but->setObjectName(QString::fromUtf8("sin_but"));

        gridLayout_2->addWidget(sin_but, 0, 0, 1, 1);

        si_but = new QRadioButton(layoutWidget);
        si_but->setObjectName(QString::fromUtf8("si_but"));

        gridLayout_2->addWidget(si_but, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        accure_edit = new QLineEdit(layoutWidget);
        accure_edit->setObjectName(QString::fromUtf8("accure_edit"));

        gridLayout->addWidget(accure_edit, 0, 2, 1, 1);

        accur_lable = new QLabel(layoutWidget);
        accur_lable->setObjectName(QString::fromUtf8("accur_lable"));

        gridLayout->addWidget(accur_lable, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 3, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        do_but = new QPushButton(layoutWidget);
        do_but->setObjectName(QString::fromUtf8("do_but"));
        do_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 4);"));

        gridLayout_7->addWidget(do_but, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 1, 0, 1, 1);

        res_line = new QLineEdit(layoutWidget);
        res_line->setObjectName(QString::fromUtf8("res_line"));

        gridLayout_8->addWidget(res_line, 2, 0, 1, 1);


        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "Interface", nullptr));
        i_label->setText(QCoreApplication::translate("Interface", "+ i", nullptr));
        a_label->setText(QCoreApplication::translate("Interface", "a = ", nullptr));
        choice_label->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\321\216", nullptr));
        sin_but->setText(QCoreApplication::translate("Interface", "Sin", nullptr));
        si_but->setText(QCoreApplication::translate("Interface", "Si", nullptr));
        accur_lable->setText(QCoreApplication::translate("Interface", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214 \321\200\320\260\321\201\321\207\320\265\321\202\320\260", nullptr));
        do_but->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
