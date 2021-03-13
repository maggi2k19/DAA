/*
    Problem Statement
    Given a set of strings, find the longest common prefix.(Using divide and conquer algorithm)
        -> Use random functions to generate elements.
    
    // Right now we are taking all the elements (string, num) from user
    // but in later phase, we will replace it with random functions to generate random input
*/
#include<bits/stdc++.h>
using namespace std;

void printArray(string arr[],int n){
    // print all the elements of given array
    for(int i=0;i<n;++i){
        cout<<arr[i]<<"\n";
    }
}

string commonPrefix(string str1, string str2){
    // the motive of this function is to return the 
    // commonPrefix (longest) of any two given string

    
}


int main(){
    // how many strings are given in input ?
    int numberOfStrings;
    cin>>numberOfStrings;

    // an array of strings to store all the strings
    string arr[numberOfStrings];
    
    for(int i=0;i<numberOfStrings;++i){
        // taking strings from user as input and storing it into the string array
        cin>>arr[i];
    }
    // Testing if all the inputs have been successfully stored in array
    // printArray(arr,numberOfStrings);
}