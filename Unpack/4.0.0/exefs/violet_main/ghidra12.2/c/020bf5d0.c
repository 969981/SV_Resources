/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020bf5d0; name: FUN_020bf5d0
 */


void FUN_020bf5d0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong local_88;
  char *pcStack_80;
  long local_78;
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
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_50 = *(undefined8 *)(lVar1 + 0x30);
  local_48 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  local_88 = 0xf129eb0216e0f865;
  pcStack_80 = "FirstActionProbabilityKey";
  local_78 = 0x19;
  FUN_00d8fb98(auStack_70,&local_88);
  FUN_00c97fdc(&local_28,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar6;
  }
  local_88 = 0xba5057469d264b85;
  pcStack_80 = "FirstActionIdKey";
  local_78 = 0x10;
  FUN_00d8fb98(auStack_70,&local_88);
  FUN_00c97fdc(&local_28,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar6;
  }
  local_88 = 0x238f3c3c39758535;
  pcStack_80 = "TriggerIdKey";
  local_78 = 0xc;
  FUN_00d8fb98(auStack_70,&local_88);
  FUN_00c97fdc(&local_28,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar6;
  }
  local_88 = 0x84ff9692e5baf759;
  pcStack_80 = "BranchActionIdKey";
  local_78 = 0x11;
  FUN_00d8fb98(auStack_70,&local_88);
  FUN_00c97fdc(&local_28,param_1,auStack_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar6;
  }
  std::to_string(1);
  FUN_0189df60(&local_28,"BranchProbabilityKey_",&local_88);
  FUN_0135d26c(auStack_70,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar2 = local_78;
  if (((local_88 & 1) != 0) && (local_78 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar2,0,8);
        goto LAB_020bf834;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,0,8);
  }
LAB_020bf834:
  FUN_00c97fdc(&local_88,param_1,auStack_70);
  if (local_88 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar6;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(2);
  FUN_0189df60(&local_28,"BranchProbabilityKey_",&local_88);
  FUN_0135d26c(auStack_70,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar2 = local_78;
  if (((local_88 & 1) != 0) && (local_78 != 0)) {
    plVar7 = *(long **)(lVar1 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar2,0,8);
        goto LAB_020bf8a0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,0,8);
  }
LAB_020bf8a0:
  FUN_00c97fdc(&local_88,param_1,auStack_70);
  if (local_88 != 0) {
    uVar6 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70) + 8) = uVar6;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined8 *)(lVar1 + 0x30) = local_50;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_48;
  return;
}


