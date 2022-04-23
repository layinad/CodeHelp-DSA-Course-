#include<bits/stdc++.h>
using namespace std;


void solve(stack<int>&inputStack,int count,int size)
{
	if(count==size/2)           //base case
    {
		inputStack.pop();
        return ;
    }

	int element=inputStack.top();       //storing the top element
    inputStack.pop();
	solve(inputStack,count+1,size);     //recursive call
	inputStack.push(element);           //pushing the stored element
}


void deleteMiddle(stack<int>&inputStack, int N){
	
   int count=0;
   solve(inputStack,count,N);
   
}


















