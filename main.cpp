#include <iostream>
#include "laptop.h"
using std:: cout ;
using std:: cin ;
using std:: endl ;



int object_sum(laptop msi_laptop[], const int array_size){

    int sum = 0 ;
    for(int i=0;i <array_size;i++){

        sum+=msi_laptop[i].get_size() ;
    }

    return sum ;
}


void print_msi(laptop msi_laptop[], const int array_size){

    for(int i =0;i<array_size;i++){

        cout<< msi_laptop[i].get_size() <<endl ;

    }

    cout<< object_sum(msi_laptop, array_size) <<endl  ;



}

int main() {

    const int array_size = 10 ;

    laptop msi_gf[array_size] ;

    for(int i =0;i<array_size;i++){
        msi_gf[i].set_size(i+1) ;
    }

    print_msi( msi_gf, array_size ) ;



    system("pause") ;
    return 0;
}







