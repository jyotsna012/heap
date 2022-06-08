#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

//function prototypes
using namespace std;
void heapify(int* &heap, int n, int i);
void orderedHeap(int* &heap ,int* &oHeap, int numelements);
void vis(int index, int level, int* &heap, int size);

int main(){

//variables	
int a = 0;	
int option = 0;
int j = 0;
int numelements = 0;
//array to hold heap	
int* heap = new int[101];
// array to hold ordered heap	
int* oHeap = new int[101];

//asks the user to choose between file input or text input	
cout << "enter the number of elements you are inputting" << endl;
cin >> numelements;
cin.get();
cout << "Type 1 below to enter elements maually and type 2 below to upload from a file" << endl;
cin >> option;
cin.get();
     if(option == 1){
	  //text input: reads numbers from user and adds to array   
          cout << "please enter your elements below. press enter between each one" << endl;       
          for(int i = 0; i < numelements; i++){
               int input;
               cin >> input;
               cin.get();
               heap[i] = input;
          }  
       } else if(option == 2){
	  //file input: reads numbers from file and add   
		ifstream myFile;
		char filename[20];
    		cout << "enter file correctly" << endl;
    		cin >> filename;
    		cin.get();
    		myFile.open(filename);
	     for(int a = 1; a < numelements; a++){
      		if(file.eof()){
		break;
      	        }
	     int in;
      myFile >> in;
      cout << in << endl;
      heap[a] = in;
	     }
		/*int g = 0;
		while (g < numelements) {
   		myFile >> heap[g];
   		g++;
		}
		myFile.close();*/
     		} 

//prints out the user input	
cout << "here are the numbers in the heap" << endl;
for(int b = 0; b < numelements; b++){
	cout << heap[b] << endl;
}
	
     //creates the heap	
    int start = (numelements/2)-1;
    for (int k = start; k >= 0; k--) {
        heapify(heap, numelements, k);
    }
   
   //prints out the max heap in the form of an array	
   cout << "Heap" << endl;
	
    for(int b = 0; b < numelements; ++b){
	cout << heap[b] << endl;
	}
	   cout << "Heap vis" << endl;

vis(0,0,heap, numelements);
 	
//calls function to order heap	
orderedHeap(heap, oHeap,numelements);


}

//function to build max heap. 
//used youtube videos for help in creating algorithim
//https://www.youtube.com/watch?v=Q_eia3jC9Ts

void heapify(int* &heap, int n, int i)
{
    int largest = i; 
    int left = (2*i)+1; 
    int right = (2*i)+2; 
    if (right < n && heap[right] > heap[largest])
    largest = right;
    if (left < n && heap[left] > heap[largest])
    largest = left; 
    if (largest != i) {
     int temp = heap[i];
    heap[i] = heap[largest];
     heap[largest] = temp;
    heapify(heap, n, largest);
    }
}

//asked jennifer for help on visualizing the heap
void vis(int index, int level, int* &heap, int size)
{
  
  if (index < size)
    {
   //right subtree
   vis((2*index) + 2, level + 1, heap, size);
  for (int i = 0; i < level; i++){
	  cout << '\t';
}
  cout << heap[index] << endl;
   //left subtree
  vis((2*index) + 1, level + 1, heap, size);
    }
}



//function to order the numbers from high to low
void orderedHeap(int* &heap ,int* &oHeap, int numelements){
	
	//runs as many times as the number of elements
	for(int b = 0; b < numelements; ++b){
	    //runs heapify to build max heap each time	
	    int start = (numelements/2)-1;
    	    for (int k = start; k >= 0; k--) {
       	 	heapify(heap, numelements, k);
            }
	    //takes the 0th element whihc is always the largest elemenst and move it to ordered heap	
	    oHeap[b] = heap[0]; 
	    //set the 0th elelemt equal to zero	
	    heap[0] = 0;	
	}
	    cout << "Ordered Heap" << endl;
	
     //print ordered heap
    for(int v = 0; v < numelements; ++v){
	cout << oHeap[v] << endl;
	}

}





