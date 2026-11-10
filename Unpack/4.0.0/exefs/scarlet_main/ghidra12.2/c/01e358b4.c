/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e358b4; name: FUN_01e358b4
 */


ulong FUN_01e358b4(float param_1,long param_2,ulong param_3,ulong param_4)

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
      if ((param_3 < param_4) || (pfVar4 = pfVar4 + -4, uVar1 < param_3)) goto LAB_01e35948;
    }
    param_3 = param_3 + 1;
  }
LAB_01e35948:
  if (param_3 <= uVar1 && param_4 <= param_3) {
    param_4 = param_3;
  }
  return param_4;
}


