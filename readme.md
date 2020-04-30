# swe266p-lab1

Author: Junxian Chen
Date: April 30, 2020

## easyre_1

cs527{1_c4n_m3sS_w17H_StR1pPpPPPppPeD_b1N4Riez}
cs527{I can mess with strippppppppped binaries}

search->program text->"wrong"

## easyre_2

cs527{D0_y0u_l1ke_Kr4bbY_pAt71ez?}
cs527{do you like krabby patties?}

## findme_1

cs527{W3lc0meeeeee_to_5oF74R3_S3cUr1ty_cl4sSsSsS}
cs527{Welcomeeeeee to softare security classssss}

## findme_2

cs527{I_<3_mY_s0F7W4re_5EcUR1tY_cl4ss}
cs527{I love my software security class}

```c
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
// 1 _mY
        (local_8a == '_')) &&
          ((local_89 == 'm' &&
          (local_88 == 'Y')))) &&
// 2 _s
        ((local_87 == '_' &&
        (((local_86 == 's' &&
// 3 0F7
      (local_85 == '0')) &&
        (local_84 == 'F')) &&
        ((local_83 == '7' &&
// 4 W4r
    ((((local_82 == 'W' &&
        (((((local_81 == '4' &&
        (local_80 == 'r')) &&
// 5 e_5
        (local_7f == 'e')) &&
        (local_7e == '_')))))))) &&
      ((((local_7d == '5' &&
// 6 EcU
        ((local_7c == 'E' &&
        (((local_7b == 'c' &&
        (local_7a == 'U')) &&
// 7 R1
      (local_79 == 'R')) &&
      (local_78 == '1')) &&
// 8 tY_
          (local_77 == 't')))) &&
      (((local_76 == 'Y' &&
      (local_75 == '_')) &&
// 9 cl
      (((local_74 == 'c' &&
      (local_73 == 'l')) &&
// 10 4
        (local_72 == '4')))))))))))
// 11 ss}
        (local_71 == 's')))) &&
        ((local_70 == 's' &&
        ((local_6f == '}' &&
        (local_6e == '\0'))))))))))
```

## findme_3

cs527{H3y_MomMY_I_4m_a_h4Nds0me_R3V3rS3r}
cs527{Hey mommy I am a handsome reverser}

search->program text->"flag"

```c
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  char local_94 [128]; // our input
  int local_14;
  undefined *local_10;

  local_10 = &stack0x00000004;
  local_14 = *(int *)(in_GS_OFFSET + 0x14);
  __printf_chk(1,"Flag: ");
  __isoc99_scanf("%100s",local_94);
  pcVar2 = &DAT_0804a060;
  cVar1 = DAT_0804a060; // flag
  while (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }
  iVar3 = strcmp(local_94,&DAT_0804a060);
  if (iVar3 == 0) {
    puts("Cool! correct flag!!");
  }
  else {
    puts("Pffff.... :\\");
  }
```

```c
  pcVar2 = s_dt638|I4z`NpnNZ`J`5n`b`i5Oet1nf`_0804a060;
  // dt638|I4z`NpnNZ`J`5n`b`i5Oet1nf`S4W4sT4s~
  // cs527{H3y_MomMY_I_4m_a_h4Nds0me_R3V3rS3r}
  cVar1 = s_dt638|I4z`NpnNZ`J`5n`b`i5Oet1nf`_0804a060[0];
  while (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1; // offset -1. Go look up ASCII table.
    cVar1 = pcVar2[1]; // get next char
    pcVar2 = pcVar2 + 1; // point to next char
  }
```

## findme4

cs527{H0hoHOH0_m3RrY_ChR1s7m4s}
cs527{hohohoho merry christmas}

```c
undefined4 FUN_080483c0(void)
{
  int iVar1;

  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&DAT_0804a0e0);
  iVar1 = 0;
  do {

    // read by two
    // "sT5?2I7`{6Hi0@hTocH_O,Hi0:_amA32RTrJY|_^C?h^RD1gsw7:ml4Ns?}"
    // s527{H0hoHOH0_m3RrY_ChR1s7m4s}

    if ((&DAT_0804a0e0)[iVar1] != (&DAT_0804a040)[iVar1 * 2]) {
      puts("Wrong flag :(");
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  puts("Correct flag :)");
  return 0;
}
```

## findme5

cs527{I_rUn_0u7_oF_Fl4G_t3xTs}
cs527{I run out of flag texts}

```c

undefined4 FUN_080483c0(void)

{
  char *ptrChar;
  int i;

  __printf_chk(1,"Flag? ");
  __isoc99_scanf("%100s",&CHAR_??_0804a260); // our input
  if (INT_0804a040 == -1) {
    i = 0;
LAB_0804842e:
    if ((&CHAR_??_0804a260)[i] == '\0') {
      puts("Correct flag :)");
      return 0;
    }
  }
  else {
    // strFlag: "c7kvTns7_}U1x}ir(Ca2$5X,Q<e;I^l7J3=Hq:}\"syy=dLC)/,-Cc8q|qY9=7%Q^7k&*(#,E|%`bP%i.s!n-pl|I%9_)i=@WBGEP!CU^%%`mamb_]mQIkyK&XTltqC78F[h}{?]\"A@o$ch@43+04.e0zZ#=p8<M\">uI_58bBiE*)Y:4fu?KQ9xZVv?qC_,lW!8=6M|U8B^AzwR`op-s_4zaT;RMX]96]NPp{MG5n%Sh|iJkw"
    // INT_0804a040 == 0
    // CHAR_??_0804a260 == 'c'

    if (CHAR_??_0804a260 == strFlag[INT_0804a040]) {
      i = 0;
      do {
        i = i + 1;
        if ((&INT_0804a040)[i] == -1) goto LAB_0804842e;
        ptrChar = &CHAR_??_0804a261 + i;
        i = i;
      } while (strFlag[(&INT_0804a040)[i]] == *ptrChar);
    }
  }
  puts("Wrong flag :(");
  return 0;
}

