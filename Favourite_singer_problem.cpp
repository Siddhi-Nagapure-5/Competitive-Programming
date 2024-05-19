// Problem
//================
// Bob has a playlist of 
//  songs, each song has a singer associated with it (denoted by an integer)

// Favourite singer of Bob is the one whose songs are the most on the playlist

// Count the number of Favourite Singers of Bob
//==================
// Input Format 
//==================
// The first line contains an integer 
// , denoting the number of songs in Bob's playlist.

// The following input contains 
//  integers, 
//  integer denoting the singer of the 
//  song.
//==================
// Output Format
//==================
// Output a single integer, the number of favourite singers of Bob
//============================
// Note: Use 64 bit data type
//============================

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int N,count=0;
	
	cin>>N;
long long 	int ar[N],countar[N];
	
	for(int i=0;i<N;i++)
	{
	cout<<"Enter singer of song "<<i<<endl;
	cin>>ar[i];
}
for(int i=0;i<N;i++)
{
	count=1;
	for(int j=i+1;j<N;j++)
	{
		if(ar[j]==ar[i])
		{
			count++;
		}
	}
	countar[i]=count;
	
}

int num=*max_element(countar,countar+N);
cout<<num;
	return 0;
}