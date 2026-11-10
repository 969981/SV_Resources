/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0201581c; name: FUN_0201581c
 */


void FUN_0201581c(long param_1,uint *param_2,byte param_3)

{
  uint *puVar1;
  uint *puVar2;
  short *psVar3;
  undefined8 *puVar4;
  short sVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  size_t sVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  char *pcVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  char local_310 [4];
  undefined1 auStack_30c [4];
  char acStack_308 [8];
  undefined2 auStack_300 [120];
  undefined1 local_210 [8];
  undefined1 auStack_208 [8];
  undefined8 local_200;
  undefined8 uStack_1f8;
  uint *local_110;
  undefined8 local_108;
  ulong local_100;
  uint local_f4;
  long *local_f0;
  code *local_e8;
  char *local_e0;
  undefined1 *puStack_d8;
  uint *local_d0;
  uint *puStack_c8;
  ulong *local_c0;
  
  iVar16 = *(int *)(param_1 + 0x294);
  if (iVar16 == -1) {
    return;
  }
  uVar6 = *param_2;
  if (uVar6 == 1) {
    local_210 = (undefined1  [8])0x6f4cde6416ffe156;
    auStack_208 = (undefined1  [8])0x3c70e94;
    local_200 = 0x11;
  }
  else {
    if (uVar6 == 2) {
      auStack_208 = (undefined1  [8])0x3c495fa;
      local_210 = (undefined1  [8])0x5a69b601ed182f1a;
    }
    else {
      if (uVar6 != 3) {
        return;
      }
      auStack_208 = (undefined1  [8])0x3c84c5b;
      local_210 = (undefined1  [8])0x83107dba9c7957d0;
    }
    local_200 = 0xf;
  }
  uStack_1f8 = 0;
  uVar18 = FUN_00c738f0(param_1,local_210,iVar16);
  if ((uVar18 & 1) == 0) {
    return;
  }
  uVar6 = *param_2;
  local_210 = (undefined1  [8])0x8db9ec55f4fcec4b;
  auStack_208 = (undefined1  [8])0x3c2e2eb;
  local_200 = 0x10;
  uStack_1f8 = 0;
  uVar15 = FUN_00d93250(param_1,local_210);
  local_210 = (undefined1  [8])0x4d98b1b60e771d7e;
  auStack_208 = (undefined1  [8])0x3c03aed;
  local_200 = 0x11;
  uStack_1f8 = 0;
  bVar14 = FUN_00d93028(param_1,local_210);
  bVar14 = uVar15 == uVar6 & bVar14;
  if (((bVar14 != 1) || ((param_3 & 1) != 0)) && (*(int *)(param_1 + 0x390) != 0)) {
    return;
  }
  memset(local_210,0,0x100);
  memset(local_310,0,0x100);
  puVar10 = PTR_DAT_047d8c28;
  uVar6 = *param_2;
  if (uVar6 == 3) {
    if ((param_3 & 1) == 0) {
      if (bVar14 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x390) == 1) goto LAB_02015f5c;
      uVar27 = *(undefined8 *)(param_1 + 8);
      lVar25 = tpidr_el0;
      if (*(long *)(lVar25 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(lVar25 + 0x30) = uVar27;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
      strcat(local_210,pcVar23);
      sVar19 = strlen(local_210);
      puVar24 = (undefined8 *)&DAT_03c0ad53;
LAB_02015ef4:
      *(undefined8 *)(local_210 + sVar19) = *puVar24;
      *(undefined8 *)(local_210 + sVar19 + 7) = *(undefined8 *)((long)puVar24 + 7);
      pcVar23 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar21 = *(long **)(lVar25 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
LAB_02016bd8:
          plVar21 = DAT_04859430;
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
LAB_02016734:
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pcVar23,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pcVar23,0,8);
        }
      }
LAB_02016094:
      *(uint **)(lVar25 + 0x30) = local_110;
      *(undefined2 *)(lVar25 + 0x38) = (undefined2)local_108;
      local_310[0] = '\0';
      sVar19 = strlen(local_310);
      builtin_strncpy(local_310 + sVar19,"Exit",4);
      auStack_30c[sVar19] = 0;
    }
    else {
      if (bVar14 != 0) {
        return;
      }
      lVar26 = *(long *)(param_1 + 8);
      lVar25 = tpidr_el0;
      if (*(long *)(lVar25 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(long *)(lVar25 + 0x30) = lVar26;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
      strcat(local_210,pcVar23);
      sVar19 = strlen(local_210);
      auStack_208[sVar19 + 8] = 0;
      *(undefined8 *)(local_210 + sVar19) = s_0293_eat02_start_03c777b2._0_8_;
      *(undefined8 *)(auStack_208 + sVar19) = s_0293_eat02_start_03c777b2._8_8_;
      pcVar23 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar21 = *(long **)(lVar25 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pcVar23,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pcVar23,0,8);
        }
      }
      *(uint **)(lVar25 + 0x30) = local_110;
      *(undefined2 *)(lVar25 + 0x38) = (undefined2)local_108;
      uVar27 = *(undefined8 *)(param_1 + 8);
      if (local_110 == (uint *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(lVar25 + 0x30) = uVar27;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_310[0] = '\0';
      strcat(local_310,pcVar23);
      sVar19 = strlen(local_310);
      pcVar23 = "0294_eat02_loop";
LAB_02015d7c:
      uVar27 = *(undefined8 *)(pcVar23 + 8);
      *(undefined8 *)(local_310 + sVar19) = *(undefined8 *)pcVar23;
      *(undefined8 *)(acStack_308 + sVar19) = uVar27;
LAB_02015d88:
      pcVar23 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar21 = *(long **)(lVar25 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pcVar23,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pcVar23,0,8);
        }
      }
      *(uint **)(lVar25 + 0x30) = local_110;
      *(undefined2 *)(lVar25 + 0x38) = (undefined2)local_108;
    }
    uVar28 = 1;
  }
  else if (uVar6 == 2) {
    if ((param_3 & 1) != 0) {
      if (bVar14 != 0) {
        return;
      }
      lVar26 = *(long *)(param_1 + 8);
      lVar25 = tpidr_el0;
      if (*(long *)(lVar25 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(long *)(lVar25 + 0x30) = lVar26;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
      strcat(local_210,pcVar23);
      sVar19 = strlen(local_210);
      auStack_208[sVar19 + 8] = 0;
      *(undefined8 *)(local_210 + sVar19) = s_0290_eat01_start_03bdb734._0_8_;
      *(undefined8 *)(auStack_208 + sVar19) = s_0290_eat01_start_03bdb734._8_8_;
      pcVar23 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar21 = *(long **)(lVar25 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pcVar23,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pcVar23,0,8);
        }
      }
      *(uint **)(lVar25 + 0x30) = local_110;
      *(undefined2 *)(lVar25 + 0x38) = (undefined2)local_108;
      uVar27 = *(undefined8 *)(param_1 + 8);
      if (local_110 == (uint *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(lVar25 + 0x30) = uVar27;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_310[0] = '\0';
      strcat(local_310,pcVar23);
      sVar19 = strlen(local_310);
      pcVar23 = "0291_eat01_loop";
      goto LAB_02015d7c;
    }
    if (bVar14 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x390) != 1) {
      uVar27 = *(undefined8 *)(param_1 + 8);
      lVar25 = tpidr_el0;
      if (*(long *)(lVar25 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(lVar25 + 0x30) = uVar27;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
      strcat(local_210,pcVar23);
      sVar19 = strlen(local_210);
      puVar24 = (undefined8 *)&DAT_03c35004;
      goto LAB_02015ef4;
    }
LAB_02015f5c:
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar16 != 0)) {
      local_f0 = (long *)FUN_00d44228();
      puVar11 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
      FUN_00100190(PTR_LAB_047d9240,puVar11,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    puVar11 = PTR_DAT_047d8c30;
    puVar4 = (undefined8 *)PTR_PTR_047d4508;
    local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
    puVar24 = (undefined8 *)PTR_PTR_047d4508;
    if (*(long *)PTR_DAT_047d8c30 != 0) {
      puVar24 = (undefined8 *)(*(long *)PTR_DAT_047d8c30 + 0x38);
    }
    strcat(local_210,(char *)*puVar24);
    if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar16 != 0)) {
      local_f0 = (long *)FUN_00d44228();
      puVar10 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_f0);
      FUN_00100190(PTR_LAB_047d9240,puVar10,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    local_310[0] = '\0';
    if (*(long *)puVar11 != 0) {
      puVar4 = (undefined8 *)(*(long *)puVar11 + 0x38);
    }
    strcat(local_310,(char *)*puVar4);
    uVar28 = 0;
  }
  else {
    uVar28 = 0;
    if (uVar6 == 1) {
      if ((param_3 & 1) == 0) {
        if (bVar14 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x390) == 1) goto LAB_02015f5c;
        uVar27 = *(undefined8 *)(param_1 + 8);
        lVar25 = tpidr_el0;
        if (*(long *)(lVar25 + 0x30) == 0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
        local_110 = *(uint **)(lVar25 + 0x30);
        local_108 = *(undefined8 *)(lVar25 + 0x38);
        *(undefined8 *)(lVar25 + 0x30) = uVar27;
        *(undefined2 *)(lVar25 + 0x38) = 1;
        std::to_string(iVar16);
        pcVar23 = (char *)((ulong)&local_f0 | 1);
        if (((ulong)local_f0 & 1) != 0) {
          pcVar23 = local_e0;
        }
        local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
        strcat(local_210,pcVar23);
        sVar19 = strlen(local_210);
        auStack_208[sVar19 + 8] = 0;
        *(undefined8 *)(local_210 + sVar19) = s_0282_sleep01_end_03c34fe4._0_8_;
        *(undefined8 *)(auStack_208 + sVar19) = s_0282_sleep01_end_03c34fe4._8_8_;
        pcVar23 = local_e0;
        if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
          plVar21 = *(long **)(lVar25 + 0x30);
          if (plVar21 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            goto LAB_02016bd8;
          }
          goto LAB_02016734;
        }
        goto LAB_02016094;
      }
      if (bVar14 != 0) {
        return;
      }
      lVar26 = *(long *)(param_1 + 8);
      lVar25 = tpidr_el0;
      if (*(long *)(lVar25 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(long *)(lVar25 + 0x30) = lVar26;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_210 = (undefined1  [8])((ulong)local_210 & 0xffffffffffffff00);
      strcat(local_210,pcVar23);
      sVar19 = strlen(local_210);
      *(undefined4 *)(auStack_208 + sVar19 + 7) = 0x747261;
      *(undefined8 *)(local_210 + sVar19) = s_0280_sleep01_start_03c502f7._0_8_;
      *(undefined8 *)(auStack_208 + sVar19) = s_0280_sleep01_start_03c502f7._8_8_;
      pcVar23 = local_e0;
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (char *)0x0)) {
        plVar21 = *(long **)(lVar25 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar25 + 0x30) = DAT_04859430;
        }
        uVar18 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar18 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pcVar23,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pcVar23,0,8);
        }
      }
      *(uint **)(lVar25 + 0x30) = local_110;
      *(undefined2 *)(lVar25 + 0x38) = (undefined2)local_108;
      uVar27 = *(undefined8 *)(param_1 + 8);
      if (local_110 == (uint *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04859438), iVar17 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar25 + 0x30) = DAT_04859430;
      }
      local_110 = *(uint **)(lVar25 + 0x30);
      local_108 = *(undefined8 *)(lVar25 + 0x38);
      *(undefined8 *)(lVar25 + 0x30) = uVar27;
      *(undefined2 *)(lVar25 + 0x38) = 1;
      std::to_string(iVar16);
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pcVar23 = local_e0;
      }
      local_310[0] = '\0';
      strcat(local_310,pcVar23);
      sVar19 = strlen(local_310);
      *(undefined2 *)((long)auStack_300 + sVar19) = 0x70;
      *(undefined8 *)(local_310 + sVar19) = s_0281_sleep01_loop_03c70e94._0_8_;
      *(undefined8 *)(acStack_308 + sVar19) = s_0281_sleep01_loop_03c70e94._8_8_;
      goto LAB_02015d88;
    }
  }
  puVar12 = PTR_DAT_047d4250;
  puVar11 = PTR_DAT_047d4248;
  puVar10 = PTR_DAT_047d4240;
  if (local_210[0] == '\0') {
    plVar21 = (long *)FUN_00d44228();
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar27 = *(undefined8 *)puVar11;
    *(undefined8 *)puVar12 = uVar27;
    FUN_00cf9884(&local_f0,uVar27,local_210);
    plVar21 = local_f0;
  }
  if (local_310[0] == '\0') {
    plVar22 = (long *)FUN_00d44228();
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar27 = *(undefined8 *)puVar11;
    *(undefined8 *)puVar12 = uVar27;
    FUN_00cf9884(&local_f0,uVar27,local_310);
    plVar22 = local_f0;
  }
  plVar20 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  plVar20 = *(long **)(param_1 + 0x388);
  *(long **)(param_1 + 0x380) = plVar21;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  *(long **)(param_1 + 0x388) = plVar22;
  *(undefined4 *)(param_1 + 0x390) = uVar28;
  uVar6 = *param_2;
  FUN_00d64f48(&local_110,param_1);
  puVar9 = local_110;
  if (local_110 != (uint *)0x0) {
    puVar1 = local_110 + 0x20;
    puVar2 = local_110 + 0xc0;
    uVar27 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
          while (*(long *)puVar2 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *(undefined8 *)puVar2 = uVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_020161a4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(undefined8 *)puVar2 = uVar27;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_020161a4:
    plVar21 = *(long **)(puVar9 + 0x20);
    plVar22 = *(long **)(puVar9 + 0x22);
    plVar20 = plVar21;
    if ((plVar21 != plVar22) && (*plVar21 != -0x724613aa0b0313b5)) {
      do {
        plVar20 = plVar20 + 0xb;
        if (plVar22 == plVar20) {
          plVar20 = plVar22;
          goto LAB_02016214;
        }
      } while (*plVar20 != -0x724613aa0b0313b5);
    }
LAB_02016214:
    if (plVar22 == plVar20) {
      puVar9[0xc0] = 0;
      puVar9[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
      local_100 = 0;
    }
    else {
      puVar9[0xc0] = 0;
      puVar9[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
      local_100 = (ulong)(uint)((int)((ulong)((long)plVar20 - (long)plVar21) >> 3) * -0x45d1745d) <<
                  0x20 | 1;
      if (*(long *)(puVar9 + 0x6e) == 0) {
        local_d0 = &local_f4;
        local_f0 = (long *)&LAB_02e657b0;
        local_e8 = FUN_02e657f0;
        local_e0 = "\b";
        puStack_d8 = &LAB_02e65800;
      }
      else {
        puStack_c8 = &local_f4;
        local_d0 = puVar9;
        local_c0 = &local_100;
        local_f0 = (long *)&LAB_029e901c;
        local_e8 = FUN_02e65784;
        local_e0 = &LAB_02e65788;
        puStack_d8 = &LAB_02e6579c;
      }
      local_f4 = uVar6;
      FUN_00c837c0(puVar9,puVar1,&local_100,&local_f0);
      pcVar13 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (char *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar13)(&local_d0);
      }
    }
    lVar25 = *(long *)(puVar9 + 0xc);
    psVar3 = (short *)(lVar25 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar25 + 0x10) = 0;
      (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
    }
    else if (sVar5 == 0) goto LAB_02016bf0;
  }
  FUN_00d64f48(&local_110,param_1);
  puVar9 = local_110;
  if (local_110 != (uint *)0x0) {
    puVar1 = local_110 + 0x3c;
    puVar2 = local_110 + 0xc0;
    uVar27 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0xc2));
          while (*(long *)puVar2 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *(undefined8 *)puVar2 = uVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_02016328;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(undefined8 *)puVar2 = uVar27;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_02016328:
    plVar21 = *(long **)(puVar9 + 0x3c);
    plVar22 = *(long **)(puVar9 + 0x3e);
    plVar20 = plVar21;
    if ((plVar21 != plVar22) && (*plVar21 != 0x4d98b1b60e771d7e)) {
      do {
        plVar20 = plVar20 + 0xb;
        if (plVar22 == plVar20) {
          plVar20 = plVar22;
          goto LAB_02016398;
        }
      } while (*plVar20 != 0x4d98b1b60e771d7e);
    }
LAB_02016398:
    if (plVar22 == plVar20) {
      puVar9[0xc0] = 0;
      puVar9[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
      local_100 = 0;
    }
    else {
      puVar9[0xc0] = 0;
      puVar9[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0xc2));
      local_100 = (ulong)(uint)((int)((ulong)((long)plVar20 - (long)plVar21) >> 3) * -0x45d1745d) <<
                  0x20 | 1;
      local_f4 = CONCAT31(local_f4._1_3_,param_3) & 0xffffff01;
      if (*(long *)(puVar9 + 0xa2) == 0) {
        local_d0 = &local_f4;
        local_f0 = (long *)&LAB_02e658c0;
        local_e8 = FUN_02e65908;
        local_e0 = "\b";
        puStack_d8 = &LAB_02e65918;
      }
      else {
        puStack_c8 = &local_f4;
        local_d0 = puVar9;
        local_c0 = &local_100;
        local_f0 = (long *)&LAB_029e9640;
        local_e8 = FUN_02e65894;
        local_e0 = &LAB_02e65898;
        puStack_d8 = &LAB_02e658ac;
      }
      FUN_00c837c0(puVar9,puVar1,&local_100,&local_f0);
      pcVar13 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (char *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar13)(&local_d0);
      }
    }
    lVar25 = *(long *)(puVar9 + 0xc);
    psVar3 = (short *)(lVar25 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar25 + 0x10) = 0;
      (**(code **)(*(long *)puVar9 + 0x50))(puVar9);
    }
    else if (sVar5 == 0) {
LAB_02016bf0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


