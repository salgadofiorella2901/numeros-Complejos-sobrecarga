/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parOrdenado.cpp
 * Author: LENOVO
 * 
 * Created on March 20, 2017, 8:59 AM
 */

#include "parOrdenado.h"

parOrdenado::parOrdenado(){}

parOrdenado::parOrdenado(entero x,entero y) {
    this->a=x;
    this->b=y;
}

parOrdenado::parOrdenado(const parOrdenado &pOr){//constructor de copia
    this->a = pOr.a;
    this->b = pOr.b;  
}

string parOrdenado::toString(){
    stringstream s;
    s<<"( "<<a.a<<" , "<<b.a<<" )"<<endl;// .a llama al int de entero --escogimos malos nombres para las variables jaja
    return s.str();
}

parOrdenado::~parOrdenado() {
}

