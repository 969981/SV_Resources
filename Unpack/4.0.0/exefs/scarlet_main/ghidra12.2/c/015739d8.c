/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015739d8; name: FUN_015739d8
 */


void FUN_015739d8(int *param_1,long *param_2)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long *local_38;
  
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_01574638((long)puVar1 + (ulong)*puVar1);
    lVar11 = *param_2;
    *param_2 = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_015744a8((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[1];
    param_2[1] = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar10 == 0)) {
    lVar5 = 0x780;
  }
  else {
    lVar5 = *(long *)((long)param_1 + uVar10);
  }
  param_2[2] = lVar5;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar10 == 0)) {
    lVar5 = 0x438;
  }
  else {
    lVar5 = *(long *)((long)param_1 + uVar10);
  }
  param_2[3] = lVar5;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar10 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(undefined1 *)((long)param_1 + uVar10);
  }
  *(undefined1 *)(param_2 + 4) = uVar8;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0xf) {
    bVar3 = false;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7];
    bVar3 = false;
    if (uVar10 != 0) {
      bVar3 = *(char *)((long)param_1 + uVar10) != '\0';
    }
  }
  *(bool *)((long)param_2 + 0x21) = bVar3;
  if ((0x10 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_01574698((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[5];
    param_2[5] = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar10 == 0)) {
    uVar9 = 0x800;
  }
  else {
    uVar9 = *(undefined4 *)((long)param_1 + uVar10);
  }
  *(undefined4 *)(param_2 + 6) = uVar9;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar10 == 0)) {
    uVar9 = 4;
  }
  else {
    uVar9 = *(undefined4 *)((long)param_1 + uVar10);
  }
  *(undefined4 *)((long)param_2 + 0x34) = uVar9;
  if ((0x16 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_015744e8((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[7];
    param_2[7] = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  if ((0x18 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xc], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_01574700((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[8];
    param_2[8] = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  lVar5 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar5);
  if (0x1a < uVar2) {
    uVar10 = (ulong)((ushort *)((long)param_1 - lVar5))[0xd];
    if (uVar10 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar10);
      pcVar12 = (char *)((long)puVar1 + (ulong)*puVar1 + 4);
      if (*pcVar12 == '\0') {
        local_38 = (long *)FUN_00d44228();
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x18))(local_38);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar6 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar6;
        FUN_00cf9884(&local_38,uVar6,pcVar12);
      }
      plVar7 = (long *)param_2[9];
      param_2[9] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      param_2[9] = (long)local_38;
      lVar5 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((0x1c < uVar2) && (uVar10 = (ulong)*(ushort *)((long)param_1 + (0x1c - lVar5)), uVar10 != 0)
       ) {
      uVar9 = *(undefined4 *)((long)param_1 + uVar10);
      goto LAB_01573c8c;
    }
  }
  uVar9 = 0x800;
LAB_01573c8c:
  *(undefined4 *)(param_2 + 10) = uVar9;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1f) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xf], uVar10 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(undefined1 *)((long)param_1 + uVar10);
  }
  *(undefined1 *)((long)param_2 + 0x54) = uVar8;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x21) ||
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x10], uVar10 == 0)) {
    uVar9 = 3;
  }
  else {
    uVar9 = *(undefined4 *)((long)param_1 + uVar10);
  }
  *(undefined4 *)(param_2 + 0xb) = uVar9;
  if ((0x22 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x11], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_01574530((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[0xc];
    param_2[0xc] = lVar5;
    if (lVar11 != 0) {
      FUN_01966cf8(lVar11 + 0x78);
      FUN_01966cf8(lVar11 + 0x60);
      FUN_01966cf8(lVar11 + 0x48);
      FUN_01966cf8(lVar11 + 0x30);
      FUN_01966cf8(lVar11 + 0x18);
      FUN_01966cf8(lVar11);
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0x25) {
    bVar3 = false;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x12];
    bVar3 = false;
    if (uVar10 != 0) {
      bVar3 = *(char *)((long)param_1 + uVar10) != '\0';
    }
  }
  *(bool *)(param_2 + 0xd) = bVar3;
  if ((0x26 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar10 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x13], uVar10 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar10);
    lVar5 = FUN_015745dc((long)puVar1 + (ulong)*puVar1);
    lVar11 = param_2[0xe];
    param_2[0xe] = lVar5;
    if (lVar11 != 0) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01574070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
        return;
      }
      FUN_00c48fe8(plVar7,lVar11,0,8);
      return;
    }
  }
  return;
}


