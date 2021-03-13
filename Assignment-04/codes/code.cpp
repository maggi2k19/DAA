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
    // cout<<str1<<"--\n"<<str2<<"--\n";

<<<<<<< HEAD
    // n1 : size of 1st string
    // n2 : size of second string
    int n1 = str1.size(), n2 = str2.size();

    // i : current index of first string
    // j : current index of second string
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(str1[i]==str2[j]){
            // if character at both strings is equal then it will be included in our common prefix
=======
    int n1 = str1.size(), n2 = str2.size();

    int i=0,j=0;
    while(i<n1 && j<n2){
        if(str1[i]==str2[j]){
>>>>>>> 0de1228f9cace0852e26083c0b5d126262261ada
            ans.push_back(str1[i]);
            i++,j++;
        }
        else{
<<<<<<< HEAD
            // if current index of both strings is not equal 
            // we cannot get any longer commong prefix
            break;
        }
    }
    // ans stores our common prefix
    // return it
=======
            break;
        }
    }
>>>>>>> 0de1228f9cace0852e26083c0b5d126262261ada
    return ans;
}

string solveLCP(string arr[],int start,int end){
    // this function is the solution of our problem statement
    // it will return the LCP (longest common prefix) of given array of string
    // we will use divide and conquer algorithm

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
}
=======
    cout<<commonPrefix("abcdef","abcd");
}
>>>>>>> 0de1228f9cace0852e26083c0b5d126262261ada
