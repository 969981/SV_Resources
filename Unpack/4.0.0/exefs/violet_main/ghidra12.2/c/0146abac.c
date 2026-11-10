/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146abac; name: FUN_0146abac
 */


void FUN_0146abac(long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong *local_78;
  ulong local_70;
  ulong local_68;
  ulong *local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  
  if (*(char *)(param_1 + 0xa6) != '\0') {
    pbVar7 = (byte *)((long)param_2 + 1);
    if (*(char *)(param_1 + 0xa5) != '\0') {
      uVar8 = 0;
      do {
        if (((byte)*param_2 & 1) == 0) {
          pbVar6 = pbVar7;
          if ((byte)((byte)*param_2 >> 1) <= uVar8) goto LAB_0146ace0;
        }
        else {
          if (param_2[1] <= uVar8) goto LAB_0146ace0;
          pbVar6 = (byte *)param_2[2];
        }
        bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                          (*(long **)(param_1 + 0x18),pbVar6[uVar8]);
        pbVar6 = pbVar7;
        if ((*param_2 & 1) != 0) {
          pbVar6 = (byte *)param_2[2];
        }
        pbVar6[uVar8] = bVar2;
        uVar8 = uVar8 + 1;
      } while( true );
    }
    bVar2 = (byte)*param_2;
    uVar8 = 0;
    while( true ) {
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = param_2[1];
      }
      if (uVar4 <= uVar8) break;
      uVar8 = uVar8 + 1;
    }
    uVar8 = 0;
    while( true ) {
      uVar4 = (ulong)(byte)((byte)*param_3 >> 1);
      if (((byte)*param_3 & 1) != 0) {
        uVar4 = param_3[1];
      }
      if (uVar4 <= uVar8) break;
      uVar8 = uVar8 + 1;
    }
    goto LAB_0146ad44;
  }
  bVar2 = (byte)*param_2;
  if ((bVar2 & 1) == 0) {
    uVar8 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar8 = param_2[1];
  }
  if (uVar8 == 1) {
    if (((byte)*param_3 & 1) == 0) {
      uVar8 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    else {
      uVar8 = param_3[1];
    }
    if (uVar8 != 1) goto LAB_0146b24c;
    if (*(char *)(param_1 + 0xa5) != '\0') {
      if ((bVar2 & 1) == 0) {
        pbVar7 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar7 = (byte *)param_2[2];
      }
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar7);
      if ((*param_2 & 1) == 0) {
        pbVar7 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar7 = (byte *)param_2[2];
      }
      *pbVar7 = bVar2;
      if ((*param_3 & 1) == 0) {
        pbVar7 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar7 = (byte *)param_3[2];
      }
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar7);
      if ((*param_3 & 1) == 0) {
        pbVar7 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar7 = (byte *)param_3[2];
      }
      *pbVar7 = bVar2;
    }
    local_70 = *param_2;
    local_68 = param_2[1];
    local_60 = (ulong *)param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    local_48 = param_3[2];
    local_58 = *param_3;
    local_50 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_0146b33c(param_1 + 0x58,&local_70);
    uVar4 = local_48;
    param_3 = local_60;
    uVar8 = local_70;
    if (((local_58 & 1) != 0) && (local_48 != 0)) {
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar4,0,8);
        param_3 = local_60;
        uVar8 = local_70;
      }
      else {
        FUN_00c48fe8(plVar9,uVar4,0,8);
        param_3 = local_60;
        uVar8 = local_70;
      }
    }
    goto joined_r0x0146ae9c;
  }
LAB_0146b24c:
  FUN_028a90c0();
LAB_0146b250:
  iVar3 = __cxa_guard_acquire(&DAT_04859438);
  if (iVar3 != 0) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  goto LAB_0146b16c;
LAB_0146ace0:
  uVar8 = 0;
  do {
    if (((byte)*param_3 & 1) == 0) {
      pbVar6 = (byte *)((long)param_3 + 1);
      if ((byte)((byte)*param_3 >> 1) <= uVar8) break;
    }
    else {
      if (param_3[1] <= uVar8) break;
      pbVar6 = (byte *)param_3[2];
    }
    bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                      (*(long **)(param_1 + 0x18),pbVar6[uVar8]);
    pbVar6 = (byte *)((long)param_3 + 1);
    if ((*param_3 & 1) != 0) {
      pbVar6 = (byte *)param_3[2];
    }
    pbVar6[uVar8] = bVar2;
    uVar8 = uVar8 + 1;
  } while( true );
  bVar2 = (byte)*param_2;
LAB_0146ad44:
  if ((bVar2 & 1) == 0) {
    uVar8 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar8 = param_2[1];
    pbVar7 = (byte *)param_2[2];
  }
  FUN_0146ba38(&local_88,param_1 + 0x10,pbVar7,pbVar7 + uVar8);
  if (((byte)*param_3 & 1) == 0) {
    pbVar7 = (byte *)((long)param_3 + 1);
    uVar8 = (ulong)(byte)((byte)*param_3 >> 1);
  }
  else {
    uVar8 = param_3[1];
    pbVar7 = (byte *)param_3[2];
  }
  FUN_0146ba38(&local_a0,param_1 + 0x10,pbVar7,pbVar7 + uVar8);
  local_60 = local_78;
  local_48 = local_90;
  local_50 = uStack_98;
  local_58 = local_a0;
  local_78 = (ulong *)0x0;
  local_70 = local_88;
  local_68 = uStack_80;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_0146b33c(param_1 + 0x58,&local_70);
  uVar8 = local_48;
  if (((local_58 & 1) != 0) && (local_48 != 0)) {
    lVar5 = tpidr_el0;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,uVar8,0,8);
    }
  }
  puVar1 = local_60;
  if (((local_70 & 1) != 0) && (local_60 != (ulong *)0x0)) {
    lVar5 = tpidr_el0;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar1,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,puVar1,0,8);
    }
  }
  uVar4 = local_90;
  param_3 = local_78;
  uVar8 = local_88;
  if (((local_a0 & 1) != 0) && (local_90 != 0)) {
    lVar5 = tpidr_el0;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar4,0,8);
      param_3 = local_78;
      uVar8 = local_88;
    }
    else {
      FUN_00c48fe8(plVar9,uVar4,0,8);
      param_3 = local_78;
      uVar8 = local_88;
    }
  }
joined_r0x0146ae9c:
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (param_3 == (ulong *)0x0) {
    return;
  }
  param_1 = tpidr_el0;
  plVar9 = *(long **)(param_1 + 0x30);
  if (plVar9 != (long *)0x0) goto LAB_0146add4;
  if ((DAT_04859438 & 1) == 0) goto LAB_0146b250;
LAB_0146b16c:
  plVar9 = DAT_04859430;
  *(long **)(param_1 + 0x30) = DAT_04859430;
LAB_0146add4:
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_3,0,8);
  }
  else {
    FUN_00c48fe8(plVar9,param_3,0,8);
  }
  return;
}


