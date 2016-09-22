#ifndef TREEROUTE_H
#define TREEROUTE_H

#include <new>
#include <type_traits>
#include <functional>
#include <iostream>

template <typename T >
class LRTree{
public:
    LRTree():root_(nullptr),size_(0){}
    ~LRTree(){std::cout<< "destruct Tree \n" ;
              if(root_ != nullptr)
                delete root_ ;}

    struct Node{

        T data_ ;
        Node *left_ ;
        Node *right_ ;

        Node(): left_(nullptr),
            right_(nullptr){}

        Node(const T& data):data_( data),
            left_(nullptr),
            right_(nullptr){}

        ~Node(){ std::cout<< "destruct Node \n" ;
                 if( left_ != nullptr)
                    delete left_ ;
                 if( right_ != nullptr)
                    delete right_ ;
               }

        inline void addOne( const T &data){
            if( left_ == nullptr )
                left_ = new Node(data) ;
        }

        inline void addTwo( const T &ldata, const T &rdata){
            if( left_ == nullptr )
                left_ = new Node(ldata) ;
            if( right_ == nullptr )
                right_ = new Node(rdata) ;
        }
    };

private:
    Node *root_ ;
    int size_ ;
};

#endif // TREEROUTE_H
