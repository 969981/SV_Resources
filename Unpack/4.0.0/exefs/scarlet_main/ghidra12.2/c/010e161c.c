/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e161c; name: FUN_010e161c
 */


undefined8 FUN_010e161c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  
  puVar3 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (puVar3 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar3;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
    if (4 < (uVar1 & 0xff)) {
      return 10;
    }
  }
  uVar8 = (ulong)uVar1 & 0xff;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x30);
  pbVar10 = (byte *)(lVar7 + uVar8 * 0x38 + 0x58);
  uVar6 = (ulong)*pbVar10;
  if (uVar6 != 0) {
    uVar9 = 0;
    uVar11 = uVar6 - 1;
    while ((((uint)uVar6 <= ((uint)uVar9 & 0xff) ||
            (plVar4 = *(long **)(lVar7 + uVar8 * 0x38 + 0x28 + uVar9 * 8), plVar4 == (long *)0x0))
           || (iVar2 = (**(code **)(*plVar4 + 0x98))(), iVar2 != param_2))) {
      if (uVar11 == uVar9) {
        return 10;
      }
      uVar6 = (ulong)*pbVar10;
      uVar9 = uVar9 + 1;
    }
    if (-1 < (int)(uint)uVar9) {
      uVar5 = FUN_00d9c090(param_1,uVar8,uVar9 & 0xffffffff);
      return uVar5;
    }
  }
  return 10;
}


