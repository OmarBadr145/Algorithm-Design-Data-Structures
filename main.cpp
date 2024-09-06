#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    LinkedList Test(arr,len);

    Test.printList();
}
