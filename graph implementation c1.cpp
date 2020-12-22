//graph theory



//n=no of nodes
//m=no of edges

vector<int>arr[n+1];

while(m--)
{
  cin>>a>>b;
  arr[a].push_back(b);int 
  arr[b].push_back(a);
} 




//depth first search

void dfs(int v)
{
  vis[v]=1;
  cout<<v<<"->";
  for(int child : arr[v])
  {
    if(vis[child]==0)
	{
	  dfs(child);
	} 
  }
}




//connected components

int main()
{
  .....
  .....
  int cc_count=0;
  for(int i=1;i<n;i++)
  {
    if(vis[i]==0)
	{
	  dfs(i);
	  cc_count++;
	}
  }	
  cout<<cc_count<<endl;
  
 }
  
  
 //hackerearth connected components in graph
 
 /*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";


ll vis[100001];
vector<ll>arr[100001];

void dfs(ll v)
{
	vis[v]=1;
	for(ll child : arr[v])
	{
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,m;
  cin>>n>>m;
  //vector<int>arr[n+1];
  while(m--)
  {
	  ll a,b;
	  cin>>a>>b;
	  arr[a].push_back(b);
	  arr[b].push_back(a);
  }

  int cc_count=0;
  fk(i,1,n+1)
  {
	  if(vis[i]==0)
	  {
	    dfs(i);
	    cc_count++;
	  }
  }
  cout<<cc_count;
  
  return 0;
}

  
//single shortest path using tree
link:-https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/

/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

ll vis[1001],dist[1001];
vector<ll>ar[1001]; 

void dfs(ll v,ll d)
{
  vis[v]=1;
  dist[v]=d;
  for(ll child:ar[v])
  {
    if(vis[child]==0)
    {
      dfs(child,dist[child]+1);
    }
  }
}  




int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n;
  cin>>n;
  fk(i,1,n)
  {
    ll a,b;
	cin>>a>>b;
    ar[a].push_back(b);
	ar[b].push_back(a);
  }
  dfs(1,0);
  ll no_of_city;
  cin>>no_of_city;
  ll ans=-1,min=INT8_MAX;
  while(no_of_city--) 
  {
    ll city;
	cin>>city;
	if(dist[city]<min)
	{
	  min=dist[city],ans=city;
	}
    else if(dist[city]==min and city<ans)
    {
	  ans=city;
	}	
	
  
  }
  cout<<ans;

  return 0;
}
 
 
//is it a tree-SPOJ
// https://www.spoj.com/problems/PT07Y/
//SOLUTION
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

ll vis[100001];
vector<ll>arr[200001];

void dfs(ll node)
{
	vis[node]=1;
	for(ll child:arr[node])
	{
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,m;
  cin>>n>>m;
  ll m1=m;
  while(m1--)
  {
  	ll a,b;
  	cin>>a>>b;
  	arr[a].push_back(b);
  	arr[b].push_back(a);
  }
  //dfs(1);
  ll cc=0;
  for(ll i=1;i<=n;i++)
  {
  	if(vis[i]==0)
  	{
  		dfs(i);
  		cc++;
  	}
  }
  if(cc==1 and m==n-1)
  {
  	cout<<A;
  }
  else
  {
  	cout<<B;
  }
  


  return 0;
}

 

//Bipartite GRAph TEST
https://www.spoj.com/problems/BUGLIFE/
//solution
/*..........un->professionaL..........*/
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

vector<ll>arr[2002];
ll vis[2002];
ll c[2002];


