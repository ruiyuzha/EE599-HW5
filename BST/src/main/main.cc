#include <iostream>
#include "src/lib/BST.h"
using namespace std;

int main()
{
    vector<int> init = {3,2,20,15,27};
    BST solution(init);
    cout<<"Max Depth = ";
    solution.GetBTHeight();
    cout << "Inorder traversal(recursively): ";
    solution.inorder_recursively();
    cout << "Inorder traversal(non-recursively): ";
    solution.inorder_nonrecursively();
    

    return EXIT_SUCCESS;
}