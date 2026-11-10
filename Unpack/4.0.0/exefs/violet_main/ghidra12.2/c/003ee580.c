/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ee580; name: FUN_003ee580
 */


ulong FUN_003ee580(undefined4 *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((int)param_4 < 1) {
    uVar3 = 0;
  }
  else {
    if (param_4 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + *param_2 + (ulong)*param_3;
        *param_1 = (int)uVar3;
        uVar3 = (ulong)param_3[1] + (ulong)param_2[1] + (uVar3 >> 0x20);
        param_1[1] = (int)uVar3;
        uVar3 = (ulong)param_3[2] + (ulong)param_2[2] + (uVar3 >> 0x20);
        param_1[2] = (int)uVar3;
        puVar1 = param_3 + 3;
        param_3 = param_3 + 4;
        uVar3 = (ulong)*puVar1 + (ulong)param_2[3] + (uVar3 >> 0x20);
        param_4 = param_4 - 4;
        param_2 = param_2 + 4;
        param_1[3] = (int)uVar3;
        uVar3 = uVar3 >> 0x20;
        param_1 = param_1 + 4;
      } while (3 < param_4);
      if (param_4 == 0) {
        return uVar3;
      }
    }
    uVar4 = param_4;
    if ((param_4 & 1) != 0) {
      uVar3 = uVar3 + *param_2 + (ulong)*param_3;
      *param_1 = (int)uVar3;
      uVar3 = uVar3 >> 0x20;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      uVar4 = param_4 - 1;
      param_1 = param_1 + 1;
    }
    if (param_4 != 1) {
      do {
        uVar3 = uVar3 + *param_2 + (ulong)*param_3;
        *param_1 = (int)uVar3;
        puVar1 = param_3 + 1;
        param_3 = param_3 + 2;
        uVar2 = (ulong)param_2[1] + (uVar3 >> 0x20) + (ulong)*puVar1;
        uVar4 = uVar4 - 2;
        param_2 = param_2 + 2;
        uVar3 = uVar2 >> 0x20;
        param_1[1] = (int)uVar2;
        param_1 = param_1 + 2;
      } while (uVar4 != 0);
    }
  }
  return uVar3;
}


