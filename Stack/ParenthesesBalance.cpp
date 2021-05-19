class Solution
{
    public:
    
    bool parenthesisCheck(char a, char b){
        if((a == ')' && b == '(') || (a == ']' && b == '[') || (a == '}' && b == '{')){
            return false;
        }
        else return true;
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        int len = x.length();
        for(int i = 0; i < len; i++){
            if(x[i] == '(' || x[i] == '[' || x[i] == '{'){
                s.push(x[i]);
            }
            else{
                if(s.empty()){
                    return false;
                }
                else if(parenthesisCheck(x[i], s.top())){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty() == true){
            return true;
        }
    }

};
