/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148d254; name: FUN_0148d254
 */


void FUN_0148d254(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar11 = (long *)(param_2 + 0x110);
  lVar9 = *plVar11;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar9) {
    lVar7 = nn::os::GetCurrentThread();
LAB_0148d290:
    if (*plVar11 == 0) goto code_r0x0148d298;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0148d2a0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0148d2a0:
    bVar12 = false;
    goto LAB_0148d2a4;
  }
  bVar12 = true;
LAB_0148d2a4:
  plVar11 = *(long **)(param_2 + 0x128);
  plVar10 = *(long **)(param_2 + 0x130);
  if (plVar11 == plVar10) {
LAB_0148d304:
    plVar11 = *(long **)(param_2 + 0x160);
    plVar10 = *(long **)(param_2 + 0x168);
    if (plVar11 != plVar10) {
      do {
        if ((*plVar11 != 0) && (uVar8 = FUN_0148d5cc(*plVar11 + 8), (uVar8 & 1) != 0)) {
          uVar8 = (**(code **)(*(long *)*plVar11 + 0xc0))();
          if ((uVar8 & 1) == 0) goto LAB_0148d348;
        }
        plVar11 = plVar11 + 1;
      } while (plVar10 != plVar11);
      plVar11 = plVar10;
LAB_0148d348:
      if (plVar11 != *(long **)(param_2 + 0x168)) {
        plVar10 = (long *)0x0;
        if (*plVar11 != 0) {
          plVar10 = (long *)(*plVar11 + -0x20);
        }
        goto LAB_0148d3b0;
      }
    }
    plVar10 = (long *)0x0;
  }
  else {
    do {
      if ((*plVar11 != 0) && (uVar8 = FUN_0148d5cc(*plVar11 + 8), (uVar8 & 1) != 0)) {
        uVar8 = (**(code **)(*(long *)*plVar11 + 0xc0))();
        if ((uVar8 & 1) == 0) goto LAB_0148d2e8;
      }
      plVar11 = plVar11 + 1;
    } while (plVar10 != plVar11);
    plVar11 = plVar10;
LAB_0148d2e8:
    if ((plVar11 == *(long **)(param_2 + 0x130)) || (*plVar11 == 0)) goto LAB_0148d304;
    plVar10 = (long *)(*plVar11 + -0x20);
  }
LAB_0148d3b0:
  if (!bVar12) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (plVar10 == (long *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_0148d9c8(param_1,&local_50);
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = *puVar5;
      goto LAB_0148d528;
    }
  }
  else {
    (**(code **)(*plVar10 + 0x18))(&local_50,plVar10);
    *param_1 = 0;
    param_1[1] = 0;
    if ((long *)local_50[2] == plVar10 + 5) {
      FUN_0148d6a4(param_1,&local_50);
    }
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = *puVar5;
LAB_0148d528:
      FUN_00c44438(lVar7 + 0x8040,&local_28);
      return;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x0148d298:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar12) {
    *plVar11 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0148d2a0;
  goto LAB_0148d290;
}


