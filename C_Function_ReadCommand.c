char readCommand();

char readCommand() {
    char input;
    printf("Please enter command: ");
    scanf(" %c", &input); getchar();
    return(toupper(input));
}
