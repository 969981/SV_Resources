/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188916c; name: FUN_0188916c
 */


void FUN_0188916c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar2 = FUN_01195974();
  uVar8 = *(undefined8 *)(param_1 + 0x1a0);
  iVar6 = *(int *)(param_1 + 0x108);
  if (iVar6 == 0) {
    lVar3 = FUN_01195854();
    uVar5 = (uint)*(byte *)(lVar3 + 0x570);
    uVar4 = 0;
    iVar6 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar4 = 1;
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        uVar5 = 0xffffffff;
        uVar4 = 3;
        goto LAB_018891a8;
      }
      uVar4 = 2;
    }
    uVar5 = *(uint *)(param_1 + 0x2a4);
  }
LAB_018891a8:
  iVar9 = (int)((ulong)uVar2 >> 0x20);
  iVar7 = iVar9;
  if (iVar6 != 2) {
    iVar7 = 1;
  }
  iVar1 = iVar9;
  if (iVar6 != 1) {
    iVar1 = iVar7;
  }
  iVar7 = (int)uVar2 + iVar9 * 6;
  if (iVar6 != 0) {
    iVar7 = iVar1;
  }
  FUN_01dce170(uVar8,uVar4,uVar5,iVar7);
  return;
}


