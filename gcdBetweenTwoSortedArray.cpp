#include<iostream>
using namespace std;

int main() {
    int largestCom;
    int A[10] = {1,3,5,7,9,12,34,45,56,76};
    int B[10] = {2,4,6,6,7,11,34,55,56,58};

    if (A[0] > B[0])
    {
        largestCom = B[0] - 1;
    } else {
        largestCom = A[0] - 1;
    }
    int i=0, j=0;
    int m = sizeof(A)/sizeof(int);
    int n = sizeof(B)/sizeof(int);

    while(i<m && j<n) {
        if (A[i] == B[j])
        {
            largestCom = A[i];
            i++, j++;
        } else if (A[i] < B[j])
        {
            i = i + 1;
        } else if (A[i] > B[j])
        {
            j = j + 1;
        }       
    }
    cout<<"The largest common factor is : "<<largestCom<<endl;    
    return 0;
}