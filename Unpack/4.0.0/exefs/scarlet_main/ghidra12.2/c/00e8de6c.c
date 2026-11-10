/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8de6c; name: FUN_00e8de6c
 */


void FUN_00e8de6c(long *param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *local_60;
  undefined1 auStack_58 [8];
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar15 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar15;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_LAB_045cf820;
  param_1[4] = (long)&PTR_LAB_045cf898;
  *plVar9 = (long)&DAT_045cf8e8;
  param_1[9] = 0;
  plVar18 = param_1 + 8;
  *plVar18 = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0;
  plVar9 = param_1 + 0xb;
  *plVar9 = 0;
  FUN_00e8e7e8(param_1 + 0xd);
  param_1[0x25] = param_3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_00daf940(param_1 + 0x26,param_2);
  *(undefined1 *)(param_1 + 0x27) = 0;
  lVar7 = FUN_00e8f14c(param_1[1]);
  if (lVar7 == 0) goto LAB_00e8dfb0;
  lVar15 = *(long *)(lVar7 + 0x30);
  *(ulong *)(lVar7 + 0x1b8) = *(ulong *)(lVar7 + 0x1b8) | 8;
  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00e8e670;
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 != 0) {
    if (sVar2 != -1) goto LAB_00e8dfb0;
LAB_00e8e690:
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
LAB_00e8e6b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
  }
  uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
  *(undefined8 *)(lVar15 + 8) = uVar10;
  *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_00e8dfb0:
  plVar8 = (long *)*plVar18;
  *plVar18 = 0;
  if (plVar8 != (long *)0x0) {
    lVar15 = plVar8[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00e8e3f8;
  }
  param_1[8] = lVar7;
  FUN_00e8e6ec(&local_60,param_1[1]);
  FUN_00e8e758(param_1 + 0x23,&local_60);
  if (local_60 != (long *)0x0) {
    plVar8 = local_60 + 5;
    do {
      lVar7 = *plVar8;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_00e8e514:
      pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar12 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
      goto LAB_00e8e6b0;
    }
  }
  local_60 = (long *)0x0;
  lVar7 = FUN_0145b26c(auStack_58,param_1[0x25],&local_60);
  if (lVar7 != 0) {
    lVar15 = *(long *)(lVar7 + 0x30);
    *(ulong *)(lVar7 + 0x1b8) = *(ulong *)(lVar7 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_00e8e670:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00e8e690;
  }
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar15 = plVar8[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_00e8e3f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar9 = lVar7;
  pcVar16 = *(code **)(lVar7 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x390) = 0;
    *(undefined8 *)(lVar7 + 0x398) = 0;
    *(undefined8 *)(lVar7 + 0x380) = 0;
    *(undefined8 *)(lVar7 + 0x388) = 0;
    (*pcVar16)(lVar7 + 0x3a0);
  }
  *(undefined1 **)(lVar7 + 0x380) = &LAB_00dde3ac;
  *(undefined1 **)(lVar7 + 0x388) = &LAB_02bad310;
  *(undefined1 **)(lVar7 + 0x390) = &LAB_02bad314;
  *(long **)(lVar7 + 0x3a0) = param_1 + 0x27;
  *(long **)(lVar7 + 0x3a8) = param_1 + 0x23;
  *(undefined1 **)(lVar7 + 0x398) = &LAB_02bad320;
  plVar19 = (long *)*plVar9;
  plVar8 = plVar19;
  if ((long *)plVar19[0x36] != (long *)0x0) {
    plVar8 = (long *)plVar19[0x36];
  }
  *(undefined4 *)(plVar19 + 0x6e) = 0;
  if (plVar8 != plVar19) {
    (**(code **)(*plVar8 + 0x88))(plVar8,0);
  }
  plVar8 = plVar19;
  if ((long *)plVar19[0x35] != (long *)0x0) {
    plVar8 = (long *)plVar19[0x35];
  }
  if (plVar8 != plVar19) {
    (**(code **)(*plVar8 + 0x88))(plVar8,0);
  }
  *(undefined4 *)(*plVar9 + 0x358) = 1;
  lVar15 = *plVar9;
  plVar9 = (long *)(lVar15 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
LAB_00e8e0f4:
  if (*plVar9 == 0) goto code_r0x00e8e0fc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e8e104;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e8e104:
  lVar17 = *plVar18;
  lVar7 = lVar17;
  if (*(long *)(lVar17 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar17 + 0x1a8);
  }
  if (*(long *)(lVar17 + 0x1b0) != 0) {
    lVar17 = *(long *)(lVar17 + 0x1b0);
  }
  if (lVar7 == lVar17) goto LAB_00e8e6b8;
  FUN_00da3100(lVar15);
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  lVar7 = FUN_00e8f14c(param_1[0x25]);
  if (lVar7 == 0) goto LAB_00e8e188;
  lVar15 = *(long *)(lVar7 + 0x30);
  *(ulong *)(lVar7 + 0x1b8) = *(ulong *)(lVar7 + 0x1b8) | 8;
  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00e8e670;
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 != 0) {
    if (sVar2 != -1) goto LAB_00e8e188;
    goto LAB_00e8e690;
  }
  uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
  *(undefined8 *)(lVar15 + 8) = uVar10;
  *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_00e8e188:
  plVar9 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00e8e3f8;
  }
  param_1[9] = lVar7;
  FUN_00e8e6ec(&local_60,param_1[1]);
  FUN_00e8e758(param_1 + 0x24,&local_60);
  if (local_60 != (long *)0x0) {
    plVar9 = local_60 + 5;
    do {
      lVar7 = *plVar9;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
      goto LAB_00e8e1b8;
    }
    if ((int)lVar7 != 0) goto LAB_00e8e1b8;
    goto LAB_00e8e514;
  }
LAB_00e8e1b8:
  local_60 = (long *)0x0;
  lVar7 = FUN_0145b26c(auStack_58,param_1[0x25],&local_60);
  if (lVar7 != 0) {
    lVar15 = *(long *)(lVar7 + 0x30);
    *(ulong *)(lVar7 + 0x1b8) = *(ulong *)(lVar7 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00e8e670;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00e8e690;
  }
  plVar9 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00e8e3f8;
  }
  param_1[0xc] = lVar7;
  pcVar16 = *(code **)(lVar7 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x390) = 0;
    *(undefined8 *)(lVar7 + 0x398) = 0;
    *(undefined8 *)(lVar7 + 0x380) = 0;
    *(undefined8 *)(lVar7 + 0x388) = 0;
    (*pcVar16)(lVar7 + 0x3a0);
  }
  *(undefined1 **)(lVar7 + 0x380) = &LAB_027014a4;
  *(undefined1 **)(lVar7 + 0x388) = &LAB_02bad32c;
  *(undefined1 **)(lVar7 + 0x390) = &LAB_02bad330;
  *(long **)(lVar7 + 0x3a0) = param_1 + 0x27;
  *(long **)(lVar7 + 0x3a8) = param_1 + 0x24;
  *(undefined1 **)(lVar7 + 0x398) = &LAB_02bad33c;
  plVar18 = (long *)param_1[0xc];
  plVar9 = plVar18;
  if ((long *)plVar18[0x36] != (long *)0x0) {
    plVar9 = (long *)plVar18[0x36];
  }
  *(undefined4 *)(plVar18 + 0x6e) = 0;
  if (plVar9 != plVar18) {
    (**(code **)(*plVar9 + 0x88))(plVar9,0);
  }
  plVar9 = plVar18;
  if ((long *)plVar18[0x35] != (long *)0x0) {
    plVar9 = (long *)plVar18[0x35];
  }
  if (plVar9 != plVar18) {
    (**(code **)(*plVar9 + 0x88))(plVar9,0);
  }
  *(undefined4 *)(param_1[0xc] + 0x358) = 1;
  lVar15 = param_1[0xc];
  plVar9 = (long *)(lVar15 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00e8e2d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e8e2d0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e8e2d0:
  lVar17 = param_1[9];
  lVar7 = lVar17;
  if (*(long *)(lVar17 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar17 + 0x1a8);
  }
  if (*(long *)(lVar17 + 0x1b0) != 0) {
    lVar17 = *(long *)(lVar17 + 0x1b0);
  }
  if (lVar7 != lVar17) {
    FUN_00da3100(lVar15);
    *(undefined8 *)(lVar15 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
    return;
  }
LAB_00e8e6b8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("input != output","InsertDependencyToTarget",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
             ,700);
code_r0x00e8e0fc:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar4) {
    *plVar9 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00e8e104;
  goto LAB_00e8e0f4;
}


