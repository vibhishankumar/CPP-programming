class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            st.push(word);
        }
        string res="";
        while(st.size()>1)
        {
            res+=st.top();
            st.pop();
            res+=' ';
        }
       // trim(res);
        res+=st.top();
        return res;
    }
};

// "the sky is blue"
// o/p "blue is sky the"
