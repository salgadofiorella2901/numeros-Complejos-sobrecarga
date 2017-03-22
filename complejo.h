/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   complejo.h
 * Author: LENOVO
 *
 * Created on March 20, 2017, 9:10 AM
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H
#include"parOrdenado.h"

class complejo {
public:
    complejo();
    complejo(parOrdenado&);
    complejo(const complejo &com);//constructor de copia
    string toString();
    virtual ~complejo();//un numero complejo es solo un par ordenado!
    parOrdenado parOr;
    void operator=(const complejo &ob);
};

//fuera de la clase
/**
 tanto los metodos como los operadores, deben retornar el tipo de dato de la clase
 * y los parametros tambien deben ser de la misma clase
 */
complejo restar(complejo&, complejo&);
complejo division(complejo&, complejo&);
complejo igualdad(complejo&, complejo&);
complejo suma(complejo&, complejo&);

complejo operator+(complejo&,complejo&);


#endif /* COMPLEJO_H */

