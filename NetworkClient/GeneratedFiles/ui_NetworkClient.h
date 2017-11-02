/********************************************************************************
** Form generated from reading UI file 'NetworkClient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKCLIENT_H
#define UI_NETWORKCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkClientClass
{
public:
    QAction *actionSign_in;
    QAction *actionSign_up;
    QAction *actionQuit;
    QWidget *centralWidget;
    QPushButton *my_pushButton;
    QListWidget *my_listWidget;
    QTextEdit *my_textEdit;
    QPushButton *my_quitwindow;
    QMenuBar *menuBar;
    QMenu *menuUser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NetworkClientClass)
    {
        if (NetworkClientClass->objectName().isEmpty())
            NetworkClientClass->setObjectName(QStringLiteral("NetworkClientClass"));
        NetworkClientClass->resize(627, 456);
        actionSign_in = new QAction(NetworkClientClass);
        actionSign_in->setObjectName(QStringLiteral("actionSign_in"));
        actionSign_up = new QAction(NetworkClientClass);
        actionSign_up->setObjectName(QStringLiteral("actionSign_up"));
        actionQuit = new QAction(NetworkClientClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(NetworkClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        my_pushButton = new QPushButton(centralWidget);
        my_pushButton->setObjectName(QStringLiteral("my_pushButton"));
        my_pushButton->setGeometry(QRect(390, 70, 93, 28));
        my_listWidget = new QListWidget(centralWidget);
        my_listWidget->setObjectName(QStringLiteral("my_listWidget"));
        my_listWidget->setGeometry(QRect(160, 150, 256, 192));
        my_textEdit = new QTextEdit(centralWidget);
        my_textEdit->setObjectName(QStringLiteral("my_textEdit"));
        my_textEdit->setGeometry(QRect(130, 80, 161, 31));
        my_quitwindow = new QPushButton(centralWidget);
        my_quitwindow->setObjectName(QStringLiteral("my_quitwindow"));
        my_quitwindow->setGeometry(QRect(450, 350, 93, 28));
        NetworkClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NetworkClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 26));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        NetworkClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NetworkClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NetworkClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NetworkClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NetworkClientClass->setStatusBar(statusBar);

        menuBar->addAction(menuUser->menuAction());
        menuUser->addAction(actionSign_in);
        menuUser->addAction(actionSign_up);
        menuUser->addAction(actionQuit);

        retranslateUi(NetworkClientClass);

        QMetaObject::connectSlotsByName(NetworkClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetworkClientClass)
    {
        NetworkClientClass->setWindowTitle(QApplication::translate("NetworkClientClass", "NetworkClient", Q_NULLPTR));
        actionSign_in->setText(QApplication::translate("NetworkClientClass", "sign_in", Q_NULLPTR));
        actionSign_up->setText(QApplication::translate("NetworkClientClass", "sign_up", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("NetworkClientClass", "quit", Q_NULLPTR));
        my_pushButton->setText(QApplication::translate("NetworkClientClass", "connect", Q_NULLPTR));
        my_quitwindow->setText(QApplication::translate("NetworkClientClass", "Quit", Q_NULLPTR));
        menuUser->setTitle(QApplication::translate("NetworkClientClass", "User", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetworkClientClass: public Ui_NetworkClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKCLIENT_H
