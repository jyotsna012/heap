#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;
void heap(int* &heap, int n, int i);

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
		ifstream myFile;
		myFile.open("numbers.txt");
		int g = 1;
		while (g <= numelements) {
   		myFile >> heap[g];
   		g++;
		}
		myFile.close();
     		} 
	
cout << "here are the numbers in the heap" << endl;
for(int b = 1; b <= numelements; b++){
	cout << heap[b] << endl;
}
     
}

void heap(int* &heap, int n, int i)
{
    int largest = i; 
    int left = (2*i)+1; 
    int right = (2*i)+2; 
	
    if (right < n && heap[right] > heap[largest])
        largest = right;
 
    if (left < n && heap[left] > heap[largest])
        largest = left;
 
    if (largest != i) {
        swap(heap[i], heap[largest]);
         heapify(heap, n, largest);
    }
}



