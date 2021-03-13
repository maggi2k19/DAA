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

    // ans will store the commonPrefix between str1 and str2
    string ans = "";

    // printing both the strings to check if the string is passed successfully 
<<<<<<< HEAD
    // cout<<str1<<"--\n"<<str2<<"--\n";
=======
    cout<<str1<<"--\n"<<str2<<"--\n";
>>>>>>> 5f701ffb7e85234d828b7d6c6747cc49da6c3452

    return ans;
}

string solveLCP(string arr[],int start,int end){
    // this function is the solution of our problem statement
    // it will return the LCP (longest common prefix) of given array of string
    // we will use divide and conquer algorithm
    
    // start is the starting index of array
    // end is the last valid index of our array

    // printing the array to check if the string is passed successfully
    for(int i=start;i<=end;++i){
        cout<<arr[i]<<" ";
    }

    return "";
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
    // test successfull ! 
    // printArray(arr,numberOfStrings);

    // sample call to commonPrefix function before working on it 
<<<<<<< HEAD
    // cout<<commonPrefix("abcdef","abcd");

    // sample call to solveLCP function before working on it 
    solveLCP(arr,0,numberOfStrings-1);
}
=======
    cout<<commonPrefix("abcdef","abcd");
}
>>>>>>> 5f701ffb7e85234d828b7d6c6747cc49da6c3452
