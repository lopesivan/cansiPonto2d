//
// Created by ivan on 26/10/17.
//

#ifndef CANSIPONTO2D_PONTO2D_H
#define CANSIPONTO2D_PONTO2D_H

typedef struct Ponto2d_t *Ponto2d;

Ponto2d ponto_novo (float x, float y);

void ponto_remove (Ponto2d ponto);

Ponto2d ponto_soma (Ponto2d ponto1,Ponto2d ponto2);

#endif //CANSIPONTO2D_PONTO2D_H
