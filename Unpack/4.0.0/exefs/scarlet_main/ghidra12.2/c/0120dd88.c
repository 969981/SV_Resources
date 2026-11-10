/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120dd88; name: FUN_0120dd88
 */


void FUN_0120dd88(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_00df6fe0(param_1,PTR_DAT_047d3e30,0,0,0);
  *param_1 = &PTR_LAB_045a5d80;
  param_1[0x100] = 0;
  param_1[4] = &PTR_LAB_045a5ed0;
  param_1[5] = &DAT_045a5f20;
  param_1[0x1f] = &PTR_LAB_045a5f78;
  param_1[0xa9] = &PTR_LAB_045a6038;
  *(undefined1 *)(param_1 + 0xfd) = 1;
  *(undefined4 *)((long)param_1 + 0x7ec) = 5;
  param_1[0xfe] = 0x4316000042a00000;
  param_1[0xa8] = &PTR_LAB_045a5fe8;
  param_1[0xff] = 0x43af0000437a0000;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (DAT_04841ca0 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_04841ca8);
        while (DAT_04841ca0 == 0) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(0x4841ca0,0x10);
          if (bVar14) {
            cVar4 = ExclusiveMonitorsStatus();
            DAT_04841ca0 = lVar8;
          }
          if (cVar4 == '\0') goto LAB_0120de78;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(0x4841ca0,0x10);
    if (bVar14) {
      cVar4 = ExclusiveMonitorsStatus();
      DAT_04841ca0 = lVar8;
    }
  } while (cVar4 != '\0');
LAB_0120de78:
  lVar8 = DAT_04841c90;
  if ((DAT_04841c90 != 0) && (*(short *)(DAT_04841c90 + 0x1a) != 0)) {
    psVar2 = (short *)(DAT_04841c90 + 0x1a);
    sVar15 = *(short *)(DAT_04841c90 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0120e20c;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0120e20c:
        bVar14 = false;
      }
      if (bVar14) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
          goto LAB_0120df50;
        }
        break;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
  local_48[0] = (undefined8 *)param_1[0x8c];
  plVar9 = (long *)FUN_01408c20(&local_58,param_1[1],local_48);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x58))(plVar9);
  }
  FUN_017cbef4(plVar9,plVar9[1]);
  (**(code **)(*plVar9 + 0x18))(local_48,plVar9);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  plVar10 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
  }
  if ((long *)local_48[0][2] == plVar10) {
    FUN_00c9ea00(&local_58,local_48);
  }
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48[0] + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_38);
      }
    }
    else if (sVar15 == 0) goto LAB_0120e2a8;
  }
  FUN_00d0a34c(&DAT_04841c90,&local_58);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48[0] = (undefined8 *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,local_48);
      }
    }
    else if (sVar15 == 0) {
LAB_0120e2a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_0120df50:
  DAT_04841ca0 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_04841ca8);
  lVar8 = nn::os::GetCurrentThread();
  puVar5 = PTR_DAT_047dccb0;
  do {
    lVar11 = *(long *)puVar5;
    lVar12 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar14) {
      *(long *)puVar5 = lVar11;
      *(long *)(puVar5 + 8) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar11 != 0 && (lVar8 != lVar11))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 0x10));
      do {
        lVar11 = *(long *)puVar5;
        lVar12 = *(long *)(puVar5 + 8);
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar14) {
          *(long *)puVar5 = lVar11;
          *(long *)(puVar5 + 8) = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar13 = *(long *)puVar5;
      if (lVar13 != lVar11 || *(long *)(puVar5 + 8) != lVar12) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_0120dfcc;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar14) {
        *(long *)puVar5 = lVar11;
        *(long *)(puVar5 + 4) = lVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
LAB_0120dfcc:
    lVar11 = lVar13;
    lVar12 = *(long *)(puVar5 + 8);
  } while (!bVar14);
  if (plVar9[0x8c] == param_1[0x8c]) {
    FUN_00ee7970(plVar9[0x8c],(int)plVar9[0x8d],*(undefined4 *)(param_1 + 0x8d));
  }
  do {
    lVar8 = *(long *)puVar5;
    lVar11 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar14) {
      *(long *)puVar5 = lVar8;
      *(long *)(puVar5 + 8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    lVar12 = *(long *)puVar5;
    lVar13 = *(long *)(puVar5 + 8);
    if (lVar12 != lVar8 || lVar13 != lVar11) break;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar14) {
      *(long *)puVar5 = lVar8;
      *(long *)(puVar5 + 4) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0120e074;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar8 = *(long *)puVar5;
      if (lVar8 != lVar12 || *(long *)(puVar5 + 8) != lVar13) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_0120e068;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar14) {
        *(long *)puVar5 = lVar12;
        *(long *)(puVar5 + 4) = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
LAB_0120e068:
    lVar12 = lVar8;
    lVar13 = *(long *)(puVar5 + 8);
  } while (!bVar14);
LAB_0120e074:
  nn::os::SignalLightEvent((LightEventType *)(puVar5 + 0x10));
  (**(code **)(*plVar9 + 0x58))(plVar9);
  plVar10 = (long *)param_1[0x102];
  param_1[0x102] = plVar9;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))();
  }
  (**(code **)(*plVar9 + 0x60))(plVar9);
  return;
}


