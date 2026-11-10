/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013664d4; name: FUN_013664d4
 */


void FUN_013664d4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = param_2[1];
  uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar3 < 2) {
    uVar2 = uVar1 - 1 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar5 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar4;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar2 = uVar2 & uVar1 - 1;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(*param_1 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar5 = uVar5 & uVar1 - 1;
      }
      else if (uVar1 <= uVar5) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar3 * uVar1;
      }
      if (uVar5 != uVar2) {
        *(long **)(*param_1 + uVar5 * 8) = param_2;
      }
    }
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


