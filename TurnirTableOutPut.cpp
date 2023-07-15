#include "TurnirTableOutPut.h"
#include "ui_TurnirTableOutPut.h"

TurnirTableOutPut::TurnirTableOutPut(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::TurnirTableOutPut)
{
    ui->setupUi(this);

//    setWindowTitle()
}

TurnirTableOutPut::~TurnirTableOutPut()
{
    delete ui;
}
