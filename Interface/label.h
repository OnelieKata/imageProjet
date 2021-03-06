#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <QImage>
#include <QRubberBand>
#include <QMouseEvent>
#include <QMessageBox>
#include <fonctions.h>
#include <iostream>
#include <QPixmap>
#include <QColor>

class Label : public QLabel
{
    Q_OBJECT

    public:
        Label();
        QPoint getOrigin();
        QPoint getPoint();
        QRubberBand* getRubberBand();

    protected:
        void mousePressEvent(QMouseEvent *event);
        void mouseDoubleClickEvent(QMouseEvent *event);
        void mouseMoveEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
        //void resizeEvent(QResizeEvent *event);



    private:
        QRubberBand *rubberBand;
        QPoint origin;
        QPoint point;

    signals:
        void signalAfficherRGB(int rouge,int vert, int bleu);
        void signalAfficherYUV(QRgb);
      //  void signalRedimensionnement(QImage *image);

};

#endif // LABEL_H
