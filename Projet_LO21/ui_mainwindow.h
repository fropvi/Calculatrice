/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jun 10 17:40:09 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionClavier;
    QAction *actionAnnuler;
    QAction *actionRetablir;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_DUP;
    QPushButton *pushButton_SUM;
    QPushButton *pushButton_DROP;
    QPushButton *pushButton_CLEAR;
    QPushButton *pushButton_SWAP;
    QPushButton *pushButton_MEAN;
    QSpinBox *spinBox;
    QLabel *label_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QLabel *label;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_Enter;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_DIV;
    QPushButton *pushButton_EVAL;
    QPushButton *pushButton_Mul;
    QPushButton *pushButton_Moins;
    QPushButton *pushButton_Virgule;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_SIGN;
    QPushButton *pushButton_MOD;
    QPushButton *pushButton_POW;
    QPushButton *pushButton_FACT;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_COSH;
    QPushButton *pushButton_SIN;
    QPushButton *pushButton_SINH;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_TANH;
    QPushButton *pushButton_Annuler;
    QPushButton *pushButton_LN;
    QPushButton *pushButton_INV;
    QPushButton *pushButton_SQRT;
    QPushButton *pushButton_CUBE;
    QPushButton *pushButton_Retablir;
    QPushButton *pushButton_SQR;
    QPushButton *pushButton_LOG;
    QMenuBar *menuBar;
    QMenu *menuCalculatrice;
    QMenu *menuMode;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(929, 359);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAnimated(true);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionClavier = new QAction(MainWindow);
        actionClavier->setObjectName(QString::fromUtf8("actionClavier"));
        actionClavier->setCheckable(true);
        actionClavier->setChecked(true);
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QString::fromUtf8("actionAnnuler"));
        actionRetablir = new QAction(MainWindow);
        actionRetablir->setObjectName(QString::fromUtf8("actionRetablir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setAutoFillBackground(false);
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_DUP = new QPushButton(centralWidget);
        pushButton_DUP->setObjectName(QString::fromUtf8("pushButton_DUP"));

        gridLayout_6->addWidget(pushButton_DUP, 0, 0, 1, 1);

        pushButton_SUM = new QPushButton(centralWidget);
        pushButton_SUM->setObjectName(QString::fromUtf8("pushButton_SUM"));

        gridLayout_6->addWidget(pushButton_SUM, 1, 0, 1, 1);

        pushButton_DROP = new QPushButton(centralWidget);
        pushButton_DROP->setObjectName(QString::fromUtf8("pushButton_DROP"));

        gridLayout_6->addWidget(pushButton_DROP, 2, 0, 1, 1);

        pushButton_CLEAR = new QPushButton(centralWidget);
        pushButton_CLEAR->setObjectName(QString::fromUtf8("pushButton_CLEAR"));

        gridLayout_6->addWidget(pushButton_CLEAR, 3, 0, 1, 1);

        pushButton_SWAP = new QPushButton(centralWidget);
        pushButton_SWAP->setObjectName(QString::fromUtf8("pushButton_SWAP"));

        gridLayout_6->addWidget(pushButton_SWAP, 4, 0, 1, 1);

        pushButton_MEAN = new QPushButton(centralWidget);
        pushButton_MEAN->setObjectName(QString::fromUtf8("pushButton_MEAN"));

        gridLayout_6->addWidget(pushButton_MEAN, 5, 0, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(20);
        spinBox->setValue(5);

        gridLayout_6->addWidget(spinBox, 7, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 6, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMouseTracking(false);

        horizontalLayout->addWidget(listWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setPointSize(24);
        textEdit->setFont(font);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setReadOnly(true);

        verticalLayout_5->addWidget(textEdit);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setMouseTracking(false);

        gridLayout_2->addWidget(checkBox, 1, 0, 1, 1);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout_2->addWidget(radioButton, 1, 1, 1, 1);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 1, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_4->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_4->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_4->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_Plus = new QPushButton(centralWidget);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));

        gridLayout_4->addWidget(pushButton_Plus, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout_4->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_Enter = new QPushButton(centralWidget);
        pushButton_Enter->setObjectName(QString::fromUtf8("pushButton_Enter"));

        gridLayout_4->addWidget(pushButton_Enter, 4, 0, 1, 2);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_4->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout_4->addWidget(pushButton_0, 3, 0, 1, 2);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_4->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_DIV = new QPushButton(centralWidget);
        pushButton_DIV->setObjectName(QString::fromUtf8("pushButton_DIV"));

        gridLayout_4->addWidget(pushButton_DIV, 3, 3, 1, 1);

        pushButton_EVAL = new QPushButton(centralWidget);
        pushButton_EVAL->setObjectName(QString::fromUtf8("pushButton_EVAL"));

        gridLayout_4->addWidget(pushButton_EVAL, 4, 2, 1, 2);

        pushButton_Mul = new QPushButton(centralWidget);
        pushButton_Mul->setObjectName(QString::fromUtf8("pushButton_Mul"));

        gridLayout_4->addWidget(pushButton_Mul, 2, 3, 1, 1);

        pushButton_Moins = new QPushButton(centralWidget);
        pushButton_Moins->setObjectName(QString::fromUtf8("pushButton_Moins"));

        gridLayout_4->addWidget(pushButton_Moins, 1, 3, 1, 1);

        pushButton_Virgule = new QPushButton(centralWidget);
        pushButton_Virgule->setObjectName(QString::fromUtf8("pushButton_Virgule"));

        gridLayout_4->addWidget(pushButton_Virgule, 3, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_SIGN = new QPushButton(centralWidget);
        pushButton_SIGN->setObjectName(QString::fromUtf8("pushButton_SIGN"));

        gridLayout_5->addWidget(pushButton_SIGN, 0, 0, 1, 1);

        pushButton_MOD = new QPushButton(centralWidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));

        gridLayout_5->addWidget(pushButton_MOD, 0, 1, 1, 1);

        pushButton_POW = new QPushButton(centralWidget);
        pushButton_POW->setObjectName(QString::fromUtf8("pushButton_POW"));

        gridLayout_5->addWidget(pushButton_POW, 0, 2, 1, 1);

        pushButton_FACT = new QPushButton(centralWidget);
        pushButton_FACT->setObjectName(QString::fromUtf8("pushButton_FACT"));

        gridLayout_5->addWidget(pushButton_FACT, 0, 3, 1, 1);

        pushButton_COS = new QPushButton(centralWidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        pushButton_COS->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(pushButton_COS, 1, 0, 1, 1);

        pushButton_COSH = new QPushButton(centralWidget);
        pushButton_COSH->setObjectName(QString::fromUtf8("pushButton_COSH"));

        gridLayout_5->addWidget(pushButton_COSH, 1, 1, 1, 1);

        pushButton_SIN = new QPushButton(centralWidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));

        gridLayout_5->addWidget(pushButton_SIN, 2, 0, 1, 1);

        pushButton_SINH = new QPushButton(centralWidget);
        pushButton_SINH->setObjectName(QString::fromUtf8("pushButton_SINH"));

        gridLayout_5->addWidget(pushButton_SINH, 2, 1, 1, 1);

        pushButton_TAN = new QPushButton(centralWidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));

        gridLayout_5->addWidget(pushButton_TAN, 3, 0, 1, 1);

        pushButton_TANH = new QPushButton(centralWidget);
        pushButton_TANH->setObjectName(QString::fromUtf8("pushButton_TANH"));

        gridLayout_5->addWidget(pushButton_TANH, 3, 1, 1, 1);

        pushButton_Annuler = new QPushButton(centralWidget);
        pushButton_Annuler->setObjectName(QString::fromUtf8("pushButton_Annuler"));

        gridLayout_5->addWidget(pushButton_Annuler, 4, 0, 1, 2);

        pushButton_LN = new QPushButton(centralWidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));

        gridLayout_5->addWidget(pushButton_LN, 1, 2, 1, 1);

        pushButton_INV = new QPushButton(centralWidget);
        pushButton_INV->setObjectName(QString::fromUtf8("pushButton_INV"));

        gridLayout_5->addWidget(pushButton_INV, 2, 2, 1, 1);

        pushButton_SQRT = new QPushButton(centralWidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));

        gridLayout_5->addWidget(pushButton_SQRT, 3, 2, 1, 1);

        pushButton_CUBE = new QPushButton(centralWidget);
        pushButton_CUBE->setObjectName(QString::fromUtf8("pushButton_CUBE"));

        gridLayout_5->addWidget(pushButton_CUBE, 3, 3, 1, 1);

        pushButton_Retablir = new QPushButton(centralWidget);
        pushButton_Retablir->setObjectName(QString::fromUtf8("pushButton_Retablir"));
        pushButton_Retablir->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(pushButton_Retablir, 4, 2, 1, 2);

        pushButton_SQR = new QPushButton(centralWidget);
        pushButton_SQR->setObjectName(QString::fromUtf8("pushButton_SQR"));

        gridLayout_5->addWidget(pushButton_SQR, 2, 3, 1, 1);

        pushButton_LOG = new QPushButton(centralWidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));

        gridLayout_5->addWidget(pushButton_LOG, 1, 3, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_5);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 929, 25));
        menuCalculatrice = new QMenu(menuBar);
        menuCalculatrice->setObjectName(QString::fromUtf8("menuCalculatrice"));
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuCalculatrice->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuCalculatrice->addAction(actionAnnuler);
        menuCalculatrice->addAction(actionRetablir);
        menuCalculatrice->addAction(actionQuitter);
        menuMode->addAction(actionClavier);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculatrice", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionClavier->setText(QApplication::translate("MainWindow", "Clavier", 0, QApplication::UnicodeUTF8));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        actionRetablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
        pushButton_DUP->setText(QApplication::translate("MainWindow", "DUP", 0, QApplication::UnicodeUTF8));
        pushButton_SUM->setText(QApplication::translate("MainWindow", "SUM", 0, QApplication::UnicodeUTF8));
        pushButton_DROP->setText(QApplication::translate("MainWindow", "DROP", 0, QApplication::UnicodeUTF8));
        pushButton_CLEAR->setText(QApplication::translate("MainWindow", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton_SWAP->setText(QApplication::translate("MainWindow", "SWAP", 0, QApplication::UnicodeUTF8));
        pushButton_MEAN->setText(QApplication::translate("MainWindow", "MEAN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Taille :", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Entier", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rationnel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "R\303\251el", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "Mode :", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Complexe", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Degr\303\251s", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Radian", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton_Plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_Enter->setText(QApplication::translate("MainWindow", "Enter", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        pushButton_DIV->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_EVAL->setText(QApplication::translate("MainWindow", "EVAL", 0, QApplication::UnicodeUTF8));
        pushButton_Mul->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_Moins->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_Virgule->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        pushButton_SIGN->setText(QApplication::translate("MainWindow", "SIGN", 0, QApplication::UnicodeUTF8));
        pushButton_MOD->setText(QApplication::translate("MainWindow", "MOD", 0, QApplication::UnicodeUTF8));
        pushButton_POW->setText(QApplication::translate("MainWindow", "POW", 0, QApplication::UnicodeUTF8));
        pushButton_FACT->setText(QApplication::translate("MainWindow", "FACT", 0, QApplication::UnicodeUTF8));
        pushButton_COS->setText(QApplication::translate("MainWindow", "COS", 0, QApplication::UnicodeUTF8));
        pushButton_COSH->setText(QApplication::translate("MainWindow", "COSH", 0, QApplication::UnicodeUTF8));
        pushButton_SIN->setText(QApplication::translate("MainWindow", "SIN", 0, QApplication::UnicodeUTF8));
        pushButton_SINH->setText(QApplication::translate("MainWindow", "SINH", 0, QApplication::UnicodeUTF8));
        pushButton_TAN->setText(QApplication::translate("MainWindow", "TAN", 0, QApplication::UnicodeUTF8));
        pushButton_TANH->setText(QApplication::translate("MainWindow", "TANH", 0, QApplication::UnicodeUTF8));
        pushButton_Annuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_LN->setText(QApplication::translate("MainWindow", "LN", 0, QApplication::UnicodeUTF8));
        pushButton_INV->setText(QApplication::translate("MainWindow", "INV", 0, QApplication::UnicodeUTF8));
        pushButton_SQRT->setText(QApplication::translate("MainWindow", "SQRT", 0, QApplication::UnicodeUTF8));
        pushButton_CUBE->setText(QApplication::translate("MainWindow", "CUBE", 0, QApplication::UnicodeUTF8));
        pushButton_Retablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
        pushButton_SQR->setText(QApplication::translate("MainWindow", "SQR", 0, QApplication::UnicodeUTF8));
        pushButton_LOG->setText(QApplication::translate("MainWindow", "LOG", 0, QApplication::UnicodeUTF8));
        menuCalculatrice->setTitle(QApplication::translate("MainWindow", "Calculatrice", 0, QApplication::UnicodeUTF8));
        menuMode->setTitle(QApplication::translate("MainWindow", "Mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
