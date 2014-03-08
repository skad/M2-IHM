#ifndef WINDOWSLAVE_H
#define WINDOWSLAVE_H
#include"convertisseur.h"
#include<QLineEdit>
#include<QPushButton>
#include"grillephotos.h"
#include<QWidget>
#include<QLabel>
#include<QDebug>
#include<QFileDialog>
#include<QColorDialog>
#include<QMessageBox>
#include<QRadioButton>
#include<QComboBox>
#include<QLineEdit>
#include <QPoint>
#include <QVector>
#include "labeldessinable.h"
#include"dialogdessinformeextra.h"
#include"labelclicable.h"
#define PI 3.141592653

class WindowSlave
{
public:
    WindowSlave();
    static void ConvertAndMAJLineEdit(int index, int &oldindex, QLineEdit *lineedit);
    static void AjouterImage(GrillePhotos* g, QPushButton* moins, QPushButton *clear, QLabel* l);
    static void RetirerImage(GrillePhotos* g, QPushButton* moins, QPushButton *clear, QLabel* l);
    static void ViderGrillePhoto(GrillePhotos *g, QPushButton *moins, QPushButton *clear, QLabel* l);
    static void EffacerListePhoto(GrillePhotos *g, QPushButton *moins, QPushButton *clear, QLabel *l);
    static void SetTextBouton(bool value, QPushButton *bouton, const QString &section);
    static void GriseOuDegriseGroupe(bool &mode, QPushButton *boutonMode, const QString &section, QWidget * *groupe, int nb);
    static QColor ChangerCouleurArrierePlan(LabelClicable* label);
    static void ChargerPhotoArrierePlan(LabelClicable* label,QString& lienPhoto, QLineEdit* leWidth = 0, QLineEdit* leHeight = 0);
    static int DessinerForme(LabelDessinable*&);
    static bool EstUneImage(QString& fichier);
    static void RemettreValeursParDefaut(QRadioButton* radioRectangle,QComboBox *comboTaillecollage,
                                         QLineEdit* largeur,QLineEdit* hauteur,QComboBox* comboTaillePhoto,
                                         QLineEdit* taillePhoto,QRadioButton* tout,QLineEdit* nbPhoto,
                                         QSlider* distance,QRadioButton* arrierePlan,LabelClicable* couleur, LabelDessinable* preview);
};

#endif // WINDOWSLAVE_H
