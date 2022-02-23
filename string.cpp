#include <bits/stdc++.h>
using namespace std;

int main()
 {    
    string s;
    cin>>s;
    // cout<<(int)s[s.size()-1];
    //this case it will print the asci value of the number 
    //but i require only the numerical value

    int last_digit=s[s.size()-1]-'0';
    //just minus it from '0' ascii value
    cout<<last_digit;
    
    
    
    
    
    
    
    
    
    
    
    
    //  string str;
    //  cout<<"Enter the string"<<endl;
    //  cin>>str;
    //  cout<<endl;
    //  int len=str.length();
    //  int half=len/2;
    //  int flag;
    // for(int i=0;i<half;i++){
    //     flag=0;
    //     if(str[i]==str[len-i-1]){
    //         flag=1;
    //     }
    // }
    // if(flag==1){
    //     cout<<"Yes the string is palindrome";
    // }  
    // else{
    //     cout<<"Not a palindrome";
    // }   














// for(int i=str.length()-1; i>=0 ;--i){
//     // str_rev=str_rev+str[i]; 
     /*  the above statement should not
      written as it is adding a character to the string 
      second reason due to the time complexity and     
         as s.push_back('a') has a TC of O(1)
         but when we write  s=s+'a'
         has atime complixitty of O(s.size)

         this time complixity only depends upon the size of the string                 
                           */
//      str_rev.push_back(str[i]);
// }
//       cout<<'\n';  
//      cout<<str_rev<<endl;
//      if(str==str_rev){
//          cout<<"Yes it is a palindrome";
//      }
//      else{
//          cout<<"No";
//      }










 // int t;
//     cin>>t;
//     cin.ignore();//isme kya hoga ki jo number
//      //enter karne ke baaad jo newline by default leta tha 
//      //wo nhi hone dega

//     while(t--){
//         string s;
//         getline(cin,s);
//         cout<<s<<endl;
//     }      
 
 
  
    
    








//     string str1 ,str2;
//    getline(cin,str1);
//    getline(cin,str2);
//    cout<<str1<<endl;
//    cout<<str2<<endl;
    
    //   for(int i=0;i<str.length();i++){
    //         cout<<str[i]<<endl;
     //   }
    // str[0]='A';//string assigned is not possible in this intialization
    // string str2 = "Hello";
    // string result = str + str2;
    // if (str == str2)
    // {
    //     cout << "equal string";
    // }
    // else
    // {
    //     cout << "Not a equal string";
    // }

   
   
   
   
   
    //  cout<<result;
    //     cout<<str<<endl;
    //     string str2;
    //     cout<<"Enter the name"<<endl;
    //     cin>>str2;
    //      cout<<str<<str2<<endl;
}