int readNumber(const char text[], const int min, const int max);

int readNumber(const char text[], const int min, const int max){
    int num;
    do {
        printf("\t%s (%i-%i): ", text, min, max);
        scanf("%i", &num); getchar();
    } while (num < min || num > max);
    return num;
        
    }