bool dfs(ll node,ll colour)
{
  vis[node]=1;
  c[node]=colour;
  for(ll child:arr[node])
  {
    if(vis[child]==0)
	{
	  bool res=dfs(child,colour^1);
	  if(res==false)
	  {
	    return false;
	  }
	}
    else
    {
      if(c[child]==c[node])
      {
        return false;
      }		
	}
   }
   return true;
}   

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  for(ll tc=1;tc<=t;tc++)
  {
    ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
	  arr[i].clear();
	  vis[i]=0;
	}
	while(m--)
	{  
	  ll a,b;
	  cin>>a>>b;
	  arr[a].pb(b);
	  arr[b].pb(a);
	}
	bool flag=true;
	for(ll i=1;i<=n;i++)
	{
	  if(vis[i]==0)
	  {
	    bool ans=dfs(i,0);
		if(ans==false)
		{
		  flag=false;
		  //break;
		}
	  }	
	}
	cout<<"Scenario #"<<tc<<":"<<endl;
	if(flag==false)
	{
	  cout<<"Suspicious bugs found!"<<endl;
	}
	else
	{
	  cout<<"No suspicious bugs found!"<<endl;
	}
  }
  return 0;
}


//Cycle Detection in GRAPH using DFS
//algorithm

bool dfs(ll node,ll par)
{
  vis[node]=1;
  for(ll child:arr[node])
  {
    if(vis[child]==0)
	{ 
	  if(!dfs(child,node)==true)
	  { 
	    return true;
      }
	  else
	  {
	    if(child!=par)
		{ 
		  retun true;
		}
      }
	}
   }
   return false;  
}




//The IN OUT TIME
//algo
int timer=1;
bool dfs(int v)
{
  vis[v]=1;
  in[v]=timer++;
  for(int child:arr[v])
  {
    if(vis[child]==0)
	{
	  dfs(child)
	}  
  }
  out[v]=timer++;  
}


//practice problem
//codechef
https://www.codechef.com/problems/FIRESC

code:-
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";



ll vis[100001];
vector<ll>arr[100001];
ll cc_count;

void dfs(ll node)
{
   vis[node]=1;
   cc_count++;
   for(ll child:arr[node])
   {
       if(vis[child]==0)
       {
            dfs(child);
       }
   }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,m;
      cin>>n>>m;
      fk(i,0,n)
      {
          vis[i]=0;
          arr[i].clear();
      }
      fk(i,1,m+1)
      {
          ll a,b;
          cin>>a>>b;
          arr[a].push_back(b);
          arr[b].push_back(a);
      }
      ll count=0;
      ll res=1;
      fk(i,1,n+1)
      {
          if(vis[i]==0)
          {
              cc_count=0;
              dfs(i);
              count++;
              //res=(res*cc_count)%mod;
              res=((res%1000000007)*(cc_count%1000000007))%1000000007;
          }
      }
      cout<<count<<" "<<res<<endl;
  }
  

  return 0;
}



//finding diameter of tree
//diameter of tree- longest path between any two node in a tree.
//better approach-take any arbitrary node as a root  node and find
// the farthest distance from that node and let this node be x and 
//now take x as an root node and find the length of the farthest node
//from that node and that will be answer.
//algorithm
//link:https://www.spoj.com/problems/PT07Z/
///*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";


ll vis[100001];
vector<ll>arr[100001];
ll maxnode,maxd;

