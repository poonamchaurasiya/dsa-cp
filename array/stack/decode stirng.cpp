#include<iostream>
string decodeString(string s) {
    stack<char> st;
    for (char c : s) {
        if (c != ']') {
            st.push(c);
        } else {
            string decoded = "";
            while (!st.empty() && st.top() != '[') {
                decoded = st.top() + decoded;
                st.pop();
            }
            st.pop(); // Pop the '['
            string countStr = "";
            while (!st.empty() && isdigit(st.top())) {
                countStr = st.top() + countStr;
                st.pop();
            }
            int count = stoi(countStr);
            string expanded = "";
            for (int i = 0; i < count; i++) {
                expanded += decoded;
            }
            for (char ch : expanded) {
                st.push(ch);
            }
        }
    }
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    return result;
}