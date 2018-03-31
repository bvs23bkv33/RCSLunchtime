#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
    char *places[19] = {
        "by CHLOE",
        "B & H Dairy",
        "Taboonette",
        "Tortaria",
        "Mimi Cheng's",
        "Taqueria Diana",
        "Joe's Pizza",
        "Hu Kitchen",
        "Saigon Shack",
        "Manousheh",
        "San Marzano",
        "Otafuku x Medetai",
        "The Grey Dog",
        "Mamoun's Falafel",
        "Kiin Thai Eatery",
        "Bluestone Lane",
        "Peacefood Cafe",
        "Tacombi Bleecker",
        "Village Taverna"
    };
    srand(time(NULL));
    puts(places[rand() % 19]);
}
