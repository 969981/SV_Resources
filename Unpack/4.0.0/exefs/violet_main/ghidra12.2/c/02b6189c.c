/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b6189c; name: FUN_02b6189c
 */


void FUN_02b6189c(long param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar10 = (long *)(param_1 + 8);
  lVar9 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_02b618e4:
    plVar3 = *(long **)(param_1 + 0x20);
    plVar11 = *(long **)(param_1 + 0x28);
    do {
      while( true ) {
        do {
          if (plVar11 == plVar3) {
            *(long **)(param_1 + 0x28) = plVar3;
            if (bVar8) {
              return;
            }
            *plVar10 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
            return;
          }
          plVar11 = plVar11 + -1;
          plVar7 = (long *)*plVar11;
        } while (plVar7 == (long *)0x0);
        lVar6 = plVar7[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar2 != 1) break;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
    } while (sVar2 != 0);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b618e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b618e0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b618e0:
  bVar8 = false;
  goto LAB_02b618e4;
}


