/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1b0d8; name: FUN_00f1b0d8
 */


bool FUN_00f1b0d8(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x288);
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x288) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00f1b10c:
  while ((lVar11 != 0 && (lVar9 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar11 = *plVar1;
      lVar12 = *(long *)(param_1 + 0x288);
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x288) = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar11 || *(long *)(param_1 + 0x288) != lVar12) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00f1b13c;
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x284) = lVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar7 = true;
LAB_00f1b13c:
  if (!bVar7) {
    lVar11 = lVar4;
    lVar12 = *(long *)(param_1 + 0x288);
    goto LAB_00f1b10c;
  }
  FUN_00f1b364(local_48,param_1,*(undefined4 *)(param_1 + 0x270));
  if (local_48[0] == (undefined8 *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(short *)((long)local_48[0] + 0x1a) != 0;
    if (local_48[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48[0] + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *local_48[0];
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x288);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x288) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar12 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x288);
    if (lVar12 != lVar9 || lVar4 != lVar11) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00f1b1bc;
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x284) = lVar11 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar10 = true;
LAB_00f1b1bc:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x288);
      if (lVar9 != lVar12 || lVar11 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f1b2d8;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x284) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x00f1b2d8:
    if (!bVar10) {
      do {
        lVar12 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x288);
        if (lVar12 != lVar9 || lVar4 != lVar11) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar12;
          lVar11 = lVar4;
          goto joined_r0x00f1b2d8;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x284) = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar12;
      lVar11 = lVar4;
      goto joined_r0x00f1b2d8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return bVar7;
}


