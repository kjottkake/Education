void readText(const char prompt[], char text[]);

void readText(const char prompt[], char text[]){
    printf("\t%s: ",prompt);
    gets(text);
}
