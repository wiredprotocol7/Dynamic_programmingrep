
long long int countrecur(long long int n, long long int min)
{   
    if (n==0)
    {
        return 1;     
    }
    else if(n<0)
    {
        return 0;
    }
    else 
    {
        long long int ans=0;
        if(min<=3)
        {ans+=countrecur(n-3,3);}
        //cout<<"fp"<<endl;
        if(min<=5)
        {ans+=countrecur(n-5,5);}
        if(min<=10)
        {ans+=countrecur(n-10,10);}
        return ans;
    }

}
long long int count(long long int n)
{  
    
   return countrecur(n,0);
}

//Link: https://stackoverflow.com/a/37850446/9380247


//Method 2:
long long int countrecur(long long int n, vector<int> &list, int curr=0)
{   
    if (n==0)
        return 1;     
    else if(n<0)
        return 0;
    else 
    {
        long long int ans=0;

       for (int i=curr;i<list.size();i++ )
       {
           ans+=countrecur(n-list[i],list,i);
       }
       return ans;
    }

}
