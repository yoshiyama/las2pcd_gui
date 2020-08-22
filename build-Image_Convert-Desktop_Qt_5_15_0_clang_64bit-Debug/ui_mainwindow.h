/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filePath;
    QPushButton *browseButton;
    QComboBox *fileFormat;
    QPushButton *convertButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 108);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filePath = new QLineEdit(centralWidget);
        filePath->setObjectName(QString::fromUtf8("filePath"));

        horizontalLayout->addWidget(filePath);

        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);


        verticalLayout_3->addLayout(horizontalLayout);

        fileFormat = new QComboBox(centralWidget);
        fileFormat->addItem(QString());
        fileFormat->addItem(QString());
        fileFormat->addItem(QString());
        fileFormat->setObjectName(QString::fromUtf8("fileFormat"));

        verticalLayout_3->addWidget(fileFormat);

        convertButton = new QPushButton(centralWidget);
        convertButton->setObjectName(QString::fromUtf8("convertButton"));

        verticalLayout_3->addWidget(convertButton);


        verticalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        fileFormat->setItemText(0, QCoreApplication::translate("MainWindow", "PNG", nullptr));
        fileFormat->setItemText(1, QCoreApplication::translate("MainWindow", "JPEG", nullptr));
        fileFormat->setItemText(2, QCoreApplication::translate("MainWindow", "BMP", nullptr));

        convertButton->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
