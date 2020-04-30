
/* WARNING: Could not reconcile some variable overlaps */

undefined4 FUN_08048440(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_GS_OFFSET;
  char local_8e;
  undefined4 local_8c;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined local_84;
  undefined local_83;
  undefined local_82;
  undefined local_81;
  undefined local_80;
  undefined local_7f;
  undefined local_7e;
  undefined local_7d;
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined local_60;
  undefined4 local_18;
  int local_14;
  undefined *local_10;
  
  local_10 = &stack0x00000004;
  iVar1 = 0x1e;
  local_18 = 0;
  local_14 = *(int *)(in_GS_OFFSET + 0x14);
  puVar2 = (undefined4 *)&local_8c;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_8e = 'c';
  local_8c._0_1_ = '5';
  local_8c._1_1_ = '2';
  local_8c._2_1_ = '7';
  local_8c._3_1_ = '{';
  local_88 = '1';
  local_87 = '_';
  local_86 = 'c';
  local_85 = '4';
  local_84 = 'n';
  local_83 = '_';
  local_82 = 'm';
  local_81 = '3';
  local_80 = 's';
  local_7f = 'S';
  local_7e = '_';
  local_7d = 'w';
  local_7c = '1';
  local_7b = '7';
  local_7a = 'H';
  local_79 = '_';
  local_78 = 'S';
  local_77 = 't';
  local_76 = 'R';
  local_75 = '1';
  local_74 = 'p';
  local_73 = 'P';
  local_72 = 'p';
  local_71 = 'P';
  local_70 = 'P';
  local_6f = 'P';
  local_6e = 'p';
  local_6d = 'p';
  local_6c = 'P';
  local_6b = 'e';
  local_6a = 'D';
  local_69 = '_';
  local_68 = 'b';
  local_67 = '1';
  local_66 = 'N';
  local_65 = '4';
  local_64 = 'R';
  local_63 = 'i';
  local_62 = 'e';
  local_61 = 'z';
  local_60 = '}';
  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&DAT_0804a060);
  iVar1 = strcmp(&DAT_0804a060,&local_8e);
  if (iVar1 == 0) {
    puts("Correct flag :)");
  }
  else {
    puts("Wrong flag :(");
  }
  if (local_14 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

