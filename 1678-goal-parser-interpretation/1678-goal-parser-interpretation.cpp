
class Solution {
public:
    string interpret(string command) {
        int s = command.size()-1;
        string ans,ans1;
        for(int i=0; i< command.size(); i++){
            if( command[i] == '(' && command[i+1] == ')'){
                command[i]= 'o';
                command[i+1]=' ';
                ans=command;
                
            }
            else{
               if(command[i] == '(' && command[i+1] != ')')
               {
                   command[i] = ' ';
                   ans=command;
                   
               }
                else if(command[i] == ')' && (command[i+1] != ')' || command[i+1]== '(')){
                    command[i] = ' ';
                   ans=command;
                }
                else if(command[s] == '(' || command[s] == ')') {
            
                    ans = command;
                }
                else{
                    ans=command;
                }
            
            }
        }
         ans.erase(remove(ans.begin(), ans.end(), ' '), ans.end());
        return ans;
    }
          
};