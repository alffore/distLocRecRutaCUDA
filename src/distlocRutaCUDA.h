//
// Created by alfonso on 14/09/21.
//

#ifndef DISTLOCRUTACUDA_DISTLOCRUTACUDA_H
#define DISTLOCRUTACUDA_DISTLOCRUTACUDA_H

#include "distlocRuta.h"

#define SND 10


struct DResu{
    long index;
    double dist;
};
typedef struct DResu* PDResu;

struct DLocalidad{
    double x,y,z;
};
typedef struct DLocalidad* PDLocalidad;

struct DRecurso{
    double x,y,z;
};
typedef struct DRecurso* PDRecurso;

struct DNodo{
    double x,y,z;
};
typedef struct DNodo* PDNodo;

struct DRelNodo{
    long aid_nodos[SND];
    double adist[SND];
    int nsn;
};

typedef struct DRelNodo* PDRelNodo;


struct NodoRed{
    long id_nodo;
    
    int nsn;
    
    long aid_nodos[SND];
   // long aindex_nodos[SND];
    double adist[SND];

    long id_rec;
    double dist_rec;    
};

typedef struct NodoRed* PNodoRed;

struct SubNodo{
    long aindex_nodos[SND];
    int nsn;
};
typedef struct SubNodo* PSubNodo;


#endif //DISTLOCRUTACUDA_DISTLOCRUTACUDA_H
