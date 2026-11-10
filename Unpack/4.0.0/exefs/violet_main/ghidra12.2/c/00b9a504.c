/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9a504; name: FUN_00b9a504
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00b9a504(long param_1,string *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  string *psVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *extraout_x1;
  byte *pbVar10;
  long *plVar11;
  undefined8 *puVar12;
  string local_f8 [16];
  ulong local_e8;
  string local_e0 [16];
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
  char *local_78;
  ulong local_70;
  char local_68 [24];
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x50);
  }
  uVar6 = FUN_00b8be44(*(undefined8 *)(param_1 + 8),param_2,param_6,param_7);
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_00b9ce58(*(undefined8 *)(param_1 + 0x58),param_3,param_4,param_6,param_7);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    local_80 = CONCAT44(local_80._4_4_,2);
    local_70 = CONCAT44(local_70._4_4_,0xe13);
    local_78 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
    ;
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    std::string::append(local_68);
    psVar1 = *(string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      psVar1 = param_2 + 1;
    }
    std::string::append(local_68,(ulong)psVar1);
    std::string::append(local_68);
    FUN_00bb0e90(&local_80);
    FUN_00bb0d74(&local_80);
    return 0;
  }
  uVar4 = FUN_00b7b9c4(*(undefined8 *)(param_1 + 8),param_2);
  puVar12 = extraout_x1;
  switch(uVar4) {
  case 1:
  case 4:
  case 6:
    puVar12 = (undefined8 *)extraout_x1[2];
    break;
  case 2:
    puVar12 = (undefined8 *)extraout_x1[6];
    break;
  case 3:
  case 7:
    lVar9 = extraout_x1[2];
    goto LAB_00b9a650;
  case 5:
    lVar9 = extraout_x1[3];
LAB_00b9a650:
    puVar12 = *(undefined8 **)(lVar9 + 0x10);
    break;
  case 8:
    break;
  default:
    puVar12 = (undefined8 *)0x0;
  }
  if (puVar12 == *(undefined8 **)(param_1 + 0x50)) {
    uVar6 = std::string::rfind((char)param_2,0x2e);
    if (uVar6 != 0xffffffffffffffff) {
      std::string::string(local_e0,param_2,uVar6 + 1,0xffffffffffffffff,(allocator *)param_2);
      puVar7 = (ulong *)std::string::insert((ulong)local_e0,(char *)0x0);
      uStack_c0 = puVar7[1];
      local_b8 = puVar7[2];
      local_c8 = *puVar7;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7 = (ulong *)std::string::append((char *)&local_c8);
      uStack_a8 = puVar7[1];
      local_a0 = puVar7[2];
      local_b0 = *puVar7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      std::string::string(local_f8,param_2,0,uVar6,(allocator *)param_2);
      uVar6 = (ulong)local_f8 | 1;
      if (((byte)local_f8[0] & 1) != 0) {
        uVar6 = local_e8;
      }
      puVar7 = (ulong *)std::string::append((char *)&local_b0,uVar6);
      uStack_90 = puVar7[1];
      local_88 = puVar7[2];
      local_98 = *puVar7;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7 = (ulong *)std::string::append((char *)&local_98);
      local_78 = (char *)puVar7[1];
      local_70 = puVar7[2];
      local_80 = *puVar7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      FUN_00b89f94(param_1,param_2,param_5,0,&local_80);
      uVar6 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != 0)) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(lVar9 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar6,0,8);
        }
      }
      uVar6 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(lVar9 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar6,0,8);
        }
      }
      if ((((byte)local_f8[0] & 1) != 0) && (local_e8 != 0)) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(lVar9 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,local_e8,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,local_e8,0,8);
        }
      }
      uVar6 = local_a0;
      if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(lVar9 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar6,0,8);
        }
      }
      uVar6 = local_b8;
      if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(lVar9 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar6,0,8);
        }
      }
      uVar6 = local_d0;
      if (((byte)local_e0[0] & 1) == 0) {
        return 0;
      }
      goto joined_r0x00b9a8a0;
    }
    std::operator+("\"",param_2);
    puVar7 = (ulong *)std::string::append((char *)&local_98);
    local_78 = (char *)puVar7[1];
    local_70 = puVar7[2];
    local_80 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_00b89f94(param_1,param_2,param_5,0,&local_80);
    uVar3 = local_70;
    uVar6 = local_88;
    uVar8 = local_98;
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      lVar9 = tpidr_el0;
      plVar11 = *(long **)(lVar9 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar3,0,8);
        uVar6 = local_88;
        uVar8 = local_98;
      }
      else {
        FUN_00c48fe8(plVar11,uVar3,0,8);
        uVar6 = local_88;
        uVar8 = local_98;
      }
    }
  }
  else {
    std::operator+("\"",param_2);
    puVar7 = (ulong *)std::string::append((char *)&local_c8);
    uStack_a8 = puVar7[1];
    local_a0 = puVar7[2];
    local_b0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar10 = (byte *)*puVar12;
    pbVar2 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar2 = pbVar10 + 1;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_b0,(ulong)pbVar2);
    uStack_90 = puVar7[1];
    local_88 = puVar7[2];
    local_98 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_98);
    local_78 = (char *)puVar7[1];
    local_70 = puVar7[2];
    local_80 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_00b89f94(param_1,param_2,param_5,0,&local_80);
    uVar6 = local_70;
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      lVar9 = tpidr_el0;
      plVar11 = *(long **)(lVar9 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar6,0,8);
      }
    }
    uVar6 = local_88;
    if (((local_98 & 1) != 0) && (local_88 != 0)) {
      lVar9 = tpidr_el0;
      plVar11 = *(long **)(lVar9 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,uVar6,0,8);
      }
    }
    uVar3 = local_a0;
    uVar6 = local_b8;
    uVar8 = local_c8;
    if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
      lVar9 = tpidr_el0;
      plVar11 = *(long **)(lVar9 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar3,0,8);
        uVar6 = local_b8;
        uVar8 = local_c8;
      }
      else {
        FUN_00c48fe8(plVar11,uVar3,0,8);
        uVar6 = local_b8;
        uVar8 = local_c8;
      }
    }
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
joined_r0x00b9a8a0:
  if (uVar6 != 0) {
    lVar9 = tpidr_el0;
    plVar11 = *(long **)(lVar9 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar9 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,uVar6,0,8);
    }
  }
  return 0;
}


