class Solution {
public:
    bool isFascinating(int n) {
        string s;
        int n2=2*n;
        int n3=3*n;
        s=to_string(n)+to_string(n2)+to_string(n3);
        set<char>st;
        if(s.length()!=9)
        return false;
        for(int i=0;i<s.length();i++){
            st.insert(s[i]);
        }
        if(st.find('0')!=st.end())
        return false;
        for(char i='1';i<='9';i++){
            if(st.find(i)==st.end())
            return false;
        }
        return true;
    }
};