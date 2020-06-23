class Solution {
public:
    string validIPAddress(string str) {
        if(count(str.begin(),str.end(),'.')==3)
    {
        if(str[str.size()-1]=='.')
            return "Neither";
        stringstream s(str);
        string token;
        while(getline(s,token,'.'))
        {
            if(token.length()==0||token.length()>3)
                return "Neither";
            if(token[0]=='0'&&token.length()!=1)
                return "Neither";
            for(char c:token)
                if(!isdigit(c)) return "Neither";
            if(stoi(token)>255)
                return "Neither";
        }
        return "IPv4";
    }
    else if(count(str.begin(),str.end(),':')==7)
    {
        if(str[str.size()-1]==':')
            return "Neither";
        stringstream s(str);
        string token;
        while(getline(s,token,':'))
        {
            if(token.length()==0||token.length()>4)
                return "Neither";
            for(char c:token)
                if(!isxdigit(c)) return "Neither";

        }
        return "IPv6";
    }
    return "Neither";
        
    }
};
