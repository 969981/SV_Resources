/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bda288; name: FUN_00bda288
 */


void FUN_00bda288(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_0455b600;
  puVar1 = PTR_DAT_047dabb0;
  pbVar8 = *(byte **)PTR_DAT_047dabb0;
  pbVar9 = (byte *)param_1[6];
  if (pbVar9 != pbVar8 && pbVar9 != (byte *)0x0) {
    lVar5 = tpidr_el0;
    if (((*pbVar9 & 1) != 0) && (lVar7 = *(long *)(pbVar9 + 0x10), lVar7 != 0)) {
      plVar10 = *(long **)(lVar5 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar7,0,8);
      }
    }
    plVar10 = *(long **)(lVar5 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar8 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[10];
  param_1[6] = 0;
  if (pbVar9 != pbVar8 && pbVar9 != (byte *)0x0) {
    if (((*pbVar9 & 1) != 0) && (lVar5 = *(long *)(pbVar9 + 0x10), lVar5 != 0)) {
      lVar7 = tpidr_el0;
      plVar10 = *(long **)(lVar7 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar5,0,8);
      }
    }
    lVar5 = tpidr_el0;
    plVar10 = *(long **)(lVar5 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
    pbVar8 = *(byte **)puVar1;
  }
  pbVar9 = (byte *)param_1[0xb];
  param_1[10] = 0;
  if (pbVar9 != pbVar8 && pbVar9 != (byte *)0x0) {
    if (((*pbVar9 & 1) != 0) && (lVar5 = *(long *)(pbVar9 + 0x10), lVar5 != 0)) {
      lVar7 = tpidr_el0;
      plVar10 = *(long **)(lVar7 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar5,0,8);
      }
    }
    lVar5 = tpidr_el0;
    plVar10 = *(long **)(lVar5 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,pbVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,pbVar9,0,8);
    }
  }
  puVar4 = (uint *)param_1[5];
  param_1[0xb] = 0;
  if ((puVar4 != (uint *)0x0) && (param_1[3] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[5];
      if (puVar4 == (uint *)0x0) goto LAB_00bda444;
    }
    operator_delete__(puVar4);
  }
LAB_00bda444:
  param_1[5] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar10 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar10 != (long *)0x0)) &&
     (plVar10[1] == 0)) {
    if (*plVar10 != 0) {
      FUN_00bfee44(plVar10);
    }
    lVar5 = tpidr_el0;
    plVar11 = *(long **)(lVar5 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar10,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


