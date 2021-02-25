#include <stdio.h>

int main(void) {
  int i, j;
  char mojiretsu[55] = { "SZKKB{EZOVMGRMVtH{WZBzGSZMP{BLF{ULI{VEVIBGSRMTsSVZIGr" };
  char angou[100];

  // mojiretsuを解読
  for (i = 0; mojiretsu[i] != '\0'; i++) {
    mojiretsu[i] = 'Z' - mojiretsu[i] + 'A';
  }
  printf("%s\n", mojiretsu);

  // 入力した文字列を暗号に変換
  scanf("%s", angou);
  for (i = 0; angou[i] != '\0'; i++) {
    angou[i] = 'Z' - angou[i] + 'A';
  }
  printf("%s\n", angou);

  return 0;
}