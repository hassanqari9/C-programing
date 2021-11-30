int main()
{
    char str[1000];
    int i;
  
    printf("Enter the String: ");
    scanf("%s", str);
  
    for (i = 0; str[i] != '\0'; ++i);
  
    for(int j =i; j >=0 ; j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}
