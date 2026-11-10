/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e92280; name: FUN_01e92280
 */


char * FUN_01e92280(char *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*param_1 == 'T') && (param_1[1] == ' ')) {
    if ((param_1[2] == '=') && (param_1[3] == ' ')) {
      lVar2 = 0;
      goto LAB_01e922b4;
    }
LAB_01e922f4:
    cVar1 = param_1[2];
LAB_01e922f8:
    if (cVar1 != 'T') goto LAB_01e9232c;
    cVar1 = param_1[3];
    if (cVar1 != ' ') goto LAB_01e92330;
    if ((param_1[4] == '=') && (param_1[5] == ' ')) {
      lVar2 = 2;
      goto LAB_01e922b4;
    }
LAB_01e92364:
    cVar1 = param_1[4];
LAB_01e92368:
    if (cVar1 != 'T') goto LAB_01e9239c;
    cVar1 = param_1[5];
    if (cVar1 != ' ') goto LAB_01e923a0;
    if ((param_1[6] == '=') && (param_1[7] == ' ')) {
      lVar2 = 4;
      goto LAB_01e922b4;
    }
LAB_01e923d4:
    cVar1 = param_1[6];
LAB_01e923d8:
    if (cVar1 != 'T') goto LAB_01e9240c;
    cVar1 = param_1[7];
    if (cVar1 != ' ') goto LAB_01e92410;
    if ((param_1[8] == '=') && (param_1[9] == ' ')) {
      lVar2 = 6;
      goto LAB_01e922b4;
    }
LAB_01e92444:
    cVar1 = param_1[8];
LAB_01e92448:
    if (cVar1 != 'T') goto LAB_01e9247c;
    cVar1 = param_1[9];
    if (cVar1 != ' ') goto LAB_01e92480;
    if ((param_1[10] == '=') && (param_1[0xb] == ' ')) {
      lVar2 = 8;
      goto LAB_01e922b4;
    }
LAB_01e924b4:
    cVar1 = param_1[10];
LAB_01e924b8:
    if (cVar1 != 'T') goto LAB_01e924ec;
    cVar1 = param_1[0xb];
    if (cVar1 != ' ') goto LAB_01e924f0;
    if ((param_1[0xc] == '=') && (param_1[0xd] == ' ')) {
      lVar2 = 10;
      goto LAB_01e922b4;
    }
LAB_01e92524:
    cVar1 = param_1[0xc];
LAB_01e92528:
    if (cVar1 != 'T') goto LAB_01e9255c;
    cVar1 = param_1[0xd];
    if (cVar1 != ' ') goto LAB_01e92560;
    if ((param_1[0xe] == '=') && (param_1[0xf] == ' ')) {
      lVar2 = 0xc;
      goto LAB_01e922b4;
    }
LAB_01e92594:
    cVar1 = param_1[0xe];
LAB_01e92598:
    if (cVar1 != 'T') goto LAB_01e925cc;
    cVar1 = param_1[0xf];
    if (cVar1 != ' ') goto LAB_01e925d0;
    if ((param_1[0x10] == '=') && (param_1[0x11] == ' ')) {
      lVar2 = 0xe;
      goto LAB_01e922b4;
    }
LAB_01e92604:
    cVar1 = param_1[0x10];
LAB_01e92608:
    if (cVar1 != 'T') goto LAB_01e9263c;
    cVar1 = param_1[0x11];
    if (cVar1 != ' ') goto LAB_01e92640;
    if ((param_1[0x12] == '=') && (param_1[0x13] == ' ')) {
      lVar2 = 0x10;
      goto LAB_01e922b4;
    }
  }
  else {
    if (param_1[1] != 'T') goto LAB_01e922f4;
    cVar1 = param_1[2];
    if (cVar1 != ' ') goto LAB_01e922f8;
    if ((param_1[3] == '=') && (param_1[4] == ' ')) {
      lVar2 = 1;
      goto LAB_01e922b4;
    }
LAB_01e9232c:
    cVar1 = param_1[3];
LAB_01e92330:
    if (cVar1 != 'T') goto LAB_01e92364;
    cVar1 = param_1[4];
    if (cVar1 != ' ') goto LAB_01e92368;
    if ((param_1[5] == '=') && (param_1[6] == ' ')) {
      lVar2 = 3;
      goto LAB_01e922b4;
    }
LAB_01e9239c:
    cVar1 = param_1[5];
LAB_01e923a0:
    if (cVar1 != 'T') goto LAB_01e923d4;
    cVar1 = param_1[6];
    if (cVar1 != ' ') goto LAB_01e923d8;
    if ((param_1[7] == '=') && (param_1[8] == ' ')) {
      lVar2 = 5;
      goto LAB_01e922b4;
    }
LAB_01e9240c:
    cVar1 = param_1[7];
LAB_01e92410:
    if (cVar1 != 'T') goto LAB_01e92444;
    cVar1 = param_1[8];
    if (cVar1 != ' ') goto LAB_01e92448;
    if ((param_1[9] == '=') && (param_1[10] == ' ')) {
      lVar2 = 7;
      goto LAB_01e922b4;
    }
LAB_01e9247c:
    cVar1 = param_1[9];
LAB_01e92480:
    if (cVar1 != 'T') goto LAB_01e924b4;
    cVar1 = param_1[10];
    if (cVar1 != ' ') goto LAB_01e924b8;
    if ((param_1[0xb] == '=') && (param_1[0xc] == ' ')) {
      lVar2 = 9;
      goto LAB_01e922b4;
    }
LAB_01e924ec:
    cVar1 = param_1[0xb];
LAB_01e924f0:
    if (cVar1 != 'T') goto LAB_01e92524;
    cVar1 = param_1[0xc];
    if (cVar1 != ' ') goto LAB_01e92528;
    if ((param_1[0xd] == '=') && (param_1[0xe] == ' ')) {
      lVar2 = 0xb;
      goto LAB_01e922b4;
    }
LAB_01e9255c:
    cVar1 = param_1[0xd];
LAB_01e92560:
    if (cVar1 != 'T') goto LAB_01e92594;
    cVar1 = param_1[0xe];
    if (cVar1 != ' ') goto LAB_01e92598;
    if ((param_1[0xf] == '=') && (param_1[0x10] == ' ')) {
      lVar2 = 0xd;
      goto LAB_01e922b4;
    }
LAB_01e925cc:
    cVar1 = param_1[0xf];
LAB_01e925d0:
    if (cVar1 != 'T') goto LAB_01e92604;
    cVar1 = param_1[0x10];
    if (cVar1 != ' ') goto LAB_01e92608;
    if ((param_1[0x11] == '=') && (param_1[0x12] == ' ')) {
      lVar2 = 0xf;
      goto LAB_01e922b4;
    }
LAB_01e9263c:
    cVar1 = param_1[0x11];
LAB_01e92640:
    if ((((cVar1 == 'T') && (param_1[0x12] == ' ')) && (param_1[0x13] == '=')) &&
       (param_1[0x14] == ' ')) {
      lVar2 = 0x11;
      goto LAB_01e922b4;
    }
  }
  if (((param_1[0x12] != 'T') || ((param_1[0x13] != ' ' || (param_1[0x14] != '=')))) ||
     (param_1[0x15] != ' ')) {
    return param_1;
  }
  lVar2 = 0x12;
LAB_01e922b4:
  return param_1 + lVar2 + 4;
}


