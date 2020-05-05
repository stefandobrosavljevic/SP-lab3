#include <iostream>
using namespace std;


class BTSNode
{
public:
    int key;
    BTSNode *left, *right;

public:
    BTSNode(){
        left = right = NULL;
    }
    
    BTSNode(int el){
        key = el;
        left = right = NULL;
    }

    BTSNode(int el, BTSNode *l, BTSNode *r){
        key = el;
        left = l;
        right = r;
    }

    ~BTSNode(){

    }
    
    bool isEqual(int el){
        if(key == el)
            return true;
        return false;
    }

    bool isLT(int el){
        if(key < el){
            return true;
        }
        return false;
    }

    bool isGT(int el){
        if(key > el)
            return true;
        return false;
    }

    void setKey(int el){
        key = el;
    }
    
    int getKey(){
        return key;
    }

    void print(){
        cout << key << " ";
    }
};