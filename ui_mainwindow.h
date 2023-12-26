/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *Rinse;
    QPushButton *Prime;
    QWidget *page_2;
    QPushButton *Pumb;
    QPushButton *RinsePrimeDura;
    QWidget *page_3;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit6;
    QWidget *page_5;
    QLabel *label_8;
    QLineEdit *lineEdit7;
    QPushButton *pushButton_9;
    QWidget *page_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *connect;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_10;
    QLabel *label_13;
    QWidget *tab_2;
    QPushButton *Update;
    QLabel *labelversion;
    QLabel *version;
    QLabel *status;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(869, 614);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 500, 83, 25));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 50, 801, 401));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        Rinse = new QPushButton(page);
        Rinse->setObjectName(QStringLiteral("Rinse"));
        Rinse->setGeometry(QRect(130, 130, 121, 41));
        QFont font;
        font.setPointSize(16);
        Rinse->setFont(font);
        Prime = new QPushButton(page);
        Prime->setObjectName(QStringLiteral("Prime"));
        Prime->setGeometry(QRect(330, 130, 111, 41));
        Prime->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        Pumb = new QPushButton(page_2);
        Pumb->setObjectName(QStringLiteral("Pumb"));
        Pumb->setGeometry(QRect(200, 100, 261, 61));
        Pumb->setFont(font);
        RinsePrimeDura = new QPushButton(page_2);
        RinsePrimeDura->setObjectName(QStringLiteral("RinsePrimeDura"));
        RinsePrimeDura->setGeometry(QRect(200, 200, 261, 61));
        RinsePrimeDura->setFont(font);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        lineEdit1 = new QLineEdit(page_3);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(180, 90, 111, 31));
        lineEdit1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit3 = new QLineEdit(page_3);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(180, 150, 111, 31));
        lineEdit3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit2 = new QLineEdit(page_3);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(320, 90, 111, 31));
        lineEdit2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit4 = new QLineEdit(page_3);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(320, 150, 111, 31));
        lineEdit4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 131, 31));
        label->setFont(font);
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 141, 31));
        label_2->setFont(font);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 50, 71, 21));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 50, 81, 21));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 100, 83, 25));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 160, 83, 25));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 100, 91, 31));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 150, 101, 31));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 110, 81, 21));
        QFont font1;
        font1.setPointSize(18);
        label_5->setFont(font1);
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 150, 81, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 60, 91, 17));
        QFont font2;
        font2.setPointSize(12);
        label_7->setFont(font2);
        lineEdit5 = new QLineEdit(page_4);
        lineEdit5->setObjectName(QStringLiteral("lineEdit5"));
        lineEdit5->setGeometry(QRect(180, 100, 111, 31));
        lineEdit5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit6 = new QLineEdit(page_4);
        lineEdit6->setObjectName(QStringLiteral("lineEdit6"));
        lineEdit6->setGeometry(QRect(180, 150, 111, 31));
        lineEdit6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 130, 181, 31));
        label_8->setFont(font);
        lineEdit7 = new QLineEdit(page_5);
        lineEdit7->setObjectName(QStringLiteral("lineEdit7"));
        lineEdit7->setGeometry(QRect(260, 120, 141, 41));
        lineEdit7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(670, 320, 83, 25));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        tabWidget = new QTabWidget(page_6);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 771, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        connect = new QPushButton(tab);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setGeometry(QRect(200, 170, 121, 41));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 30, 261, 41));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 100, 251, 41));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 220, 201, 41));
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 40, 91, 31));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 110, 64, 17));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(600, 170, 41, 21));
        QFont font3;
        font3.setPointSize(20);
        label_12->setFont(font3);
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(410, 110, 51, 31));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(200, 240, 191, 31));
        label_13->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Update = new QPushButton(tab_2);
        Update->setObjectName(QStringLiteral("Update"));
        Update->setGeometry(QRect(250, 120, 121, 31));
        labelversion = new QLabel(tab_2);
        labelversion->setObjectName(QStringLiteral("labelversion"));
        labelversion->setGeometry(QRect(190, 50, 111, 31));
        version = new QLabel(tab_2);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(340, 50, 71, 31));
        status = new QLabel(tab_2);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(240, 190, 161, 31));
        status->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_6);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 500, 83, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 869, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Save", nullptr));
        Rinse->setText(QApplication::translate("MainWindow", "Rinse", nullptr));
        Prime->setText(QApplication::translate("MainWindow", "Prime", nullptr));
        Pumb->setText(QApplication::translate("MainWindow", "Pumb Calib", nullptr));
        RinsePrimeDura->setText(QApplication::translate("MainWindow", "Rinse/Prime Duration", nullptr));
        label->setText(QApplication::translate("MainWindow", "Rinse Pumb", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Prime Pumb", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Speed", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Duration", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Test", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Test", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Test", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Test", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Rinse", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Prime", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Duration", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Home Manifold", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "NXT", nullptr));
        connect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Select Wifi", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "IP", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "View", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Wifi Scanning", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "WIFI", nullptr));
        Update->setText(QApplication::translate("MainWindow", "Update", nullptr));
        labelversion->setText(QApplication::translate("MainWindow", "Current Version", nullptr));
        version->setText(QApplication::translate("MainWindow", "V1", nullptr));
        status->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Version", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
