#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int preority(char ch) {
    if (ch == '^') return 3;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '+' || ch == '-') return 1;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char ch : infix) {
        if (isdigit(ch) || isalpha(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
           while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); 
        }
        else {
            while (!st.empty() && preority(st.top()) >= preority(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix = "A+B*C";

    cout << "Example: Infix expression = " << infix << endl;
    cout << "Postfix expression = " << infixToPostfix(infix) << endl;


    return 0;
}