```

```text
                             INT_ARRAY_0804a040[1]                           XREF[1,2]:   FUN_080483c0:080483ee (R) ,
                             INT_ARRAY_0804a040[2]                                        FUN_080483c0:08048422 (R) ,
                             INT_ARRAY_0804a040                                           FUN_080483c0:08048422 (R)
        0804a040 00  00  00       int[32]
                 00  28  00
                 00  00  15
           0804a040 [0]                       0,            40,            21,            19
           0804a050 [4]                       7,           227,            28,             8
           0804a060 [8]                      15,           198,             5,             8
           0804a070 [12]                    146,           161,            31,             8
           0804a080 [16]                    207,           128,           211,           128
           0804a090 [20]                    190,           143,            97,            90
           0804a0a0 [24]                    123,            33,           181,             4
           0804a0b0 [28]                      6,             9,            -1,             0

```

```text

                             s_syy=dLC)/,-Cc8q|qY9=7%Q^7k&*(#,E_0804a168     XREF[1,1]:   FUN_080483c0:080483fb (R) ,
                             strFlag                                                      FUN_080483c0:08048417 (R)
        0804a140 63  37  6b       char[241]  "c7kvTns7_}U1x}ir(Ca2$5X,Q<e;I^l7J3=Hq:}\"syy=
                 76  54  6e
                 73  37  5f
           0804a140 [0]            'c',  '7',  'k',  'v'
           0804a144 [4]            'T',  'n',  's',  '7'
           0804a148 [8]            '_',  '}',  'U',  '1'
           0804a14c [12]           'x',  '}',  'i',  'r'
           0804a150 [16]           '(',  'C',  'a',  '2'
           0804a154 [20]           '$',  '5',  'X',  ','
           0804a158 [24]           'Q',  '<',  'e',  ';'
           0804a15c [28]           'I',  '^',  'l',  '7'
           0804a160 [32]           'J',  '3',  '=',  'H'
           0804a164 [36]           'q',  ':',  '}',  '"'
           0804a168 [40]           's',  'y',  'y',  '='
           0804a16c [44]           'd',  'L',  'C',  ')'
           0804a170 [48]           '/',  ',',  '-',  'C'
           0804a174 [52]           'c',  '8',  'q',  '|'
           0804a178 [56]           'q',  'Y',  '9',  '='
           0804a17c [60]           '7',  '%',  'Q',  '^'
           0804a180 [64]           '7',  'k',  '&',  '*'
           0804a184 [68]           '(',  '#',  ',',  'E'
           0804a188 [72]           '|',  '%',  '`',  'b'
           0804a18c [76]           'P',  '%',  'i',  '.'
           0804a190 [80]           's',  '!',  'n',  '-'
           0804a194 [84]           'p',  'l',  '|',  'I'
           0804a198 [88]           '%',  '9',  '_',  ')'
           0804a19c [92]           'i',  '=',  '@',  'W'
           0804a1a0 [96]           'B',  'G',  'E',  'P'
           0804a1a4 [100]          '!',  'C',  'U',  '^'
           0804a1a8 [104]          '%',  '%',  '`',  'm'
           0804a1ac [108]          'a',  'm',  'b',  '_'
           0804a1b0 [112]          ']',  'm',  'Q',  'I'
           0804a1b4 [116]          'k',  'y',  'K',  '&'
           0804a1b8 [120]          'X',  'T',  'l',  't'
           0804a1bc [124]          'q',  'C',  '7',  '8'
           0804a1c0 [128]          'F',  '[',  'h',  '}'
           0804a1c4 [132]          '{',  '?',  ']',  '"'
           0804a1c8 [136]          'A',  '@',  'o',  '$'
           0804a1cc [140]          'c',  'h',  '@',  '4'
           0804a1d0 [144]          '3',  '+',  '0',  '4'
           0804a1d4 [148]          '.',  'e',  '0',  'z'
           0804a1d8 [152]          'Z',  '#',  '=',  'p'
           0804a1dc [156]          '8',  '<',  'M',  '"'
           0804a1e0 [160]          '>',  'u',  'I',  '_'
           0804a1e4 [164]          '5',  '8',  'b',  'B'
           0804a1e8 [168]          'i',  'E',  '*',  ')'
           0804a1ec [172]          'Y',  ':',  '4',  'f'
           0804a1f0 [176]          'u',  '?',  'K',  'Q'
           0804a1f4 [180]          '9',  'x',  'Z',  'V'
           0804a1f8 [184]          'v',  '?',  'q',  'C'
           0804a1fc [188]          '_',  ',',  'l',  'W'
           0804a200 [192]          '!',  '8',  '=',  '6'
           0804a204 [196]          'M',  '|',  'U',  '8'
           0804a208 [200]          'B',  '^',  'A',  'z'
           0804a20c [204]          'w',  'R',  '`',  'o'
           0804a210 [208]          'p',  '-',  's',  '_'
           0804a214 [212]          '4',  'z',  'a',  'T'
           0804a218 [216]          ';',  'R',  'M',  'X'
           0804a21c [220]          ']',  '9',  '6',  ']'
           0804a220 [224]          'N',  'P',  'p',  '{'
           0804a224 [228]          'M',  'G',  '5',  'n'
           0804a228 [232]          '%',  'S',  'h',  '|'
           0804a22c [236]          'i',  'J',  'k',  'w'
           0804a230 [240]         '\0'
```
