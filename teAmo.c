//
//  main.c
//  te amo
//
//  Created by Caleb on 04/02/20.
//  Copyright © 2020 Caleb. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // al rato lo comento bien explicaditopp jeje :b
    char nombre[100];
    int edad;
    printf("Como te llamas????¿!\n");
    fgets(nombre, 100, stdin);
    printf("Cuantos años tiene usted ehhh¿????!\n");
    scanf("%d", &edad);
    printf("Bienvenida %s tienes %d :00 debes de saber q estas muy wonitapp¡!!\n", nombre, edad);
    return 0;
}
