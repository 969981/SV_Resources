/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126907c; name: FUN_0126907c
 */


void FUN_0126907c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_98 [24];
  byte local_80 [16];
  long local_70;
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  std::to_string(1);
  FUN_00d98b24(&local_68,"ComboAction_",local_80);
  plVar3 = local_68;
  plVar2 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 6;
  }
  local_60 = *plVar8;
  plVar8 = (long *)PTR_PTR_047d4508;
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 7;
  }
  lStack_58 = *plVar8;
  if (local_68 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = local_68[8];
  }
  local_48 = (long *)0x0;
  if (local_68 == (long *)0x0) {
    local_48 = local_68;
  }
  else {
    (**(code **)(*local_68 + 0x18))(local_68);
    local_48 = plVar3;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  lVar7 = local_70;
  if (((local_80[0] & 1) != 0) && (local_70 != 0)) {
    lVar6 = tpidr_el0;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar7,0,8);
    }
  }
  FUN_00d996a8(auStack_98,param_2,&local_60);
  FUN_00d99870(param_1,auStack_98);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  std::to_string(2);
  FUN_00d98b24(&local_68,"ComboAction_",local_80);
  plVar8 = local_68;
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 7;
    plVar2 = local_68 + 6;
  }
  local_60 = *plVar2;
  lStack_58 = *plVar1;
  if (local_68 == (long *)0x0) {
    local_50 = 0;
    local_48 = (long *)0x0;
  }
  else {
    local_50 = local_68[8];
    (**(code **)(*local_68 + 0x18))(local_68);
    local_48 = plVar8;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (((local_80[0] & 1) != 0) && (local_70 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,local_70,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,local_70,0,8);
    }
  }
  FUN_00d996a8(auStack_98,param_2,&local_60);
  FUN_00d99870(param_1 + 8,auStack_98);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


