/************* HASH TABLE ******************/
#include<iostream>
using namespace std;

int main(){
    string text;
    text = "Hi guys how are you doing today, did you get time to watch the new spiderverse file and now I want to find the letter with maximum freq in this sentence";

    int freq[26];

    int i;

    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(i=0li<text.length();i++)
    {
        if(text[i]!=' ')
        {
            if(text[i]=='a')
            {
                freq[text[i]-'a']++;

                // we are finding the index of which we have to increment directly from the value of text
            }
        }
    }

    char temp;

    for(i=0,temp='a';i<26;i++)
    {
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i]<<endl;
        temp++;

        if(freq[i]>max)
        {
            max = freq[i];
        }
    }

    cout<<endl;<<endl;<<"The letter with maximum frequency is "<<max;
    return 0;
}