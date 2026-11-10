/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b8b774; name: FUN_00b8b774
 */


void FUN_00b8b774(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x1;
  undefined8 *puVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 uVar11;
  byte local_b0 [16];
  ulong local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  
  uVar3 = FUN_00b8be44(*(undefined8 *)(param_1 + 8),param_2,8);
  if ((uVar3 & 1) != 0) {
    uVar3 = std::string::rfind((char)param_2,0x2e);
    if (uVar3 == 0xffffffffffffffff) {
      FUN_00b8c44c(param_1,param_2,param_2,param_3);
      return;
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    std::string::string((string *)&local_68,param_2,0,uVar3,(allocator *)param_2);
    uVar11 = FUN_00b7a414(uVar11,&local_68);
    uVar6 = local_58;
    if (((local_68 & 1) != 0) && (local_58 != 0)) {
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
      uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,uVar6,0,8);
      }
    }
    FUN_00b8b774(param_1,uVar11,param_3,param_4);
    std::string::string((string *)&local_68,param_2,uVar3 + 1,0xffffffffffffffff,
                        (allocator *)param_2);
    FUN_00b8c44c(param_1,&local_68,param_2,param_3);
    if ((local_68 & 1) == 0) {
      return;
    }
    uVar3 = local_58;
    if (local_58 == 0) {
      return;
    }
    goto LAB_00b8bb48;
  }
  iVar2 = FUN_00b7b9c4(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar2 == 8) {
    return;
  }
  std::operator+("\"",param_2);
  puVar4 = (ulong *)std::string::append((char *)local_b0);
  uStack_90 = puVar4[1];
  local_88 = puVar4[2];
  local_98 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  switch(iVar2) {
  case 1:
  case 4:
  case 6:
    puVar8 = (undefined8 *)(extraout_x1 + 0x10);
    break;
  case 2:
    puVar8 = (undefined8 *)(extraout_x1 + 0x30);
    break;
  case 3:
  case 7:
    lVar7 = *(long *)(extraout_x1 + 0x10);
    goto LAB_00b8b910;
  case 5:
    lVar7 = *(long *)(extraout_x1 + 0x18);
LAB_00b8b910:
    puVar8 = (undefined8 *)(lVar7 + 0x10);
    break;
  default:
    puVar8 = (undefined8 *)0x0;
    goto LAB_00b8b928;
  }
  puVar8 = (undefined8 *)*puVar8;
LAB_00b8b928:
  pbVar9 = (byte *)*puVar8;
  pbVar1 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar1 = pbVar9 + 1;
  }
  puVar4 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar1);
  uStack_78 = puVar4[1];
  local_70 = puVar4[2];
  local_80 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (ulong *)std::string::append((char *)&local_80);
  uStack_60 = puVar4[1];
  local_58 = puVar4[2];
  local_68 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_00b89f94(param_1,param_2,param_3,0,&local_68);
  uVar3 = local_58;
  if (((local_68 & 1) != 0) && (local_58 != 0)) {
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
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,uVar3,0,8);
    }
  }
  uVar3 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
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
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,uVar3,0,8);
    }
  }
  uVar3 = local_88;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
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
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,uVar3,0,8);
    }
  }
  if (((local_b0[0] & 1) != 0) && (uVar3 = local_a0, local_a0 != 0)) {
LAB_00b8bb48:
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
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,uVar3,0,8);
    }
  }
  return;
}


