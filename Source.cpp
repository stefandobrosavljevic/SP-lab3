#include "BTSTree.h"
#include <iostream>
using namespace std;


int main()
{
    BTSTree t;
    t.insert(6);
    t.insert(9);
    t.insert(2);
    t.insert(1);
    t.insert(4);
    t.insert(8);
    t.inorder();
    
    // cout << endl;
    // t.poSirini();


    cout << "\n" << t.brojCvorova(5) << endl;
}