class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
                str+="[.]";
            else
            {
                string temp(1,address[i]);
                str = str+temp;
            }   
        }
        return str;
    }
};