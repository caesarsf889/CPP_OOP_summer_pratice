#include <iostream>
#include "BMI.h"

using std:: cout ;
using std:: cin ;
using std:: endl ;



int main() {

    BMI bmi_1("jackson wang", 18, 145,70) ;
    cout<< "the BMI for " <<bmi_1.get_name() << "is " <<bmi_1.get_bmi() <<"   " <<bmi_1.get_status() <<endl ;


    BMI bmi_2("susan king", 215, 70) ;
    cout<< "the bmi for " <<bmi_2.get_name() << "is " << bmi_2.get_bmi() <<"  " << bmi_2.get_status() <<endl ;





    system("pause") ;
    return 0;
}
