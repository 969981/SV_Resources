/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011e000; name: FUN_0011e000
 */


uint FUN_0011e000(uint *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = (&DAT_03cab6f0)[(ulong)param_2 & 0xf];
  if (param_1[4] == 0) {
    uVar4 = 0x1f;
    uVar6 = **(uint **)(param_1 + 2);
    *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
  }
  else {
    uVar6 = *param_1;
    uVar4 = param_1[4] - 1;
  }
  uVar3 = uVar6 >> 1;
  *param_1 = uVar3;
  param_1[4] = uVar4;
  if ((uVar6 & 1) != 0) {
    return param_2 & 0xf0000 | (uint)bVar2;
  }
  if (uVar4 < 4) {
    uVar1 = **(uint **)(param_1 + 2);
    uVar6 = uVar1 >> (ulong)(4 - uVar4 & 0x1f);
    uVar5 = uVar4 + 0x1c;
    uVar3 = (uVar3 | uVar1 << (ulong)(uVar4 & 0x1f)) & 0xf;
    *param_1 = uVar6;
    param_1[4] = uVar5;
    *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
  }
  else {
    uVar6 = uVar6 >> 5;
    uVar5 = uVar4 - 4;
    *param_1 = uVar6;
    uVar3 = uVar3 & 0xf;
    param_1[4] = uVar5;
    if (uVar5 == 0) {
      uVar6 = **(uint **)(param_1 + 2);
      *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
      *param_1 = uVar6 >> 1;
      uVar5 = 0x1f;
      goto LAB_0011e0d4;
    }
  }
  *param_1 = uVar6 >> 1;
  uVar5 = uVar5 - 1;
LAB_0011e0d4:
  param_1[4] = uVar5;
  if ((uVar6 & 1) != 0) {
    uVar3 = uVar3 | uVar3 << 0x10;
  }
  return uVar3;
}


