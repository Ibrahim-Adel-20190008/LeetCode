class Solution {
public:
bool validUtf8(vector<int> data) {
    int bytes=0;
    for(int i=0;i<data.size();i++){
        // 1 byte
        if(data[i]<128) continue;
        // 4 bytes
        else if(data[i]>=240 && data[i]<248){
            bytes=3;
            while(i+1<data.size() && bytes){
                i++;
                if(data[i] < 128) return false;
                bytes--;
            }
        }
        // 3 bytes
        else if(data[i]>=224 && data[i]<240){
            bytes=2;
            while(i+1<data.size() && bytes){
                i++;
                if(data[i] < 128) return false;
                bytes--;
            }
        }
        // 2 bytes
        else if(data[i]>=192 && data[i]<224){
            bytes=1;
            while(i+1<data.size() && bytes){
                i++;
                if(data[i] < 128) return false;
                bytes--;
            }
        }
        else return false;
        if(bytes) return false;
    }
    return true;
}
};