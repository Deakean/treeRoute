#ifndef TREELIB_H
#define TREELIB_H
#include <stdlib.h>
#include <iostream>

template <typename T>
class TreeNode
{
    T data ;
    TreeNode *left ;
    TreeNode *right ;

public:
    TreeNode() ;
    TreeNode(const T &inData) ;

    void addNode( const T &inData) ;

    inline T &getData() ;
    inline void setData( const T &inData) ;

    void printNode() ;
    void printLeft() ;

private:
    void addLeft( const T &inData) ;
    void addRight( const T &inData) ;

protected:
    virtual int compare(const T &a,const T &b) ;
    virtual void printData() ;
};

template<typename T>
class Treelib:public TreeNode<T>
{
    int count ;

public:
    Treelib() ;

    void addNode( const T &inData ) ;
    void treePrint() ;
    void printLeft() ;

};

struct Route{
    double len ;

    inline bool operator < ( const Route &o) const { return ( len < o.len) ;}
    inline bool operator == ( const Route &o) const { return ( len == o.len) ;}
    friend std::ostream& operator<<( std::ostream& os, const Route& o) { return os << o.len ; }
};

class TreeRoute:public Treelib<Route>
{
public:
    TreeRoute():Treelib(){}
};
#endif // TREELIB_H

#include "treelib.ipp"
