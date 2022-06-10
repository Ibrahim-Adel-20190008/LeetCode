class Solution {
public:
string frequencySort(string s) {
    map<char, int> char_freq;
    for (char a: s) {
        if (char_freq.find(a) == char_freq.end()) {
            char_freq[a] = 0;
        }
        char_freq[a]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto it: char_freq) {
        pq.push({ it.second,it.first});
    }
    stringstream result;
    while(!pq.empty())
    {
        int freqChar = pq.top().first;
        char c = pq.top().second;
        while(freqChar--)
        {
            result<<c;
        }
        pq.pop();
    }
    return result.str();
}
};