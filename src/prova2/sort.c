// Código da 1ª prova
void sort(float *numbersArray, int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        for (int j = (i + 1); j < maxIndex; j++) {
            if (numbersArray[j] < numbersArray[i]) {
                float oldValue = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = oldValue;
            }
        }
    }

    return;
}
