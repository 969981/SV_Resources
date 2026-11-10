/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03379970; name: FUN_03379970
 */


ulong FUN_03379970(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  uVar7 = *(uint *)(param_1 + 3);
  uVar6 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)(int)uVar7 << 1) < (uint)uVar6 && -2 < (int)param_1[1]) && uVar6 >> 0x20 == 0)
      && (-1 < (int)uVar7)) && (((long)(int)uVar7 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
    uVar7 = *(uint *)(param_1 + 3);
  }
  lVar8 = *param_2;
  uVar1 = (int)lVar8 * -0x61c8864f;
  uVar5 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  lVar4 = param_1[2];
  uVar6 = (ulong)(uVar1 & uVar7);
  puVar3 = (uint *)(lVar4 + uVar6 * 8);
  puVar9 = puVar3 + 1;
  uVar5 = *puVar9;
  if (-1 < (int)uVar5) {
    if (lVar8 == 0) {
      do {
        if ((*puVar3 == uVar1) && (*(long *)(*param_1 + (ulong)uVar5 * 0x28) == 0))
        goto LAB_03379ac4;
        uVar6 = uVar6 + 1 & (long)(int)uVar7;
        puVar3 = (uint *)(lVar4 + uVar6 * 8);
        puVar9 = puVar3 + 1;
        uVar5 = *puVar9;
      } while (-1 < (int)uVar5);
    }
    else {
      do {
        if (((*puVar3 == uVar1) && (*(long *)(*param_1 + (ulong)uVar5 * 0x28) == lVar8)) &&
           (*(long *)(*param_1 + (ulong)uVar5 * 0x28 + 8) == param_2[1])) goto LAB_03379ac4;
        uVar6 = uVar6 + 1 & (long)(int)uVar7;
        puVar3 = (uint *)(lVar4 + uVar6 * 8);
        puVar9 = puVar3 + 1;
        uVar5 = *puVar9;
      } while (-1 < (int)uVar5);
    }
  }
  uVar7 = *(uint *)(param_1 + 1);
  *puVar3 = uVar1;
  *puVar9 = uVar7;
  uVar5 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_03379ac4:
  return (ulong)uVar5 | ((ulong)((long)puVar3 - lVar4) >> 3) << 0x20;
}


