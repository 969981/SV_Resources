/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011af8b8; name: FUN_011af8b8
 */


void FUN_011af8b8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  short sVar8;
  
  plVar6 = (long *)(param_1 + 0x28);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_011af8ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011af8ec;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011af8ec:
  plVar6 = *(long **)(param_1 + 0x40);
  plVar7 = *(long **)(param_1 + 0x48);
  while( true ) {
    if (plVar6 == plVar7) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
      return;
    }
    lVar5 = *plVar6;
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) break;
LAB_011af96c:
    plVar6 = (long *)FUN_011afa50((long *)(param_1 + 0x40));
LAB_011af978:
    plVar7 = *(long **)(param_1 + 0x48);
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  sVar8 = *(short *)(lVar5 + 0x1a);
LAB_011af990:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_011af9b4;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_011af9b4:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x011af9bc;
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + -0x28);
    FUN_01129de8(plVar7);
    lVar5 = *(long *)(lVar5 + 8);
    plVar6 = plVar6 + 2;
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_011af978;
  }
  goto LAB_011af96c;
code_r0x011af9bc:
  sVar8 = sVar2;
  if (sVar2 == 0) goto LAB_011af96c;
  goto LAB_011af990;
}


