/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ea5e8; name: FUN_031ea5e8
 */


ulong FUN_031ea5e8(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  
  uVar7 = *(uint *)(param_1 + 3);
  uVar8 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar7 << 1) < (uint)uVar8 && -2 < (int)param_1[1]) && uVar8 >> 0x20 == 0)
      && (-1 < (int)uVar7)) && (((long)(int)uVar7 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar7 = *(uint *)(param_1 + 3);
  }
  lVar5 = *param_2;
  uVar1 = (int)lVar5 * -0x61c8864f;
  uVar6 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar4 = param_1[2];
  uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  uVar8 = (ulong)(uVar1 & uVar7);
  puVar3 = (uint *)(lVar4 + uVar8 * 8);
  puVar9 = puVar3 + 1;
  uVar6 = *puVar9;
  if (-1 < (int)uVar6) {
    do {
      if ((*puVar3 == uVar1) && (*(long *)(*param_1 + (ulong)uVar6 * 0x10) == lVar5))
      goto LAB_031ea6e4;
      uVar8 = uVar8 + 1 & (long)(int)uVar7;
      puVar3 = (uint *)(lVar4 + uVar8 * 8);
      puVar9 = puVar3 + 1;
      uVar6 = *puVar9;
    } while (-1 < (int)uVar6);
  }
  uVar7 = *(uint *)(param_1 + 1);
  *puVar3 = uVar1;
  *puVar9 = uVar7;
  uVar6 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_031ea6e4:
  return (ulong)uVar6 | ((ulong)((long)puVar3 - lVar4) >> 3) << 0x20;
}


