#ifndef FILTEROBJECT_H
#define FILTEROBJECT_H

#include <QObject>

class FilterObject : public QObject
{
    Q_OBJECT
public:
    FilterObject();
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
};

#endif // FILTEROBJECT_H
