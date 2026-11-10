/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0171c8f8; name: FUN_0171c8f8
 */


void FUN_0171c8f8(long param_1,undefined4 *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  size_t sVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  char local_1f0 [6];
  undefined1 auStack_1ea [2];
  undefined4 auStack_1e8 [62];
  long *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined1 local_d4 [4];
  long *local_d0;
  code *local_c8;
  char *local_c0;
  undefined1 *puStack_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  ulong *local_a0;
  
  if (*(int *)(param_1 + 0x390) != 0) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0x294);
  if (iVar10 == -1) {
    return;
  }
  uVar12 = FUN_0171d4d8(param_1,*param_2,iVar10);
  if ((uVar12 & 1) == 0) {
    return;
  }
  memset(local_1f0,0,0x100);
  switch(*param_2) {
  case 1:
    uVar14 = *(undefined8 *)(param_1 + 8);
    lVar16 = tpidr_el0;
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar16 + 0x30);
    local_e8 = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(lVar16 + 0x30) = uVar14;
    *(undefined2 *)(lVar16 + 0x38) = 1;
    std::to_string(iVar10);
    pcVar18 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar18 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar18);
    sVar13 = strlen(local_1f0);
    *(undefined4 *)((long)auStack_1e8 + sVar13) = 0x313064;
    pcVar18 = "0550_glad01";
    break;
  case 2:
    uVar14 = *(undefined8 *)(param_1 + 8);
    lVar16 = tpidr_el0;
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar16 + 0x30);
    local_e8 = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(lVar16 + 0x30) = uVar14;
    *(undefined2 *)(lVar16 + 0x38) = 1;
    std::to_string(iVar10);
    pcVar18 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar18 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar18);
    sVar13 = strlen(local_1f0);
    *(ulong *)(local_1f0 + sVar13) =
         CONCAT26(s_0560_notice01_03bef689._6_2_,s_0560_notice01_03bef689._0_6_);
    *(ulong *)(auStack_1ea + sVar13) =
         CONCAT62(s_0560_notice01_03bef689._8_6_,s_0560_notice01_03bef689._6_2_);
    goto LAB_0171ca20;
  case 3:
    uVar14 = *(undefined8 *)(param_1 + 8);
    lVar16 = tpidr_el0;
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar16 + 0x30);
    local_e8 = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(lVar16 + 0x30) = uVar14;
    *(undefined2 *)(lVar16 + 0x38) = 1;
    std::to_string(iVar10);
    pcVar18 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar18 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar18);
    sVar13 = strlen(local_1f0);
    *(undefined4 *)((long)auStack_1e8 + sVar13) = 0x313065;
    pcVar18 = "0563_hate01";
    break;
  case 4:
    uVar14 = *(undefined8 *)(param_1 + 8);
    lVar16 = tpidr_el0;
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar16 + 0x30);
    local_e8 = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(lVar16 + 0x30) = uVar14;
    *(undefined2 *)(lVar16 + 0x38) = 1;
    std::to_string(iVar10);
    pcVar18 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar18 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar18);
    sVar13 = strlen(local_1f0);
    *(ulong *)(local_1f0 + sVar13) =
         CONCAT17(s_0320_refresh01_03c34ff5[7],s_0320_refresh01_03c34ff5._0_7_);
    *(ulong *)(auStack_1ea + sVar13 + 1) =
         CONCAT71(s_0320_refresh01_03c34ff5._8_7_,s_0320_refresh01_03c34ff5[7]);
    pcVar18 = local_c0;
    if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
      plVar15 = *(long **)(lVar16 + 0x30);
      if (plVar15 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        goto LAB_0171d34c;
      }
      goto LAB_0171ca48;
    }
    goto LAB_0171cb24;
  default:
    goto switchD_0171c978_default;
  }
  *(undefined8 *)(local_1f0 + sVar13) = *(undefined8 *)pcVar18;
LAB_0171ca20:
  pcVar18 = local_c0;
  if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
    plVar15 = *(long **)(lVar16 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_0171d34c:
      plVar15 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
LAB_0171ca48:
    uVar12 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,pcVar18,0,8);
    }
    else {
      FUN_00c48fe8(plVar15,pcVar18,0,8);
    }
  }
LAB_0171cb24:
  *(long **)(lVar16 + 0x30) = local_f0;
  *(undefined2 *)(lVar16 + 0x38) = (undefined2)local_e8;
