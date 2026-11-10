/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7ac4c; name: FUN_00c7ac4c
 */


void FUN_00c7ac4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0x70) == 0) ||
     ((*(char *)(*(long *)(param_1 + 0x70) + 0x250) == '\0' && (*(char *)(param_1 + 0x124) != '\0'))
     )) {
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_40 = 0;
  uStack_38 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + **(long **)(param_1 + 0xe8) * 8);
  if (*(char *)(lVar6 + 0x69) == '\0') {
    bVar5 = *(char *)(lVar6 + 0x6a) != '\0';
  }
  else {
    bVar5 = true;
  }
  FUN_00c7ae24(param_1,&local_40,param_3,bVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x150);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00c7adf8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c7adf8:
        bVar5 = false;
      }
      if (bVar5) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  plVar1 = plVar8 + 8;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c7acd0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 9));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 9));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c7acd0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c7acd0:
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[8] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 9));
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar6 = plVar8[6];
  psVar2 = (short *)(lVar6 + 0x1a);
  do {
    sVar7 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar7 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
    return;
  }
  if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


