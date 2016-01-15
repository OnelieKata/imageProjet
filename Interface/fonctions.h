#ifndef FONCTIONS_H
#define FONCTIONS_H
#include <QImage>
#include <QPoint>
#include <cmath>
#include "Filtre.h"

QImage decoupage(QImage const& image,QPoint const& debut, QPoint const& fin);
QImage negative(QImage const& image);
QImage niveauDeGris(QImage const& image);
QRgb pixelRVBaGris(QRgb const& pixel);
QImage redimensionner1(QImage const& image, int largeur,int hauteur);
QImage redimensionner2(QImage const& image, int largeur,int hauteur);
QImage convolution(QImage const& image, Filtre filtre);
QImage max(QImage &I1, QImage &I2);
QImage sobel(QImage const& image);
QImage prewitt(QImage const& image);
QImage fusionBasic(QImage const& arrierePlan,QImage const& image);



#endif // FONCTIONS_H
