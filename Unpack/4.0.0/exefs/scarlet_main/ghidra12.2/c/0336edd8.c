/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336edd8; name: FUN_0336edd8
 */


ulong FUN_0336edd8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  
  uVar8 = *(uint *)(param_1 + 3);
  uVar11 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar8 << 1) < (uint)uVar11 && -2 < (int)param_1[1]) &&
        uVar11 >> 0x20 == 0) && (-1 < (int)uVar8)) &&
     (((long)(int)uVar8 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar8 = *(uint *)(param_1 + 3);
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar10 = (int)lVar2 * -0x61c8864f;
  uVar4 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar5 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = (int)lVar3 * -0x61c8864f;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar6 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar4 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar4 * 0x40 ^ uVar4;
  uVar10 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = uVar6 + 0x9e3779b9 + (uVar6 >> 2) + uVar10 * 0x40 ^ uVar10;
  uVar4 = uVar10 + 0x9e3779b9 + uVar4 * 0x40 + (uVar10 >> 2) ^ uVar4;
  uVar10 = (int)param_2[2] * -0x61c8864f;
  uVar5 = *(int *)((long)param_2 + 0x14) * -0x61c8864f;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar4 = uVar10 + 0x9e3779b9 + (uVar10 >> 2) + uVar4 * 0x40 ^ uVar4;
  lVar9 = param_1[2];
  uVar4 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar4 * 0x40 ^ uVar4;
  uVar11 = (ulong)(uVar4 & uVar8);
  puVar7 = (uint *)(lVar9 + uVar11 * 8);
  puVar12 = puVar7 + 1;
  uVar10 = *puVar12;
  if (-1 < (int)uVar10) {
    do {
      if (*puVar7 == uVar4) {
        if (((*(long *)(*param_1 + (ulong)uVar10 * 0x20) == lVar2) &&
            (lVar1 = *param_1 + (ulong)uVar10 * 0x20, *(long *)(lVar1 + 8) == lVar3)) &&
           ((*(int *)(lVar1 + 0x10) == (int)param_2[2] &&
            (*(int *)(lVar1 + 0x14) == *(int *)((long)param_2 + 0x14))))) goto LAB_0336ef64;
      }
      uVar11 = uVar11 + 1 & (long)(int)uVar8;
      puVar7 = (uint *)(lVar9 + uVar11 * 8);
      puVar12 = puVar7 + 1;
      uVar10 = *puVar12;
    } while (-1 < (int)uVar10);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *puVar7 = uVar4;
  *puVar12 = uVar8;
  uVar10 = *(uint *)(param_1 + 1);
  lVar9 = param_1[2];
LAB_0336ef64:
  return (ulong)uVar10 | ((ulong)((long)puVar7 - lVar9) >> 3) << 0x20;
}


