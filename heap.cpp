#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

/* void heapify(int* &arr, int n, int i);
void printHeap(int* &arr, int n);
void visualHeap(int* &heap, int numelements)
void addtoheap(int &a, int temp, int* &orderedheap);
void printOrderedHeap(int* &orderedheap, int n); */

int main(){

int numelements = 0;
int a = 0;
int option = 0;
int* heap = new int[101];
int j = 0;
cout << "enter the number of elements you are inputting" << endl;
cin >> numelements;
cin.get();
cout << "Type 1 below to enter elements maually and type 2 below to upload from a file" << endl;
cin >> option;
cin.get();
     if(option == 1){
          cout << "please enter your elements below. press enter between each one" << endl;       
          for(int i = 1; i <= numelements; i++){
               int input;
               cin >> input;
               cin.get();
               heap[i] = input;
          }  
       } else if(option == 2){
      	 ifstream File;
		File.open("numbers.txt");
	        for(int n = 1; n <= numelements; n++){
		File >> heap[n]
   		n++;
		}
		File.close();
     } 
	
for(int b = 1; b <= numelements; b++){
	cout << heap[b] << endl;
}
     
}



/*int toStart = numelements/2;

for(int a = toStart; a >=1; a--){
  heapify(heap, numelements, a);
}
      
printHeap(heap, numelements);   
//visualHeap(heap, numelements);

int numelements2 = numelements;
for(int b = numelements2; b >= 0; b--){
    int temp = heap[1];
    heap[1] = heap[b];
    heap[b] = 0;
    addtoheap(a, temp, orderedheap);  
    numelements2 = numelements2 - 1;
    //cout << "remove swaped(top, b): " << heap[1] << " and " << temp << endl;
    heapify(heap, numelements2, numelements2/2);
    printHeap(heap, numelements);   

}

  printOrderedHeap(orderedheap, numelements); 
    
}

void heapify(int* &arr, int n, int i){
  
  //cout << "Heap Start" << endl;
  int largest = i;
 // cout << "i value: " << arr[largest] << endl;
  int left = 2 * i ;
 // cout << "left: " << arr[left] << endl;
  int right = 2 * i + 1;
  //cout << "right: " << arr[right] << endl;

  
  while(left <= n && arr[left] > arr[largest]){
    largest = left; 
  }
  
  while(right <= n && arr[right] > arr[largest]){
      largest = right; 
  }
  
  if(largest != i){
    //cout << "largest index: " << largest << endl;
    //cout << "input: index " << i << endl;
    //cout << "heap swaped(i, largest): " << arr[i] << "and" << arr[largest] << endl;
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
      
  //cout << "Heap End" << endl;
}

void printHeap(int* &arr, int n)
{
    cout << "Array \n";
 
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
 
}

void addtoheap(int &a, int temp, int* &orderedheap){
      //cout << "The number that was added to the ordered heap is: " << temp << " the a value is: " << a << endl;
      orderedheap[a] = temp;
      a++;
}

void printOrderedHeap(int* &orderedheap, int n){
    cout << "Ordered Array \n";
 
    for (int i = 0; i < n; i++)
        cout << orderedheap[i] << " ";
    cout << "\n";
}*/
