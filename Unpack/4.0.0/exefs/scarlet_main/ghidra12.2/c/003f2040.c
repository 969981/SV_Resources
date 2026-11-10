/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2040; name: FUN_003f2040
 */


undefined8 FUN_003f2040(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  iVar2 = FUN_003eb480(param_2);
  if (iVar2 == 0) {
    iVar2 = (int)param_2[1];
    lVar9 = *param_2;
    if (param_2 != param_1) {
      lVar3 = FUN_003eb9a0(param_1,iVar2);
      if (lVar3 == 0) {
        return 0;
      }
      *(int *)(param_1 + 2) = (int)param_2[2];
    }
    uVar1 = iVar2 - 1;
    *(int *)(param_1 + 1) = iVar2;
    uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    uVar4 = *(uint *)(lVar9 + uVar6);
    lVar3 = *param_1;
    *(uint *)(lVar3 + uVar6) = uVar4 >> 1;
    iVar8 = (int)param_1[1] - (uint)(uVar4 == 1);
    uVar5 = iVar2 - 2;
    *(int *)(param_1 + 1) = iVar8;
    if (1 < iVar2) {
      lVar7 = (ulong)uVar1 + 1;
      do {
        uVar6 = (ulong)uVar5;
        uVar5 = uVar5 - 1;
        uVar1 = *(uint *)(lVar9 + uVar6 * 4);
        lVar7 = lVar7 + -1;
        *(int *)(lVar3 + uVar6 * 4) = (int)(CONCAT44(uVar4,uVar1) >> 1);
        uVar4 = uVar1;
      } while (1 < lVar7);
      iVar8 = (int)param_1[1];
    }
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  else {
    FUN_003eb9f0(param_1,0);
  }
  return 1;
}


