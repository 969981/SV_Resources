/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d8984; name: FUN_015d8984
 */


void FUN_015d8984(long param_1,int param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  plVar6 = (long *)(param_1 + (long)param_2 * 0x10 + 0x40);
  lVar7 = *plVar6;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    return;
  }
  lVar7 = *plVar6;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    plVar6 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_015d8b14;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015d8b14:
        bVar4 = false;
      }
      if (bVar4) {
        plVar6 = (long *)0x0;
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar6 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
        }
        break;
      }
      plVar6 = (long *)0x0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  plVar9 = plVar6 + 0x1e;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_015d89e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x1f));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x1f));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_015d89e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_015d89e0:
  plVar6[0x6c] = *param_3;
  plVar6[0x6d] = param_3[1];
  plVar6[0x6e] = param_3[2];
  plVar9 = (long *)param_3[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar5 = (long *)plVar6[0x6f];
  plVar6[0x6f] = (long)plVar9;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar6[0x1e] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar6 + 0x1f));
  lVar7 = plVar6[6];
  psVar1 = (short *)(lVar7 + 0x1a);
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x015d8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x50))(plVar6);
    return;
  }
  if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


