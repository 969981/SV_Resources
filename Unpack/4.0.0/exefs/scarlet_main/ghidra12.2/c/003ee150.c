/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ee150; name: FUN_003ee150
 */


ulong FUN_003ee150(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar4 = (ulong)param_4;
      do {
        uVar3 = uVar3 + *param_2 * uVar4;
        *param_1 = (int)uVar3;
        uVar3 = param_2[1] * uVar4 + (uVar3 >> 0x20);
        param_1[1] = (int)uVar3;
        uVar3 = param_2[2] * uVar4 + (uVar3 >> 0x20);
        param_1[2] = (int)uVar3;
        puVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar3 = *puVar1 * uVar4 + (uVar3 >> 0x20);
        param_3 = param_3 - 4;
        param_1[3] = (int)uVar3;
        uVar3 = uVar3 >> 0x20;
        param_1 = param_1 + 4;
      } while (3 < param_3);
      if (param_3 == 0) {
        return uVar3;
      }
    }
    uVar4 = (ulong)param_4;
    uVar5 = param_3;
    if ((param_3 & 1) != 0) {
      uVar3 = uVar3 + *param_2 * uVar4;
      *param_1 = (int)uVar3;
      uVar3 = uVar3 >> 0x20;
      param_2 = param_2 + 1;
      uVar5 = param_3 - 1;
      param_1 = param_1 + 1;
    }
    if (param_3 != 1) {
      do {
        uVar3 = *param_2 * uVar4 + uVar3;
        *param_1 = (int)uVar3;
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        uVar2 = *puVar1 * uVar4 + (uVar3 >> 0x20);
        uVar5 = uVar5 - 2;
        uVar3 = uVar2 >> 0x20;
        param_1[1] = (int)uVar2;
        param_1 = param_1 + 2;
      } while (uVar5 != 0);
    }
  }
  return uVar3;
}


