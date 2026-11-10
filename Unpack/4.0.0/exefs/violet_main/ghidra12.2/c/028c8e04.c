/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c8e04; name: FUN_028c8e04
 */


ulong FUN_028c8e04(float param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  
  uVar1 = param_3 + 1;
  if (param_3 < 3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = param_3;
    do {
      uVar2 = uVar4 + (long)((float)uVar6 * 0.5);
      uVar3 = uVar2;
      uVar6 = (long)((float)uVar6 * 0.5);
      if (*(float *)(*(long *)(param_2 + 0xf8) + uVar2 * 0x10 + 8) <= param_1) {
        uVar4 = uVar2;
        uVar3 = param_3;
        uVar6 = param_3 - uVar2;
      }
      param_3 = uVar3;
    } while (2 < uVar6);
  }
  if ((param_3 <= uVar1) && (uVar4 <= param_3)) {
    pfVar5 = (float *)(*(long *)(param_2 + 0xf8) + param_3 * 0x10 + 8);
    while (param_1 < *pfVar5) {
      param_3 = param_3 - 1;
      if ((param_3 < uVar4) || (pfVar5 = pfVar5 + -4, uVar1 < param_3)) goto LAB_028c8ea4;
    }
    param_3 = param_3 + 1;
  }
LAB_028c8ea4:
  if (param_3 <= uVar1 && uVar4 <= param_3) {
    uVar4 = param_3;
  }
  return uVar4;
}


