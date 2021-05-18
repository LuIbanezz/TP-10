/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lucia
 *
 * Created on 18 de mayo de 2021, 12:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

#define SIZEL(v) (sizeof((*v)))
#define NUMEL(v) (sizeof(v)/SIZEL(v))

int ascendente (const void *pa, const void *pb);
void print_array (int arr[],int size,const char* type);
int main(int argc, char** argv) {

    int arr[] = {10,9,8,1,2,3};
    
    qsort (arr, NUMEL(arr), SIZEL(arr), ascendente);//ascendente es llamada a callback
    print_array(arr, NUMEL(arr), "Ascending Order");
    
    return (EXIT_SUCCESS);
}

//callback
int ascendente (const void *pa, const void *pb)
{
    return (*(int*)pa - *(int*)pb);
    
}

void print_array (int arr[], int size, const char* type)
{
    int i;

    printf("Arr:(%s)", type);

    for (i=0;i<size;i++)
    {void qsort (void *base, size_t nume, size_t size, int (*compar)(const void*, const void *));
        printf(" %d",arr[i]);
    }
    printf("\n");
}