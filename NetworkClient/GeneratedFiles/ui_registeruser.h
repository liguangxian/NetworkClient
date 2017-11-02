/********************************************************************************
** Form generated from reading UI file 'registeruser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSER_H
#define UI_REGISTERUSER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_RegisterUser
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *my_nameLE;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *my_passwordLE;
    QLabel *label_4;
    QLineEdit *my_repasswordLE;
    imagelabel *my_imagelabel;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *my_plainTextEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *my_pbregister;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *my_pbback;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *my_pbcancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *RegisterUser)
    {
        if (RegisterUser->objectName().isEmpty())
            RegisterUser->setObjectName(QStringLiteral("RegisterUser"));
        RegisterUser->resize(662, 492);
        RegisterUser->setMinimumSize(QSize(80, 80));
        RegisterUser->setSizeIncrement(QSize(80, 80));
        RegisterUser->setBaseSize(QSize(80, 80));
        horizontalLayout_3 = new QHBoxLayout(RegisterUser);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(RegisterUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        my_nameLE = new QLineEdit(RegisterUser);
        my_nameLE->setObjectName(QStringLiteral("my_nameLE"));

        horizontalLayout->addWidget(my_nameLE);

        label_6 = new QLabel(RegisterUser);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        dateEdit = new QDateEdit(RegisterUser);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(1995, 12, 20));

        horizontalLayout->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(RegisterUser);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_9->addWidget(label);

        radioButton = new QRadioButton(RegisterUser);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_9->addWidget(radioButton);

        radioButton_2 = new QRadioButton(RegisterUser);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_9->addWidget(radioButton_2);

        label_5 = new QLabel(RegisterUser);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        lineEdit_2 = new QLineEdit(RegisterUser);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_9->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(RegisterUser);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        my_passwordLE = new QLineEdit(RegisterUser);
        my_passwordLE->setObjectName(QStringLiteral("my_passwordLE"));

        horizontalLayout_6->addWidget(my_passwordLE);

        label_4 = new QLabel(RegisterUser);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        my_repasswordLE = new QLineEdit(RegisterUser);
        my_repasswordLE->setObjectName(QStringLiteral("my_repasswordLE"));

        horizontalLayout_6->addWidget(my_repasswordLE);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout);

        my_imagelabel = new imagelabel(RegisterUser);
        my_imagelabel->setObjectName(QStringLiteral("my_imagelabel"));
        my_imagelabel->setEnabled(true);
        my_imagelabel->setMinimumSize(QSize(80, 80));
        my_imagelabel->setSizeIncrement(QSize(80, 80));
        my_imagelabel->setBaseSize(QSize(80, 80));

        horizontalLayout_8->addWidget(my_imagelabel);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        groupBox = new QGroupBox(RegisterUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        my_plainTextEdit = new QPlainTextEdit(groupBox);
        my_plainTextEdit->setObjectName(QStringLiteral("my_plainTextEdit"));

        horizontalLayout_2->addWidget(my_plainTextEdit);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        my_pbregister = new QPushButton(RegisterUser);
        my_pbregister->setObjectName(QStringLiteral("my_pbregister"));

        horizontalLayout_5->addWidget(my_pbregister);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        my_pbback = new QPushButton(RegisterUser);
        my_pbback->setObjectName(QStringLiteral("my_pbback"));

        horizontalLayout_5->addWidget(my_pbback);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        my_pbcancel = new QPushButton(RegisterUser);
        my_pbcancel->setObjectName(QStringLiteral("my_pbcancel"));

        horizontalLayout_5->addWidget(my_pbcancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(RegisterUser);

        QMetaObject::connectSlotsByName(RegisterUser);
    } // setupUi

    void retranslateUi(QDialog *RegisterUser)
    {
        RegisterUser->setWindowTitle(QApplication::translate("RegisterUser", "RegisterUser", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegisterUser", "Name\357\274\232  ", Q_NULLPTR));
        label_6->setText(QApplication::translate("RegisterUser", " Birthday\357\274\232          ", Q_NULLPTR));
        label->setText(QApplication::translate("RegisterUser", "Sex\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("RegisterUser", "Man      ", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("RegisterUser", "Woman     ", Q_NULLPTR));
        label_5->setText(QApplication::translate("RegisterUser", "Telephone", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegisterUser", "Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegisterUser", "RePassword", Q_NULLPTR));
        my_imagelabel->setText(QApplication::translate("RegisterUser", "\347\202\271\345\207\273\350\256\276\347\275\256\345\244\264\345\203\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RegisterUser", "Person Information", Q_NULLPTR));
        my_pbregister->setText(QApplication::translate("RegisterUser", "Register", Q_NULLPTR));
        my_pbback->setText(QApplication::translate("RegisterUser", "Back", Q_NULLPTR));
        my_pbcancel->setText(QApplication::translate("RegisterUser", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterUser: public Ui_RegisterUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSER_H
