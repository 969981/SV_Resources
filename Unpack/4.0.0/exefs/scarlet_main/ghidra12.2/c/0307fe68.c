/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307fe68; name: FUN_0307fe68
 */


ulong FUN_0307fe68(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar5 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar6 << 1) < (uint)uVar5 && -2 < (int)param_1[1]) && uVar5 >> 0x20 == 0)
      && (-1 < (int)uVar6)) && (((long)(int)uVar6 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  uVar4 = *param_2 * -0x61c8864f;
  lVar3 = param_1[2];
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar1 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (ulong)(uVar1 & uVar6);
  puVar2 = (uint *)(lVar3 + uVar5 * 8);
  puVar7 = puVar2 + 1;
  uVar4 = *puVar7;
  if (-1 < (int)uVar4) {
    do {
      if ((*puVar2 == uVar1) && (*(int *)(*param_1 + (ulong)uVar4 * 0x10) == *param_2))
      goto LAB_0307ff44;
      uVar5 = uVar5 + 1 & (long)(int)uVar6;
      puVar2 = (uint *)(lVar3 + uVar5 * 8);
      puVar7 = puVar2 + 1;
      uVar4 = *puVar7;
    } while (-1 < (int)uVar4);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar2 = uVar1;
  *puVar7 = uVar6;
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_0307ff44:
  return (ulong)uVar4 | ((ulong)((long)puVar2 - lVar3) >> 3) << 0x20;
}


