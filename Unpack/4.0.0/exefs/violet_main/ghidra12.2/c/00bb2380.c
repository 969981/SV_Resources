/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb2380; name: FUN_00bb2380
 */


undefined8 FUN_00bb2380(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  void *pvVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  long *plVar19;
  void *local_a8;
  size_t local_a0;
  void *local_98;
  ulong local_90;
  char *local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  std::string::string((string *)&local_90,*(string **)(param_2 + 0x18));
  plVar18 = param_1 + 1;
  local_78 = param_3;
  uStack_70 = param_4;
  if ((long *)*plVar18 != (long *)0x0) {
    plVar12 = param_1 + 1;
    plVar19 = (long *)*plVar18;
    do {
      bVar3 = *(byte *)(plVar19 + 4);
      local_a0 = plVar19[5];
      local_a8 = (void *)plVar19[6];
      if ((bVar3 & 1) == 0) {
        local_a8 = (void *)((long)plVar19 + 0x21);
        local_a0 = (ulong)(bVar3 >> 1);
      }
      iVar5 = FUN_028a8144(&local_90,&local_a8);
      if (iVar5 < 0) {
        plVar11 = (long *)*plVar19;
        if (plVar11 == (long *)0x0) {
          plVar18 = plVar19;
          goto LAB_00bb2468;
        }
        plVar12 = plVar19;
      }
      else {
        local_a0 = local_90 >> 1 & 0x7f;
        local_a8 = (void *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          local_a0 = (size_t)local_88;
          local_a8 = local_80;
        }
        iVar5 = FUN_028a8144(plVar19 + 4,&local_a8);
        plVar18 = plVar12;
        if (-1 < iVar5) goto LAB_00bb2468;
        plVar18 = plVar19 + 1;
        plVar11 = (long *)*plVar18;
        plVar12 = plVar18;
        if (plVar11 == (long *)0x0) goto LAB_00bb2468;
      }
      plVar19 = plVar11;
    } while( true );
  }
  plVar19 = plVar18;
LAB_00bb2468:
  lVar10 = tpidr_el0;
  if (*plVar18 == 0) {
    plVar12 = *(long **)(lVar10 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x48,8);
    std::string::string((string *)(puVar6 + 4),(string *)&local_90);
    puVar6[2] = plVar19;
    puVar6[7] = local_78;
    puVar6[8] = uStack_70;
    *puVar6 = 0;
    puVar6[1] = 0;
    *plVar18 = (long)puVar6;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*plVar18;
    }
    FUN_010108e0(param_1[1],puVar6);
    bVar4 = false;
    param_1[2] = param_1[2] + 1;
  }
  else {
    bVar4 = true;
  }
  pvVar2 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != (void *)0x0)) {
    plVar18 = *(long **)(lVar10 + 0x30);
    if (plVar18 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar18 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar14 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar18,pvVar2,0,8);
    }
  }
  if (bVar4) {
    local_68 = 0;
    local_90 = CONCAT44(local_90._4_4_,2);
    local_80 = (void *)CONCAT44(local_80._4_4_,0x3a);
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor_database.cc"
    ;
    local_78 = 0;
    uStack_70 = 0;
    std::string::append((char *)&local_78);
    pbVar13 = *(byte **)(param_2 + 0x18);
    pbVar17 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar17 = pbVar13 + 1;
    }
    std::string::append((char *)&local_78,(ulong)pbVar17);
    FUN_00bb0e90(&local_90);
    FUN_00bb0d74(&local_90);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    uVar14 = 0;
    local_90 = 0;
    local_88 = (char *)0x0;
    local_80 = (void *)0x0;
  }
  else {
    std::string::string((string *)&local_90,*(string **)(param_2 + 0x20));
    uVar14 = local_90 & 0xff;
  }
  pcVar1 = (char *)(uVar14 >> 1);
  if ((uVar14 & 1) != 0) {
    pcVar1 = local_88;
  }
  if (pcVar1 != (char *)0x0) {
    std::string::push_back((char)((long)register0x00000008 + -0x60) + -0x30);
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar16 = 1;
    do {
      pbVar17 = *(byte **)(*(long *)(*(long *)(param_2 + 0x70) + lVar16 * 8) + 0x18);
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = (void *)0x0;
      bVar3 = *pbVar17;
      uVar14 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar17 + 8);
      }
      bVar4 = (local_90 & 1) != 0;
      pcVar1 = (char *)(local_90 >> 1 & 0x7f);
      if (bVar4) {
        pcVar1 = local_88;
      }
      uVar14 = uVar14 + (long)pcVar1;
      pvVar2 = (void *)((ulong)&local_90 | 1);
      if (bVar4) {
        pvVar2 = local_80;
      }
      if (0xffffffffffffffef < uVar14) goto LAB_00bb3210;
      if (uVar14 < 0x17) {
        local_a8 = (void *)(ulong)(byte)((int)pcVar1 << 1);
        pvVar7 = (void *)((ulong)&local_a8 | 1);
      }
      else {
        uVar14 = uVar14 + 0x10 & 0xfffffffffffffff0;
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
        local_a8 = (void *)(uVar14 | 1);
        local_a0 = (size_t)pcVar1;
        local_98 = pvVar7;
      }
      if (pcVar1 != (char *)0x0) {
        memcpy(pvVar7,pvVar2,(size_t)pcVar1);
      }
      *(undefined1 *)((long)pvVar7 + (long)pcVar1) = 0;
      pbVar13 = *(byte **)(pbVar17 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar13 = pbVar17 + 1;
      }
      std::string::append((char *)&local_a8,(ulong)pbVar13);
      uVar14 = FUN_00bb405c(param_1,&local_a8,param_3,param_4);
      pvVar2 = local_98;
      if ((((ulong)local_a8 & 1) != 0) && (local_98 != (void *)0x0)) {
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
        }
        else {
          FUN_00c48fe8(plVar18,pvVar2,0,8);
        }
      }
      if (((uVar14 & 1) == 0) ||
         (uVar14 = FUN_00bb4aec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar16 * 8),
                                param_3,param_4), (uVar14 & 1) == 0)) goto LAB_00bb303c;
      bVar4 = lVar16 < *(int *)(param_2 + 0x68);
      lVar16 = lVar16 + 1;
    } while (bVar4);
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar16 = 0;
    do {
      pbVar17 = *(byte **)(*(long *)(*(long *)(param_2 + 0x88) + lVar16 * 8 + 8) + 0x18);
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = (void *)0x0;
      bVar3 = *pbVar17;
      uVar14 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar17 + 8);
      }
      bVar4 = (local_90 & 1) != 0;
      pcVar1 = (char *)(local_90 >> 1 & 0x7f);
      if (bVar4) {
        pcVar1 = local_88;
      }
      uVar14 = uVar14 + (long)pcVar1;
      pvVar2 = (void *)((ulong)&local_90 | 1);
      if (bVar4) {
        pvVar2 = local_80;
      }
      if (0xffffffffffffffef < uVar14) goto LAB_00bb3210;
      if (uVar14 < 0x17) {
        local_a8 = (void *)(ulong)(byte)((int)pcVar1 << 1);
        pvVar7 = (void *)((ulong)&local_a8 | 1);
      }
      else {
        uVar14 = uVar14 + 0x10 & 0xfffffffffffffff0;
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
        local_a8 = (void *)(uVar14 | 1);
        local_a0 = (size_t)pcVar1;
        local_98 = pvVar7;
      }
      if (pcVar1 != (char *)0x0) {
        memcpy(pvVar7,pvVar2,(size_t)pcVar1);
      }
      *(undefined1 *)((long)pvVar7 + (long)pcVar1) = 0;
      pbVar13 = *(byte **)(pbVar17 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar13 = pbVar17 + 1;
      }
      std::string::append((char *)&local_a8,(ulong)pbVar13);
      uVar14 = FUN_00bb405c(param_1,&local_a8,param_3,param_4);
      pvVar2 = local_98;
      if ((((ulong)local_a8 & 1) != 0) && (local_98 != (void *)0x0)) {
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
        }
        else {
          FUN_00c48fe8(plVar18,pvVar2,0,8);
        }
      }
      if ((uVar14 & 1) == 0) goto LAB_00bb303c;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_2 + 0x80));
  }
  if (0 < *(int *)(param_2 + 0xb0)) {
    lVar16 = 1;
    do {
      pbVar17 = *(byte **)(*(long *)(*(long *)(param_2 + 0xb8) + lVar16 * 8) + 0x18);
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = (void *)0x0;
      bVar3 = *pbVar17;
      uVar14 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar17 + 8);
      }
      bVar4 = (local_90 & 1) != 0;
      pcVar1 = (char *)(local_90 >> 1 & 0x7f);
      if (bVar4) {
        pcVar1 = local_88;
      }
      uVar14 = uVar14 + (long)pcVar1;
      pvVar2 = (void *)((ulong)&local_90 | 1);
      if (bVar4) {
        pvVar2 = local_80;
      }
      if (0xffffffffffffffef < uVar14) goto LAB_00bb3210;
      if (uVar14 < 0x17) {
        local_a8 = (void *)(ulong)(byte)((int)pcVar1 << 1);
        pvVar7 = (void *)((ulong)&local_a8 | 1);
      }
      else {
        uVar14 = uVar14 + 0x10 & 0xfffffffffffffff0;
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
        local_a8 = (void *)(uVar14 | 1);
        local_a0 = (size_t)pcVar1;
        local_98 = pvVar7;
      }
      if (pcVar1 != (char *)0x0) {
        memcpy(pvVar7,pvVar2,(size_t)pcVar1);
      }
      *(undefined1 *)((long)pvVar7 + (long)pcVar1) = 0;
      pbVar13 = *(byte **)(pbVar17 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar13 = pbVar17 + 1;
      }
      std::string::append((char *)&local_a8,(ulong)pbVar13);
      uVar14 = FUN_00bb405c(param_1,&local_a8,param_3,param_4);
      pvVar2 = local_98;
      if ((((ulong)local_a8 & 1) != 0) && (local_98 != (void *)0x0)) {
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
        }
        else {
          FUN_00c48fe8(plVar18,pvVar2,0,8);
        }
      }
      if (((uVar14 & 1) == 0) ||
         (uVar14 = FUN_00bb4bb0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar16 * 8),
                                param_3,param_4), (uVar14 & 1) == 0)) goto LAB_00bb303c;
      bVar4 = lVar16 < *(int *)(param_2 + 0xb0);
      lVar16 = lVar16 + 1;
    } while (bVar4);
  }
  if (0 < *(int *)(param_2 + 0x98)) {
    lVar16 = 0;
    do {
      pbVar17 = *(byte **)(*(long *)(*(long *)(param_2 + 0xa0) + lVar16 * 8 + 8) + 0x18);
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_a8 = (void *)0x0;
      bVar3 = *pbVar17;
      uVar14 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar17 + 8);
      }
      bVar4 = (local_90 & 1) != 0;
      pcVar1 = (char *)(local_90 >> 1 & 0x7f);
      if (bVar4) {
        pcVar1 = local_88;
      }
      uVar14 = uVar14 + (long)pcVar1;
      pvVar2 = (void *)((ulong)&local_90 | 1);
      if (bVar4) {
        pvVar2 = local_80;
      }
      if (0xffffffffffffffef < uVar14) {
LAB_00bb3210:
        local_98 = (void *)0x0;
        local_a0 = 0;
        local_a8 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar14 < 0x17) {
        local_a8 = (void *)(ulong)(byte)((int)pcVar1 << 1);
        pvVar7 = (void *)((ulong)&local_a8 | 1);
      }
      else {
        uVar14 = uVar14 + 0x10 & 0xfffffffffffffff0;
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
        local_a8 = (void *)(uVar14 | 1);
        local_a0 = (size_t)pcVar1;
        local_98 = pvVar7;
      }
      if (pcVar1 != (char *)0x0) {
        memcpy(pvVar7,pvVar2,(size_t)pcVar1);
      }
      *(undefined1 *)((long)pvVar7 + (long)pcVar1) = 0;
      pbVar13 = *(byte **)(pbVar17 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar13 = pbVar17 + 1;
      }
      std::string::append((char *)&local_a8,(ulong)pbVar13);
      uVar14 = FUN_00bb405c(param_1,&local_a8,param_3,param_4);
      pvVar2 = local_98;
      if ((((ulong)local_a8 & 1) != 0) && (local_98 != (void *)0x0)) {
        plVar18 = *(long **)(lVar10 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
        }
        else {
          FUN_00c48fe8(plVar18,pvVar2,0,8);
        }
      }
      if ((uVar14 & 1) == 0) goto LAB_00bb303c;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_2 + 0x98));
  }
  uVar15 = 1;
LAB_00bb3040:
  pvVar2 = local_80;
  if (((local_90 & 1) != 0) && (local_80 != (void *)0x0)) {
    plVar18 = *(long **)(lVar10 + 0x30);
    if (plVar18 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar18 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,pvVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar18,pvVar2,0,8);
    }
  }
  return uVar15;
LAB_00bb303c:
  uVar15 = 0;
  goto LAB_00bb3040;
}


