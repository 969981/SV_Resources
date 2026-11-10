/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031b0360; name: FUN_031b0360
 */


ulong FUN_031b0360(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar6 = ((long)(int)DAT_0487e9e0 + 1) * 3;
  if (((((uint)((long)(int)DAT_0487e9f0 << 1) < (uint)uVar6 && -2 < (int)DAT_0487e9e0) &&
        uVar6 >> 0x20 == 0) && (-1 < (int)DAT_0487e9f0)) &&
     (((long)(int)DAT_0487e9f0 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(&DAT_0487e9e8);
  }
  uVar3 = DAT_0487e9e0;
  uVar2 = *param_1 * -0x61c8864f;
  uVar5 = param_1[1] * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar2 = uVar5 + uVar2 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar6 = (ulong)(uVar2 & DAT_0487e9f0);
  puVar4 = (uint *)(DAT_0487e9e8 + uVar6 * 8);
  puVar7 = puVar4 + 1;
  uVar5 = *puVar7;
  if (-1 < (int)uVar5) {
    do {
      if ((*puVar4 == uVar2) &&
         (piVar1 = (int *)(DAT_0487e9d8 + (ulong)uVar5 * 0x20),
         *piVar1 == *param_1 && piVar1[1] == param_1[1])) goto LAB_031b046c;
      uVar6 = uVar6 + 1 & (long)(int)DAT_0487e9f0;
      puVar4 = (uint *)(DAT_0487e9e8 + uVar6 * 8);
      puVar7 = puVar4 + 1;
      uVar5 = *puVar7;
    } while (-1 < (int)uVar5);
  }
  *puVar4 = uVar2;
  *puVar7 = uVar3;
  uVar5 = DAT_0487e9e0;
LAB_031b046c:
  return (ulong)uVar5 | ((ulong)((long)puVar4 - DAT_0487e9e8) >> 3) << 0x20;
}


