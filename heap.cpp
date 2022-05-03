#include <iostream>
#include <cstring>

using namespace std;

void heapify(int* &arr, int n, int i);
void printHeap(int* &arr, int n);
void visualHeap(int* &heap, int numelements);
void addtoheap(int &a, int temp, int* &orderedheap);
void printOrderedHeap(int* &orderedheap, int n);
void heapSort(int* &arr, int n);

int main(){

int numelements = 0;
int a = 0;
int* heap = new int[101];
int* orderedheap = new int[101];
cout << "enter the number of elements you are inputting" << endl;
cin >> numelements;
cin.get();
cout << "please enter your elements below. press enter between each one" << endl;
cout<< "NUMELEMENTS0: " << numelements << endl;
      
     
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
cout << "ori" <<endl;       
printHeap(heap, numelements);   
      
//visualHeap(heap, numelements);
/*int numelements2 = numelements;
for(int b = numelements2; b >= 1; b--){
    int temp = heap[1];
    heap[1] = heap[b];
    heap[b] = 0;
    addtoheap(a, temp, orderedheap);  
    numelements2 = numelements2 - 1;
    //cout << "remove swaped(top, b): " << heap[1] << " and " << temp << endl;
    heapify(heap, numelements2, numelements2/2);
    printHeap(heap, numelements);   

}*/
  heapSort(heap, numelements);
  cout << "end" <<endl;       
  printHeap(heap, numelements);   

  //printOrderedHeap(orderedheap, numelements); 
    
}

void heapify(int* &arr, int n, int i){
  
  int smallest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  
  if(left <= n && arr[left] < arr[smallest]){
    smallest = left; 
  }
  
  if(right <= n && arr[right] < arr[smallest]){
      smallest = right; 
  }
  
     if (smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp; 
        heapify(arr, n, smallest);
    }
}

void printHeap(int* &arr, int n)
{
    cout << "Array \n";
 
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
 
}

void heapSort(int* &arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[i] = arr[0];
        arr[0] = temp;  
        heapify(arr, i, 0);
    }
}

