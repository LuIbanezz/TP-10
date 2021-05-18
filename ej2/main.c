/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lucia
 *
 * Created on 18 de mayo de 2021, 13:16
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZEL(v) (sizeof((*v)))
#define NUMEL(v) (sizeof(v)/SIZEL(v))

int ascendente (const void *pa, const void *pb);
void print_array (char arr[][7],int size,const char* type);
/*
 * 
 */
int main(int argc, char** argv) {
    char arr[][7] = {"hola","abc","quetal"};
    
    qsort (arr, NUMEL(arr), SIZEL(arr), ascendente);//ascendente es llamada a callback
    print_array(arr, NUMEL(arr), "Ascending Order");
    return (EXIT_SUCCESS);
}

int ascendente (const void *pa, const void *pb)
{
    return (*(int*)pa - *(int*)pb);
    
}

void print_array (char arr[][7], int size, const char* type)
{
    int i;
    int j;

    printf("Arr:(%s)", type);

    for (i=0;i<size;i++)
        for (j=0;j<7;j++)
        {         
        
            {void qsort (void *base, size_t nume, size_t size, int (*compar)(const void*, const void *));
             printf(" %c",arr[i][j]);
            }
        }
        printf("\n");
}
