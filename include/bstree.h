#ifndef TREEROUTE_H
#define TREEROUTE_H

#include <new>
#include <type_traits>
#include <functional>
#include <iostream>

template <typename T >
class BSTree{
public:
    BSTree():root_(nullptr),size_(0){}
    ~BSTree(){std::cout<< "destruct Tree \n" ;
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

        inline void addLeft( const T &data){
            if( left_ == nullptr )
                left_ = new Node( data);
            else
                left_->addData( data);
        }

        inline void addRight( const T &data){
            if( right_ == nullptr )
                right_ = new Node( data);
            else
                right_->addData( data);
        }

        inline void addData( const T &data){
            ( data_ > data ) ? addLeft( data)
                             : addRight( data);
        }
    };

    inline int insert( const T &data){
        if( root_ == nullptr )
            root_ = new Node( data) ;
        else
            root_->addData( data) ;
        return ++size_ ;
    }

private:
    Node *root_ ;
    int size_ ;
};
struct Route{
    double len ;

    Route() {}
    Route( double inLen):len(inLen) {}

    inline bool operator >( const Route &o){
        return ( len > o.len) ;
    }
    inline bool operator <( const Route &o){
        return ( len < o.len) ;
    }
    inline bool operator ==( const Route &o){
        return ( len == o.len) ;
    }
/*
    std::ostream& operator <<( std::ostream& os, const Route& o){
        return os << o.len ;
    }
*/
};

typedef BSTree<Route> TreeRoute ;

#endif // TREEROUTE_H
