#ifndef MODEL_H
#define MODEL_H

#define SIZE 9  // Grid boyutunu 9 olarak belirle

// Mayınlı alanı (mfield) ve oyun ızgarasını (grid) tanımla
extern int mfield[SIZE][SIZE];  // Mayın alanı
extern int grid[SIZE][SIZE];    // Çevredeki mayın sayısını gösteren ızgara
extern int solution[SIZE][SIZE]; // Çözüm için kullanacağımız alan

// Fonksiyon prototipleri
void load_mfield(const char *filename); // Mayın alanını bir dosyadan yükle
void generate_random_mfield();          // Rastgele mayın alanı üret
int num_of_surrounding_mines(int row, int col); // Belirli bir hücrenin çevresindeki mayın sayısını hesapla
int init_grid(); // Oyun ızgarasını başlat

#endif  // MODEL_H
