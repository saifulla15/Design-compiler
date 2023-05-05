    else if(isdigit(b[i]))
	{
        m=(b[i]-'0');
        i=i+1;
        while(isdigit(b[i]))
		{
            m=m*10 + (b[i]-'0');
            i++;
        }
        i=i-1;
        constants[cc]=m;
        cc++;
    }
     else
	 {
        if(b[i]=='*'){
            operators[oc]='*';
            oc++;
        }
        else if(b[i]=='-')
		{
            operators[oc]='-';
            oc++;
        }
        else if(b[i]=='+')
		{
            operators[oc]='+';
            oc++;
        }
         else if(b[i]=='=')
		 {
            operators[oc]='=';
            oc++;
        }
  }
}
    printf(" identifiers : ");
     for(j=0;j<ic;j++){
        printf("%c ",identifiers[j]);
     }
    printf("\n constants : ");
     for(j=0;j<cc;j++){
        printf("%d ",constants[j]);
     }
    printf("\n operators : ");
      for(j=0;j<oc;j++){
        printf("%c ",operators[j]);
      }
      return 0;
}
