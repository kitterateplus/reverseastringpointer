//pass the address of the first element in the array to the function
// Example :char str[100]={"string"};
// Example :revstrptr(&str[0]);

void revstrptr(char *str1){
     
     int i=0,j=0;
     char ch;
     
     for(i=0;*(str1+i)!='\0';i++);
     i=i-1;
            for(j=0;j<=i/2;j++){
                  ch = *(str1+j);
                  *(str1+j) = *(str1+(i-j));
                  *(str1+(i-j))=ch;
                  }  
} 
