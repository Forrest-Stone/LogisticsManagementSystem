#include "sale_widget.h"
#include "Create_Sale_DataBase.h"
#include <QApplication>
#include <QTextCodec>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForCStrings((QTextCodec::codecForName("utf-8")));
    if(!Create_Sale_DataBase())qDebug()<<"false";
    //Sale_Widget::Sale_State_Out("18070410365311111111111");
    //Sale_Widget::Sale_State_Change("18070410365311111111111",QString("到达白塔"));
    //Sale_Widget::Sale_State_Change("18070410365311111111111",QString("签收"));

    Sale_Widget w;  
    w.show();

    return a.exec();
}
