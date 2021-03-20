/*
    Problem Statement
    Given a set of strings, find the longest common prefix.(Using divide and conquer algorithm)
        -> Use random functions to generate elements.

    // we have used three functions to generate random elements 
        // getRandomNumber(l,r) : return a random number number between l to r 
        // getRandomChar() : return a random character between a-z or A-Z
        // getRandomString() : return a random string of variable length, using above two functions

    // we can also take input from user
        // for that we just have to uncomment the input codes, and comment the codes for random test generation
*/

#include<bits/stdc++.h>
using namespace std;

// randomChars is a string which contains all the lowerCase and uppercase characters
string randomChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyz";

void printArray(string arr[],int n){
    // print all the elements of given array
    for(int i=0;i<n;++i){
        cout<<arr[i]<<"\n";
    }
}

int getRandomNumber(int l, int r){
    // get a random number in range [l,r]
    int num = l + rand()%(r-l+1);
    return num;
}

char getRandomChar(){
    // randomChar string , declared globally at top
    // has all the lowercase and uppercase characters
    // generate a random index and pick a character from that string
    int num = rand()%(52);
    return randomChars[num];
}

string getRandomString(int n){
    // get a random string of length n
    string randomString = "";
    for(int i=0;i<n;++i){
        char c = getRandomChar();
        randomString.push_back(c);
    }
    return randomString;
}

string commonPrefix(string str1, string str2){
    // this function returns
    // commonPrefix (longest) of any two given string

    // ans will store the commonPrefix between str1 and str2
    string ans = "";

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
    // solveLCP function will return the LCP (longest common prefix) of given array of string
    // we will use divide and conquer algorithm

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

        // str2 is the LCP of remaining strings (mid to end)
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
    // to generate a different random number every time
    srand(time(NULL));

    // cout<<"Enter count of strings : \n";
    int numberOfStrings;
    numberOfStrings = getRandomNumber(1,1000);
    // cin>>numberOfStrings;

    // an array of strings to store all the strings
    string arr[numberOfStrings];
    
    // cout<<"Enter "<<numberOfStrings<<" Strings : \n";
    for(int i=0;i<numberOfStrings;++i){
        int randSize = getRandomNumber(1,8);
        arr[i] = getRandomString(randSize);
        // cin>>arr[i];
    }
    cout<<"Total : "<<numberOfStrings<<" string(s)\n";
    cout<<"--------------------------------------------\n";
    printArray(arr,numberOfStrings);
    cout<<"--------------------------------------------";

    // LCP stores the longest common prefix of all strings
    string LCP = solveLCP(arr,0,numberOfStrings-1);

    if(LCP.size()==0){
        cout<<"\nNo common prefix \n";
    }
    else{
        cout<<"\nLCP of given strings is :\n";
        cout<<LCP<<"\n";
    }
}
