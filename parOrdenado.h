/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parOrdenado.h
 * Author: LENOVO
 *
 * Created on March 20, 2017, 8:59 AM
 */

#ifndef PARORDENADO_H
#define PARORDENADO_H
#include "entero.h"
#include <sstream>
#include <iostream>
using namespace std;

class parOrdenado {
public:
    parOrdenado();
    parOrdenado(entero, entero);
    parOrdenado(const parOrdenado& pOr);//constructor de copia
    virtual ~parOrdenado();
    /*atributos */
    entero a;
    entero b;
    /***/
    virtual string toString();
private:

};

#endif /* PARORDENADO_H */

