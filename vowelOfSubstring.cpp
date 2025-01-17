
#include<bits/stdc++.h>
using namespace std;

    bool isVowel(char ch){


        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';

    }
    long long countVowels(string word) {

        long long answer=0;

        for (int i=0;i<word.size();i++){
            
            if(isVowel(word[i])){


                answer+=(i+1)*(word.size()-i);



            }

        }

        return answer;
        
    }



int main(){

    string word;
    cin>>word;

    cout<<countVowels(word)<<endl;

    return 0;
}


// Time complexity: O(n)

// Space complexity: O(1)

// Where n is the size of the input string.

// The time complexity is O(n) because we are iterating over the input string once and performing a constant number of operations for each character.

// The space complexity is O(1) because we are using a constant amount of extra space to store the answer.

// The code is correct and passes all the test cases.