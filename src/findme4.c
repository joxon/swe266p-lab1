
undefined4 FUN_080483c0(void)

{
  int iVar1;
  
  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&DAT_0804a0e0);
  iVar1 = 0;
  do {
    if ((&DAT_0804a0e0)[iVar1] != (&DAT_0804a040)[iVar1 * 2]) {
      puts("Wrong flag :(");
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  puts("Correct flag :)");
  return 0;
}

