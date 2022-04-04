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

for(int i = 1; i <= numelements; i++){
      int input;
      cin >> input;
      cin.get();
      heap[i] = input;
    }

int toStart = numelements/2;

for(int a = toStart; a >=1; a--){
  heapify(heap, numelements, a);
}

printHeap(heap, numelements);     

for(int b = numelements; b >= 1; b--){
    int temp = heap[1];
    heap[1] = heap[b];
    heap[b] = temp;
    heapify(heap, numelements, b);
}

printHeap(heap, numelements);     
 
}

void heapify(int* &arr, int n, int i){

  int largest = i;
  cout << "largest: " << arr[largest] << endl;
  int left = 2 * i ;
  cout << "left: " << arr[left] << endl;
  int right = 2 * i + 1;
  cout << "right: " << arr[right] << endl;

  
  while(left <= n && arr[left] > arr[largest]){
    largest = left; 
  }
  
  while(right <= n && arr[right] > arr[largest]){
      largest = right; 
  }
  
  if(largest != i){
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
  
}

void printHeap(int* &arr, int n)
{
    cout << "Array \n";
 
    for (int i = 1; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
 
}

void visualHeap(){

}