void dfs(ll node,ll d)
{
	vis[node]=1;
	if(d>maxd)
	{
		maxnode=node;
		maxd=d;
	}
	for(ll child:arr[node])
	{
		if(vis[child]==0)
		{
			dfs(child,d+1);
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n;
     cin>>n;
     fk(i,1,n)
     {
     	ll a,b;
     	cin>>a>>b;
     	arr[a].pb(b);
     	arr[b].pb(a);
     }
     maxd=-1;
     dfs(1,0);
     fk(i,1,n+1)
     {
     	vis[i]=0;
     	//arr[i].clear();
     }
     maxd=-1;
     dfs(maxnode,0);
     cout<<maxd<<endl;
  


  return 0;
}


//sub-tree size of node
//algorithm
/*..........unprofessionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";


vector<ll>arr[100001];
ll vis[100001];
ll size[100001];

int dfs(ll node)
{
  vis[node]=1;
  ll curr=1;
  
  for(ll child:arr[node])
  {
  	if(vis[child]==0)
  	{
       curr+=dfs(child);
  	}
  }
  
  return size[node]=curr;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n;
  cin>>n;
  fk(i,1,n)
  {
    ll a,b;
	cin>>a>>b;
    arr[a].pb(b);
	arr[b].pb(a);
  }
  dfs(1);
  
  fk(i,1,n+1)
  {
    cout<<i<<" "<<size[i]<<endl;
  }
  return 0;
}


//Breadth first search
//single source shortest path
//algorithm
//link-https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";


vector<ll>arr[100001];
ll vis[100001];
ll dist[100001];

void bfs(ll src)
{
  queue<ll>q;
  q.push(src);
  vis[src]=1;
  dist[src]=0;

  while(!q.empty())
  {
    ll curr=q.front();
	q.pop();
	for(ll child:arr[curr])
	{
	  if(vis[child]==0)
	  {
	    q.push(child);
		dist[child]=dist[curr]+1;
		vis[child]=1;
	  }
	}
  }
}  
	 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  while(t--)
  {
     ll n,m;
	 cin>>n>>m;
     fk(i,1,n+1)
	 {
	   vis[i]=0;
	   arr[i].clear();
	   //dist[i].clear();
	 }
	 
	 //ll n,m;
     //cin>>n>>m;
     vector<ll>a(n)  ;
     fk(i,1,m+1)
     {
	    ll a,b;
        cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
     }
	 bfs(1);
	 
	 cout<<dist[n]<<endl;



  }


  return 0;
}


//prime path(spoj)
//algorithm
//link-https://www.spoj.com/problems/PPATH/
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

vector<ll>arr[100001];
vector<ll>primes;
int dist[10001],vis[10001];

bool ispossible(ll a,ll b)
{
	ll count=0;
	while(a>0)
    {
    	if(a%10!=b%10)
    	{
    	    count++;
    	}
    	a/=10;
    	b/=10;
    }
    if(count==1)
    {
    	return true;
    }
    return false;
}
bool isprime(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void buildgraph()
{
	fk(i,1000,10000)
	{
		if(isprime(i))
		{
			primes.push_back(i);
			for(ll i=0;i<primes.size();i++)
			{
				for(ll j=i+1;j<primes.size();j++)
				{
					ll a=primes[i];
					ll b=primes[j];
					if(ispossible(a,b))
					{
						arr[a].pb(b);
						arr[b].pb(a);
					}	
				}
			}
		}
	}
}




void bfs(ll src)
{
	queue<ll>q;
	q.push(src);
	vis[src]=1;
	dist[src]=0;
	while(!q.empty())
	{
		queue<ll>q;
		ll cur=q.front();
		q.pop();
		for(ll child:arr[cur])
		{
			if(vis[child]==0)
			{
				vis[child]=1;
		        dist[child]=dist[cur]+1;
				q.push(child);
			}
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  buildgraph();
  while(t--)
  {
     ll a,b;
     cin>>a>>b;
     fk(i,1000,10000)
     {
     	dist[i]=-1;
     	vis[i]=0;
     	arr[i].clear();
     }
     //buildgraph(a,b);
     bfs(a);
     if(dist[b]==-1)
     {
     	cout<<"Impossible"<<endl;
     }
     else
     {
     	cout<<dist[b]<<endl;
     }
  }
  return 0;
}


//problem for connected components and dfs//
//link-https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/
//solution:-
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define vl vector<ll>
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

vl arr[1000001];
ll vis[1000001]; 
ll cc[1000001];
ll cc_co;

void dfs(ll node)
{
  vis[node]=1;
  cc[node]=cc_co;
  for(ll child:arr[node])
  {
    if(vis[child]==0)
	{ 
      dfs(child);	
	}
  }	
}  


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin>>t;
  
  while(t--)
  {
     cc_co=0;
     ll n,k;
	 cin>>n>>k;
	 for(ll i=1;i<=n;i++)
	 {
	   vis[i]=0;
	   arr[i].clear();
	 }
     ll a,b;
	 string op;
	 vector<pair<ll,ll>>v;
     for(ll i=1;i<=k;i++)
     {
       cin>>a>>op>>b;
	   if(op=="=")
	   {
	     arr[a].pb(b);
		 arr[b].pb(a);
	    }
       else
	   {
	     v.pb({a,b});
	   }
     }
	 bool flag=true;
	 //ll cc_co=0;
	 for(ll i=1;i<=n;i++)
	 {
	   if(vis[i]==0)
	   {
	     cc_co++;
	     dfs(i);
	   }
	 }
     for(ll i=0;i<v.size();i++)
     {
	   a=v[i].first;
	   b=v[i].second;
	   if(cc[a]==cc[b])
	   {
	     flag=false;
		 break;
	   }
	 }
     if(flag==true)
     {
	   cout<<"YES"<<endl;

     }	 
	 else
	 {
	   cout<<"NO"<<endl;
	 }
	   
       	   



  }


  return 0;
}

//algorithm
//solution
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

vl arr[1000001];
ll vis[1000001];
ll level[10000001];
ll dist[10000001];
ll curr;

void bfs(ll src)
{
	queue<ll>q;
	q.push(src);
	vis[src]=1;
	dist[src]=0;
	while(!q.empty())
	{
		ll curr=q.front();
		q.pop();
		for(ll child:arr[curr]) 
		{
			if(vis[child]==0)
			{
			    //q.push(child);
			    dist[child]=dist[curr]+1;
			    q.push(child);
			    vis[child]=1;
			    level[dist[child]]+v+;
			}
		}
	}
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,m,a,b,q,src,d;
  cin>>n>>m;
  for(ll i=1;i<=m;i++)
  {
  	cin>>a>>b;
  	arr[a].pb(b);
  	arr[b].pb(a);
  }
  cin>>q;
  while(q--)
  {
  	for(ll i=1;i<=n;i++)
  	{
  		vis[i]=0;
  		level[i]=0;
  	}
  	cin>>src>>d;
  	bfs(src);
  	/*
  	for(ll i=1;i<=n;i++)
  	{
  		cout<<dist[i]<<" ";
  		
  	}
  	cout<<endl;
  	
  	for(ll i=1;i<=n;i++)
  	{
  		cout<<level[i]<<" ";
  		
  	}
  	cout<<endl;
  	*/
  	cout<<level[d]<<endl;
  }
  //bfs(1);
  /*
  
  for(ll i=1;i<=n;i++)
  {
  	cout<<dist[i]<<" ";
  }
  */
  return 0;
}


