
undefined4 FUN_08048440(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  char local_94 [128];
  int local_14;
  undefined *local_10;

  local_10 = &stack0x00000004;
  local_14 = *(int *)(in_GS_OFFSET + 0x14);
  __printf_chk(1,"Flag: ");
  __isoc99_scanf("%100s",local_94);


  pcVar2 = s_dt638_I4z_NpnNZ_J_5n_b_i5Oet1nf__0804a060;
  cVar1 = s_dt638_I4z_NpnNZ_J_5n_b_i5Oet1nf__0804a060[0];
  while (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }


  iVar3 = strcmp(local_94,s_dt638_I4z_NpnNZ_J_5n_b_i5Oet1nf__0804a060);
  if (iVar3 == 0) {
    puts("Cool! correct flag!!");
  }
  else {
    puts("Pffff.... :\\");
  }
  if (local_14 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
