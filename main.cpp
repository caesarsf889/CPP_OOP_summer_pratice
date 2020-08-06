#include <iostream>
#include "laptop.h"
using std:: cout ;
using std:: cin ;
using std:: endl ;

// pass object  by value

void print_laptop_by_value(laptop my_laptop ){

    cout<< "the size of the laptop is " << my_laptop.get_size() <<endl ;
}

// pass object by reference
void print_laptop_by_refer(laptop& my_laptop ){

    cout<< my_laptop.get_size() <<endl ;

}



int main() {

        laptop msi_gf75(30) ;
        print_laptop_by_value(msi_gf75) ;
        print_laptop_by_refer(msi_gf75) ;




        system("pause") ;

    return 0;
}
