/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b8a36c; name: FUN_00b8a36c
 */


void FUN_00b8a36c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 string *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  long *plVar11;
  byte local_e0 [16];
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
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
  
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar4 = *(byte *)(param_1 + 0xb0);
    uVar9 = (uint)bVar4;
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0) {
LAB_00b8a680:
        std::operator+("\"",param_5);
        puVar6 = (ulong *)std::string::append((char *)&local_80);
        uStack_60 = puVar6[1];
        local_58 = puVar6[2];
        local_68 = *puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_00b89f94(param_1,param_2,param_3,param_4,&local_68);
        uVar2 = local_58;
        if (((local_68 & 1) != 0) && (local_58 != 0)) {
          lVar8 = tpidr_el0;
          plVar11 = *(long **)(lVar8 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar8 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,uVar2,0,8);
          }
        }
        uVar2 = local_70;
        if ((local_80 & 1) == 0) {
          return;
        }
        goto joined_r0x00b8ab24;
      }
    }
    else if (*(long *)(param_1 + 0xb8) == 0) goto LAB_00b8a680;
  }
  else {
    std::operator+("\"",(string *)(param_1 + 0x98));
    puVar6 = (ulong *)std::string::append((char *)local_e0);
    uStack_c0 = puVar6[1];
    local_b8 = puVar6[2];
    local_c8 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pbVar10 = (byte *)**(undefined8 **)(param_1 + 0x90);
    pbVar1 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar1 = pbVar10 + 1;
    }
    puVar6 = (ulong *)std::string::append((char *)&local_c8,(ulong)pbVar1);
    uStack_a8 = puVar6[1];
    local_a0 = puVar6[2];
    local_b0 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (ulong *)std::string::append((char *)&local_b0);
    uStack_90 = puVar6[1];
    local_88 = puVar6[2];
    local_98 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar2 = param_1 + 0x39;
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x48);
    }
    puVar6 = (ulong *)std::string::append((char *)&local_98,uVar2);
    uStack_78 = puVar6[1];
    local_70 = puVar6[2];
    local_80 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (ulong *)std::string::append((char *)&local_80);
    uStack_60 = puVar6[1];
    local_58 = puVar6[2];
    local_68 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_00b89f94(param_1,param_2,param_3,param_4,&local_68);
    uVar2 = local_58;
    if (((local_68 & 1) != 0) && (local_58 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar2 = local_70;
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar2 = local_88;
    if (((local_98 & 1) != 0) && (local_88 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar2 = local_a0;
    if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar2 = local_b8;
    if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar2 = local_d0;
    if (((local_e0[0] & 1) != 0) && (local_d0 != 0)) {
      lVar8 = tpidr_el0;
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar2,0,8);
      }
    }
    uVar9 = (uint)*(byte *)(param_1 + 0xb0);
  }
  if ((uVar9 & 1) == 0) {
    if (uVar9 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xb8) == 0) {
    return;
  }
  std::operator+("\"",param_5);
  puVar6 = (ulong *)std::string::append((char *)local_e0);
  uStack_c0 = puVar6[1];
  local_b8 = puVar6[2];
  local_c8 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  uVar2 = *(ulong *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    uVar2 = param_1 + 0xb1;
  }
  puVar6 = (ulong *)std::string::append((char *)&local_c8,uVar2);
  uStack_a8 = puVar6[1];
  local_a0 = puVar6[2];
  local_b0 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6 = (ulong *)std::string::append((char *)&local_b0);
  uStack_90 = puVar6[1];
  local_88 = puVar6[2];
  local_98 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  psVar3 = *(string **)(param_5 + 0x10);
  if (((byte)*param_5 & 1) == 0) {
    psVar3 = param_5 + 1;
  }
  puVar6 = (ulong *)std::string::append((char *)&local_98,(ulong)psVar3);
  uStack_78 = puVar6[1];
  local_70 = puVar6[2];
  local_80 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6 = (ulong *)std::string::append((char *)&local_80);
  uStack_60 = puVar6[1];
  local_58 = puVar6[2];
  local_68 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  FUN_00b89f94(param_1,param_2,param_3,param_4,&local_68);
  uVar2 = local_58;
  if (((local_68 & 1) != 0) && (local_58 != 0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  uVar2 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  uVar2 = local_88;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  uVar2 = local_a0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  uVar2 = local_b8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  uVar2 = local_d0;
  if ((local_e0[0] & 1) == 0) {
    return;
  }
joined_r0x00b8ab24:
  if (uVar2 != 0) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar2,0,8);
    }
  }
  return;
}


