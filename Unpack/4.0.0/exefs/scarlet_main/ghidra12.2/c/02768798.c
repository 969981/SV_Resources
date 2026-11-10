/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02768798; name: FUN_02768798
 */


void FUN_02768798(long param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  
  if (*(char *)(param_1 + 0x333) != '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x2c0);
  do {
    lVar9 = *plVar1;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar9 = nn::os::GetCurrentThread();
LAB_027687e8:
    if (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) goto code_r0x027687f4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x2c8) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
          while (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar9;
              *(undefined8 *)(param_1 + 0x2c8) = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_027687fc;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar9;
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_027687fc:
    bVar11 = false;
    goto LAB_02768800;
  }
  bVar11 = true;
LAB_02768800:
  plVar10 = *(long **)(param_1 + 0x2e0);
  if (plVar10 == (long *)0x0) goto LAB_02768834;
  *(undefined1 *)(param_1 + 0x335) = 1;
  if (*(long *)(param_1 + 0x2e8) == -1) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
LAB_027688dc:
    lVar9 = plVar10[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  else {
    FUN_00ed45e8();
    plVar10 = *(long **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (plVar10 != (long *)0x0) goto LAB_027688dc;
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
LAB_02768834:
  if (bVar11) {
    return;
  }
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x2c8);
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x2c8) = lVar8;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x2c8);
    if (lVar3 != lVar9 || lVar4 != lVar8) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_027688c0;
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x2c4) = lVar8;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar11 = true;
LAB_027688c0:
  if (!bVar11) {
    do {
      lVar9 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x2c8);
      if (lVar9 != lVar3 || lVar8 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x02768970;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x2c4) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar11 = true;
joined_r0x02768970:
    if (!bVar11) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x2c8);
        if (lVar3 != lVar9 || lVar4 != lVar8) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar8 = lVar4;
          goto joined_r0x02768970;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x2c4) = lVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
      lVar9 = lVar3;
      lVar8 = lVar4;
      goto joined_r0x02768970;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
  return;
code_r0x027687f4:
  cVar7 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar11) {
    *plVar1 = lVar9;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_027687fc;
  goto LAB_027687e8;
}


