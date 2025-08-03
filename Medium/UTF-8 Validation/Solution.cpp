class Solution {
public:
bool validUtf8(vector<int> &data) {
    int bytes=0;
    int firstBit = 1 << 7;
    int secondBit = 1 << 6;
    
    for(int i=0;i<data.size();i++){
        if(!bytes){
            int tmpMask = 1 << 7;
            while( data[i] & tmpMask){
                bytes++;
                tmpMask = tmpMask >> 1;
            }
            if(!bytes) continue;
            if(bytes > 4 || bytes==1) return false;
        }
        else{
            if(!((data[i] & firstBit) && !(data[i] & secondBit))) return false;
        }
        bytes--;
    }
    return !bytes;
}
};