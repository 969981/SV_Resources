/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173b2e8; name: FUN_0173b2e8
 */


ulong FUN_0173b2e8(long param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_28;
  
  uVar5 = *param_2;
  uVar3 = param_2[1];
  uVar6 = (ulong)uVar3;
  uVar2 = uVar3;
  if (uVar3 == 0) {
    if (param_3[1] == 1) {
      *(uint *)(param_1 + 0x1e8) = *param_3;
      uVar2 = param_2[1];
      goto LAB_0173b328;
    }
  }
  else {
LAB_0173b328:
    if ((uVar2 == 1) && (param_3[1] == 0)) {
      uVar5 = *(uint *)(param_1 + 0x1e8);
    }
  }
  if (*(int *)(param_1 + 0x29c) == 2) {
    if (((*(int *)(param_1 + 0x298) == 2) && (uVar5 != *param_3)) &&
       (*(char *)(param_1 + 500) != '\0')) {
      uVar6 = (ulong)param_3[1];
      uVar5 = *param_3;
      goto LAB_0173b4a0;
    }
    local_28 = FUN_01195974(param_1);
    if (*(char *)(param_1 + 500) != '\0') {
      FUN_01dd1990(param_1,&local_28);
    }
    if (*(char *)(param_1 + 0x19c) == '\0') goto LAB_0173b3b4;
    if (*(int *)(param_1 + 0x108) == 0) {
switchD_0173b4e0_caseD_2:
      bVar1 = uVar3 != 0;
    }
    else {
      bVar1 = true;
      switch(*(int *)(param_1 + 0x108)) {
      case 1:
        break;
      case 2:
        goto switchD_0173b4e0_caseD_2;
      default:
        bVar1 = false;
      }
    }
    FUN_01dd18b0(param_1,bVar1);
  }
LAB_0173b3b4:
  *(uint *)(param_1 + 0x1d8) = uVar5;
  *(uint *)(param_1 + 0x1dc) = uVar3;
  *(bool *)(param_1 + 0x1e0) = uVar3 != 0;
  if ((uVar3 == 0) || (*(char *)(param_1 + 0x19d) == '\0')) {
    if (uVar3 == 0) {
      FUN_014e8ce4(param_1);
      FUN_01dc3e30(*(undefined8 *)(param_1 + 0x1a8),0);
      FUN_0119544c(param_1,4);
      goto LAB_0173b4a0;
    }
  }
  else {
    local_28 = CONCAT44(uVar3 - 1,uVar5);
    FUN_014e85a0(param_1,&local_28,0);
  }
  iVar4 = uVar3 - 1;
  FUN_0119544c(param_1,*(undefined4 *)(param_1 + 0x27c));
  uVar2 = *(uint *)(param_1 + 0x108);
  if (uVar2 == 0) {
    iVar4 = uVar5 + iVar4 * 6;
  }
  else if (1 < uVar2 - 1) {
    iVar4 = 1;
  }
  if (2 < uVar2) {
    uVar2 = 3;
  }
  FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar2,iVar4,1);
  uVar2 = param_3[1];
  if ((uVar2 != 0) && (uVar5 != *param_3 || uVar3 != uVar2)) {
    iVar4 = uVar2 - 1;
    uVar3 = *(uint *)(param_1 + 0x108);
    if (uVar3 == 0) {
      iVar4 = *param_3 + iVar4 * 6;
    }
    else if (1 < uVar3 - 1) {
      iVar4 = 1;
    }
    if (2 < uVar3) {
      uVar3 = 3;
    }
    FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar3,iVar4,0);
  }
LAB_0173b4a0:
  return (ulong)uVar5 | uVar6 << 0x20;
}


