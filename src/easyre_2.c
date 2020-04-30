
undefined4 FUN_080483c0(void)

{
  char cVar1;
  int index;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&strInput);
  index = 0;
  do {
    if ((&strInput)[index] != strFlag[index * 2]) goto LAB_08048418;
    index = index + 1;
  } while (index != 0x22);
  index = -1;
  pcVar2 = &strInput;
  do {
    if (index == 0) break;
    index = index + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar3 * -2 + 1;
  } while (cVar1 != '\0');
  if (index == -0x24) {
    puts("Correct flag :)");
  }
  else {
LAB_08048418:
    puts("Wrong flag :(");
  }
  return 0;
}

