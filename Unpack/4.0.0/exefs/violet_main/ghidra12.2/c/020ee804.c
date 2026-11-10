/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ee804; name: FUN_020ee804
 */


bool FUN_020ee804(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  switch(param_2) {
  default:
    lVar3 = param_1 + 0x40;
    goto LAB_020ee910;
  case 1:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0xcc8);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 0xfa);
    break;
  case 2:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0x1498);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 300);
    break;
  case 3:
    lVar3 = param_1 + 0x1df0;
LAB_020ee910:
    lVar2 = 0;
    lVar1 = 200;
    if (param_2 != 3) {
      lVar1 = 400;
    }
    piVar4 = (int *)(lVar3 + 8);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar1 != lVar2);
    break;
  case 4:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0x2438);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 200);
    break;
  case 5:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0x2a78);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 900);
    break;
  case 6:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0x4698);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 300);
    break;
  case 7:
    lVar2 = 0;
    piVar4 = (int *)(param_1 + 0x4ff8);
    do {
      if (piVar4[-2] == param_3) goto LAB_020ee9d0;
      if (*piVar4 == param_3) goto LAB_020ee9cc;
      lVar2 = lVar2 + 2;
      piVar4 = piVar4 + 4;
    } while (lVar2 != 0x96);
  }
  return false;
LAB_020ee9cc:
  lVar2 = lVar2 + 1;
LAB_020ee9d0:
  if ((int)lVar2 == -1) {
    return false;
  }
  switch(param_2) {
  default:
    param_1 = param_1 + 0x40;
    goto LAB_020eea00;
  case 1:
    param_1 = param_1 + 0xcc0;
    goto LAB_020eea00;
  case 2:
    lVar3 = 0x1490;
    break;
  case 3:
    lVar3 = 0x1df0;
    break;
  case 4:
    lVar3 = 0x2430;
    break;
  case 5:
    lVar3 = 0x2a70;
    break;
  case 6:
    lVar3 = 0x4690;
    break;
  case 7:
    lVar3 = 0x4ff0;
  }
  param_1 = param_1 + lVar3;
LAB_020eea00:
  return *(char *)(param_1 + ((lVar2 << 0x20) >> 0x1d) + 4) != '\0';
}


