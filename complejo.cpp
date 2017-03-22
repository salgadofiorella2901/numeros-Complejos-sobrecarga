/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   complejo.cpp
 * Author: LENOVO
 * 
 * Created on March 20, 2017, 9:10 AM
 */

#include "complejo.h"

complejo::complejo(){}

complejo::complejo(parOrdenado& x) {
    this->parOr=x;
}

 complejo::complejo(const complejo &com){//constructor de copia
     this->parOr = com.parOr;     
 }
 
 string complejo::toString(){
     return parOr.toString();
 }

complejo::~complejo() {
    
}

complejo suma(complejo& x, complejo& y){
      complejo comp = x; //se supone que esta copiado!
      comp.parOr.a.a = comp.parOr.a.a + y.parOr.a.a; //aplicar ley de demeter, haciendo suma con un solo parametro *pendiente, dejar asi solo para prueba
      comp.parOr.b.a = comp.parOr.b.a + y.parOr.b.a;
      
      return comp;
  }
  
  complejo restar(complejo& x, complejo& y){
  //implementar
  }
  
  complejo multiplicar(complejo& x, complejo& y){
  //implementar
  }
  
  complejo division(complejo& x, complejo& y){
  //implementar
  }
  
  complejo igualdad(complejo& x, complejo& y){
  //implementar
  }

complejo operator+(complejo& x,complejo& y){
    return suma(x,y);
}

void complejo::operator=(const complejo &com)
{
     this->parOr = com.parOr;
}
