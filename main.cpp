/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: LENOVO
 *
 * Created on March 20, 2017, 8:32 AM
 */

#include <cstdlib>
#include "complejo.h"
#include "parOrdenado.h"
#include "entero.h"
using namespace std;

int main(){
    entero e1(2);
    entero e2(5);
    entero e3(4);
    entero e4(1);
    /***/
    parOrdenado p1(e1,e2); // ( 2,5 )
    parOrdenado p2(e3,e4);//  ( 4,1 )
    /***/
    complejo c1(p1);
    complejo c2(p2);
    /***/
    
    complejo c3 = c1 + c2 ;//aca se guarda la suma
    cout<<c3.toString()<<endl;
    return 0;
}

