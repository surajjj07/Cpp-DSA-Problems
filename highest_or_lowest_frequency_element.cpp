#include <iostream>
#include <unordered_map>
using namespace std;


class FindFreq{
    public :
    void FreqNCount(int arr[],int n){
        unordered_map<int, int> map;

        for (int i = 0; i < n;i++){
            map[arr[i]]++;
        }
        // for(auto it : map){
        //     cout << it.first << ":" << it.second << endl;
        // }

        int maxfreqEl = 0;
        int maxfreqCount = 0;
        int minfreqCount = n;
        int minfreqEl = 0;
        int freq = 0;
        int count = 0;

        for(auto it : map){
            freq = it.first;
            count = it.second;

            if(count>maxfreqCount){
                maxfreqCount = count;
                maxfreqEl = freq;
            }

            if(count<minfreqCount){
                minfreqCount = count;
                minfreqEl = freq;
            }

        }

        cout << "Highest frequency element : " << maxfreqEl;
        cout << "\nLowest frequency element : " << minfreqEl;
    }
};

int main(){

    FindFreq fc;
    int n = 10;
    int array[10] = {12, 24, 23, 12, 23, 56, 12, 23, 24, 12};
    fc.FreqNCount(array, n);
    return 0;
}
