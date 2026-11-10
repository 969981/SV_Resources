/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dae2c; name: FUN_012dae2c
 */


void FUN_012dae2c(long param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined1 auStack_100 [104];
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  if ((*(long *)(param_1 + 0x498) != 0) && (**(char **)(*(long *)(param_1 + 0x498) + 0x38) != '\0'))
  {
    return;
  }
  *(long **)(param_1 + 0x370) = param_2;
  uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar16 = ((uVar8 / 10) * 2 + uVar8 / 10) * 2 & 0xffffffffffffff80;
  uVar8 = (uVar8 - uVar16) - 0x200000 & 0xffffffffffffff80;
  local_78 = uVar8;
  uStack_70 = uVar16;
  uVar9 = (**(code **)(**(long **)(param_1 + 0x370) + 0x10))
                    (*(long **)(param_1 + 0x370),uVar16,0x10);
  *(undefined8 *)(param_1 + 0x398) = uVar9;
  uVar9 = (**(code **)(**(long **)(param_1 + 0x370) + 0x10))(*(long **)(param_1 + 0x370),uVar8,0x10)
  ;
  *(undefined8 *)(param_1 + 0x3c8) = uVar9;
  *(ulong *)(param_1 + 0x3a0) = uVar16;
  *(ulong *)(param_1 + 0x3d0) = uVar8;
  FUN_016716e0(&local_120,*(undefined8 *)(param_1 + 8),param_1 + 0x398,&uStack_70);
  puVar7 = local_120;
  local_120 = (undefined1 *)0x0;
  lVar11 = *(long *)(param_1 + 0x378);
  *(undefined1 **)(param_1 + 0x378) = puVar7;
  if (lVar11 != 0) {
    FUN_024c372c(param_1 + 0x380);
  }
  *(code **)(param_1 + 0x380) = local_118;
  *(code **)(param_1 + 0x388) = local_110;
  *(undefined1 **)(param_1 + 0x390) = local_108;
  FUN_016716e0(&local_120,*(undefined8 *)(param_1 + 8),param_1 + 0x3c8,&local_78);
  puVar7 = local_120;
  local_120 = (undefined1 *)0x0;
  lVar11 = *(long *)(param_1 + 0x3a8);
  *(undefined1 **)(param_1 + 0x3a8) = puVar7;
  if (lVar11 != 0) {
    FUN_024c372c(param_1 + 0x3b0);
  }
  *(code **)(param_1 + 0x3b0) = local_118;
  pcVar12 = *(code **)(param_1 + 1000);
  *(code **)(param_1 + 0x3b8) = local_110;
  *(undefined1 **)(param_1 + 0x3c0) = local_108;
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    (*pcVar12)(param_1 + 0x400);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x400);
    uVar9 = param_3[3];
    *(undefined8 *)(param_1 + 1000) = param_3[1];
    *(undefined8 *)(param_1 + 0x3f8) = uVar9;
    uVar9 = *param_3;
    *(undefined8 *)(param_1 + 0x3f0) = param_3[2];
    *(undefined8 *)(param_1 + 0x3e0) = uVar9;
  }
  lVar11 = FUN_00e8f14c(*(undefined8 *)(param_1 + 8));
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1b0) = lVar11;
  lVar11 = FUN_00e8f14c(*(undefined8 *)(param_1 + 8));
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1b8) = lVar11;
  local_120 = (undefined1 *)0x0;
  lVar11 = FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_120);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1c0) = lVar11;
  pcVar12 = *(code **)(lVar11 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar12)(lVar11 + 0x3a0);
  }
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(code **)(lVar11 + 0x3a8) = FUN_00f378c4;
  *(undefined8 *)(lVar11 + 0x3b0) = 0;
  *(undefined1 **)(lVar11 + 0x380) = &LAB_02bad244;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02bad260;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02bad264;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02bad278;
  plVar14 = *(long **)(param_1 + 0x1c0);
  plVar10 = plVar14;
  if ((long *)plVar14[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x36];
  }
  *(undefined4 *)(plVar14 + 0x6e) = 0;
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar14;
  if ((long *)plVar14[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x35];
  }
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x358) = 1;
  lVar15 = *(long *)(param_1 + 0x1c0);
  plVar10 = (long *)(lVar15 + 0x1d0);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012db198;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012db198:
  lVar13 = *(long *)(param_1 + 0x1b0);
  lVar11 = lVar13;
  if (*(long *)(lVar13 + 0x1a8) != 0) {
    lVar11 = *(long *)(lVar13 + 0x1a8);
  }
  if (*(long *)(lVar13 + 0x1b0) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  if (lVar11 == lVar13) {
LAB_012dbbd8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(lVar15);
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  local_120 = (undefined1 *)0x0;
  lVar11 = FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_120);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1c8) = lVar11;
  pcVar12 = *(code **)(lVar11 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar12)(lVar11 + 0x3a0);
  }
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(undefined1 **)(lVar11 + 0x3a8) = &LAB_02bac8c8;
  *(undefined8 *)(lVar11 + 0x3b0) = 0;
  *(undefined1 **)(lVar11 + 0x380) = &LAB_02bad244;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02bad260;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02bad264;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02bad278;
  plVar14 = *(long **)(param_1 + 0x1c8);
  plVar10 = plVar14;
  if ((long *)plVar14[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x36];
  }
  *(undefined4 *)(plVar14 + 0x6e) = 0;
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar14;
  if ((long *)plVar14[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x35];
  }
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x1c8) + 0x358) = 1;
  lVar15 = *(long *)(param_1 + 0x1c8);
  plVar10 = (long *)(lVar15 + 0x1d0);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012db2d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012db2d4:
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar11 = lVar13;
  if (*(long *)(lVar13 + 0x1a8) != 0) {
    lVar11 = *(long *)(lVar13 + 0x1a8);
  }
  if (*(long *)(lVar13 + 0x1b0) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  if (lVar11 == lVar13) goto LAB_012dbbd8;
  FUN_00da3100(lVar15);
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  local_120 = (undefined1 *)0x0;
  lVar11 = FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_120);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1d0) = lVar11;
  pcVar12 = *(code **)(lVar11 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar12)(lVar11 + 0x3a0);
  }
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(code **)(lVar11 + 0x3a8) = FUN_00e8a19c;
  *(undefined8 *)(lVar11 + 0x3b0) = 0;
  *(undefined1 **)(lVar11 + 0x380) = &LAB_02bad244;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02bad260;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02bad264;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02bad278;
  plVar14 = *(long **)(param_1 + 0x1d0);
  plVar10 = plVar14;
  if ((long *)plVar14[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x36];
  }
  *(undefined4 *)(plVar14 + 0x6e) = 0;
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar14;
  if ((long *)plVar14[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x35];
  }
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x1d0) + 0x358) = 1;
  lVar15 = *(long *)(param_1 + 0x1d0);
  plVar10 = (long *)(lVar15 + 0x1d0);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012db410;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012db410:
  lVar13 = *(long *)(param_1 + 0x1b0);
  lVar11 = lVar13;
  if (*(long *)(lVar13 + 0x1a8) != 0) {
    lVar11 = *(long *)(lVar13 + 0x1a8);
  }
  if (*(long *)(lVar13 + 0x1b0) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  if (lVar11 == lVar13) goto LAB_012dbbd8;
  FUN_00da3100(lVar15);
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  local_120 = (undefined1 *)0x0;
  lVar11 = FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_120);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_012dbb90;
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_012dbbb0;
  }
  plVar10 = *(long **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_012dba78;
  }
  *(long *)(param_1 + 0x1d8) = lVar11;
  pcVar12 = *(code **)(lVar11 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar12)(lVar11 + 0x3a0);
  }
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(code **)(lVar11 + 0x3a8) = FUN_026feab4;
  *(undefined8 *)(lVar11 + 0x3b0) = 0;
  *(undefined1 **)(lVar11 + 0x380) = &LAB_02bad244;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02bad260;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02bad264;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02bad278;
  plVar14 = *(long **)(param_1 + 0x1d8);
  plVar10 = plVar14;
  if ((long *)plVar14[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x36];
  }
  *(undefined4 *)(plVar14 + 0x6e) = 0;
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar14;
  if ((long *)plVar14[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x35];
  }
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x358) = 1;
  lVar15 = *(long *)(param_1 + 0x1d8);
  plVar10 = (long *)(lVar15 + 0x1d0);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012db54c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012db54c:
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar11 = lVar13;
  if (*(long *)(lVar13 + 0x1a8) != 0) {
    lVar11 = *(long *)(lVar13 + 0x1a8);
  }
  if (*(long *)(lVar13 + 0x1b0) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  if (lVar11 == lVar13) goto LAB_012dbbd8;
  FUN_00da3100(lVar15);
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1d8));
  local_120 = (undefined1 *)0x0;
  lVar11 = FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_120);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    *(ulong *)(lVar11 + 0x1b8) = *(ulong *)(lVar11 + 0x1b8) | 8;
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_012dbb90:
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
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar9;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_012dbbb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar10 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
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
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_012dba78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x1e0) = lVar11;
  pcVar12 = *(code **)(lVar11 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x390) = 0;
    *(undefined8 *)(lVar11 + 0x398) = 0;
    *(undefined8 *)(lVar11 + 0x380) = 0;
    *(undefined8 *)(lVar11 + 0x388) = 0;
    (*pcVar12)(lVar11 + 0x3a0);
  }
  *(long *)(lVar11 + 0x3a0) = param_1;
  *(code **)(lVar11 + 0x3a8) = FUN_00d8c36c;
  *(undefined8 *)(lVar11 + 0x3b0) = 0;
  *(undefined1 **)(lVar11 + 0x380) = &LAB_02bad244;
  *(undefined1 **)(lVar11 + 0x388) = &LAB_02bad260;
  *(undefined1 **)(lVar11 + 0x390) = &LAB_02bad264;
  *(undefined1 **)(lVar11 + 0x398) = &LAB_02bad278;
  plVar14 = *(long **)(param_1 + 0x1e0);
  plVar10 = plVar14;
  if ((long *)plVar14[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x36];
  }
  *(undefined4 *)(plVar14 + 0x6e) = 0;
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  plVar10 = plVar14;
  if ((long *)plVar14[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar14[0x35];
  }
  if (plVar10 != plVar14) {
    (**(code **)(*plVar10 + 0x88))(plVar10,0);
  }
  local_98 = 0xf41f93e7fb9c1d4b;
  pcStack_90 = "General";
  local_88 = 7;
  uStack_80 = 0;
  FUN_00e8b2b8(0,param_1,&local_98);
  puVar6 = PTR_DAT_047d3928;
  local_120 = &LAB_02bad28c;
  local_118 = FUN_02bad300;
  local_110 = FUN_02bad304;
  local_108 = &LAB_02bad308;
  pcVar12 = *(code **)(PTR_DAT_047d3928 + 8);
  if (pcVar12 != (code *)0x0) {
    puVar2 = PTR_DAT_047d3928 + 0x20;
    *(undefined8 *)(PTR_DAT_047d3928 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    (*pcVar12)(puVar2);
    if (local_110 == (code *)0x0) goto LAB_012db700;
  }
  (*local_110)(auStack_100,puVar6 + 0x20);
  *(undefined1 **)puVar6 = local_120;
  *(code **)(puVar6 + 8) = local_118;
  *(code **)(puVar6 + 0x10) = local_110;
  *(undefined1 **)(puVar6 + 0x18) = local_108;
LAB_012db700:
  pcVar12 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar12)(auStack_100);
  }
  return;
}


