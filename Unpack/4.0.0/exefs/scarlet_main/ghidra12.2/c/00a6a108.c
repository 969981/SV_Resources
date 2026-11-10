/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6a108; name: FUN_00a6a108
 */


undefined8 FUN_00a6a108(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x108) == 3) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = FUN_01195974(param_1);
    iVar8 = *(int *)(param_1 + 0x108);
    if (iVar8 == 0) {
      lVar3 = FUN_01195854();
      uVar5 = (uint)*(byte *)(lVar3 + 0x570);
      uVar4 = 0;
      iVar8 = *(int *)(param_1 + 0x108);
    }
    else {
      uVar4 = 1;
      if (iVar8 != 1) {
        if (iVar8 != 2) {
          return 0;
        }
        uVar4 = 2;
      }
      uVar5 = *(uint *)(param_1 + 0x2a4);
    }
    uVar6 = uVar2 >> 0x20;
    if (iVar8 == 0) {
      uVar6 = (ulong)(uint)((int)uVar2 + (int)(uVar2 >> 0x20) * 6);
    }
    else if ((iVar8 != 1) && (iVar8 != 2)) {
      uVar6 = 1;
    }
    FUN_01dd7a14(param_1,uVar4,uVar5,uVar6,1,1);
    iVar7 = *(int *)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar8 = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar8 = *(int *)(param_1 + 0x1dc) + -1;
    }
    if (iVar7 == 0) {
      lVar3 = FUN_01195854();
      uVar5 = (uint)*(byte *)(lVar3 + 0x570);
      iVar7 = *(int *)(param_1 + 0x108);
    }
    else if (iVar7 - 1U < 2) {
      uVar5 = *(uint *)(param_1 + 0x2a4);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (iVar7 == 0) {
      iVar8 = iVar1 + iVar8 * 6;
      goto LAB_00a6a1b0;
    }
    if ((iVar7 == 1) || (iVar7 == 2)) goto LAB_00a6a1b0;
  }
  iVar8 = 1;
LAB_00a6a1b0:
  FUN_014e89c0(param_1,0,uVar5,iVar8);
  *(undefined2 *)(param_1 + 0x1e2) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  return 1;
}


