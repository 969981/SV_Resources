/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b77714; name: FUN_00b77714
 */


void FUN_00b77714(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_00bb1224(param_1 + 0x24);
  lVar4 = tpidr_el0;
  plVar7 = (long *)param_1[0x21];
  while (plVar7 != (long *)0x0) {
    plVar8 = (long *)*plVar7;
    if (((*(byte *)(plVar7 + 2) & 1) != 0) && (lVar5 = plVar7[4], lVar5 != 0)) {
      plVar6 = *(long **)(lVar4 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar5,0,8);
      }
    }
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0,8);
      plVar7 = plVar8;
    }
    else {
      FUN_00c48fe8(plVar6,plVar7,0,8);
      plVar7 = plVar8;
    }
  }
  lVar5 = param_1[0x1f];
  param_1[0x1f] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[0x1b];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[0x16];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[0x11];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[0xc];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = param_1[10];
  param_1[10] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[7];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = param_1[5];
  param_1[5] = 0;
  if (lVar5 != 0) {
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,0,8);
    }
  }
  plVar7 = (long *)param_1[2];
  while (plVar7 != (long *)0x0) {
    plVar6 = (long *)*plVar7;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
      plVar7 = plVar6;
    }
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar7 = *(long **)(lVar4 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b7800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,0,8);
    return;
  }
  FUN_00c48fe8(plVar7,lVar5,0,8);
  return;
}