//Bridges Graph
//solution || algorithm
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

vector<ll>arr[101];
ll vis[101];
ll low[101];
ll in[101];
ll timer;
ll count;

void dfs(ll node,ll par)
{
	vis[node]=1;
	low[node]=in[node]=timer;
	timer++;
	
	for(ll child:arr[node])
	{
		if(child==par)
		{
			continue;
		}
		if(vis[child]==1)
		{
			//this node is back-edge..
			low[node]=min(low[node],in[child]);
		}
		else
		{
			//this node is a forward edge...
			dfs(child,node);
			if(low[child]>in[node])
			{
				cout<<node<<" - "<<child<<" is a bridge"<<endl;
				//count++;
				low[node]=min(low[child],low[node]);
			}
			 
		}
	}
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n,m,a,b;
  ll count=0;
  cin>>n>>m;
  while(m--)
  {
  	cin>>a>>b;
  	arr[a].pb(b);
  	arr[b].pb(a);
  
 }
 
 
 //ARTICULATION POINTS
 //link-https://www.spoj.com/problems/SUBMERGE/
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";
  
  vector<ll>arr[1001];
  ll in[1001];
  ll vis[1001];
  ll low[1001];
  ll timer;
  set<ll>AP;
  
  void dfs(ll node,ll par)
  {
  	vis[node]=1;
  	in[node]=low[node]=timer++;
  	ll child_count=0;
  	for(ll child:arr[node])
  	{
  		if(child==par)
  		{
  			continue;
  		}
  		if(vis[child]==1)
  		{
  			low[node]=min(low[node],in[child]);
  		}
  		else
  		{
  			dfs(child,node);
  			child_count++;
  			low[node]=min(low[node],low[child]);
  			if(in[node]<=low[child] and par!=-1)
  			{
  				AP.insert(node);
  			}
  		}
  		
  		if(par==-1 and child_count>1)
  		{
  			AP.insert(node);
  		}
  	}	
  
  }
  
  
	int main()
	{
	  ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
	  cout.tie(NULL);

	  while(1)
	  {
	  	ll n,m,a,b;
	    cin>>n>>m;
	    if(n==0 || m==0)
	    {
	    	break;
	    }
	    fk(i,1,n+1)
	    {
	  	  arr.clear();
	  	  vis[i]=0;
	  	  AP.clear();
	  	  timer=1;
	    }
  	    while(m--)
  		{
	  		cin>>a>>b;
	  		arr[a].pb(b);
	  		arr[b].pb(a);
	  	}
	  	
		  fk(i,1,n+1)
		  {
		  	if(vis[i]==0)
		  	{
		  		dfs(i,-1);
		  	}
		  }
		  cout<<AP.size()<<endl;
    } 
	  
  
  


  return 0;
}

//topologiacal sorting
//kahns algo
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

  vector<ll>arr[1001];
  ll in[1001];
  vector<ll>res;
  
  void kahn(ll n)
  {
    queue<ll>q;
    fk(i,1,n+1)
    {
    	if(in[i]==0)
    	{
    		q.push(i);
    	}
    }
    
    while(!q.empty())
    {
    	ll cur=q.front();
    	res.pb(cur);
    	q.pop();
    	for(ll node:arr[cur])
    	{
    		in[node]--;
    		if(in[node]==0)
    		{
    			q.push(node);
    		}
    	}
    }
    for(ll node:res)
    {
    	cout<<node<<" ";
    }
  }


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  ll n,m;
  cin>>n>>m;
  while(m--)
  {
  	ll a,b;
  	arr[a].pb(b);
  	in[b]++;
  }
  kahn(n);
  return 0;
}

