/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ee090; name: FUN_003ee090
 */


ulong FUN_003ee090(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((int)param_3 < 1) {
    uVar2 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      uVar3 = (ulong)param_4;
      do {
        uVar2 = uVar2 + *param_1 + *param_2 * uVar3;
        *param_1 = (uint)uVar2;
        uVar2 = (ulong)param_1[1] + param_2[1] * uVar3 + (uVar2 >> 0x20);
        param_1[1] = (uint)uVar2;
        uVar2 = (ulong)param_1[2] + param_2[2] * uVar3 + (uVar2 >> 0x20);
        param_1[2] = (uint)uVar2;
        puVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar2 = (ulong)param_1[3] + *puVar1 * uVar3 + (uVar2 >> 0x20);
        param_3 = param_3 - 4;
        param_1[3] = (uint)uVar2;
        uVar2 = uVar2 >> 0x20;
        param_1 = param_1 + 4;
      } while (3 < param_3);
      if (param_3 == 0) {
        return uVar2;
      }
    }
    do {
      param_3 = param_3 - 1;
      uVar2 = *param_1 + uVar2 + (ulong)*param_2 * (ulong)param_4;
      *param_1 = (uint)uVar2;
      uVar2 = uVar2 >> 0x20;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return uVar2;
}


