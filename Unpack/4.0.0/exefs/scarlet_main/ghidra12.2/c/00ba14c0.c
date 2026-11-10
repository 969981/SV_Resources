/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba14c0; name: FUN_00ba14c0
 */


void FUN_00ba14c0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  byte local_70 [16];
  long local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  puVar1 = PTR_DAT_047dac08;
  if (*(long *)(param_2 + 0x28) == 0) {
    lVar7 = *(long *)PTR_DAT_047dac08;
    if (lVar7 == 0) {
      FUN_00bb5d70();
      lVar7 = *(long *)puVar1;
    }
    *(long *)(param_2 + 0x28) = lVar7;
  }
  iVar2 = FUN_00b9fce0(param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 8),0,0);
  if (iVar2 == 1) {
    *(undefined8 *)(param_2 + 0x18) = extraout_x1;
  }
  else if (iVar2 == 0) {
    FUN_00b8a36c(param_1,*(undefined8 *)(param_2 + 8),param_3,5,*(undefined8 *)(param_3 + 0x20));
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    std::operator+("\"",*(string **)(param_3 + 0x20));
    puVar3 = (ulong *)std::string::append((char *)local_70);
    uStack_50 = puVar3[1];
    local_48 = puVar3[2];
    local_58 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_00b89f94(param_1,uVar9,param_3,5,&local_58);
    uVar5 = local_48;
    if (((local_58 & 1) != 0) && (local_48 != 0)) {
      lVar7 = tpidr_el0;
      plVar8 = *(long **)(lVar7 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar5,0,8);
      }
    }
    lVar7 = local_60;
    if (((local_70[0] & 1) != 0) && (local_60 != 0)) {
      lVar6 = tpidr_el0;
      plVar8 = *(long **)(lVar6 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
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
  }
  iVar2 = FUN_00b9fce0(param_1,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_2 + 8),0,0);
  if (iVar2 == 1) {
    *(undefined8 *)(param_2 + 0x20) = extraout_x1_00;
    return;
  }
  if (iVar2 == 0) {
    FUN_00b8a36c(param_1,*(undefined8 *)(param_2 + 8),param_3,6,*(undefined8 *)(param_3 + 0x28));
    return;
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  std::operator+("\"",*(string **)(param_3 + 0x28));
  puVar3 = (ulong *)std::string::append((char *)local_70);
  uStack_50 = puVar3[1];
  local_48 = puVar3[2];
  local_58 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_00b89f94(param_1,uVar9,param_3,6,&local_58);
  uVar5 = local_48;
  if (((local_58 & 1) != 0) && (local_48 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar5,0,8);
    }
  }
  if (((local_70[0] & 1) != 0) && (local_60 != 0)) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar8,local_60,0,8);
      return;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,local_60,0,8);
  }
  return;
}


