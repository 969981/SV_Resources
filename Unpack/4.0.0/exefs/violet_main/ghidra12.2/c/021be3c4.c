/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021be3c4; name: FUN_021be3c4
 */


void FUN_021be3c4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *local_28;
  
  plVar6 = (long *)FUN_021be594(param_2,param_3);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  plVar2 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 4;
  }
  plVar3 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar2 + -4;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  (**(code **)(plVar3[4] + 0x68))(plVar3 + 4);
  local_28 = plVar6;
  FUN_00df8c30(param_1 + 0x21,&local_28);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar6 = param_1 + 0x88;
  lVar9 = *plVar6;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    plVar6 = (long *)0x0;
    bVar8 = true;
LAB_021be494:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar2 + 0xf8))(plVar2);
    }
    if (!bVar8) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021be490;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar6 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021be490;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021be490:
  bVar8 = false;
  goto LAB_021be494;
}


