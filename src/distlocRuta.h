//
// Created by alfonso on 14/09/21.
//

#ifndef DISTLOCRUTACUDA_DISTLOCRUTA_H
#define DISTLOCRUTACUDA_DISTLOCRUTA_H

#include <string>
#include <iostream>
#include <cmath>


#define MAX_DIST 2000000.00
#define MAX_LONG 512
#define SEP ","

#ifndef SND
#define SND 10
#endif


struct Localidad {
    double x, y, z;
    long id_loc;
    long id_nodo;
    double dist_nodo;
    long index_nodo;
};

typedef struct Localidad *PLocalidad;


struct Recurso {
    double x, y, z;
    long id_rec;
    long id_nodo;
    double dist_nodo;
    long index_nodo;
};

typedef struct Recurso *PRecurso;


struct Nodo {
    double x, y, z;
    long id_nodo;

    long aid_nodos[SND];
    long aindex_nodos[SND];
    double adist[SND];

    long id_rec;
    double dist_rec;

    int nsn;
};

typedef struct Nodo *PNodo;


struct Segmento {
    long id_nodo0;
    long id_nodo1;
    double dist;
};

typedef struct Segmento *PSegmento;


struct ResLoc {
    long id_loc;
    long id_nodo;
    long id_rec;
    double dist;
};

typedef struct ResLoc *PResLoc;


struct ResRec {
    long id_rec;
    double dist_rec;
    double delta;
};

typedef struct ResRec *PResRec;


#endif //DISTLOCRUTACUDA_DISTLOCRUTA_H
