//grayhat.pk sorting by Noman Masood Khan 
// Initially program assings 0 to all indexes of sort array
// Then it places 1 at the value of given array in sort array 
//Limitation of algo is finding the maximum value in the array

#include<iostream>
#include<cstdlib>
using namespace std;

int maximum(int array[],int size){
	int max= array[0];
	
	for(int i=1;i<size;i++){
		if(array[i]>max)
			max=array[i];
	}
	
	return max;
}

void print(int sort[],int max){
	
	for(int i=0;i<=max;i++) 
		{
			if (sort[i]==1){
				cout<<i<<" ";
			}	
	}}

int main(){
	int size=100,max;
	
	int array[size];
	
	for(int i=0;i<size;i++){ // randomly generating numbers 
		array[i] = rand();
		cout<<array[i]<<" ";
	}

	max = maximum(array,size); // storing the maximum value of the array	
	
	int sort[max]={0}; 	
		
	for(int i=0;i<size;i++)  // Storing 1 array values index in the sort array;Main work of sorting   
		sort[array[i]]=1;   
	
	cout<<endl<<endl;
	print(sort,max);
		
	}
