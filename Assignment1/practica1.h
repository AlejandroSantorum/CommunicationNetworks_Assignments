#ifndef PRACTICA1_H
#define PRACTICA1_H

/** Handler of SIGINT signal */
void handle(int nsignal);

/** Package treatment function */
void package_treat(uint8_t *user, const struct pcap_pkthdr* header, const uint8_t* package);

/** Auxiliary function that determines if a string is truly an integer */
/* INPUT: char* string to be analyzed */
/* OUTPUT: OK if the string is an integer, ERROR otherwise */
int is_valid_integer(char *input);

#endif /* PRACTICA1_H */