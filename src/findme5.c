
undefined4 FUN_080483c0(void)

{
  char *ptrChar;
  int i;
  
  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&CHAR____0804a260);
  if (INT_0804a040 == -1) {
    i = 0;
LAB_0804842e:
    if ((&CHAR____0804a260)[i] == '\0') {
      puts("Correct flag :)");
      return 0;
    }
  }
  else {
    if (CHAR____0804a260 == strFlag[INT_0804a040]) {
      i = 0;
      do {
        i = i + 1;
        if ((&INT_0804a040)[i] == -1) goto LAB_0804842e;
        ptrChar = &CHAR____0804a261 + i;
        i = i;
      } while (strFlag[(&INT_0804a040)[i]] == *ptrChar);
    }
  }
  puts("Wrong flag :(");
  return 0;
}

