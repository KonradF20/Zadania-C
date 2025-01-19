### Zadanie 4:
```
funkcja wynik(i)
      jeżeli i < 3
            zwróć 1 i zakończ;
      w przeciwnym razie
            jeżeli i mod 2 = 0
                  zwróć wynik(i - 3) + wynik(i - 1) + 1
            w przeciwnym razie
                  zwróć wynik(i - 1) mod 7
```

|    i     |  2  |  3  |  4  |  5  |  6  |  7  |  8  |
|----------|-----|-----|-----|-----|-----|-----|-----|
| wynik(i) | 1   | 1   | 3   | 3   | 5   | 5   | 9   |
