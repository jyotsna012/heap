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
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
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
}


void visualHeap(int* &heap, int numelements){
      for(int i = 1; i <= numelements; i++){
            if(i <= 1){
                  cout << "" << heap[i] << endl;
            }
            else if(i > 1 && i <= 3){
                  cout << "   " << heap[i] << endl;
            }
            else if(i > 3 && i <= 7){
                  cout << "         " << heap[i] << endl;
            }
            else if(i > 7 && i <= 15){
                  cout << "               " << heap[i] << endl;
            }
            else if(i > 15 && i <= 31){
                  cout << "                     " << heap[i] << endl;
            }
            else if(i > 31 && i <= 63){
                  cout << "                           " << heap[i] << endl;
            }
            else if(i > 63 && i <= 127){
                  cout << "                                 " << heap[i] << endl;
            }
      }
}

void heapSort(int* &arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call min heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
