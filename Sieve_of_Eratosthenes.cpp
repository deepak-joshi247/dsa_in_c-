  int countPrimes(int n)
    {
        if (n <= 2)
        { return 0;} // Safeguard for small n
        int count = 0;
        vector<int> prime (n,true); // a vector which has all n element and are considered prime 
        prime[0] = prime[1] = false;   // so that it dont take in 0 and 1
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count ++;
                for(int j=(i+i); j<n ; j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        return count ;
    }
