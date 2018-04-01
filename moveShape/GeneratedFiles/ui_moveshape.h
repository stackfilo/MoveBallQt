/********************************************************************************
** Form generated from reading UI file 'moveshape.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVESHAPE_H
#define UI_MOVESHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moveShapeClass
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *chosenButton;
    QPushButton *startButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *decelerateButton;
    QPushButton *accelerateButton;

    void setupUi(QWidget *moveShapeClass)
    {
        if (moveShapeClass->objectName().isEmpty())
            moveShapeClass->setObjectName(QStringLiteral("moveShapeClass"));
        moveShapeClass->resize(906, 517);
        horizontalLayoutWidget = new QWidget(moveShapeClass);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 460, 851, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chosenButton = new QComboBox(horizontalLayoutWidget);
        chosenButton->setObjectName(QStringLiteral("chosenButton"));

        horizontalLayout->addWidget(chosenButton);

        startButton = new QPushButton(horizontalLayoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout->addWidget(startButton);

        pauseButton = new QPushButton(horizontalLayoutWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        horizontalLayout->addWidget(pauseButton);

        stopButton = new QPushButton(horizontalLayoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);

        decelerateButton = new QPushButton(horizontalLayoutWidget);
        decelerateButton->setObjectName(QStringLiteral("decelerateButton"));

        horizontalLayout->addWidget(decelerateButton);

        accelerateButton = new QPushButton(horizontalLayoutWidget);
        accelerateButton->setObjectName(QStringLiteral("accelerateButton"));

        horizontalLayout->addWidget(accelerateButton);


        retranslateUi(moveShapeClass);

        QMetaObject::connectSlotsByName(moveShapeClass);
    } // setupUi

    void retranslateUi(QWidget *moveShapeClass)
    {
        moveShapeClass->setWindowTitle(QApplication::translate("moveShapeClass", "moveShape", 0));
        chosenButton->clear();
        chosenButton->insertItems(0, QStringList()
         << QApplication::translate("moveShapeClass", "ball", 0)
         << QApplication::translate("moveShapeClass", "triangle", 0)
         << QApplication::translate("moveShapeClass", "rectangle", 0)
        );
        startButton->setText(QApplication::translate("moveShapeClass", "start", 0));
        pauseButton->setText(QApplication::translate("moveShapeClass", "pause", 0));
        stopButton->setText(QApplication::translate("moveShapeClass", "stop", 0));
        decelerateButton->setText(QApplication::translate("moveShapeClass", "decelerate", 0));
        accelerateButton->setText(QApplication::translate("moveShapeClass", "accelerate", 0));
    } // retranslateUi

};

namespace Ui {
    class moveShapeClass: public Ui_moveShapeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVESHAPE_H
