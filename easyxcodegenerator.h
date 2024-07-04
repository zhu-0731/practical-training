#ifndef EASYXCODEGENERATOR_H
#define EASYXCODEGENERATOR_H



#include <QString>
#include <QPointF>
#include <vector>
#include <QTextStream>
#include <QGraphicsScene>
#include "CustomGraphicsScene.h"
#include "CustomCircleItem.h"


using std::vector;


class CircleItem
{
public:
    QPointF center; // 圆心
    qreal radius; // 半径
    CircleItem(QPointF c,qreal r):center(c),radius(r){}
};



class EasyXCodeGenerator
{
public:
    struct TextInfo {
        QString text;
        QPoint position;
    };
    void clear();
    void addCircle(QPointF c,qreal r);
    void addText(const QString &text, const QPointF &position);
    void generateCode(const QString &filename,const CustomGraphicsScene *scene);
    QString getCode() const;  // 新增的方法

private:
    QString code;  // 将code定义为类的私有成员变量
};

#endif // EASYXCODEGENERATOR_H
