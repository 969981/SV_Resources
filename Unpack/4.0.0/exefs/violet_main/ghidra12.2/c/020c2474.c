/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020c2474; name: FUN_020c2474
 */


void FUN_020c2474(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  undefined7 uStack_7f;
  long local_70;
  long *local_68;
  
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_90 = *(undefined8 *)(lVar1 + 0x30);
  local_88 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar9;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  std::to_string(1);
  FUN_010c7d18(&local_98,"ProbabilityKey_",&local_80);
  plVar3 = local_98;
  plVar12 = (long *)PTR_DAT_047d8b70;
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (local_98 != (long *)0x0) {
    plVar10 = local_98 + 6;
  }
  lVar11 = *plVar10;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  lVar8 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar7 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar8,0,8);
        goto LAB_020c2544;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
  }
LAB_020c2544:
  lVar8 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar6) {
    lVar11 = lVar8;
  }
  else {
    do {
      FUN_00c98090(&local_80,lVar8);
      lVar2 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar2 == lVar11) goto LAB_020c2620;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 != lVar8);
    lVar8 = lVar6;
LAB_020c2620:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar11 != lVar8)) {
    FUN_00d09648(&local_80);
    uVar9 = CONCAT71(uStack_7f,local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar9;
  }
  std::to_string(1);
  FUN_00d98b24(&local_98,"ActionIDKey_",&local_80);
  plVar4 = local_98;
  plVar10 = plVar12;
  if (local_98 != (long *)0x0) {
    plVar10 = local_98 + 6;
  }
  lVar11 = *plVar10;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  lVar8 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar7 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar8,0,8);
        goto LAB_020c26ac;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
  }
LAB_020c26ac:
  lVar8 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar6) {
    lVar11 = lVar8;
  }
  else {
    do {
      FUN_00c98090(&local_80,lVar8);
      lVar2 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar2 == lVar11) goto LAB_020c2798;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 != lVar8);
    lVar8 = lVar6;
LAB_020c2798:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar11 != lVar8)) {
    FUN_00d09648(&local_80);
    uVar9 = CONCAT71(uStack_7f,local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar9;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  std::to_string(2);
  FUN_010c7d18(&local_98,"ProbabilityKey_",&local_80);
  plVar3 = local_98;
  plVar10 = plVar12;
  if (local_98 != (long *)0x0) {
    plVar10 = local_98 + 6;
  }
  lVar11 = *plVar10;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  lVar8 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar7 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar10,lVar8,0,8);
        goto LAB_020c282c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
  }
LAB_020c282c:
  lVar8 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar6) {
    lVar11 = lVar8;
  }
  else {
    do {
      FUN_00c98090(&local_80,lVar8);
      lVar2 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar2 == lVar11) goto LAB_020c2940;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 != lVar8);
    lVar8 = lVar6;
LAB_020c2940:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar11 != lVar8)) {
    FUN_00d09648(&local_80);
    uVar9 = CONCAT71(uStack_7f,local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60) + 8) = uVar9;
  }
  std::to_string(2);
  FUN_00d98b24(&local_98,"ActionIDKey_",&local_80);
  plVar10 = local_98;
  if (local_98 != (long *)0x0) {
    plVar12 = local_98 + 6;
  }
  lVar11 = *plVar12;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    plVar12 = *(long **)(lVar1 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar12,local_70,0,8);
        goto LAB_020c29d0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,local_70,0,8);
  }
LAB_020c29d0:
  lVar8 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar6) {
    lVar11 = lVar8;
  }
  else {
    do {
      FUN_00c98090(&local_80,lVar8);
      lVar2 = CONCAT71(uStack_7f,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar2 == lVar11) goto LAB_020c2abc;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 != lVar8);
    lVar8 = lVar6;
LAB_020c2abc:
    lVar11 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar11 != lVar8)) {
    FUN_00d09648(&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(ulong *)(*param_2 + (ulong)*(uint *)(param_1 + 100) + 8) = CONCAT71(uStack_7f,local_80);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  *(undefined8 *)(lVar1 + 0x30) = local_90;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_88;
  return;
}


