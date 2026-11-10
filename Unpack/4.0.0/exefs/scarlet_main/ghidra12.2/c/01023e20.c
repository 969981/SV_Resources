/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01023e20; name: FUN_01023e20
 */


/* WARNING: Removing unreachable block (ram,0x01024064) */
/* WARNING: Removing unreachable block (ram,0x010240b0) */
/* WARNING: Removing unreachable block (ram,0x01024088) */
/* WARNING: Removing unreachable block (ram,0x01024090) */
/* WARNING: Removing unreachable block (ram,0x01024098) */
/* WARNING: Removing unreachable block (ram,0x010240bc) */
/* WARNING: Removing unreachable block (ram,0x010240a0) */
/* WARNING: Removing unreachable block (ram,0x010240a4) */
/* WARNING: Removing unreachable block (ram,0x01024070) */
/* WARNING: Removing unreachable block (ram,0x010240a8) */
/* WARNING: Removing unreachable block (ram,0x01024084) */

void FUN_01023e20(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = (long *)(param_1 + 8);
  lVar9 = *plVar11;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar9) {
    lVar5 = nn::os::GetCurrentThread();
LAB_01023e5c:
    if (*plVar11 == 0) goto code_r0x01023e64;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar11 == 0) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar8) {
              *plVar11 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01023e6c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01023e6c:
    bVar8 = false;
    goto LAB_01023e70;
  }
  plVar11 = (long *)0x0;
  bVar8 = true;
LAB_01023e70:
  plVar12 = *(long **)(param_1 + 0x20);
  plVar10 = *(long **)(param_1 + 0x28);
  if ((plVar12 != plVar10) && (*plVar12 != param_2)) {
    do {
      plVar12 = plVar12 + 1;
      if (plVar10 == plVar12) {
        plVar12 = plVar10;
        goto LAB_01023f3c;
      }
    } while (*plVar12 != param_2);
  }
  if (plVar12 != plVar10) {
    plVar7 = plVar12 + 1;
    if (plVar7 != plVar10) {
      do {
        plVar6 = plVar12;
        if (*plVar7 != param_2) {
          plVar6 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar6 != (long *)0x0) {
            lVar5 = plVar6[6];
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar3) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_01023f10;
          }
          lVar5 = *plVar7;
          *plVar7 = 0;
          plVar6 = plVar12 + 1;
          *plVar12 = lVar5;
        }
        plVar7 = plVar7 + 1;
        plVar12 = plVar6;
      } while (plVar7 != plVar10);
      plVar10 = *(long **)(param_1 + 0x28);
    }
  }
LAB_01023f3c:
  if (plVar12 != plVar10) {
    while (plVar10 != plVar12) {
      plVar10 = plVar10 + -1;
      plVar7 = (long *)*plVar10;
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_01023f10:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    *(long **)(param_1 + 0x28) = plVar12;
  }
  if (!bVar8) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    return;
  }
  return;
code_r0x01023e64:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar8) {
    *plVar11 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01023e6c;
  goto LAB_01023e5c;
}


