/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01984d1c; name: FUN_01984d1c
 */


ulong FUN_01984d1c(float param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = param_3 + 1;
  if (2 < param_3 - param_4) {
    uVar6 = (ulong)((float)(param_3 - param_4) * 0.5);
    lVar5 = *(long *)(param_2 + 0xf8);
    uVar2 = uVar6 + param_4;
    uVar3 = uVar2;
    if (*(float *)(lVar5 + uVar2 * 0x10 + 8) <= param_1) {
      param_4 = uVar2;
      uVar3 = param_3;
      uVar6 = param_3 - uVar2;
    }
    param_3 = uVar3;
    if (2 < uVar6) {
      uVar2 = param_4 + (long)((float)uVar6 * 0.5);
      uVar3 = uVar2;
      uVar6 = (long)((float)uVar6 * 0.5);
      if (*(float *)(lVar5 + uVar2 * 0x10 + 8) <= param_1) {
        param_4 = uVar2;
        uVar3 = param_3;
        uVar6 = param_3 - uVar2;
      }
      while (param_3 = uVar3, 2 < uVar6) {
        uVar2 = param_4 + (long)((float)uVar6 * 0.5);
        uVar3 = uVar2;
        uVar6 = (long)((float)uVar6 * 0.5);
        if (*(float *)(lVar5 + uVar2 * 0x10 + 8) <= param_1) {
          param_4 = uVar2;
          uVar3 = param_3;
          uVar6 = param_3 - uVar2;
        }
      }
    }
  }
  if ((param_3 <= uVar1) && (param_4 <= param_3)) {
    pfVar4 = (float *)(*(long *)(param_2 + 0xf8) + param_3 * 0x10 + 8);
    while (param_1 < *pfVar4) {
      param_3 = param_3 - 1;
      if ((param_3 < param_4) || (pfVar4 = pfVar4 + -4, uVar1 < param_3)) goto LAB_01984d74;
    }
    param_3 = param_3 + 1;
  }
LAB_01984d74:
  if (param_3 <= uVar1 && param_4 <= param_3) {
    param_4 = param_3;
  }
  return param_4;
}


