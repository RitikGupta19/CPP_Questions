
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int computeRes(int o1, int o2, int op){
        if(op == '+'){
            return o2 + o1;
        } 
        if(op == '-'){
            return o2 - o1;
        } 
        if(op == '*'){
            return o2 * o1;
        } 
        if(op == '/'){
            return o2 / o1;
        } 
    }
    
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] != '+' && s[i] != '*' && s[i] != '-' && s[i] != '/' ){
                st.push(s[i] - '0');
            }
            else {
                int op1 = st.top();
                st.pop();
                int op2 = st.top();  
                st.pop();
                int res = computeRes(op1, op2, s[i]);
                st.push(res);
            }
        }
        return st.top();
    }
