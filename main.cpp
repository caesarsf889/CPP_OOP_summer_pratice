#include <iostream>
#include "Date.h"
#include "Request_date.h"

using std::cout ;
using std::string ;
using std::endl ;


void friend_date(){

    Date now_date(1450,169,5) ;
    cout<< now_date.day <<endl ;
    cout<<now_date.year <<endl ;
    cout<<now_date.month <<endl ;

}




int main() {

    Request_date::request_date() ;

    friend_date() ;



    return 0;
}
