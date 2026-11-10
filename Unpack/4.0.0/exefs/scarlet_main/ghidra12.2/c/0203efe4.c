/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0203efe4; name: FUN_0203efe4
 */


void FUN_0203efe4(long param_1,byte param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  short *psVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  byte *pbVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  size_t sVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  char local_2f8 [4];
  undefined1 auStack_2f4 [4];
  char acStack_2f0 [8];
  char acStack_2e8 [240];
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  char local_1e8 [240];
  byte *local_f8;
  undefined8 local_f0;
  ulong local_e8;
  long *local_e0;
  code *local_d8;
  char *local_d0;
  undefined1 *puStack_c8;
  byte *local_c0;
  byte *pbStack_b8;
  ulong *local_b0;
  byte local_44 [4];
  
  iVar15 = *(int *)(param_1 + 0x294);
  if (iVar15 == -1) {
    return;
  }
  local_1f8 = 0x764d6844e4a09e7;
  auStack_1f0 = (undefined1  [8])0x3c03aff;
  local_1e8[0] = '\x17';
  local_1e8[1] = '\0';
  local_1e8[2] = '\0';
  local_1e8[3] = '\0';
  local_1e8[4] = '\0';
  local_1e8[5] = '\0';
  local_1e8[6] = '\0';
  local_1e8[7] = '\0';
  local_1e8[8] = '\0';
  local_1e8[9] = '\0';
  local_1e8[10] = '\0';
  local_1e8[0xb] = '\0';
  local_1e8[0xc] = '\0';
  local_1e8[0xd] = '\0';
  local_1e8[0xe] = '\0';
  local_1e8[0xf] = '\0';
  uVar17 = FUN_00c738f0(param_1,&local_1f8,iVar15);
  if ((uVar17 & 1) == 0) {
    return;
  }
  local_1f8 = 0xa54af86f3a0b011d;
  auStack_1f0 = (undefined1  [8])0x3c4960a;
  local_1e8[0] = '\x10';
  local_1e8[1] = '\0';
  local_1e8[2] = '\0';
  local_1e8[3] = '\0';
  local_1e8[4] = '\0';
  local_1e8[5] = '\0';
  local_1e8[6] = '\0';
  local_1e8[7] = '\0';
  local_1e8[8] = '\0';
  local_1e8[9] = '\0';
  local_1e8[10] = '\0';
  local_1e8[0xb] = '\0';
  local_1e8[0xc] = '\0';
  local_1e8[0xd] = '\0';
  local_1e8[0xe] = '\0';
  local_1e8[0xf] = '\0';
  uVar17 = FUN_00d93028(param_1,&local_1f8);
  if ((((uVar17 & 1) == 0) || ((param_2 & 1) != 0)) && (*(int *)(param_1 + 0x390) != 0)) {
    return;
  }
  memset(&local_1f8,0,0x100);
  memset(local_2f8,0,0x100);
  puVar11 = PTR_DAT_047d8c28;
  if ((param_2 & 1) == 0) {
    if ((uVar17 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x390) == 1) {
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar15 != 0)) {
        local_e0 = (long *)FUN_00d44228();
        puVar12 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_e0);
        FUN_00100190(PTR_LAB_047d9240,puVar12,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      puVar12 = PTR_DAT_047d8c30;
      puVar6 = (undefined8 *)PTR_PTR_047d4508;
      local_1f8 = local_1f8 & 0xffffffffffffff00;
      puVar5 = (undefined8 *)PTR_PTR_047d4508;
      if (*(long *)PTR_DAT_047d8c30 != 0) {
        puVar5 = (undefined8 *)(*(long *)PTR_DAT_047d8c30 + 0x38);
      }
      strcat((char *)&local_1f8,(char *)*puVar5);
      if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar15 != 0)) {
        local_e0 = (long *)FUN_00d44228();
        puVar11 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_e0);
        FUN_00100190(PTR_LAB_047d9240,puVar11,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      local_2f8[0] = '\0';
      if (*(long *)puVar12 != 0) {
        puVar6 = (undefined8 *)(*(long *)puVar12 + 0x38);
      }
      strcat(local_2f8,(char *)*puVar6);
      uVar25 = 0;
      goto LAB_0203f3ac;
    }
    uVar24 = *(undefined8 *)(param_1 + 8);
    lVar22 = tpidr_el0;
    if (*(long *)(lVar22 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    local_f8 = *(byte **)(lVar22 + 0x30);
    local_f0 = *(undefined8 *)(lVar22 + 0x38);
    *(undefined8 *)(lVar22 + 0x30) = uVar24;
    *(undefined2 *)(lVar22 + 0x38) = 1;
    std::to_string(iVar15);
    pcVar4 = (char *)((ulong)&local_e0 | 1);
    if (((ulong)local_e0 & 1) != 0) {
      pcVar4 = local_d0;
    }
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    strcat((char *)&local_1f8,pcVar4);
    sVar18 = strlen((char *)&local_1f8);
    *(undefined8 *)(acStack_2e8 + sVar18 + 0xf0) = s_0462_rangeattack02_end_03bfcd96._0_8_;
    *(ulong *)(auStack_1f0 + sVar18) =
         CONCAT17(s_0462_rangeattack02_end_03bfcd96[0xf],s_0462_rangeattack02_end_03bfcd96._8_7_);
    *(ulong *)(auStack_1f0 + sVar18 + 7) =
         CONCAT71(s_0462_rangeattack02_end_03bfcd96._16_7_,s_0462_rangeattack02_end_03bfcd96[0xf]);
    pcVar4 = local_d0;
    if ((((ulong)local_e0 & 1) != 0) && (local_d0 != (char *)0x0)) {
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04859438), iVar15 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar17 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,pcVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,pcVar4,0,8);
      }
    }
    *(byte **)(lVar22 + 0x30) = local_f8;
    *(undefined2 *)(lVar22 + 0x38) = (undefined2)local_f0;
    local_2f8[0] = '\0';
    sVar18 = strlen(local_2f8);
    builtin_strncpy(local_2f8 + sVar18,"Exit",4);
    auStack_2f4[sVar18] = 0;
  }
  else {
    if ((uVar17 & 1) != 0) {
      return;
    }
    lVar23 = *(long *)(param_1 + 8);
    lVar22 = tpidr_el0;
    if (*(long *)(lVar22 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    local_f8 = *(byte **)(lVar22 + 0x30);
    local_f0 = *(undefined8 *)(lVar22 + 0x38);
    *(long *)(lVar22 + 0x30) = lVar23;
    *(undefined2 *)(lVar22 + 0x38) = 1;
    std::to_string(iVar15);
    pcVar4 = (char *)((ulong)&local_e0 | 1);
    if (((ulong)local_e0 & 1) != 0) {
      pcVar4 = local_d0;
    }
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    strcat((char *)&local_1f8,pcVar4);
    sVar18 = strlen((char *)&local_1f8);
    *(undefined8 *)(local_1e8 + sVar18) = s_0460_rangeattack02_start_03c9897a._16_8_;
    plVar20 = local_e0;
    local_1e8[sVar18 + 8] = '\0';
    *(undefined8 *)(acStack_2e8 + sVar18 + 0xf0) = s_0460_rangeattack02_start_03c9897a._0_8_;
    *(undefined8 *)(auStack_1f0 + sVar18) = s_0460_rangeattack02_start_03c9897a._8_8_;
    pcVar4 = local_d0;
    if ((((ulong)plVar20 & 1) != 0) && (local_d0 != (char *)0x0)) {
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar17 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,pcVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,pcVar4,0,8);
      }
    }
    *(byte **)(lVar22 + 0x30) = local_f8;
    *(undefined2 *)(lVar22 + 0x38) = (undefined2)local_f0;
    uVar24 = *(undefined8 *)(param_1 + 8);
    if (local_f8 == (byte *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04859438), iVar16 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    local_f8 = *(byte **)(lVar22 + 0x30);
    local_f0 = *(undefined8 *)(lVar22 + 0x38);
    *(undefined8 *)(lVar22 + 0x30) = uVar24;
    *(undefined2 *)(lVar22 + 0x38) = 1;
    std::to_string(iVar15);
    pcVar4 = (char *)((ulong)&local_e0 | 1);
    if (((ulong)local_e0 & 1) != 0) {
      pcVar4 = local_d0;
    }
    local_2f8[0] = '\0';
    strcat(local_2f8,pcVar4);
    sVar18 = strlen(local_2f8);
    *(undefined8 *)(local_2f8 + sVar18) = s_0461_rangeattack02_loop_03c03aff._0_8_;
    *(undefined8 *)(acStack_2f0 + sVar18) = s_0461_rangeattack02_loop_03c03aff._8_8_;
    *(undefined8 *)(acStack_2e8 + sVar18) = s_0461_rangeattack02_loop_03c03aff._16_8_;
    pcVar4 = local_d0;
    if ((((ulong)local_e0 & 1) != 0) && (local_d0 != (char *)0x0)) {
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04859438), iVar15 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar17 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,pcVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,pcVar4,0,8);
      }
    }
    *(byte **)(lVar22 + 0x30) = local_f8;
    *(undefined2 *)(lVar22 + 0x38) = (undefined2)local_f0;
  }
  uVar25 = 1;
