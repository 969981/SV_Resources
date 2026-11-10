/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02337188; name: FUN_02337188
 */


void FUN_02337188(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_48;
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_023371c8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x38) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x38) == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x38) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_023371c8;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_023371c8:
  plVar2 = (long *)(param_1 + 0x50);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_023371e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar11) {
            *plVar2 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_023371e4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_023371e4:
  lVar9 = param_1 + 0x70;
  lVar10 = FUN_017c6cf0(lVar9,param_2);
  puVar12 = *(undefined8 **)(lVar10 + 8);
  *(undefined8 *)(lVar10 + 8) = 0;
  if (puVar12 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar12 + 3);
    do {
      sVar6 = *psVar3;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar11) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar10 + 0x10) = 0;
  lVar10 = FUN_017c6cf0(lVar9,param_2);
  *(undefined1 *)(lVar10 + 0x18) = 1;
  FUN_0188d00c(lVar9,param_2);
  *(undefined8 *)(param_1 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x58));
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x38);
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x38) = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar13 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar13 != lVar9 || lVar5 != lVar10) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_02337308;
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x34) = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar11 = true;
LAB_02337308:
  if (!bVar11) {
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x38);
      if (lVar9 != lVar13 || lVar10 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x023373fc;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x34) = lVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar11 = true;
joined_r0x023373fc:
    if (!bVar11) {
      do {
        lVar13 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar13 != lVar9 || lVar5 != lVar10) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar13;
          lVar10 = lVar5;
          goto joined_r0x023373fc;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x34) = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
      lVar9 = lVar13;
      lVar10 = lVar5;
      goto joined_r0x023373fc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return;
}