switchD_0171c978_default:
  local_d0 = (long *)0x0;
  if (local_1f0[0] == '\0') {
    plVar15 = (long *)FUN_00d44228();
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    if (local_d0 != (long *)0x0) {
      lVar16 = *local_d0;
      local_d0 = plVar15;
      (**(code **)(lVar16 + 0x20))();
      plVar15 = local_d0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar14 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar14;
    FUN_00cf9884(&local_f0,uVar14,local_1f0);
    plVar15 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    local_d0 = local_f0;
    plVar15 = local_d0;
  }
  local_d0 = plVar15;
  FUN_01096e28(&local_c8,&DAT_04544130);
  local_c0 = (char *)CONCAT44(local_c0._4_4_,1);
  plVar15 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  plVar15 = local_d0;
  local_d0 = (long *)0x0;
  *(long **)(param_1 + 0x380) = plVar15;
  plVar15 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  pcVar9 = local_c8;
  local_c8 = (code *)0x0;
  *(code **)(param_1 + 0x388) = pcVar9;
  *(undefined4 *)(param_1 + 0x390) = local_c0._0_4_;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  uVar6 = *param_2;
  FUN_00d64f48(&local_f0,param_1);
  plVar15 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 0x10;
    plVar4 = local_f0 + 0x60;
    lVar16 = nn::os::GetCurrentThread();
LAB_0171cc20:
    if (*plVar4 == 0) goto code_r0x0171cc28;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x61));
    do {
      if (*plVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x61));
          while (*plVar4 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *plVar4 = lVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0171cc30;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0171cc30:
    plVar4 = (long *)plVar15[0x10];
    plVar5 = (long *)plVar15[0x11];
    plVar19 = plVar4;
    if ((plVar4 != plVar5) && (*plVar4 != -0x60f3c7d3212f8d91)) {
      do {
        plVar19 = plVar19 + 0xb;
        if (plVar5 == plVar19) {
          plVar19 = plVar5;
          goto LAB_0171cc74;
        }
      } while (*plVar19 != -0x60f3c7d3212f8d91);
    }
LAB_0171cc74:
    if (plVar5 == plVar19) {
      plVar15[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x61));
      local_e0 = 0;
    }
    else {
      plVar15[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x61));
      local_e0 = (ulong)(uint)((int)((ulong)((long)plVar19 - (long)plVar4) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (plVar15[0x37] == 0) {
        local_b0 = (long *)local_d4;
        local_d0 = (long *)&LAB_02e657b0;
        local_c8 = FUN_02e657f0;
        local_c0 = "\b";
        puStack_b8 = &LAB_02e65800;
      }
      else {
        puStack_a8 = local_d4;
        local_b0 = plVar15;
        local_a0 = &local_e0;
        local_d0 = (long *)&LAB_029e901c;
        local_c8 = FUN_02e65784;
        local_c0 = &LAB_02e65788;
        puStack_b8 = &LAB_02e6579c;
      }
      local_d4 = (undefined1  [4])uVar6;
      FUN_00c837c0(plVar15,plVar1,&local_e0,&local_d0);
      pcVar9 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar9)(&local_b0);
      }
    }
    lVar16 = plVar15[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar3 == 0) goto LAB_0171d394;
  }
  FUN_00d64f48(&local_f0,param_1);
  plVar15 = local_f0;
  if (local_f0 == (long *)0x0) {
    return;
  }
  plVar1 = local_f0 + 0x25;
  plVar4 = local_f0 + 0x60;
  lVar16 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0171cdcc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x61));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x61));
        while (*plVar4 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar16;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0171cdcc;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0171cdcc:
  plVar4 = (long *)plVar15[0x25];
  plVar5 = (long *)plVar15[0x26];
  plVar19 = plVar4;
  if ((plVar4 != plVar5) && (*plVar4 != 0x28659ba5f229f146)) {
    do {
      plVar19 = plVar19 + 0xb;
      if (plVar5 == plVar19) {
        plVar19 = plVar5;
        goto LAB_0171ce10;
      }
    } while (*plVar19 != 0x28659ba5f229f146);
  }
LAB_0171ce10:
  if (plVar5 == plVar19) {
    plVar15[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x61));
    local_e0 = 0;
  }
  else {
    plVar15[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x61));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar19 - (long)plVar4) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_d4[0] = 1;
    if (plVar15[0x5e] == 0) {
      local_b0 = (long *)local_d4;
      local_d0 = (long *)&LAB_02e659e0;
      local_c8 = FUN_02e65a28;
      local_c0 = "\b";
      puStack_b8 = &LAB_02e65a38;
    }
    else {
      puStack_a8 = local_d4;
      local_b0 = plVar15;
      local_a0 = &local_e0;
      local_d0 = (long *)&LAB_029e9c14;
      local_c8 = FUN_02e659b4;
      local_c0 = &LAB_02e659b8;
      puStack_b8 = &LAB_02e659cc;
    }
    FUN_00c837c0(plVar15,plVar1,&local_e0,&local_d0);
    pcVar9 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar9)(&local_b0);
    }
  }
  lVar16 = plVar15[6];
  psVar2 = (short *)(lVar16 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar8) {
      *psVar2 = sVar3 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar3 != 0) {
    return;
  }
LAB_0171d394:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x0171cc28:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar8) {
    *plVar4 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0171cc30;
  goto LAB_0171cc20;
}


