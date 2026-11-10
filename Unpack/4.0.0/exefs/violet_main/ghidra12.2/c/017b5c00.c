/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b5c00; name: FUN_017b5c00
 */


void FUN_017b5c00(long param_1,int *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  char local_1f0 [8];
  char acStack_1e8 [8];
  undefined1 auStack_1e0 [240];
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
  iVar9 = *(int *)(param_1 + 0x294);
  if (iVar9 == -1) {
    return;
  }
  uVar11 = FUN_017b65bc(param_1,*param_2,iVar9);
  if ((uVar11 & 1) == 0) {
    return;
  }
  memset(local_1f0,0,0x100);
  if (*param_2 == 1) {
    uVar18 = *(undefined8 *)(param_1 + 8);
    lVar14 = tpidr_el0;
    if (*(long *)(lVar14 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar14 + 0x30);
    local_e8 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar14 + 0x30) = uVar18;
    *(undefined2 *)(lVar14 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar17 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar17 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar17);
    sVar12 = strlen(local_1f0);
    auStack_1e0[sVar12] = 0;
    *(undefined8 *)(local_1f0 + sVar12) = s_0330_wild_shot01_03c91fc5._0_8_;
    *(undefined8 *)(acStack_1e8 + sVar12) = s_0330_wild_shot01_03c91fc5._8_8_;
    pcVar17 = local_c0;
    if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
      plVar13 = *(long **)(lVar14 + 0x30);
      if (plVar13 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
LAB_017b64c0:
        plVar13 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
LAB_017b62d4:
      uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,pcVar17,0,8);
      }
      else {
        FUN_00c48fe8(plVar13,pcVar17,0,8);
      }
    }
  }
  else {
    if (*param_2 != 2) goto LAB_017b5d30;
    uVar18 = *(undefined8 *)(param_1 + 8);
    lVar14 = tpidr_el0;
    if (*(long *)(lVar14 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar14 + 0x30);
    local_e8 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar14 + 0x30) = uVar18;
    *(undefined2 *)(lVar14 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar17 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar17 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar17);
    sVar12 = strlen(local_1f0);
    auStack_1e0[sVar12] = 0;
    *(undefined8 *)(local_1f0 + sVar12) = s_0340_wild_shot02_03c70ea6._0_8_;
    *(undefined8 *)(acStack_1e8 + sVar12) = s_0340_wild_shot02_03c70ea6._8_8_;
    pcVar17 = local_c0;
    if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
      plVar13 = *(long **)(lVar14 + 0x30);
      if (plVar13 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        goto LAB_017b64c0;
      }
      goto LAB_017b62d4;
    }
  }
  *(long **)(lVar14 + 0x30) = local_f0;
  *(undefined2 *)(lVar14 + 0x38) = (undefined2)local_e8;
