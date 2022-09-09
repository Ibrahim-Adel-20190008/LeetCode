class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int sizea= a.size(), sizeb= b.size(),rem=0;
        while(sizea && sizeb){
            sizea--;
            sizeb--;
            if(a[sizea]==b[sizeb] && a[sizea]=='1'){
                result+= to_string(rem);
                rem=1;
            }
            
            else if(a[sizea]==b[sizeb] && a[sizea]=='0'){
                result+= to_string(rem);
                rem=0;
            }
            
            else{
                result+= rem==1?"0":"1";
            }
        }
        while(sizea){
            sizea--;
            if(rem && a[sizea]=='1') result+= "0";
            else if(rem && a[sizea]=='0') result+= to_string(rem--);
            else result+=a[sizea];
        }
        while(sizeb){
            sizeb--;
            if(rem && b[sizeb]=='1') result+= "0";
            else if(rem && b[sizeb]=='0') result+= to_string(rem--);
            else result+=b[sizeb];
        }
        if(rem) result+="1";
        reverse(result.begin(),result.end());
        return result;
    }
};