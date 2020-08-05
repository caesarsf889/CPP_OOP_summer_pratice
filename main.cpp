#include <iostream>
#include "laptop.h "
//practice data field encapsulation

using std:: cout ;
using std:: cin ;
using std:: endl ;

int main() {

    Laptop dell ;
    Laptop sam_sung(6.9) ;
    Laptop msi_gf75(7.5)  ;

    cout<< "the size of the laptop  " << dell.get_size() << "the price is " << dell.get_price() <<endl ;
    cout<< "the size of msi is " << msi_gf75.get_size() << "the price of msi_gf75 is " << msi_gf75.get_price()  <<endl ;

    sam_sung.set_price(6900) ;
    cout<< "sam_sung size is : " <<sam_sung.get_size() <<"the sam_sung price is change into : "<<sam_sung.get_price()<<endl ;



    system("pause") ;


    return 0;
}
