/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e8b6c; name: FUN_012e8b6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e8b6c(long *param_1)

{
  short *psVar1;
  LightEventType *pLVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  code *pcVar18;
  long lVar19;
  long *local_108;
  long *local_100;
  char local_f8;
  long *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long *aplStack_d0 [12];
  long local_70 [2];
  
  puVar6 = PTR_DAT_047d89c8;
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  puVar8 = PTR_DAT_047d89d8;
  puVar7 = PTR_DAT_047d89d0;
  uVar11 = *(undefined8 *)PTR_DAT_047d89d0;
  *(undefined8 *)PTR_DAT_047d89d8 = uVar11;
  uVar11 = FUN_012ea09c(uVar11,0);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  lVar13 = FUN_012ea09c(uVar12,4);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  uVar12 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar12;
  plVar14 = (long *)FUN_012ea09c(uVar12,1);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  lVar15 = FUN_012ea510();
  local_f0 = (long *)0x0;
  local_70[0] = lVar15;
  lVar16 = FUN_012ea200(&local_f0);
  *(undefined4 *)(plVar14 + 0x6a) = 0;
  local_f0 = (long *)&LAB_00e7094c;
  local_e8 = FUN_02b5533c;
  local_e0 = FUN_02b55340;
  local_d8 = &LAB_02b5534c;
  pcVar18 = *(code **)(lVar15 + 0x388);
  aplStack_d0[0] = param_1;
  if (pcVar18 != (code *)0x0) {
    *(undefined8 *)(lVar15 + 0x390) = 0;
    *(undefined8 *)(lVar15 + 0x398) = 0;
    *(undefined8 *)(lVar15 + 0x380) = 0;
    *(undefined8 *)(lVar15 + 0x388) = 0;
    (*pcVar18)(lVar15 + 0x3a0);
    if (local_e0 == (code *)0x0) goto LAB_012e8cac;
  }
  (*local_e0)(aplStack_d0,lVar15 + 0x3a0);
  *(undefined1 **)(lVar15 + 0x398) = local_d8;
  *(undefined8 *)(lVar15 + 0x380) = local_f0;
  *(code **)(lVar15 + 0x388) = local_e8;
  *(code **)(lVar15 + 0x390) = local_e0;
LAB_012e8cac:
  pcVar18 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar18)(aplStack_d0);
  }
  *(undefined4 *)(lVar15 + 0x350) = 0;
  pcVar18 = *(code **)(lVar16 + 0x388);
  if (pcVar18 != (code *)0x0) {
    *(undefined8 *)(lVar16 + 0x390) = 0;
    *(undefined8 *)(lVar16 + 0x398) = 0;
    *(undefined8 *)(lVar16 + 0x380) = 0;
    *(undefined8 *)(lVar16 + 0x388) = 0;
    (*pcVar18)(lVar16 + 0x3a0);
  }
  *(code **)(lVar16 + 0x3a8) = FUN_00d79950;
  *(undefined1 **)(lVar16 + 0x380) = &LAB_02b55358;
  *(undefined1 **)(lVar16 + 0x388) = &LAB_02b55374;
  *(undefined1 **)(lVar16 + 0x390) = &LAB_02b55378;
  *(long **)(lVar16 + 0x3a0) = param_1;
  *(undefined8 *)(lVar16 + 0x3b0) = 0;
  *(undefined1 **)(lVar16 + 0x398) = &LAB_02b5538c;
  local_f0 = (long *)0x30;
  FUN_012e9f50(&local_108,param_1[1],&local_f0);
  plVar17 = local_108;
  FUN_012e9bbc(local_108);
  *(undefined4 *)(plVar17 + 0x6a) = 0;
  local_f0 = param_1;
  FUN_012e9b1c(plVar17,&local_f0);
  local_f0 = param_1;
  FUN_012e9d10(plVar17,&local_f0);
  pcVar18 = (code *)plVar17[0x71];
  if (pcVar18 != (code *)0x0) {
    plVar17[0x72] = 0;
    plVar17[0x73] = 0;
    plVar17[0x70] = 0;
    plVar17[0x71] = 0;
    (*pcVar18)(plVar17 + 0x74);
  }
  plVar17[0x70] = (long)&LAB_02b55910;
  plVar17[0x74] = (long)param_1;
  plVar17[0x71] = (long)&LAB_02b55930;
  plVar17[0x72] = (long)&LAB_02b55934;
  plVar17[0x73] = (long)&LAB_02b55940;
  if (plVar17 == (long *)0x0) {
    FUN_012ed640(*_DAT_00000400 + 0x3b0);
  }
  else {
    lVar15 = plVar17[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_012e9a58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar12;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_012e9a78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_012ed640(*(long *)plVar17[0x80] + 0x3b0);
    lVar15 = plVar17[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar3 == 0) {
LAB_012e9a30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar17 = local_108;
  local_f0 = local_108;
  local_e8 = (code *)0x0;
  local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  pcVar18 = (code *)(local_108 + 0x3a);
  lVar15 = nn::os::GetCurrentThread();
  while (*(long *)pcVar18 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar5) {
      *(long *)pcVar18 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e8e44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x3b));
  do {
    if (*(long *)pcVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x3b));
        while (*(long *)pcVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
          if (bVar5) {
            *(long *)pcVar18 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e8e44;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar5) {
      *(long *)pcVar18 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e8e44:
  if ((char)local_e0 != '\0') {
    *(undefined8 *)local_e8 = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)local_e8 + 8));
  }
  local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
  local_e8 = pcVar18;
  FUN_012e9ac8(&local_f0,local_70);
  FUN_012e9c90(param_1 + 0x1618);
  plVar9 = local_108;
  local_108 = (long *)0x0;
  param_1[0x1618] = (long)plVar9;
  plVar17[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar17 + 0x3b));
  if (local_108 != (long *)0x0) {
    lVar15 = local_108[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012e9a30;
  }
  local_f0 = (long *)0x30;
  FUN_012e9f50(&local_108,param_1[1],&local_f0);
  plVar17 = local_108;
  FUN_012e9bbc(local_108);
  pcVar18 = (code *)plVar17[0x71];
  if (pcVar18 != (code *)0x0) {
    plVar17[0x72] = 0;
    plVar17[0x73] = 0;
    plVar17[0x70] = 0;
    plVar17[0x71] = 0;
    (*pcVar18)(plVar17 + 0x74);
  }
  plVar17[0x70] = (long)&LAB_00d2a448;
  plVar17[0x71] = (long)&LAB_02b5594c;
  plVar17[0x72] = (long)&LAB_02b55950;
  plVar17[0x73] = (long)&LAB_02b55954;
  local_f0 = plVar17;
  local_e8 = (code *)0x0;
  pcVar18 = (code *)(plVar17 + 0x3a);
  local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  lVar15 = nn::os::GetCurrentThread();
  while (*(long *)pcVar18 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar5) {
      *(long *)pcVar18 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e8f34;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x3b));
  do {
    if (*(long *)pcVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x3b));
        while (*(long *)pcVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
          if (bVar5) {
            *(long *)pcVar18 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e8f34;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
    if (bVar5) {
      *(long *)pcVar18 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e8f34:
  if ((char)local_e0 != '\0') {
    *(undefined8 *)local_e8 = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)local_e8 + 8));
  }
  local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
  local_e8 = pcVar18;
  FUN_012e9ac8(&local_f0,local_70);
  FUN_012e9c90(param_1 + 0x1619);
  plVar9 = local_108;
  local_108 = (long *)0x0;
  param_1[0x1619] = (long)plVar9;
  plVar17[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar17 + 0x3b));
  if (local_108 != (long *)0x0) {
    lVar15 = local_108[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012e9a30;
  }
  lVar15 = FUN_012e9d6c(&local_f0,param_1[1]);
  if (lVar15 != 0) {
    lVar19 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_012e9a58;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar12;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012e9a78;
  }
  plVar17 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar17 != (long *)0x0) {
    lVar19 = plVar17[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012e9a30;
  }
  param_1[5] = lVar15;
  lVar15 = FUN_012e9d6c(&local_f0,param_1[1]);
  if (lVar15 != 0) {
    lVar19 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_012e9a58;
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar12;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012e9a78;
  }
  plVar17 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar17 != (long *)0x0) {
    lVar19 = plVar17[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012e9a30;
  }
  param_1[6] = lVar15;
  plVar17 = plVar14 + 0x3a;
  local_f8 = '\0';
  local_100 = (undefined8 *)0x0;
  local_108 = plVar14;
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e90b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e90b8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e90b8:
  if (local_f8 != '\0') {
    *local_100 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_100 + 1));
  }
  local_f8 = '\x01';
  local_100 = plVar17;
  FUN_00e220f4(local_108,uVar11,0);
  FUN_012ea7b0(&local_f0,&local_108,local_70);
  FUN_00e220f4(local_f0,0,lVar16);
  plVar14 = (long *)(lVar16 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9118;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1d8));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1d8));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9118;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9118:
  FUN_00e220f4(lVar16,0,lVar13);
  plVar17 = (long *)(lVar13 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9144;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9144;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9144:
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar15 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar15;
  lVar19 = *(long *)(lVar15 + 0x28);
  FUN_00e220f4(lVar13,0,lVar19);
  plVar17 = (long *)(lVar19 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e919c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e919c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e919c:
  *(undefined8 *)(lVar19 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
  *(undefined8 *)(lVar13 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1d8));
  pLVar2 = (LightEventType *)(lVar16 + 0x1d8);
  *(undefined8 *)(lVar16 + 0x1d0) = 0;
  nn::os::SignalLightEvent(pLVar2);
  if ((char)local_e0 != '\0') {
    *(long *)local_e8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_e8 + 8));
  }
  if (local_f8 != '\0') {
    *local_100 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_100 + 1));
  }
  lVar15 = *(long *)(param_1[5] + 0x40);
  plVar17 = (long *)(lVar15 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9224;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9224;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9224:
  FUN_00e220f4(lVar15,local_70[0],0);
  lVar19 = *(long *)(param_1[5] + 0x48);
  FUN_00e220f4(lVar15,0,lVar19);
  plVar17 = (long *)(lVar19 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9268;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9268;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9268:
  FUN_00e220f4(lVar19,0,lVar16);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9290;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9290;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9290:
  *plVar14 = 0;
  nn::os::SignalLightEvent(pLVar2);
  *(undefined8 *)(lVar19 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  lVar15 = *(long *)(param_1[6] + 0x40);
  plVar17 = (long *)(lVar15 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e92e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e92e0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e92e0:
  FUN_00e220f4(lVar15,local_70[0],0);
  lVar19 = *(long *)(param_1[6] + 0x48);
  FUN_00e220f4(lVar15,0,lVar19);
  plVar17 = (long *)(lVar19 + 0x1d0);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e9324;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1d8));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e9324;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e9324:
  FUN_00e220f4(lVar19,0,lVar16);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012e934c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012e934c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012e934c:
  *plVar14 = 0;
  nn::os::SignalLightEvent(pLVar2);
  *(undefined8 *)(lVar19 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1d8));
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  local_108 = (long *)0x40000;
  local_70[0] = 2;
  FUN_012ea5bc(&local_f0,param_1[1],&local_108,local_70);
  plVar14 = (long *)param_1[0x169e];
  param_1[0x169e] = 0;
  if (plVar14 == (long *)0x0) {
LAB_012e93cc:
    param_1[0x169e] = (long)local_f0;
    FUN_00cd035c(local_f0,"SceneThread",0xffffffff,0x11);
    plVar14 = (long *)FUN_012eb410(param_1[1]);
    local_108 = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar17 = plVar14 + 5;
      do {
        lVar13 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = (int)lVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_f0 = (long *)param_1[7];
    param_1[7] = 0;
    FUN_012e9b50(&local_f0);
    local_108 = (long *)0x0;
    param_1[7] = (long)plVar14;
    FUN_012e9b50(&local_108);
    FUN_012f3b84(param_1);
    FUN_012ef1d0(param_1[1]);
    return;
  }
  lVar13 = plVar14[6];
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))();
    goto LAB_012e93cc;
  }
  if (sVar3 != 0) goto LAB_012e93cc;
  goto LAB_012e9a30;
}


