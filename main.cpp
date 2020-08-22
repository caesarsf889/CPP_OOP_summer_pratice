#include <iostream>
#include "My_rational.h"
#include <string>

using std::endl ;
using std::cout ;




int main() {

    My_rational qwe(2,3) ;
    My_rational qsx(6,9) ;

    cout<<((qwe < qsx) ? "true" : "false") <<endl ;
    cout<<((qwe >qsx) ?  "true" :"false") <<endl ;
    cout<<((qwe != qsx) ? "true": "false") <<endl ;


    cout<< qwe+qsx <<endl ;
    cout<<qwe - qwe <<endl  ;
    cout<<qwe *qsx <<endl ;

    My_rational txt(1,2) ;
    txt += qwe ;
    cout<<txt <<endl ;

    txt[0] = 3 ;
    cout<<txt <<endl ;

    txt = qwe++ ;
    cout<<txt <<endl ;

    cout<<(69+txt) <<endl ;



    return 0;
}
