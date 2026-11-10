/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189405c; name: FUN_0189405c
 */


int FUN_0189405c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar3 = param_3;
  if (param_2 <= param_3) {
    uVar3 = param_2;
    param_2 = param_3;
  }
  uVar1 = (param_2 - uVar3) + 1;
  uVar6 = (ulong)uVar1;
  if (uVar1 < 2) {
    uVar11 = 0;
  }
  else {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    lVar2 = 0x3f;
    if ((uVar6 << (LZCOUNT(uVar6) & 0x3fU) & 0x7fffffffffffffff) != 0) {
      lVar2 = 0x40;
    }
    uVar7 = lVar2 - LZCOUNT(uVar6);
    uVar9 = uVar7 >> 6;
    if ((uVar7 & 0x3f) != 0) {
      uVar9 = uVar9 + 1;
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = uVar7 / uVar9;
    }
    uVar4 = *(ulong *)(param_1 + 8);
    uVar11 = uVar4 + *(ulong *)(param_1 + 0x10);
    uVar10 = uVar4 ^ *(ulong *)(param_1 + 0x10);
    uVar8 = uVar10 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar10 << 0x10;
    uVar10 = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar4 = 0;
    if (uVar9 <= uVar7) {
      uVar4 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
    }
    while (uVar11 = uVar11 & uVar4, uVar6 <= uVar11) {
      uVar9 = uVar8 ^ uVar10;
      uVar11 = uVar8 + uVar10;
      uVar8 = uVar9 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar9 << 0x10;
      uVar10 = uVar9 >> 0x1b | uVar9 << 0x25;
    }
    *(ulong *)(param_1 + 8) = uVar8;
    *(ulong *)(param_1 + 0x10) = uVar10;
  }
  return (int)uVar11 + uVar3;
}


