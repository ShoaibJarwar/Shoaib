#include<iostream>
using namespace std;
int main ()
{
	int sum = 0, numStd;
	float avg; 
	cout<<"Enter number of students: ";
	cin>>numStd;
	int arrMarks[numStd];
	cout<<"Enter marks of students: "<<endl;
	for(int i = 0; i<numStd; i++)
	cin>>arrMarks[i];
	cout<<"Array of marks is: { ";
    for(int i = 0; i<numStd; i++)
    {
   	if(i==numStd-1)
	  cout<< arrMarks[i];
	else
	  cout<< arrMarks[i]<<",  ";
	sum+=arrMarks[i];
    }
    cout<<"}"<<endl;
    cout<<"Reverse Array is: { ";
   for(int i = numStd-1; i>=0; i--)
    {
   	if(i==0)
	  cout<< arrMarks[i];
	else
	  cout<< arrMarks[i]<<",  ";
    }
    cout<<"}"<<endl;
    cout<<"Sum is: "<<sum<<endl;
    avg = sum / numStd;
    cout<<"Average is: "<<avg;
    return 0;
}