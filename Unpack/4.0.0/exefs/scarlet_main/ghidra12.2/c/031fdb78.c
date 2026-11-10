/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fdb78; name: FUN_031fdb78
 */


ulong FUN_031fdb78(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  
  uVar6 = *(uint *)(param_1 + 3);
  uVar9 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar6 << 1) < (uint)uVar9 && -2 < (int)param_1[1]) && uVar9 >> 0x20 == 0)
      && (-1 < (int)uVar6)) && (((long)(int)uVar6 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar8 = (int)lVar1 * -0x61c8864f;
  uVar3 = (int)((ulong)lVar1 >> 0x20) * -0x61c8864f;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = uVar8 + 0x9e3779b9 + (uVar8 >> 2) + uVar3 * 0x40 ^ uVar3;
  uVar8 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar4 = (int)lVar2 * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar8 * 0x40 ^ uVar8;
  lVar7 = param_1[2];
  uVar3 = uVar8 + 0x9e3779b9 + uVar3 * 0x40 + (uVar8 >> 2) ^ uVar3;
  uVar9 = (ulong)(uVar3 & uVar6);
  puVar5 = (uint *)(lVar7 + uVar9 * 8);
  puVar11 = puVar5 + 1;
  uVar8 = *puVar11;
  if (-1 < (int)uVar8) {
    do {
      if ((*puVar5 == uVar3) &&
         (plVar10 = (long *)(*param_1 + (ulong)uVar8 * 0x18),
         *plVar10 == lVar1 && plVar10[1] == lVar2)) goto LAB_031fdcac;
      uVar9 = uVar9 + 1 & (long)(int)uVar6;
      puVar5 = (uint *)(lVar7 + uVar9 * 8);
      puVar11 = puVar5 + 1;
      uVar8 = *puVar11;
    } while (-1 < (int)uVar8);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar5 = uVar3;
  *puVar11 = uVar6;
  uVar8 = *(uint *)(param_1 + 1);
  lVar7 = param_1[2];
LAB_031fdcac:
  return (ulong)uVar8 | ((ulong)((long)puVar5 - lVar7) >> 3) << 0x20;
}


