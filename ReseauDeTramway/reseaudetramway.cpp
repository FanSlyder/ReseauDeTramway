#include "reseaudetramway.h"
#include "ui_reseaudetramway.h"

ReseauDeTramway::ReseauDeTramway(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReseauDeTramway)
{
    ui->setupUi(this);
}

ReseauDeTramway::~ReseauDeTramway()
{
    delete ui;
}
