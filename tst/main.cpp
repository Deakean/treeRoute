#include <iostream>

#include "bstree.h"

using namespace std;

int main()
{
    TreeRoute routes ;

    routes.insert( Route( 30 )) ;
    routes.insert( Route( 10 )) ;
    routes.insert( Route( 70 )) ;
    routes.insert( Route( 30 )) ;
    routes.insert( Route( 15 )) ;
    routes.insert( Route( 90 )) ;
    return 0;
}

