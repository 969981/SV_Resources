/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336f4b8; name: FUN_0336f4b8
 */


ulong FUN_0336f4b8(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar6 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar5 << 1) < (uint)uVar6 && -2 < (int)param_1[1]) && uVar6 >> 0x20 == 0)
      && (-1 < (int)uVar5)) && (((long)(int)uVar5 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar5 = *(uint *)(param_1 + 3);
  }
  uVar1 = *param_2 * -0x61c8864f;
  uVar4 = param_2[1] * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  lVar3 = param_1[2];
  uVar1 = uVar4 + uVar1 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar6 = (ulong)(uVar1 & uVar5);
  puVar2 = (uint *)(lVar3 + uVar6 * 8);
  puVar8 = puVar2 + 1;
  uVar4 = *puVar8;
  if (-1 < (int)uVar4) {
    do {
      if ((*puVar2 == uVar1) &&
         (piVar7 = (int *)(*param_1 + (ulong)uVar4 * 0xc),
         *piVar7 == *param_2 && piVar7[1] == param_2[1])) goto LAB_0336f5b4;
      uVar6 = uVar6 + 1 & (long)(int)uVar5;
      puVar2 = (uint *)(lVar3 + uVar6 * 8);
      puVar8 = puVar2 + 1;
      uVar4 = *puVar8;
    } while (-1 < (int)uVar4);
  }
  uVar5 = *(uint *)(param_1 + 1);
  *puVar2 = uVar1;
  *puVar8 = uVar5;
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_0336f5b4:
  return (ulong)uVar4 | ((ulong)((long)puVar2 - lVar3) >> 3) << 0x20;
}


