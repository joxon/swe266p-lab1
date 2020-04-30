
undefined4 FUN_08048410(void)

{
  int in_GS_OFFSET;
  char local_94;
  char local_93;
  char local_92;
  char local_91;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  char local_8c;
  char local_8b;
  char local_8a;
  char local_89;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84;
  char local_83;
  char local_82;
  char local_81;
  char local_80;
  char local_7f;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  char local_70;
  char local_6f;
  char local_6e;
  int local_14;
  undefined *local_c;

  local_c = &stack0x00000004;
  local_14 = *(int *)(in_GS_OFFSET + 0x14);
  __printf_chk(1,"Flag: ");

  __isoc99_scanf("%100s",&local_94);
  if (

// 0 cs527{I_<3
    ((((local_94 == 'c') &&
    (local_93 == 's')) &&
    (local_92 == '5')) &&
      (((((local_91 == '2' &&
      (local_90 == '7')) &&
         ((local_8f == '{' &&
         ((local_8e == 'I' &&
         (local_8d == '_')))))) &&
         (local_8c == '<')) &&
       (((((local_8b == '3' &&

// 3 0F7
       (local_85 == '0')) &&
        (local_84 == 'F')) &&
         ((local_83 == '7' &&

// 11 ss}
         (local_71 == 's')))) &&
        ((local_70 == 's' &&
        ((local_6f == '}' &&
        (local_6e == '\0'))))))))))

      &&

// 4 W4r
     ((((local_82 == 'W' &&
        (((((local_81 == '4' &&
        (local_80 == 'r')) &&

// 1 _mY
        (local_8a == '_')) &&
          ((local_89 == 'm' &&
          (local_88 == 'Y')))) &&

// 8 tY_
          (local_77 == 't')))) &&
       (((local_76 == 'Y' &&
       (local_75 == '_')) &&

// 2 _s
        ((local_87 == '_' &&
        (((local_86 == 's' &&

// 5 e_5
        (local_7f == 'e')) &&
        (local_7e == '_')))))))) &&
      ((((local_7d == '5' &&

// 7 R1
      (local_79 == 'R')) &&
      (local_78 == '1')) &&

// 9 cl
       (((local_74 == 'c' &&
       (local_73 == 'l')) &&

// 6 EcU
        ((local_7c == 'E' &&
        (((local_7b == 'c' &&
        (local_7a == 'U')) &&

// 10 4
        (local_72 == '4')))))))))))

     ) {
    puts("Correct Flag!!!");
  }
  else {
    puts("Wrong Flag....");
  }
  if (local_14 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
