/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f27c0; name: FUN_030f27c0
 */


ulong FUN_030f27c0(long *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar7 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar6 << 1) < (uint)uVar7 && -2 < (int)param_1[1]) && uVar7 >> 0x20 == 0)
      && (-1 < (int)uVar6)) && (((long)(int)uVar6 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  uVar2 = *param_2 * -0x61c8864f;
  uVar5 = param_2[1] * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  lVar4 = param_1[2];
  uVar2 = uVar5 + uVar2 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar7 = (ulong)(uVar2 & uVar6);
  puVar3 = (uint *)(lVar4 + uVar7 * 8);
  puVar8 = puVar3 + 1;
  uVar5 = *puVar8;
  if (-1 < (int)uVar5) {
    do {
      if ((*puVar3 == uVar2) &&
         (piVar1 = (int *)(*param_1 + (ulong)uVar5 * 8),
         *piVar1 == *param_2 && piVar1[1] == param_2[1])) goto LAB_030f28b8;
      uVar7 = uVar7 + 1 & (long)(int)uVar6;
      puVar3 = (uint *)(lVar4 + uVar7 * 8);
      puVar8 = puVar3 + 1;
      uVar5 = *puVar8;
    } while (-1 < (int)uVar5);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar3 = uVar2;
  *puVar8 = uVar6;
  uVar5 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_030f28b8:
  return (ulong)uVar5 | ((ulong)((long)puVar3 - lVar4) >> 3) << 0x20;
}


