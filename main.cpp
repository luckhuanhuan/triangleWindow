#include "widget.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QLabel* textLabel = new QLabel;
    textLabel->setAlignment(Qt::AlignCenter);
    textLabel->setText("ArrowWidget");
    Widget w;
    w.setStartPos(70);
    w.setTriangleInfo(30, 30);
    w.setFixedSize(QSize(300, 150));
    w.setCenterWidget(textLabel);
    w.show();
    return a.exec();
}
