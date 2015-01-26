int numeridivisori(int valori[], int dimensioni) {
    int i, risultato;
    risultato = 0;
    for (i = 0; i < (dimensioni - 1); i++) {
        if (!(valori[i+1]%valori[i]) && valori[i]!= valori[i+1]) {
            risultato++;
        }
    } 
    return risultato;
}

