#ifndef RESEAUDETRAMWAY_H
#define RESEAUDETRAMWAY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ReseauDeTramway;
}
QT_END_NAMESPACE

class ReseauDeTramway : public QWidget
{
    Q_OBJECT

public:
    ReseauDeTramway(QWidget *parent = nullptr);
    ~ReseauDeTramway();

private:
    Ui::ReseauDeTramway *ui;
};
#endif // RESEAUDETRAMWAY_H
