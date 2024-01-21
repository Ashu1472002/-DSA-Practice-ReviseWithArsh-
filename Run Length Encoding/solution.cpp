string encode(string src)
{     
  //Your code here 
  int cnt = 0;
  int i = 0;
  string ans;
  int len = src.length();
  
  while(i < len){
      char temp = src[i];
      ans += temp;
      while(src[i] == temp){
          cnt++;
          i++;
      }
      ans += to_string(cnt);
      cnt=0;
  }
  return ans;
}    
