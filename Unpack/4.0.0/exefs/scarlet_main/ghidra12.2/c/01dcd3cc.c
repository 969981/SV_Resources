/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcd3cc; name: FUN_01dcd3cc
 */


undefined8 FUN_01dcd3cc(long param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_18;
  
  if (*(int *)(*(long *)(param_1 + 0x1b8) + 0x2c) == 0x16) {
    param_2 = param_3;
    goto LAB_01dcd530;
  }
  if (*(char *)(param_1 + 0x19d) == '\0') {
    if (param_2[1] == 0) goto LAB_01dcd43c;
LAB_01dcd458:
    FUN_0119544c(param_1,*(undefined4 *)(param_1 + 0x27c));
    iVar2 = param_2[1] + -1;
    uVar3 = *(uint *)(param_1 + 0x108);
    if (uVar3 == 0) {
      iVar2 = *param_2 + iVar2 * 6;
    }
    else if (1 < uVar3 - 1) {
      iVar2 = 1;
    }
    if (2 < uVar3) {
      uVar3 = 3;
    }
    FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar3,iVar2,1);
    if (param_3[1] != 0) {
      iVar2 = param_3[1] + -1;
      uVar3 = *(uint *)(param_1 + 0x108);
      if (uVar3 == 0) {
        iVar2 = *param_3 + iVar2 * 6;
      }
      else if (1 < uVar3 - 1) {
        iVar2 = 1;
      }
      if (2 < uVar3) {
        uVar3 = 3;
      }
      FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar3,iVar2,0);
    }
  }
  else {
    if (param_2[1] == 0) {
LAB_01dcd43c:
      FUN_01dc3e30(*(undefined8 *)(param_1 + 0x1a8),0);
      FUN_014e8ce4(param_1);
    }
    else {
      local_18 = CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + -1,
                          (int)*(undefined8 *)param_2);
      FUN_014e85a0(param_1,&local_18,0);
    }
    if (param_2[1] != 0) goto LAB_01dcd458;
    FUN_0119544c(param_1,4);
  }
  if (*(int *)(param_1 + 0x29c) != 2) goto LAB_01dcd530;
  local_18 = FUN_01195974(param_1);
  if (*(char *)(param_1 + 500) != '\0') {
    FUN_01dd1990(param_1,&local_18);
  }
  if (*(char *)(param_1 + 0x19c) == '\0') goto LAB_01dcd530;
  if (*(int *)(param_1 + 0x108) == 0) {
switchD_01dcd568_caseD_2:
    bVar1 = param_2[1] != 0;
  }
  else {
    bVar1 = true;
    switch(*(int *)(param_1 + 0x108)) {
    case 1:
      break;
    case 2:
      goto switchD_01dcd568_caseD_2;
    default:
      bVar1 = false;
    }
  }
  FUN_01dd18b0(param_1,bVar1);
LAB_01dcd530:
  return *(undefined8 *)param_2;
}


