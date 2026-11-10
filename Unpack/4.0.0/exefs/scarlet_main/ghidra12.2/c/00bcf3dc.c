/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bcf3dc; name: FUN_00bcf3dc
 */


void FUN_00bcf3dc(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_0455aeb0;
  puVar1 = PTR_DAT_047dabb0;
  pbVar7 = *(byte **)PTR_DAT_047dabb0;
  pbVar9 = (byte *)param_1[7];
  if (pbVar9 != pbVar7 && pbVar9 != (byte *)0x0) {
    lVar8 = tpidr_el0;
    if (((*pbVar9 & 1) != 0) && (lVar6 = *(long *)(pbVar9 + 0x10), lVar6 != 0)) {
      plVar10 = *(long **)(lVar8 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar6,0,8);
      }
    }
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar7 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[8];
  param_1[7] = 0;
  if (pbVar9 != pbVar7 && pbVar9 != (byte *)0x0) {
    if (((*pbVar9 & 1) != 0) && (lVar8 = *(long *)(pbVar9 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar10 = *(long **)(lVar6 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar7 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[10];
  param_1[8] = 0;
  if (pbVar9 != pbVar7 && pbVar9 != (byte *)0x0) {
    if (((*pbVar9 & 1) != 0) && (lVar8 = *(long *)(pbVar9 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar10 = *(long **)(lVar6 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar7 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[0xb];
  param_1[10] = 0;
  if (pbVar9 != pbVar7 && pbVar9 != (byte *)0x0) {
    if (((*pbVar9 & 1) != 0) && (lVar8 = *(long *)(pbVar9 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar10 = *(long **)(lVar6 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar7 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[0xc];
  param_1[0xb] = 0;
  if ((pbVar9 != pbVar7) && (pbVar9 != (byte *)0x0)) {
    if (((*pbVar9 & 1) != 0) && (lVar8 = *(long *)(pbVar9 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar10 = *(long **)(lVar6 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
  }
  puVar4 = (uint *)param_1[0xf];
  param_1[0xc] = 0;
  if ((puVar4 != (uint *)0x0) && (param_1[0xd] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[0xf];
      if (puVar4 == (uint *)0x0) goto LAB_00bcf670;
    }
    operator_delete__(puVar4);
  }
LAB_00bcf670:
  param_1[0xf] = 0;
  if ((((param_1[5] & 1) != 0) &&
      (plVar10 = (long *)(param_1[5] & 0xfffffffffffffffe), plVar10 != (long *)0x0)) &&
     (plVar10[1] == 0)) {
    if (*plVar10 != 0) {
      FUN_00bfee44(plVar10);
    }
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar10,0,8);
    }
  }
  param_1[5] = 0;
  if (param_1[4] == 0) {
    plVar10 = (long *)param_1[1];
    while (plVar10 != param_1 + 2) {
      FUN_00c1f9ac(plVar10 + 5);
      plVar11 = (long *)plVar10[1];
      if ((long *)plVar10[1] == (long *)0x0) {
        plVar11 = plVar10 + 2;
        if (*(long **)*plVar11 == plVar10) {
          plVar10 = (long *)*plVar11;
        }
        else {
          do {
            lVar8 = *plVar11;
            plVar11 = (long *)(lVar8 + 0x10);
            plVar10 = (long *)*plVar11;
          } while (*plVar10 != lVar8);
        }
      }
      else {
        do {
          plVar10 = plVar11;
          plVar11 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    }
  }
  FUN_00c2c9d8(param_1 + 1,param_1[2]);
  return;
}


