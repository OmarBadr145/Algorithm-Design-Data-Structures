#include "Node.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,10,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    LinkedList Test(arr,len);

    Test.insertPosition(4,19);
    cout << Test.get(3) << endl;
}
