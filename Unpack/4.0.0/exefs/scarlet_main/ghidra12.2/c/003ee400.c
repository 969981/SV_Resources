/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ee400; name: FUN_003ee400
 */


uint FUN_003ee400(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_3 == 0) {
    return 0xffffffff;
  }
  uVar4 = FUN_003eb210(param_3);
  uVar3 = 0x20 - uVar4;
  uVar1 = 0;
  if (param_3 <= param_1) {
    uVar1 = param_3;
  }
  uVar2 = param_1 - uVar1;
  if (uVar3 != 0) {
    uVar2 = param_1 - uVar1 << (ulong)(uVar3 & 0x1f) | param_2 >> (ulong)(uVar4 & 0x1f);
    param_3 = param_3 << (ulong)(uVar3 & 0x1f);
    param_2 = param_2 << (ulong)(uVar3 & 0x1f);
  }
  uVar3 = param_3 >> 0x10;
  uVar1 = param_3 & 0xffff;
  if (uVar3 == uVar2 >> 0x10) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
  }
  iVar8 = uVar4 * uVar3;
  uVar11 = uVar2 - iVar8;
  uVar9 = uVar4 * uVar1;
  if (uVar11 >> 0x10 == 0) {
    uVar5 = uVar2 * 0x10000 + iVar8 * -0x10000;
    do {
      if (uVar9 <= (uVar5 | param_2 >> 0x10)) break;
      uVar11 = uVar11 + uVar3;
      uVar4 = uVar4 - 1;
      iVar8 = iVar8 - uVar3;
      uVar9 = uVar9 - uVar1;
      uVar5 = uVar5 + uVar3 * 0x10000;
    } while (uVar11 < 0x10000);
  }
  uVar11 = iVar8 + (uVar9 >> 0x10);
  uVar5 = param_2 + uVar9 * -0x10000;
  if (param_2 < uVar9 * 0x10000) {
    uVar11 = uVar11 + 1;
  }
  if (uVar2 >= uVar11) {
    param_3 = 0;
  }
  param_3 = (uVar2 - uVar11) + param_3;
  uVar9 = (uint)(CONCAT44(param_3,uVar5) >> 0x10);
  if (uVar3 == (param_3 & 0xffff)) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar9 / uVar3;
    }
  }
  iVar8 = uVar7 * uVar3;
  uVar12 = uVar9 - iVar8;
  uVar10 = uVar7 * uVar1;
  if (uVar12 >> 0x10 == 0) {
    uVar6 = uVar9 * 0x10000 + iVar8 * -0x10000;
    do {
      if (uVar10 <= (uVar6 | uVar5 & 0xffff)) break;
      uVar12 = uVar12 + uVar3;
      uVar7 = uVar7 - 1;
      iVar8 = iVar8 - uVar3;
      uVar10 = uVar10 - uVar1;
      uVar6 = uVar6 + uVar3 * 0x10000;
    } while (uVar12 < 0x10000);
  }
  uVar1 = iVar8 + (uVar10 >> 0x10);
  if (param_2 * 0x10000 < uVar10 << 0x10) {
    uVar1 = uVar1 + 1;
  }
  return uVar7 - (uVar9 < uVar1) | (uVar4 - (uVar2 < uVar11)) * 0x10000;
}


