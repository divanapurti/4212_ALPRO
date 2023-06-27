#include <iostream>

using namespace std;

enum Hari {
  SENIN,
  SELASA,
  RABU,
  KAMIS,
  JUMAT,
  SABTU,
  MINGGU
};
int main() {
  Hari hariIni = RABU;

  switch (hariIni) {
    case SENIN:
      std::cout << "Hari ini adalah Senin." << std::endl;
      break;
    case SELASA:
      std::cout << "Hari ini adalah Selasa." << std::endl;
      break;
    case RABU:
      std::cout << "Hari ini adalah Rabu." << std::endl;
      break;
    case KAMIS:
      std::cout << "Hari ini adalah Kamis." << std::endl;
      break;
    case JUMAT:
      std::cout << "Hari ini adalah Jumat." << std::endl;
      break;
    case SABTU:
      std::cout << "Hari ini adalah Sabtu." << std::endl;
      break;
    case MINGGU:
      std::cout << "Hari ini adalah Minggu." << std::endl;
      break;
    default:
      std::cout << "Hari tidak valid." << std::endl;
      break;
  }

  return 0;
}
