/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03327f2c; name: FUN_03327f2c
 */


ulong FUN_03327f2c(long *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar6 = (ulong)(int)param_1[3];
  uVar3 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)(uVar6 << 1) < (uint)uVar3 && -2 < (int)param_1[1]) && uVar3 >> 0x20 == 0) &&
      (-1 < (int)param_1[3])) && ((uVar6 & 0x7fffffffffffffff) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar6 = (ulong)*(uint *)(param_1 + 3);
  }
  uVar3 = (ulong)*param_2 & 0x7fffffff;
  lVar4 = param_1[2];
  uVar7 = uVar3 & uVar6 & 0xffffffff;
  piVar1 = (int *)(lVar4 + uVar7 * 8);
  puVar8 = (uint *)(piVar1 + 1);
  uVar5 = *puVar8;
  iVar2 = (int)uVar3;
  if (-1 < (int)uVar5) {
    do {
      if ((*piVar1 == iVar2) && (*(uint *)(*param_1 + (ulong)uVar5 * 8) == *param_2))
      goto LAB_03328000;
      uVar7 = uVar7 + 1 & (long)(int)uVar6;
      piVar1 = (int *)(lVar4 + uVar7 * 8);
      puVar8 = (uint *)(piVar1 + 1);
      uVar5 = *puVar8;
    } while (-1 < (int)uVar5);
  }
  uVar5 = *(uint *)(param_1 + 1);
  *piVar1 = iVar2;
  *puVar8 = uVar5;
  uVar5 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_03328000:
  return (ulong)uVar5 | ((ulong)((long)piVar1 - lVar4) >> 3) << 0x20;
}


