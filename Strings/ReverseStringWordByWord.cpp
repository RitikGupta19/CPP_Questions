void rev(string &s, int l,int h){
    char temp;
    while(l<h){
        temp = s[l];
        s[l] = s[h];
        s[h] = temp;
        l++;h--;
    }
}
//Function to reverse words in a given string.
string reverseWords(string S) 
{ 
    // word reversal    
    int j=0;
    for(int i=0 ; i<=S.size(); i++){
        if(S[i]=='.' || S[i] == '\0'){
            rev(S,j,i-1);
            j=i+1;
        }
    }
    reverse(S.begin(),S.end());
    return S;
} 
