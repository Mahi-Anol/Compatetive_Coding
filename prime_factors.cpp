 prime fact
      pcout<<"VAlue of gun is "<<gun<<endl;

      vector<pair<int,int>>pf;
       
      for(int i=2;i*i<=gun;i++)
      {
            int cnt=0;
            if(gun%i==0)
            {
                while(gun%i==0)
                {
                    cnt++;
                    gun/=i;

                }

                if(cnt)
                {
                    pf.push_back(make_pair(i,cnt));
                }
            }
      }

      if(gun>0)pf.push_back(make_pair(gun,1));
