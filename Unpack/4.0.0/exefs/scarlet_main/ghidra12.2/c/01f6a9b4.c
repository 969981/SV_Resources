/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6a9b4; name: FUN_01f6a9b4
 */


void FUN_01f6a9b4(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [40];
  
code_r0x01f6a9b4:
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    iVar3 = (**(code **)(**(long **)(param_1 + 0x130) + 0x68))();
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else if ((iVar3 == 2) || (iVar3 != 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_1 + 0x1c) != '\0';
    }
    *(bool *)(param_1 + 0x1d) = bVar2;
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar4 = FUN_01f6ac34(*(long *)(param_1 + 0x28),3);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar7 = 2;
LAB_01f6ab94:
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    return;
  case 2:
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 3;
    uVar6 = 3;
    break;
  case 3:
    goto switchD_01f6a9ec_caseD_3;
  case 4:
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar4 = FUN_01f6ac34(*(long *)(param_1 + 0x28),6);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar7 = 5;
    goto LAB_01f6ab94;
  case 5:
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 6;
    uVar6 = 6;
    break;
  case 6:
    FUN_01f6ade8(*(undefined8 *)(param_1 + 0x130));
    uVar7 = 7;
    goto LAB_01f6ab94;
  case 7:
    uVar4 = FUN_01f6adfc(*(undefined8 *)(param_1 + 0x130));
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1d) == '\0') {
      uVar7 = 9;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) {
        return;
      }
      uVar4 = FUN_01f6ac34(*(long *)(param_1 + 0x28),0xb);
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar7 = 8;
    }
    goto LAB_01f6ab94;
  case 8:
  case 10:
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 0xb;
    uVar6 = 0xb;
    break;
  case 9:
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = iVar3 + -1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != 0 && 0 < iVar3) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar4 = FUN_01f6ac34(*(long *)(param_1 + 0x28),0xb);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar7 = 10;
    goto LAB_01f6ab94;
  case 0xb:
    FUN_01f6ae0c(*(undefined8 *)(param_1 + 0x130));
    uVar7 = 0xc;
    goto LAB_01f6ab94;
  case 0xc:
    uVar4 = FUN_01f6ae18(*(undefined8 *)(param_1 + 0x130));
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    uVar4 = FUN_01f6ac34(*(long *)(param_1 + 0x28),0xe);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar7 = 0xd;
    goto LAB_01f6ab94;
  case 0xd:
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 0xe;
    uVar6 = 0xe;
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_01f6ae28(auStack_28,param_1 + 0x130);
        FUN_01f6aee8((long *)(param_1 + 0x30),auStack_28);
        FUN_01f682f0(auStack_28);
      }
    }
    else if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      (**(code **)(param_1 + 0xb0))(param_1 + 0xd0);
    }
    FUN_01f6a51c(param_1);
    uVar7 = 0x10;
    goto LAB_01f6ab94;
  default:
    return;
  }
  uVar4 = FUN_01f6adb0(lVar5,uVar6);
  if ((uVar4 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  return;
switchD_01f6a9ec_caseD_3:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x130) + 0x78))();
  if ((uVar4 & 1) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 4;
  goto code_r0x01f6a9b4;
}


