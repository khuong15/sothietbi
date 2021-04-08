/*Hàm tính số công tắc có trao đổi thông tin với bộ điều khiển trung tâm trong thời gian Log.*/
void soThietBi(char *str){
    struct diachi dch[20];
    int j = 0;
    const char c[5] = "\n";
    char *token;
    token = strtok(str, c);
    int num = 0;
    while( token != NULL )
   {
      char *str1;
      str1 = strstr(token, "set");
      if(str1 != NULL){
        char *str2;
        str2 = strstr(str1, "-");
        char dc[5];
        for(int i = 1;i <= 4; i++){
            dc[i - 1] = str2[i];
        }
        strcpy( dch[j].dc, dc);
        j++;
      }
      token = strtok(NULL, c);
   }

   int count = 0;
   char mau[] = "";
   for(int i = 0;i < j; i++){
    if(strcmp(mau, dch[i].dc) != 0){
         strcpy(mau, dch[i].dc);
         ++count;
         printf("Thiet bi %d co dia chi la: NWK - %s, ENDPOINT - 1\n",
                count,mau);
    }
   }
}