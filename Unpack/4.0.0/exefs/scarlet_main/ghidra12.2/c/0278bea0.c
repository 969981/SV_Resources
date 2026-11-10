/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278bea0; name: FUN_0278bea0
 */


char * FUN_0278bea0(char *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*param_1 == 'T') && (param_1[1] == ' ')) {
    if ((param_1[2] == '=') && (param_1[3] == ' ')) {
      lVar2 = 0;
      goto LAB_0278bed4;
    }
LAB_0278bf14:
    cVar1 = param_1[2];
LAB_0278bf18:
    if (cVar1 != 'T') goto LAB_0278bf4c;
    cVar1 = param_1[3];
    if (cVar1 != ' ') goto LAB_0278bf50;
    if ((param_1[4] == '=') && (param_1[5] == ' ')) {
      lVar2 = 2;
      goto LAB_0278bed4;
    }
LAB_0278bf84:
    cVar1 = param_1[4];
LAB_0278bf88:
    if (cVar1 != 'T') goto LAB_0278bfbc;
    cVar1 = param_1[5];
    if (cVar1 != ' ') goto LAB_0278bfc0;
    if ((param_1[6] == '=') && (param_1[7] == ' ')) {
      lVar2 = 4;
      goto LAB_0278bed4;
    }
LAB_0278bff4:
    cVar1 = param_1[6];
LAB_0278bff8:
    if (cVar1 != 'T') goto LAB_0278c02c;
    cVar1 = param_1[7];
    if (cVar1 != ' ') goto LAB_0278c030;
    if ((param_1[8] == '=') && (param_1[9] == ' ')) {
      lVar2 = 6;
      goto LAB_0278bed4;
    }
LAB_0278c064:
    cVar1 = param_1[8];
LAB_0278c068:
    if (cVar1 != 'T') goto LAB_0278c09c;
    cVar1 = param_1[9];
    if (cVar1 != ' ') goto LAB_0278c0a0;
    if ((param_1[10] == '=') && (param_1[0xb] == ' ')) {
      lVar2 = 8;
      goto LAB_0278bed4;
    }
LAB_0278c0d4:
    cVar1 = param_1[10];
LAB_0278c0d8:
    if (cVar1 != 'T') goto LAB_0278c10c;
    cVar1 = param_1[0xb];
    if (cVar1 != ' ') goto LAB_0278c110;
    if ((param_1[0xc] == '=') && (param_1[0xd] == ' ')) {
      lVar2 = 10;
      goto LAB_0278bed4;
    }
LAB_0278c144:
    cVar1 = param_1[0xc];
LAB_0278c148:
    if (cVar1 != 'T') goto LAB_0278c17c;
    cVar1 = param_1[0xd];
    if (cVar1 != ' ') goto LAB_0278c180;
    if ((param_1[0xe] == '=') && (param_1[0xf] == ' ')) {
      lVar2 = 0xc;
      goto LAB_0278bed4;
    }
LAB_0278c1b4:
    cVar1 = param_1[0xe];
LAB_0278c1b8:
    if (cVar1 != 'T') goto LAB_0278c1ec;
    cVar1 = param_1[0xf];
    if (cVar1 != ' ') goto LAB_0278c1f0;
    if ((param_1[0x10] == '=') && (param_1[0x11] == ' ')) {
      lVar2 = 0xe;
      goto LAB_0278bed4;
    }
  }
  else {
    if (param_1[1] != 'T') goto LAB_0278bf14;
    cVar1 = param_1[2];
    if (cVar1 != ' ') goto LAB_0278bf18;
    if ((param_1[3] == '=') && (param_1[4] == ' ')) {
      lVar2 = 1;
      goto LAB_0278bed4;
    }
LAB_0278bf4c:
    cVar1 = param_1[3];
LAB_0278bf50:
    if (cVar1 != 'T') goto LAB_0278bf84;
    cVar1 = param_1[4];
    if (cVar1 != ' ') goto LAB_0278bf88;
    if ((param_1[5] == '=') && (param_1[6] == ' ')) {
      lVar2 = 3;
      goto LAB_0278bed4;
    }
LAB_0278bfbc:
    cVar1 = param_1[5];
LAB_0278bfc0:
    if (cVar1 != 'T') goto LAB_0278bff4;
    cVar1 = param_1[6];
    if (cVar1 != ' ') goto LAB_0278bff8;
    if ((param_1[7] == '=') && (param_1[8] == ' ')) {
      lVar2 = 5;
      goto LAB_0278bed4;
    }
LAB_0278c02c:
    cVar1 = param_1[7];
LAB_0278c030:
    if (cVar1 != 'T') goto LAB_0278c064;
    cVar1 = param_1[8];
    if (cVar1 != ' ') goto LAB_0278c068;
    if ((param_1[9] == '=') && (param_1[10] == ' ')) {
      lVar2 = 7;
      goto LAB_0278bed4;
    }
LAB_0278c09c:
    cVar1 = param_1[9];
LAB_0278c0a0:
    if (cVar1 != 'T') goto LAB_0278c0d4;
    cVar1 = param_1[10];
    if (cVar1 != ' ') goto LAB_0278c0d8;
    if ((param_1[0xb] == '=') && (param_1[0xc] == ' ')) {
      lVar2 = 9;
      goto LAB_0278bed4;
    }
LAB_0278c10c:
    cVar1 = param_1[0xb];
LAB_0278c110:
    if (cVar1 != 'T') goto LAB_0278c144;
    cVar1 = param_1[0xc];
    if (cVar1 != ' ') goto LAB_0278c148;
    if ((param_1[0xd] == '=') && (param_1[0xe] == ' ')) {
      lVar2 = 0xb;
      goto LAB_0278bed4;
    }
LAB_0278c17c:
    cVar1 = param_1[0xd];
LAB_0278c180:
    if (cVar1 != 'T') goto LAB_0278c1b4;
    cVar1 = param_1[0xe];
    if (cVar1 != ' ') goto LAB_0278c1b8;
    if ((param_1[0xf] == '=') && (param_1[0x10] == ' ')) {
      lVar2 = 0xd;
      goto LAB_0278bed4;
    }
LAB_0278c1ec:
    cVar1 = param_1[0xf];
LAB_0278c1f0:
    if ((((cVar1 == 'T') && (param_1[0x10] == ' ')) && (param_1[0x11] == '=')) &&
       (param_1[0x12] == ' ')) {
      lVar2 = 0xf;
      goto LAB_0278bed4;
    }
  }
  if (((param_1[0x10] != 'T') || ((param_1[0x11] != ' ' || (param_1[0x12] != '=')))) ||
     (param_1[0x13] != ' ')) {
    return param_1;
  }
  lVar2 = 0x10;
LAB_0278bed4:
  return param_1 + lVar2 + 4;
}


