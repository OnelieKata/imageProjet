#ifndef DIALOG_H
#define DIALOG_H
#include <QtWidgets>

class DialogFiltre: public QDialog
{
    Q_OBJECT
public:
    DialogFiltre();

public slots :
    void dialogFinish(int exec);

signals :
    void signalApplicationFiltre(int type,int degre);
private:
    QComboBox *listeFiltres ;
    QSpinBox *degreFiltre ;



};

#endif // DIALOG_H