LAB_017b5d30:
  local_d0 = (long *)0x0;
  if (local_1f0[0] == '\0') {
    plVar13 = (long *)FUN_00d44228();
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (local_d0 != (long *)0x0) {
      lVar14 = *local_d0;
      local_d0 = plVar13;
      (**(code **)(lVar14 + 0x20))();
      plVar13 = local_d0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar18 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar18;
    FUN_00cf9884(&local_f0,uVar18,local_1f0);
    plVar13 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_d0 = local_f0;
    plVar13 = local_d0;
  }
  local_d0 = plVar13;
  FUN_01096e28(&local_c8,&DAT_04544130);
  local_c0 = (char *)CONCAT44(local_c0._4_4_,1);
  plVar13 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  plVar13 = local_d0;
  local_d0 = (long *)0x0;
  *(long **)(param_1 + 0x380) = plVar13;
  plVar13 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  pcVar8 = local_c8;
  local_c8 = (code *)0x0;
  *(code **)(param_1 + 0x388) = pcVar8;
  *(undefined4 *)(param_1 + 0x390) = local_c0._0_4_;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  iVar9 = *param_2;
  FUN_00d64f48(&local_f0,param_1);
  plVar13 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 0x10;
    plVar4 = local_f0 + 0x60;
    lVar14 = nn::os::GetCurrentThread();
LAB_017b5e08:
    if (*plVar4 == 0) goto code_r0x017b5e10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
    do {
      if (*plVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
          while (*plVar4 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *plVar4 = lVar14;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_017b5e18;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_017b5e18:
    plVar4 = (long *)plVar13[0x10];
    plVar5 = (long *)plVar13[0x11];
    plVar16 = plVar4;
    if ((plVar4 != plVar5) && (*plVar4 != -0x3f2e63c9690744f1)) {
      do {
        plVar16 = plVar16 + 0xb;
        if (plVar5 == plVar16) {
          plVar16 = plVar5;
          goto LAB_017b5e5c;
        }
      } while (*plVar16 != -0x3f2e63c9690744f1);
    }
LAB_017b5e5c:
    if (plVar5 == plVar16) {
      plVar13[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
      local_e0 = 0;
    }
    else {
      plVar13[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
      local_e0 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar4) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (plVar13[0x37] == 0) {
        local_b0 = (long *)local_d4;
        local_d0 = (long *)&LAB_02e657b0;
        local_c8 = FUN_02e657f0;
        local_c0 = "\b";
        puStack_b8 = &LAB_02e65800;
      }
      else {
        puStack_a8 = local_d4;
        local_b0 = plVar13;
        local_a0 = &local_e0;
        local_d0 = (long *)&LAB_029e901c;
        local_c8 = FUN_02e65784;
        local_c0 = &LAB_02e65788;
        puStack_b8 = &LAB_02e6579c;
      }
      local_d4 = (undefined1  [4])iVar9;
      FUN_00c837c0(plVar13,plVar1,&local_e0,&local_d0);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    lVar14 = plVar13[6];
    psVar2 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar3 == 0) goto LAB_017b64d8;
  }
  FUN_00d64f48(&local_f0,param_1);
  plVar13 = local_f0;
  if (local_f0 == (long *)0x0) {
    return;
  }
  plVar1 = local_f0 + 0x25;
  plVar4 = local_f0 + 0x60;
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_017b5fb4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
        while (*plVar4 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_017b5fb4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_017b5fb4:
  plVar4 = (long *)plVar13[0x25];
  plVar5 = (long *)plVar13[0x26];
  plVar16 = plVar4;
  if ((plVar4 != plVar5) && (*plVar4 != -0x298fabf040b8c71a)) {
    do {
      plVar16 = plVar16 + 0xb;
      if (plVar5 == plVar16) {
        plVar16 = plVar5;
        goto LAB_017b5ff8;
      }
    } while (*plVar16 != -0x298fabf040b8c71a);
  }
LAB_017b5ff8:
  if (plVar5 == plVar16) {
    plVar13[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
    local_e0 = 0;
  }
  else {
    plVar13[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar16 - (long)plVar4) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_d4[0] = 1;
    if (plVar13[0x5e] == 0) {
      local_b0 = (long *)local_d4;
      local_d0 = (long *)&LAB_02e659e0;
      local_c8 = FUN_02e65a28;
      local_c0 = "\b";
      puStack_b8 = &LAB_02e65a38;
    }
    else {
      puStack_a8 = local_d4;
      local_b0 = plVar13;
      local_a0 = &local_e0;
      local_d0 = (long *)&LAB_029e9c14;
      local_c8 = FUN_02e659b4;
      local_c0 = &LAB_02e659b8;
      puStack_b8 = &LAB_02e659cc;
    }
    FUN_00c837c0(plVar13,plVar1,&local_e0,&local_d0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(&local_b0);
    }
  }
  lVar14 = plVar13[6];
  psVar2 = (short *)(lVar14 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar3 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return;
  }
  if (sVar3 != 0) {
    return;
  }
LAB_017b64d8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x017b5e10:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar7) {
    *plVar4 = lVar14;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_017b5e18;
  goto LAB_017b5e08;
}


