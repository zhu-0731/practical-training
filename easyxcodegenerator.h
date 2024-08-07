#ifndef EASYXCODEGENERATOR_H
#define EASYXCODEGENERATOR_H

#include <QString>
#include <QPointF>
#include <vector>

class EasyXCodeGenerator
{
public:

    struct TextInfo {
        QString text;
        QPoint position;
    };
    void clear();
    void addCircle(const QPointF &position);
    void addText(const QString &text, const QPointF &position);
    void generateCode(const QString &filename);
    QString getCode() const;  // 新增的方法

private:

};

#endif // EASYXCODEGENERATOR_H
