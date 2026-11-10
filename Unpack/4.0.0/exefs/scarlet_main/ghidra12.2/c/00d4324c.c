/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4324c; name: FUN_00d4324c
 */


undefined8 * FUN_00d4324c(int *param_1,undefined1 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  ushort *puVar6;
  ulong uVar7;
  long *plVar8;
  ushort uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong local_60;
  ulong local_58;
  void *local_50;
  undefined8 local_48;
  
  switch(param_2) {
  case 1:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    *puVar10 = 0;
    *(undefined1 *)(puVar10 + 1) = 0;
    puVar6 = (ushort *)((long)param_1 - (long)*param_1);
    uVar9 = *puVar6;
    if (4 < uVar9) {
      uVar13 = 0;
      if ((ulong)puVar6[2] != 0) {
        uVar13 = *(undefined8 *)((long)param_1 + (ulong)puVar6[2]);
      }
      *puVar10 = uVar13;
      goto LAB_00d432f8;
    }
LAB_00d43524:
    uVar5 = 0;
    *puVar10 = 0;
    goto LAB_00d4330c;
  case 2:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    *puVar10 = 0;
    *(undefined1 *)(puVar10 + 1) = 0;
    puVar6 = (ushort *)((long)param_1 - (long)*param_1);
    uVar9 = *puVar6;
    if (uVar9 < 5) goto LAB_00d43524;
    if ((ulong)puVar6[2] == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)((long)param_1 + (ulong)puVar6[2]);
    }
    *puVar10 = uVar13;
LAB_00d432f8:
    if (uVar9 < 7) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((ulong)puVar6[3] != 0) {
        uVar5 = *(undefined1 *)((long)param_1 + (ulong)puVar6[3]);
      }
    }
LAB_00d4330c:
    *(undefined1 *)(puVar10 + 1) = uVar5;
    break;
  case 3:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    *puVar10 = &PTR_LAB_045a0398;
    puVar10[1] = 0;
    if (*(ushort *)((long)param_1 - (long)*param_1) < 5) {
      return puVar10;
    }
    uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2];
    if (uVar7 == 0) {
      return puVar10;
    }
    puVar1 = (uint *)((long)param_1 + uVar7);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar2 = *puVar1;
    uVar7 = (ulong)uVar2;
    if (uVar2 < 0x17) {
      local_60 = CONCAT71(local_60._1_7_,(char)(uVar2 << 1));
      pvVar12 = (void *)((ulong)&local_60 | 1);
      if (uVar2 != 0) goto LAB_00d4340c;
    }
    else {
      uVar11 = uVar7 + 0x10 & 0x1fffffff0;
      plVar8 = *(long **)(lVar4 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      pvVar12 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar11,8);
      local_60 = uVar11 | 1;
      local_58 = uVar7;
      local_50 = pvVar12;
LAB_00d4340c:
      memcpy(pvVar12,puVar1 + 1,uVar7);
    }
    *(undefined1 *)((long)pvVar12 + uVar7) = 0;
    FUN_00d44104(&local_48,&local_60);
    plVar8 = (long *)puVar10[1];
    puVar10[1] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    pvVar12 = local_50;
    puVar10[1] = local_48;
    if (((local_60 & 1) != 0) && (local_50 != (void *)0x0)) {
      plVar8 = *(long **)(lVar4 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,pvVar12,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,pvVar12,0,8);
      }
    }
    break;
  case 4:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,8,8);
    *puVar10 = *(undefined8 *)param_1;
    break;
  case 5:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0xc,8);
    iVar3 = param_1[2];
    *puVar10 = *(undefined8 *)param_1;
    *(int *)(puVar10 + 1) = iVar3;
    break;
  case 6:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    uVar13 = *(undefined8 *)(param_1 + 2);
    *puVar10 = *(undefined8 *)param_1;
    puVar10[1] = uVar13;
    break;
  case 7:
    puVar10 = (undefined8 *)FUN_00d4488c(param_1,param_3);
    return puVar10;
  case 8:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    FUN_00d4545c(param_1,puVar10,param_3);
    break;
  case 9:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    FUN_00d43b60(param_1,puVar10,param_3);
    break;
  case 10:
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_00d45b38(param_1,puVar10,param_3);
    break;
  default:
    puVar10 = (undefined8 *)0x0;
  }
  return puVar10;
}


