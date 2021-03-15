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

int getRandomNumber(int l, int r){
    // get a random number in range [l,r]
    srand(time(NULL)); 
    int num = l + rand()%(r-l+1);
    return num;
}


string commonPrefix(string str1, string str2){
    // the motive of this function is to return the 
    // commonPrefix (longest) of any two given string

    // ans will store the commonPrefix between str1 and str2
    string ans = "";

    // printing both the strings to check if the string is passed successfully 
    // cout<<str1<<"--\n"<<str2<<"--\n";

    // n1 : size of 1st string
    // n2 : size of second string
    int n1 = str1.size(), n2 = str2.size();

    // i : current index of first string
    // j : current index of second string
    int i=0,j=0;

    while(i<n1 && j<n2){
        if(str1[i]==str2[j]){
            // if current character of both strings is equal
            // include it in our common prefix
            ans.push_back(str1[i]);
            i++,j++;
        }
        else{
            // if current index of both strings is not equal 
            // we cannot get any longer commong prefix
            break;
        }
    }
    // ans stores our common prefix
    // return it
    return ans;
}

string solveLCP(string arr[],int start,int end){
    // this function is the solution of our problem statement
    // it will return the LCP (longest common prefix) of given array of string
    // we will use divide and conquer algorithm

    // printing the array to check if the string is passed successfully
    // for(int i=start;i<=end;++i){
    //     cout<<arr[i]<<" ";
    // }

    string ans = "";
    if(start==end){
        // if only one string is present, then the string itself is LCP
        return arr[start];
    }

    if(start<end){
        // dividing the given problem into two smaller problems
        int mid = start + (end-start)/2;

        // str1 is the LCP of all the strings from start-mid index
        string str1 = solveLCP(arr,start,mid);

        // str1 is the LCP of remaining strings (mid to end)
        string str2 = solveLCP(arr,mid+1,end);

        // commongPrefix of these two strings from left side and right side of array
        // is the LCP of whole array
        return commonPrefix(str1,str2);
    }
    // if start > end
    // invalid call 
    // hence empty string is returned
    return "";
}


int main(){
    // how many strings are given in input ?
    // cout<<getRandomNumber(5,10);
    // return 0;
    cout<<"Enter count of strings : \n";
    int numberOfStrings;
    cin>>numberOfStrings;

    // an array of strings to store all the strings
    string arr[numberOfStrings];
    
    cout<<"Enter "<<numberOfStrings<<" Strings : \n";
    for(int i=0;i<numberOfStrings;++i){
        // taking strings from user as input and storing it into the string array
        cin>>arr[i];
    }
    // Testing if all the inputs have been successfully stored in array
    // test successfull ! 
    // printArray(arr,numberOfStrings);

    // sample call to commonPrefix function before working on it 
    // commonPrefix is complete
    // cout<<commonPrefix("abcdef","abcd");

    // sample call to solveLCP function before working on it
    // cout<<solveLCP(arr,0,numberOfStrings-1);

    cout<<solveLCP(arr,0,numberOfStrings-1);
}
