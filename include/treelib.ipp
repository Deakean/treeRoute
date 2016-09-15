#ifndef TREELIB_IPP
#define TREELIB_IPP
#include <stdlib.h>
#include <iostream>
#include "treelib.h"

template<typename T>
Treelib<T>::Treelib():TreeNode<T>(),count(0){}

template<typename T>
void Treelib<T>::addNode( const T &inData ){
    if( count == 0)
        TreeNode<T>::setData( inData) ;
    else
        TreeNode<T>::addNode ( inData) ;
    ++count ;
}

template<typename T>
void Treelib<T>::treePrint(){
    this->printNode ();
}

template<typename T>
void Treelib<T>::printLeft(){
    TreeNode<T>::printLeft ();
}

template <typename T>
TreeNode<T>::TreeNode(){
        left = NULL ;
        right = NULL ;
    }

template <typename T>
TreeNode<T>::TreeNode(const T &inData){
        data = inData ;
        left = NULL ;
        right = NULL ;
    }

template <typename T>
void TreeNode<T>::addNode( const T &inData){
        if( compare( this->getData (), inData ) == -1)
            addLeft( inData ) ;
        else
            addRight( inData ) ;
    }

template <typename T>
inline T &TreeNode<T>::getData(){
            return data ;
    }

template <typename T>
inline void TreeNode<T>::setData( const T &inData){
            data = inData;
    }

template <typename T>
void TreeNode<T>::printNode(){
        if( left != NULL)
            left->printNode () ;

        if( right != NULL)
            right->printNode () ;

        std::cout << this->getData () << std::endl ;
}

template <typename T>
void TreeNode<T>::printLeft(){
    if( left != NULL)
        left->printLeft () ;
        std::cout << this->getData () << std::endl ;
}

template <typename T>
void TreeNode<T>::addLeft( const T &inData)
{
    if(left == NULL)
        left = new TreeNode<T> (inData) ;
    else
        left->addNode ( inData );
}

template <typename T>
void TreeNode<T>::addRight( const T &inData)
{
    if(right == NULL)
        right = new TreeNode<T> (inData) ;
    else
        right->addNode ( inData );
}

template<typename T>
int TreeNode<T>::compare(const T &a,const T &b){
    if( a == b )
        return 0 ;
    else
        return ( a < b ) ? 1 : -1 ;
}

#endif // TREELIB_IPP

