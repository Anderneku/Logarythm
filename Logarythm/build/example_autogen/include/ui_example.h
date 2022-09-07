/********************************************************************************
** Form generated from reading UI file 'example.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE_H
#define UI_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_example
{
public:
    QWidget *centralWidget;
    QPushButton *btn;
    QLineEdit *enter;
    QLabel *display;
    QPushButton *btn2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *example)
    {
        if (example->objectName().isEmpty())
            example->setObjectName(QString::fromUtf8("example"));
        example->resize(516, 503);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(example->sizePolicy().hasHeightForWidth());
        example->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("bitmap.png"), QSize(), QIcon::Normal, QIcon::Off);
        example->setWindowIcon(icon);
        example->setIconSize(QSize(128, 128));
        centralWidget = new QWidget(example);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn = new QPushButton(centralWidget);
        btn->setObjectName(QString::fromUtf8("btn"));
        btn->setGeometry(QRect(160, 190, 211, 91));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        btn->setFont(font);
        btn->setCursor(QCursor(Qt::PointingHandCursor));
        enter = new QLineEdit(centralWidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(120, 110, 291, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        enter->setFont(font1);
        enter->setAlignment(Qt::AlignCenter);
        display = new QLabel(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 50, 501, 61));
        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(160, 290, 211, 91));
        btn2->setFont(font);
        btn2->setCursor(QCursor(Qt::PointingHandCursor));
        example->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(example);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 516, 31));
        example->setMenuBar(menuBar);
        statusBar = new QStatusBar(example);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        example->setStatusBar(statusBar);

        retranslateUi(example);

        QMetaObject::connectSlotsByName(example);
    } // setupUi

    void retranslateUi(QMainWindow *example)
    {
        example->setWindowTitle(QCoreApplication::translate("example", "Logarithm", nullptr));
        btn->setText(QCoreApplication::translate("example", "Log", nullptr));
        enter->setText(QString());
        display->setText(QCoreApplication::translate("example", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600;\">ANSWER</span></p></body></html>", nullptr));
        btn2->setText(QCoreApplication::translate("example", "Antilog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class example: public Ui_example {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE_H
