/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020c9d10; name: FUN_020c9d10
 */


void FUN_020c9d10(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  byte local_a8;
  undefined7 uStack_a7;
  long local_98;
  ulong local_90;
  char *pcStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = &DAT_cbf29ce484222645;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_50 = *(undefined8 *)(lVar1 + 0x30);
  local_48 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  local_90 = 0xf2ad01e237b41ef5;
  pcStack_88 = "TriggerProbabilityKey";
  local_80 = 0x15;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar6;
  }
  local_90 = 0x238f3c3c39758535;
  pcStack_88 = "TriggerIdKey";
  local_80 = 0xc;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar6;
  }
  local_90 = 0xe21c49e5a1d69db7;
  pcStack_88 = "FailureProbabilityKey";
  local_80 = 0x15;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar6;
  }
  local_90 = 0xfcaf32ed787b0043;
  pcStack_88 = "FailureIdKey";
  local_80 = 0xc;
  FUN_00d8fb98(auStack_70,&local_90);
  FUN_00c97fdc(&local_a8,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar6;
  }
  std::to_string(1);
  FUN_01566560(&local_a8,"SuccessProbabilityKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c9f74;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c9f74:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = uVar6;
  }
  std::to_string(1);
  FUN_00d99618(&local_28,"SuccessIdKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar5 = local_98;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020c9fd8;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020c9fd8:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(2);
  FUN_01566560(&local_a8,"SuccessProbabilityKey_",&local_90);
  FUN_0135d26c(auStack_70,&local_a8);
  if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
  }
  lVar5 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar5,0,8);
        goto LAB_020ca04c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
  }
LAB_020ca04c:
  FUN_00c97fdc(&local_90,param_1,auStack_70);
  if (local_90 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74) + 8) = uVar6;
  }
  std::to_string(2);
  FUN_00d99618(&local_28,"SuccessIdKey_",&local_a8);
  FUN_0135d26c(&local_90,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar7,local_98,0,8);
        goto LAB_020ca0b4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,local_98,0,8);
  }
LAB_020ca0b4:
  FUN_00c97fdc(&local_a8,param_1,&local_90);
  if (CONCAT71(uStack_a7,local_a8) != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70) + 8) = uVar6;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined8 *)(lVar1 + 0x30) = local_50;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_48;
  return;
}


