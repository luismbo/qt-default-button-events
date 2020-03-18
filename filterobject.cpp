#include <QEvent>
#include "filterobject.h"

FilterObject::FilterObject()
{

}

bool FilterObject::eventFilter(QObject *obj, QEvent *event)
{
    fprintf(stderr, "event of type %d for obj %p\n", event->type(), obj);
    return false;
}
