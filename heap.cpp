#include <iostream>
#include <cstring>

using namespace std;

void heapify(int* &arr, int n, int i);
void printHeap(int* &arr, int n);
void visualHeap(int* &heap, int numelements);

int main(){

int numelements = 0;
int* heap = new int[101];
int* heapSecond = new int[101][2];
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
for(int c = 1; c <= numelements; c++){
            if(i <= 1){
                   heapSecond[c][0] = heap[c];
                   heapSecond[c][1] = 1;  
            }
            else if(i > 1 && i <= 3){
                   heapSecond[c][0] = heap[c];
                   heapSecond[c][1] = 2;
            }
            else if(i > 3 && i <= 7){
                   heapSecond[c][0] = heap[c];
                   heapSecond[c][1] = 3;
            }
            else if(i > 7 && i <= 15){
              heapSecond[c][0] = heap[c];
                  heapSecond[c][1] = 4;    
            }
            else if(i > 15 && i <= 31){
                  heapSecond[c][0] = heap[c];
                  heapSecond[c][1] = 5;
            }
            else if(i > 31 && i <= 63){
                  heapSecond[c][0] = heap[c];
                  heapSecond[c][1] = 6;
            }
            else if(i > 63 && i <= 127){
                  heapSecond[c][0] = heap[c];
                  heapSecond[c][1] = 7;
            }
}
      

printHeap(heap, numelements);   
visualHeap(heap, numelements, heapSecond);

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
 
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
 
}

void visualHeap(int* &heap, int numelements, int* &heapSecond){
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