//using kahn algo...
//https://www.spoj.com/problems/TOPOSORT/
//topological sorting
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
vi ar[10001];
int in[10001];
vi res;
 
bool Kahns(int n)
{
	priority_queue<int,vi,greater<int> > pq;
 
	REP(i , n) if(in[i] == 0) pq.push(i);
 
	while(!pq.empty())
	{
		int curr = pq.top();
		res.pb(curr);
		pq.pop();
 
		for(int child : ar[curr])
		{
			in[child]--;
			if(in[child] == 0)
			pq.push(child);
		}
	}
 
	return res.size() == n;
}
 
int main()
{
	int n , x , y , m;
	cin>>n>>m;
 
	REP(i , m) cin>>x>>y , ar[x].pb(y) , in[y]++;
 
	if(!Kahns(n))
	cout<<"Sandro fails.";
	else
	{
		for(int node : res)
		cout<<node<<" ";
	}
}

//Applying DFS on a grid
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

ll n,m;
ll vis[1001][1001];

bool isvalid(int x,int y)
{
	if(x<1 || x>n || y<1 || y>n)
	{
		return false;
	}
	if(vis[x][y]==1)
	{
		return false;
	}
	return true;
}




ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};

void dfs(int x,int y)
{
	vis[x][y]=1;
	cout<<x<<" "<<y<<endl;
	for(int i=1;i<=4;i++)
	{
		if(isvalid(x+dx[i],y+dy[i]))
		{
			dfs(x+dx[i],y+dy[i]);
		}
	}
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n>>m;
  dfs(1,1);
  


  return 0;
}

//input 3 3
/*
1 1
1 2
1 3
2 3
3 3
3 2
3 1
2 2
2 1
*/


//connected components in 2d grid
/*..........un->professionaL..........*/
 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";
 
