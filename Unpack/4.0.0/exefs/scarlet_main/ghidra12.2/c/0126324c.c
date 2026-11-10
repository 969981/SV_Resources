/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126324c; name: FUN_0126324c
 */


void FUN_0126324c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_a0 [24];
  byte local_88 [16];
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_38;
  
  std::to_string(1);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar2 = local_38;
  plVar3 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  plVar9 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 6;
  }
  local_70 = *plVar9;
  plVar9 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 7;
  }
  lStack_68 = *plVar9;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = local_38[8];
  }
  local_58 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_58 = local_38;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar2;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar8 = local_78;
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar7 = tpidr_el0;
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(2);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar4 = local_38;
  plVar9 = plVar1;
  plVar2 = plVar3;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 7;
    plVar2 = local_38 + 6;
  }
  local_70 = *plVar2;
  lStack_68 = *plVar9;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    local_60 = local_38[8];
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar4;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar8 = local_78;
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar7 = tpidr_el0;
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1 + 8,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(3);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar4 = local_38;
  plVar9 = plVar1;
  plVar2 = plVar3;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 7;
    plVar2 = local_38 + 6;
  }
  local_70 = *plVar2;
  lStack_68 = *plVar9;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    local_60 = local_38[8];
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar4;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar8 = local_78;
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar7 = tpidr_el0;
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1 + 0x10,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(4);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar4 = local_38;
  plVar9 = plVar1;
  plVar2 = plVar3;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 7;
    plVar2 = local_38 + 6;
  }
  local_70 = *plVar2;
  lStack_68 = *plVar9;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    local_60 = local_38[8];
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar4;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar8 = local_78;
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar7 = tpidr_el0;
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1 + 0x18,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(5);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar4 = local_38;
  plVar9 = plVar1;
  plVar2 = plVar3;
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 7;
    plVar2 = local_38 + 6;
  }
  local_70 = *plVar2;
  lStack_68 = *plVar9;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    local_60 = local_38[8];
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar4;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar8 = local_78;
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar7 = tpidr_el0;
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar8,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1 + 0x20,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  std::to_string(6);
  FUN_00d98b24(&local_38,"ComboAction_",local_88);
  plVar9 = local_38;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 7;
    plVar3 = local_38 + 6;
  }
  local_70 = *plVar3;
  lStack_68 = *plVar1;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    local_60 = local_38[8];
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar9;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,local_78,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,local_78,0,8);
    }
  }
  FUN_00d996a8(auStack_a0,param_2,&local_70);
  FUN_00d99870(param_1 + 0x28,auStack_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


