#ifndef DIALOGDESSINFORMEEXTRA_H
#define DIALOGDESSINFORMEEXTRA_H

#include <QDialog>
#include"labeldessinable.h"
#include <windowslave.h>
#include <QPolygon>

namespace Ui {
class DialogDessinFormeExtra;
}

class DialogDessinFormeExtra : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogDessinFormeExtra(QWidget *parent = 0);
    ~DialogDessinFormeExtra();
    int getNbVertex();
private:
    Ui::DialogDessinFormeExtra *ui;
    LabelDessinable  *label;
    int defaultSliderValue;

private slots:
    void on_SliderTaillePainceau_valueChanged(int value);
    void on_BoutonReinitialiser_clicked();
};

#endif // DIALOGDESSINFORMEEXTRA_H