ll n,m;
ll grid[1001][1001];
ll vis[1001][1001];
 
bool isvalid(int x,int y)
{
	if(x<1 || x>n || y<1 || y>n)
	{
		return false;
	}
	if(vis[x][y]==1 || grid[x][y]==0)
	{
		return false;
	}
	return true;
}
 
 
 
 
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
 
void dfs(int x,int y)
{
	vis[x][y]=1;
	//cout<<x<<" "<<y<<endl;
	for(int i=1;i<=4;i++)
	{
		if(isvalid(x+dx[i],y+dy[i]))
		{
			dfs(x+dx[i],y+dy[i]);
		}
	}
}
 
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  cin>>n>>m;
  
  fk(i,1,n+1)
  {
  	fk(j,1,m+1)
  	{
  		cin>>grid[i][j];
  	}
  }
  
  ll cc=0;
  fk(i,1,n+1)
  {
  	fk(j,1,m+1)
  	{
  		if(grid[i][j]==1 and vis[i][j]==0)
  		{
  			dfs(i,j);
  			cc++;
  		}
  	}
  }
  cout<<cc<<endl;
 
 
  return 0;
}

/*
input-
6 6
0 0 1 0 1 1
0 1 1 0 0 1
0 1 0 0 0 0
1 0 1 1 0 0
0 0 0 1 0 0
0 1 1 0 1 1

output-
6
*/


//CSES link-https://cses.fi/problemset/task/1192/
/*..........un->professionaL..........*/
 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";
 
ll n,m;
char rooms[1001][1001];
bool vis[1001][1001];
 
bool isvalid(ll x,ll y)
{
	if(x<1 || x>n || y<1 || y>m)
	{
		return false;
	}
	if(vis[x][y]==true || rooms[x][y]=='#')
	{
		return false;
	}
	return true;
}
 
 
 
 
//ll dx[]={-1,0,1,0};
//ll dy[]={0,1,0,-1};
 
void dfs(int x,int y)
{
	vis[x][y]=true;
	if(isvalid(x-1,y))
  {
    dfs(x-1,y);
  }
  else if(isvalid(x,y+1))
  {
    dfs(x,y+1);
  }
  else if(isvalid(x+1,y))
  {
    dfs(x+1,y);
  }
  else if(isvalid(x,y-1))
  {
    dfs(x,y-1);
  }

}
 
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  cin>>n>>m;
  
  fk(i,1,n+1)
  {
  	fk(j,1,m+1)
  	{
  		cin>>rooms[i][j];
  	}
  }
  
  ll cc=0;
  fk(i,1,n+1)
  {
  	fk(j,1,m+1)
  	{
  		if(rooms[i][j]=='.' and vis[i][j]==false)
  		{
  			dfs(i,j);
  			cc++;
  		}
  	}
  }
  cout<<cc<<endl;
 
 
  return 0;
}




//bfs on 2d grid
/*..........un->professionaL..........*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
string A="YES";
string B="NO";

ll vis[1001][1001];
ll dist[1001][1001];
ll n,m;


bool isvalid(ll x,ll y)
{
	if(x<1 || x>n || y<1 || y>m)
	{
		return false;
	}
	if(vis[x][y]==1)
	{
		return false;
	}
	return  true;
}

ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
void bfs(ll x,ll y)
{
	queue<pair<ll,ll>>q;
	q.push({x,y});
	vis[x][y]=1;
	dist[x][y]=0;
	
	while(!q.empty())
	{
		ll cx=q.front().first;
		ll cy=q.front().second;
		q.pop();
		
		for(ll i=0;i<4;i++)
		{
			ll nx=cx+dx[i];
			ll ny=cy+dy[i];
			if(isvalid(nx,ny))
			{
				dist[nx][ny]=dist[cx][cy]+1;
				q.push({nx,ny});
				vis[nx][ny]=1;
			}
		}
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			cout<<dist[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n>>m;
  int x,y;
  cin>>x>>y;
  bfs(x,y);
  
  return 0;
}


