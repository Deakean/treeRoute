#include <iostream>
#include <math.h>
#include <list>
#include "treelib.h"

using namespace std;

typedef int Int ;

int main()
{
    TreeRoute routes ;
    double len = 1000. ;
    int i = 0 ;

    while( len < 2000.){
        Route route ;

        route.len = fabs(len) ;
        routes.addNode ( route);

        len = (-1)*len + 300*(++i) ;
    }
    std::cout << "all tree" << std::endl ;
    routes.printNode ();
    std::cout << "all shortest" << std::endl ;
    routes.printLeft ();
    return 0;
}

