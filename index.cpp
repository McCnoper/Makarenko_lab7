#include <iostream>

using namespace std;

void sort(int* arr, int x) {
    for(int i=0;i<x-1;i++){
        //cout<<"i:"<<i<<endl;
        for(int j=0;j<x-1-i;j++){
            //cout<<"j:"<<j<<endl;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            for(int i=0;i<x;++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int x;
    cout<<"Введіть розмір масиву:\n";
    cin>>x;
    int* arr=new int[x];
    cout<<"Введіть елементи масиву:\n";
    for(int i=0;i<x;++i){
        cin>>arr[i];
    }
    sort(arr,x);
    cout<<"Відсортований масив:";
    for(int i=0;i<x;++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
