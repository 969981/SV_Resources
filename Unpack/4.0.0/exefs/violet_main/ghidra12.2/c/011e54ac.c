/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e54ac; name: FUN_011e54ac
 */


void FUN_011e54ac(long param_1,ulong param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 local_28;
  
  plVar1 = (long *)(param_1 + 0x200);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_011e54e8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x208) == 0) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0x208) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_011e54e8;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x208) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_011e54e8:
  if ((param_2 & 1) == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (puVar12 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar12 + 3);
      do {
        sVar6 = *psVar2;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar11) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar12;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
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
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 1;
    FUN_01731958(param_1);
    FUN_011e3db0(param_1,1);
  }
  do {
    lVar10 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x208);
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x208) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x208);
    if (lVar4 != lVar10 || lVar5 != lVar7) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_011e558c;
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x204) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar11 = true;
LAB_011e558c:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x208);
      if (lVar10 != lVar4 || lVar7 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x011e569c;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x204) = lVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
joined_r0x011e569c:
    if (!bVar11) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x208);
        if (lVar4 != lVar10 || lVar5 != lVar7) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar7 = lVar5;
          goto joined_r0x011e569c;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x204) = lVar7;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar11 = true;
      lVar10 = lVar4;
      lVar7 = lVar5;
      goto joined_r0x011e569c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x210));
  return;
}


