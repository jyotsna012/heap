#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;
void heapify(int* &heap, int n, int i);

int main(){

int a = 0;
int option = 0;
int* heap = new int[101];
int j = 0;
int numelements = 0;
cout << "enter the number of elements you are inputting" << endl;
cin >> numelements;
cin.get();
cout << "Type 1 below to enter elements maually and type 2 below to upload from a file" << endl;
cin >> option;
cin.get();
     if(option == 1){
          cout << "please enter your elements below. press enter between each one" << endl;       
          for(int i = 0; i < numelements; i++){
               int input;
               cin >> input;
               cin.get();
               heap[i] = input;
          }  
       } else if(option == 2){
		ifstream myFile;
		myFile.open("numbers.txt");
		int g = 0;
		while (g < numelements) {
   		myFile >> heap[g];
   		g++;
		}
		myFile.close();
     		} 
	
cout << "here are the numbers in the heap" << endl;
for(int b = 0; b < numelements; b++){
	cout << heap[b] << endl;
}

    int start = (numelements/2)-1;
    for (int k = start; k >= 0; k--) {
        heapify(heap, numelements, k);
    }
     
   cout << "Heap" << endl;
	
    for(int b = 0; b < numelements; ++b){
	cout << heap[b] << endl;
	}

}

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





