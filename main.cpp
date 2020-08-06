#include <iostream>
#include "my_point.h"

using std:: cout;
using std:: cin ;
using std:: endl ;
int main() {

    my_point  ball ;
    my_point cube(10,30.5) ;

    cout<< "the distance between two point : " <<endl ;
    cout<< cube.get_distance(ball) <<endl ;

    system("pause") ;



    return 0;
}
