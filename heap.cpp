#include <iostream>
#include <cstring>

using namespace std;

void heapify(int* &arr, int n, int i);
void printHeap(int* &arr, int n);

int main(){

int numelements = 0;
int* heap = new int[101];
cout << "enter the number of elements you are inputting" << endl;
cin >> numelements;
cin.get();
cout << "please enter your elements below. press enter between each one" << endl;

for(int i = 0; i <= numelements; i++){
      int input;
      cin >> input;
      cin.get();
      heap[i+1] = input;
    }

int toStart = numelements/2;

for(int a = toStart; a >=1; a--){
  heapify(heap, numelements, a);
}

}

void heapify(int* &arr, int n, int i){

  int largest = i;
  int left = 2 * i ;
  int right = 2 * i + 1;
  
  while(left <= n && arr[left] > arr[largest]){
    largest = left; 
  }
  
  while(right <= n && arr[right] > arr[largest]){
      largest = right; 
  }
  
  if(largest != i){
    int temp;
    arr[i] = temp;
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
  
}

void printHeap(int* &arr, int n)
{
    cout << "Array \n";
 
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
