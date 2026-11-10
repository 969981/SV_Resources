/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01852768; name: FUN_01852768
 */


ulong FUN_01852768(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  switch(param_2) {
  default:
    piVar1 = (int *)(param_1 + 0x40);
    goto LAB_01852794;
  case 1:
    piVar1 = (int *)(param_1 + 0xcc8);
    uVar3 = 1;
    while (piVar1[-2] != 0xffff) {
      if (*piVar1 == 0xffff) goto LAB_018528c4;
      uVar3 = uVar3 + 2;
      piVar1 = piVar1 + 4;
      if (uVar3 == 0xfb) {
        return 0xffffffff;
      }
    }
    goto LAB_018528c0;
  case 2:
    piVar1 = (int *)(param_1 + 0x1498);
    uVar3 = 1;
    while (piVar1[-2] != 0xffff) {
      if (*piVar1 == 0xffff) goto LAB_018528c4;
      uVar3 = uVar3 + 2;
      piVar1 = piVar1 + 4;
      if (uVar3 == 0x12d) {
        return 0xffffffff;
      }
    }
    goto LAB_018528c0;
  case 3:
    lVar2 = 0x1df0;
    break;
  case 4:
    lVar2 = 0x2430;
    break;
  case 5:
    lVar2 = 0x2a70;
    break;
  case 6:
    lVar2 = 0x4690;
    break;
  case 7:
    piVar1 = (int *)(param_1 + 0x4ff8);
    uVar3 = 1;
    while (piVar1[-2] != 0xffff) {
      if (*piVar1 == 0xffff) goto LAB_018528c4;
      uVar3 = uVar3 + 2;
      piVar1 = piVar1 + 4;
      if (uVar3 == 0x97) {
        return 0xffffffff;
      }
    }
LAB_018528c0:
    uVar3 = uVar3 - 1;
LAB_018528c4:
    return uVar3 & 0xffffffff;
  }
  piVar1 = (int *)(param_1 + lVar2);
LAB_01852794:
  uVar3 = 0;
  while( true ) {
    if (param_2 - 3U < 4) {
      uVar4 = *(ulong *)(&DAT_03cbf7a0 + (long)(int)(param_2 - 3U) * 8);
    }
    else {
      uVar4 = 400;
    }
    if (uVar4 <= uVar3) break;
    if (*piVar1 == 0xffff) {
      return uVar3 & 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 2;
  }
  return 0xffffffff;
}


