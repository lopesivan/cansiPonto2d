//
// Created by ivan on 26/10/17.
//

#include <stdlib.h>
#include <stdio.h>

#include "Ponto2d.h"

struct Ponto2d_t
{
    float x;
    float y;

};

Ponto2d ponto_novo (float x, float y)
{

    Ponto2d ponto = malloc (sizeof *ponto);

    if (ponto == NULL)
    {
        printf ("%s:In function `%s':\n" "%s:%d: %s\n", \
                __FILE__, __FUNCTION__, __FILE__, __LINE__, \
                "could not allocate the Array pointer"
               );

        exit (EXIT_FAILURE);
    }

    ponto->x = x;
    ponto->y = y;

    return ponto;

}


void ponto_remove (Ponto2d ponto)
{
    free (ponto);

    return;
}