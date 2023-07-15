#ifndef TURNIRTABLEOUTPUT_H
#define TURNIRTABLEOUTPUT_H

#include <QDialog>

namespace Ui {
class TurnirTableOutPut;
}

class TurnirTableOutPut : public QDialog
{
    Q_OBJECT

public:
    explicit TurnirTableOutPut(QDialog *parent = nullptr);
    ~TurnirTableOutPut();

private:
    Ui::TurnirTableOutPut *ui;
};

#endif // TURNIRTABLEOUTPUT_H
