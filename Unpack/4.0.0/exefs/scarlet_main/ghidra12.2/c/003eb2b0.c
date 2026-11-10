/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb2b0; name: FUN_003eb2b0
 */


uint FUN_003eb2b0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = uVar1 - 1;
  if ((*(byte *)((long)param_1 + 0x14) >> 2 & 1) != 0) {
    if ((int)*(uint *)((long)param_1 + 0xc) < 1) {
      uVar13 = 0;
    }
    else {
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      do {
        uVar4 = (int)((uVar10 ^ (uint)uVar11) - 1 & uVar1 + 0x7fffffff) >> 0x1f;
        uVar12 = uVar4 | uVar12;
        uVar3 = *(uint *)(*param_1 + uVar11 * 4);
        uVar11 = uVar11 + 1;
        uVar2 = (int)-(uVar3 >> 0x10) >> 0x1f;
        uVar7 = uVar3 >> 0x10 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff);
        uVar6 = uVar7 >> 8;
        uVar5 = (int)-uVar6 >> 0x1f;
        uVar8 = uVar6 & uVar5 | uVar7 & (uVar5 ^ 0xffffffff);
        uVar7 = uVar8 >> 4;
        uVar6 = (int)-uVar7 >> 0x1f;
        uVar9 = uVar7 & uVar6 | uVar8 & (uVar6 ^ 0xffffffff);
        uVar8 = uVar9 >> 2;
        uVar7 = (int)-uVar8 >> 0x1f;
        uVar13 = (~uVar12 & 0x20) + uVar13 +
                 ((uVar2 & 0x10 | (uint)(uVar3 != 0) | uVar5 & 8 | uVar6 & 4 | uVar7 & 2) -
                  ((int)-((uVar8 & uVar7 | uVar9 & (uVar7 ^ 0xffffffff)) >> 1) >> 0x1f) & uVar4);
      } while (*(uint *)((long)param_1 + 0xc) != uVar11);
    }
    return uVar13 & ((int)(0x80000000 - uVar1 & (uVar1 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU);
  }
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*param_1 + (long)(int)uVar10 * 4);
  uVar1 = (int)-(uVar2 >> 0x10) >> 0x1f;
  uVar4 = uVar2 >> 0x10 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff);
  uVar12 = uVar4 >> 8;
  uVar13 = (int)-uVar12 >> 0x1f;
  uVar5 = uVar12 & uVar13 | uVar4 & (uVar13 ^ 0xffffffff);
  uVar4 = uVar5 >> 4;
  uVar12 = (int)-uVar4 >> 0x1f;
  uVar6 = uVar4 & uVar12 | uVar5 & (uVar12 ^ 0xffffffff);
  uVar5 = uVar6 >> 2;
  uVar4 = (int)-uVar5 >> 0x1f;
  return (uVar1 & 0x10 | (uint)(uVar2 != 0) | uVar13 & 8 | uVar12 & 4 | uVar4 & 2 | uVar10 * 0x20) -
         ((int)-((uVar5 & uVar4 | uVar6 & (uVar4 ^ 0xffffffff)) >> 1) >> 0x1f);
}


