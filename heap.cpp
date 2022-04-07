#include <iostream>
#include <cstring>

using namespace std;

void heapify(int* &arr, int n, int i);
void printHeap(int* &arr, int n);
void visualHeap(int* &heap, int numelements);
void addtoheap(int &a, int temp, int* &orderedheap);
void printOrderedHeap(int* &orderedheap, int n);

int main(){

int numelements = 0;
int a = 0;
int* heap = new int[101];
int* orderedheap = new int[101];
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
visualHeap(heap, numelements);

for(int b = numelements; b >= 1; b--){
    int temp = heap[1];
    heap[1] = heap[b];
    heap[b] = 0;
    addtoheap(a, temp, orderedheap);  
    numelements = numelements - 1;
    cout << "remove swaped(top, b): " << heap[1] << " and " << temp << endl;
    cout << "numelements " << numelements << endl;
    heapify(heap, numelements, numelements/2);
}


  printOrderedHeap(orderedheap, numelements); 
    
}

void heapify(int* &arr, int n, int i){
  
  cout << "Heap Start" << endl;
  int largest = i;
  cout << "i value: " << arr[largest] << endl;
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
    cout << "largest index: " << largest << endl;
    cout << "input: index " << i << endl;
    cout << "heap swaped(i, largest): " << arr[i] << "and" << arr[largest] << endl;
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
      
  cout << "Heap End" << endl;
}

void printHeap(int* &arr, int n)
{
    cout << "Array \n";
 
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
 
}

void addtoheap(int &a, int temp, int* &orderedheap){
      cout << temp << " - The number that was added to the ordered heap is: " << "the a value is: " << a << endl;
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
      
      /* for(int a = 1; a <=numelements; a++){
          if(heapSecond[a][1] == 1){
             for(int b = 0; b <= (numelements + 1)/2; b++){
                  cout << endl;
             }
          }
          if(heapSecond[a][1] == 2){
              for(int b = 0; b <= (numelements + 1)/2; b++){
                  cout << endl;
             }
          }
          if(heapSecond[a][1] == 3){
          
          }
          if(heapSecond[a][1] == 4){
          
          }
          if(heapSecond[a][1] == 5){
          
          }
          if(heapSecond[a][1] == 6){
          
          }
          if(heapSecond[a][1] == 7){
          
          }

      } */


