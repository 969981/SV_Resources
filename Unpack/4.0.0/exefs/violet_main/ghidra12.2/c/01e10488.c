/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e10488; name: FUN_01e10488
 */


void FUN_01e10488(long param_1,int *param_2)

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
  long lVar13;
  long lVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *local_f8;
  undefined8 local_f0;
  ulong local_e8;
  long *local_e0;
  code *local_d8;
  char *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  int *piStack_b8;
  ulong *local_b0;
  int local_54;
  
  if (*(int *)(param_1 + 0x390) != 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x294);
  if (iVar9 == -1) {
    return;
  }
  if (*param_2 == 2) {
    auStack_1f0 = (undefined1  [8])0x3c9f4c6;
    local_1f8 = 0x5bafee136af50de9;
  }
  else {
    if (*param_2 != 1) {
      return;
    }
    auStack_1f0 = (undefined1  [8])0x3c8b430;
    local_1f8 = 0xe23f6f48435cb3f;
  }
  local_1e8 = 0x12;
  uStack_1e0 = 0;
  uVar11 = FUN_00c738f0(param_1,&local_1f8,iVar9);
  if ((uVar11 & 1) == 0) {
    return;
  }
  memset(&local_1f8,0,0x100);
  if (*param_2 == 1) {
    uVar17 = *(undefined8 *)(param_1 + 8);
    lVar13 = tpidr_el0;
    if (*(long *)(lVar13 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
    local_f8 = *(long **)(lVar13 + 0x30);
    local_f0 = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(lVar13 + 0x30) = uVar17;
    *(undefined2 *)(lVar13 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar16 = (char *)((ulong)&local_e0 | 1);
    if (((ulong)local_e0 & 1) != 0) {
      pcVar16 = local_d0;
    }
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    strcat((char *)&local_1f8,pcVar16);
    sVar12 = strlen((char *)&local_1f8);
    *(undefined4 *)(auStack_1f0 + sVar12 + 7) = 0x313065;
    *(undefined8 *)(auStack_1f0 + (sVar12 - 8)) = s_0010_defaultidle01_03c8b430._0_8_;
    *(undefined8 *)(auStack_1f0 + sVar12) = s_0010_defaultidle01_03c8b430._8_8_;
    pcVar16 = local_d0;
    if ((((byte)local_e0 & 1) != 0) && (local_d0 != (char *)0x0)) {
      plVar18 = *(long **)(lVar13 + 0x30);
      if (plVar18 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
LAB_01e10dac:
        plVar18 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
LAB_01e10610:
      uVar11 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,pcVar16,0,8);
      }
      else {
        FUN_00c48fe8(plVar18,pcVar16,0,8);
      }
    }
  }
  else {
    if (*param_2 != 2) goto LAB_01e1071c;
    uVar17 = *(undefined8 *)(param_1 + 8);
    lVar13 = tpidr_el0;
    if (*(long *)(lVar13 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
    local_f8 = *(long **)(lVar13 + 0x30);
    local_f0 = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(lVar13 + 0x30) = uVar17;
    *(undefined2 *)(lVar13 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar16 = (char *)((ulong)&local_e0 | 1);
    if (((ulong)local_e0 & 1) != 0) {
      pcVar16 = local_d0;
    }
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    strcat((char *)&local_1f8,pcVar16);
    sVar12 = strlen((char *)&local_1f8);
    *(undefined4 *)(auStack_1f0 + sVar12 + 7) = 0x323065;
    *(undefined8 *)(auStack_1f0 + (sVar12 - 8)) = s_0011_defaultidle02_03c9f4c6._0_8_;
    *(undefined8 *)(auStack_1f0 + sVar12) = s_0011_defaultidle02_03c9f4c6._8_8_;
    pcVar16 = local_d0;
    if ((((byte)local_e0 & 1) != 0) && (local_d0 != (char *)0x0)) {
      plVar18 = *(long **)(lVar13 + 0x30);
      if (plVar18 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        goto LAB_01e10dac;
      }
      goto LAB_01e10610;
    }
  }
  *(long **)(lVar13 + 0x30) = local_f8;
  *(undefined2 *)(lVar13 + 0x38) = (undefined2)local_f0;
LAB_01e1071c:
  local_e0 = (long *)0x0;
  if ((char)local_1f8 == '\0') {
    plVar18 = (long *)FUN_00d44228();
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_e0 != (long *)0x0) {
      lVar13 = *local_e0;
      local_e0 = plVar18;
      (**(code **)(lVar13 + 0x20))();
      plVar18 = local_e0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar17 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar17;
    FUN_00cf9884(&local_f8,uVar17,&local_1f8);
    plVar18 = local_e0;
    local_e0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))();
    }
    local_e0 = local_f8;
    plVar18 = local_e0;
  }
  local_e0 = plVar18;
  FUN_01096e28(&local_d8,&DAT_04544130);
  local_d0 = (char *)CONCAT44(local_d0._4_4_,1);
  plVar18 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  plVar18 = local_e0;
  local_e0 = (long *)0x0;
  *(long **)(param_1 + 0x380) = plVar18;
  plVar18 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  pcVar8 = local_d8;
  local_d8 = (code *)0x0;
  *(code **)(param_1 + 0x388) = pcVar8;
  *(undefined4 *)(param_1 + 0x390) = local_d0._0_4_;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  iVar9 = *param_2;
  FUN_00d64f48(&local_f8,param_1);
  plVar18 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar1 = local_f8 + 0x10;
    plVar4 = local_f8 + 0x60;
    lVar13 = nn::os::GetCurrentThread();
LAB_01e107f4:
    if (*plVar4 == 0) goto code_r0x01e107fc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x61));
    do {
      if (*plVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x61));
          while (*plVar4 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *plVar4 = lVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01e10804;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01e10804:
    plVar4 = (long *)plVar18[0x10];
    plVar5 = (long *)plVar18[0x11];
    plVar15 = plVar4;
    if ((plVar4 != plVar5) && (*plVar4 != -0x69d4342892d07443)) {
      do {
        plVar15 = plVar15 + 0xb;
        if (plVar5 == plVar15) {
          plVar15 = plVar5;
          goto LAB_01e10848;
        }
      } while (*plVar15 != -0x69d4342892d07443);
    }
LAB_01e10848:
    if (plVar5 == plVar15) {
      plVar18[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 0x61));
      local_e8 = 0;
    }
    else {
      plVar18[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 0x61));
      local_e8 = (ulong)(uint)((int)((ulong)((long)plVar15 - (long)plVar4) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (plVar18[0x37] == 0) {
        local_c0 = (long *)&local_54;
        local_e0 = (long *)&LAB_02e657b0;
        local_d8 = FUN_02e657f0;
        local_d0 = "\b";
        puStack_c8 = &LAB_02e65800;
      }
      else {
        piStack_b8 = &local_54;
        local_c0 = plVar18;
        local_b0 = &local_e8;
        local_e0 = (long *)&LAB_029e901c;
        local_d8 = FUN_02e65784;
        local_d0 = &LAB_02e65788;
        puStack_c8 = &LAB_02e6579c;
      }
      local_54 = iVar9;
      FUN_00c837c0(plVar18,plVar1,&local_e8,&local_e0);
      pcVar8 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        puStack_c8 = (undefined1 *)0x0;
        local_e0 = (long *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar8)(&local_c0);
      }
    }
    lVar13 = plVar18[6];
    psVar2 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
    }
    else if (sVar3 == 0) goto LAB_01e10dc4;
  }
  FUN_00d64f48(&local_f8,param_1);
  plVar18 = local_f8;
  if (local_f8 == (long *)0x0) {
    return;
  }
  plVar1 = local_f8 + 0x25;
  plVar4 = local_f8 + 0x60;
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01e109a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x61));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x61));
        while (*plVar4 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01e109a0;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01e109a0:
  plVar4 = (long *)plVar18[0x25];
  plVar5 = (long *)plVar18[0x26];
  plVar15 = plVar4;
  if ((plVar4 != plVar5) && (*plVar4 != 0x730ea554b056b4a8)) {
    do {
      plVar15 = plVar15 + 0xb;
      if (plVar5 == plVar15) {
        plVar15 = plVar5;
        goto LAB_01e109e4;
      }
    } while (*plVar15 != 0x730ea554b056b4a8);
  }
LAB_01e109e4:
  if (plVar5 == plVar15) {
    plVar18[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 0x61));
    local_e8 = 0;
  }
  else {
    plVar18[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 0x61));
    local_e8 = (ulong)(uint)((int)((ulong)((long)plVar15 - (long)plVar4) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_54 = CONCAT31(local_54._1_3_,1);
    if (plVar18[0x5e] == 0) {
      local_c0 = (long *)&local_54;
      local_e0 = (long *)&LAB_02e659e0;
      local_d8 = FUN_02e65a28;
      local_d0 = "\b";
      puStack_c8 = &LAB_02e65a38;
    }
    else {
      piStack_b8 = &local_54;
      local_c0 = plVar18;
      local_b0 = &local_e8;
      local_e0 = (long *)&LAB_029e9c14;
      local_d8 = FUN_02e659b4;
      local_d0 = &LAB_02e659b8;
      puStack_c8 = &LAB_02e659cc;
    }
    FUN_00c837c0(plVar18,plVar1,&local_e8,&local_e0);
    pcVar8 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)0x0;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar8)(&local_c0);
    }
  }
  lVar13 = plVar18[6];
  psVar2 = (short *)(lVar13 + 0x1a);
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
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar18 + 0x50))(plVar18);
    return;
  }
  if (sVar3 != 0) {
    return;
  }
LAB_01e10dc4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x01e107fc:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar7) {
    *plVar4 = lVar13;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01e10804;
  goto LAB_01e107f4;
}


