/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200350c; name: FUN_0200350c
 */


ulong FUN_0200350c(float param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  
  uVar5 = param_3 - param_4;
  uVar1 = param_3 + 1;
  if (2 < uVar5) {
    do {
      uVar2 = param_4 + (long)((float)uVar5 * 0.5);
      uVar3 = uVar2;
      uVar5 = (long)((float)uVar5 * 0.5);
      if (*(float *)(*(long *)(param_2 + 0xf8) + uVar2 * 0x10 + 8) <= param_1) {
        param_4 = uVar2;
        uVar3 = param_3;
        uVar5 = param_3 - uVar2;
      }
      param_3 = uVar3;
    } while (2 < uVar5);
  }
  if ((param_3 <= uVar1) && (param_4 <= param_3)) {
    pfVar4 = (float *)(*(long *)(param_2 + 0xf8) + param_3 * 0x10 + 8);
    while (param_1 < *pfVar4) {
      param_3 = param_3 - 1;
      if ((param_3 < param_4) || (pfVar4 = pfVar4 + -4, uVar1 < param_3)) goto LAB_020035a0;
    }
    param_3 = param_3 + 1;
  }
LAB_020035a0:
  if (param_3 <= uVar1 && param_4 <= param_3) {
    param_4 = param_3;
  }
  return param_4;
}