LAB_0203f3ac:
  puVar13 = PTR_DAT_047d4250;
  puVar12 = PTR_DAT_047d4248;
  puVar11 = PTR_DAT_047d4240;
  if ((char)local_1f8 == '\0') {
    plVar20 = (long *)FUN_00d44228();
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar24 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar13 = uVar24;
    FUN_00cf9884(&local_e0,uVar24,&local_1f8);
    plVar20 = local_e0;
  }
  if (local_2f8[0] == '\0') {
    plVar21 = (long *)FUN_00d44228();
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  else {
    if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar24 = *(undefined8 *)puVar12;
    *(undefined8 *)puVar13 = uVar24;
    FUN_00cf9884(&local_e0,uVar24,local_2f8);
    plVar21 = local_e0;
  }
  plVar19 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar19 = *(long **)(param_1 + 0x388);
  *(long **)(param_1 + 0x380) = plVar20;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  *(long **)(param_1 + 0x388) = plVar21;
  *(undefined4 *)(param_1 + 0x390) = uVar25;
  FUN_00d64f48(&local_f8,param_1);
  pbVar10 = local_f8;
  if (local_f8 != (byte *)0x0) {
    pbVar1 = local_f8 + 0xf0;
    pbVar2 = local_f8 + 0x300;
    uVar24 = nn::os::GetCurrentThread();
    do {
      if (*(long *)pbVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(pbVar10 + 0x308));
          while (*(long *)pbVar2 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
            if (bVar9) {
              *(undefined8 *)pbVar2 = uVar24;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_0203f46c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar9) {
        *(undefined8 *)pbVar2 = uVar24;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_0203f46c:
    plVar20 = *(long **)(pbVar10 + 0xf0);
    plVar21 = *(long **)(pbVar10 + 0xf8);
    plVar19 = plVar20;
    if ((plVar20 != plVar21) && (*plVar20 != -0x5ab50790c5f4fee3)) {
      do {
        plVar19 = plVar19 + 0xb;
        if (plVar21 == plVar19) {
          plVar19 = plVar21;
          goto LAB_0203f4dc;
        }
      } while (*plVar19 != -0x5ab50790c5f4fee3);
    }
LAB_0203f4dc:
    if (plVar21 == plVar19) {
      pbVar10[0x300] = 0;
      pbVar10[0x301] = 0;
      pbVar10[0x302] = 0;
      pbVar10[0x303] = 0;
      pbVar10[0x304] = 0;
      pbVar10[0x305] = 0;
      pbVar10[0x306] = 0;
      pbVar10[0x307] = 0;
      nn::os::SignalLightEvent((LightEventType *)(pbVar10 + 0x308));
      local_e8 = 0;
    }
    else {
      pbVar10[0x300] = 0;
      pbVar10[0x301] = 0;
      pbVar10[0x302] = 0;
      pbVar10[0x303] = 0;
      pbVar10[0x304] = 0;
      pbVar10[0x305] = 0;
      pbVar10[0x306] = 0;
      pbVar10[0x307] = 0;
      nn::os::SignalLightEvent((LightEventType *)(pbVar10 + 0x308));
      local_e8 = (ulong)(uint)((int)((ulong)((long)plVar19 - (long)plVar20) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      local_44[0] = param_2 & 1;
      if (*(long *)(pbVar10 + 0x288) == 0) {
        local_c0 = local_44;
        local_e0 = (long *)&LAB_02e658c0;
        local_d8 = FUN_02e65908;
        local_d0 = "\b";
        puStack_c8 = &LAB_02e65918;
      }
      else {
        pbStack_b8 = local_44;
        local_c0 = pbVar10;
        local_b0 = &local_e8;
        local_e0 = (long *)&LAB_029e9640;
        local_d8 = FUN_02e65894;
        local_d0 = &LAB_02e65898;
        puStack_c8 = &LAB_02e658ac;
      }
      FUN_00c837c0(pbVar10,pbVar1,&local_e8,&local_e0);
      pcVar14 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (char *)0x0;
        puStack_c8 = (undefined1 *)0x0;
        local_e0 = (long *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar14)(&local_c0);
      }
    }
    lVar22 = *(long *)(pbVar10 + 0x30);
    psVar3 = (short *)(lVar22 + 0x1a);
    do {
      sVar7 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*(long *)pbVar10 + 0x50))(pbVar10);
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


