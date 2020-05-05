#include "BTSNode.h"
#include <vector>
#include <deque>
#include <iostream>
using namespace std;

class BTSTree
{
private:
    BTSNode* root;
    long num;
public:
    BTSTree(){
        root = NULL;
        num = 0;
    }

    ~BTSTree(){
        deleteTree(root);
    }

    void deleteTree(BTSNode* p){
        if(p != NULL){
            deleteTree(p->left);
            deleteTree(p->right);
            delete p;
        }
    }

    bool isEmpty(){
        return root == NULL;
    }

    void insert(int el){
        BTSNode* p = root, *prev = NULL;
        while(p != NULL){
            prev = p;
            if(p->isLT(el))
                p = p->right;
            else
                p = p->left;
            
        }
        if(root == NULL){
            root = new BTSNode(el);
        }
        else if(prev->isLT(el))
            prev->right = new BTSNode(el);
        else
            prev->left = new BTSNode(el);
        num++;
    }


    BTSNode* search(int el){
        return search(root, el);
    }

    BTSNode* search(BTSNode* p, int el){
        while(p != NULL){
            if(p->isEqual(el))
                return p;
            if(p->isLT(el))
                p = p->right;
            else
                p = p->left;
        }
        return NULL;
    }

    void inorder(){
        return inorder(root);
    }

    void inorder(BTSNode* p){
        if(p != NULL){
            inorder(p->left);
            p->print();
            inorder(p->right);
        }
    }

    void poSirini()
    {
        BTSNode* p = root;
        deque<BTSNode*> q;
        if(p != NULL){
            q.push_back(p);
            while(!q.empty()){
                p = q.front();
                q.pop_front();
                p->print();
                if(p->left != NULL)
                    q.push_back(p->left);
                if(p->right != NULL)
                    q.push_back(p->right);
            }
        }
        cout << endl;
    }


    int brojCvorova(int max){
        int broj = 0;
        brojCvorova(root, broj, max);
        return broj;
    }

    void brojCvorova(BTSNode* p, int &broj, int max){
        if(p == NULL)
            return;
        p->left->print();
        cout << max << " ";
        cout << p->isLT(max) << endl;
        if(p->isLT(max)){
            broj++;
            brojCvorova(p->right, broj, max);
        }
        //if(p->isGT(max))
        p = p->left;
    }







};