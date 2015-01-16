int count(int n, int d){
  int res=0;
  while(n){
    if(n%10==d)
      ++res;
    n=n/10;
  }
  return res;
}

pair<int,int> bookPage(int d, int k){
  pair<int,int> res;
  int i=1, cnt=0;
  while(cnt<k){
    cnt+=count(i,d);
    ++i;
  }
  res.first=i==1?1:i-1;
  while(count(i,d)==0)
    ++i;
  res.second=i-1;
  return res;
}
