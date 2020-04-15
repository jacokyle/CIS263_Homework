//
// Created by Kyle Jacobson on 2/27/2019.
//

#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    string word;
    string words[100];
    string words2[200];
    int i = 0;
    int k = 0;

    map<string, int> wordCount;

    inFile.open("input.txt");
    outFile.open("output.txt");

    while(inFile>>word)
    {
        words[i] = word;
        i++;
    }

    for(i = 0; i < 100; i++)
    {
        for(unsigned int j = 0; j < words[i].length(); j++)
        {
            if(isupper(words[i].at(j)))
            {
                words[i].at(j) = static_cast<char>(tolower(words[i].at(j)));
            }

            if(ispunct(words[i].at(j)) || isdigit(words[i].at(j)))
            {
                words[i] = words[i].erase(j, 1);
                j--;
            }
        }

        if(words[i] == "a" || words[i] == "the")
        {
            words[i] = "";
        }

        if(words[i] != " ")
        {
            words2[k] = words[i];
            k++;
        }
    }

    int m = 0;
    int n = 0;
    string words3[100];
    int freq[100];
    while(m < 100)
    {
        int count = 1;
        for(i = 1; i < 99 - m; i++)
        {
            if(words2[m] == words2[i+m])
            {
                count++;
                words2[i+m] = "";
            }
        }
        freq[n] = count;
        words3[n] = words2[m];
        m++;
        n++;
    }

    int q = 0;
    string words4[100];
    int freq2[100];
    for(i = 0; i < 100; i++)
    {
        if (!words3[i].empty()) {
            if (words3[i].length() > 0) {
                words4[q] = words3[i];
                freq2[q] = freq[i];
                q++;
            }
        }
    }

    for(i = 0; i < 100; i++)
    {
        if(words4[i].length() > 0 && freq2[i] > 0)
            wordCount.insert(pair<string, int>(words4[i], freq2[i]));
    }

    map<string, int>::iterator itr;
    for(itr = wordCount.begin(); itr != wordCount.end(); itr++)
    {
        outFile<<itr->first<<" "<<itr->second<<endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}