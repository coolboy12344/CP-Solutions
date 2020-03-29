int maximizeNumberRoundness(int n) {

while(n%10 == 0)
{
    n = n / 10 ;
}

string  s = to_string(n);

for(int i=0; i<s.length(); i++)
{
    if(s[i] != '0') s[i] = '1';
}

string copy = s ;

int size = s.length();
for (int step = 0; step < size - 1; ++step)
{
    for (int i = 0; i < size - step - 1; ++i)
    {
      // To sort in descending order, change > to < in this line.
      if (s[i] < s[i + 1])
      {
        int temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
      }
    }
}

//cout << copy << " | " << s;

int ans = 0 ;
for(int i=0; i<s.length(); i++)
{
    if(s[i] != copy[i]) ans++;
}

return ans/2;

}
