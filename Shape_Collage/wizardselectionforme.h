#ifndef WIZARDSELECTIONFORME_H
#define WIZARDSELECTIONFORME_H
#include<QWizardPage>
#include<QLabel>
#include<QRadioButton>
#include<QLayout>
#include"labelclicable.h"
#include"windowslave.h"

class WizardSelectionForme: public QWizardPage
{
    Q_OBJECT
public:
    WizardSelectionForme(QWidget *parent = 0);
    ~WizardSelectionForme();
private:
    QRadioButton *rectangle;
    QRadioButton *cercle;
    QRadioButton *extra;
    LabelClicable *labelExtra;
private slots:
    void DessinerForme();
    void DessinerFormeSiVide();
};

#endif // WIZARDSELECTIONFORME_H