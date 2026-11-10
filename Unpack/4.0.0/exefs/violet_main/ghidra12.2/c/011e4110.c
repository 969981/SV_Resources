/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e4110; name: FUN_011e4110
 */


long * FUN_011e4110(long *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar5 = (long *)FUN_011e42e8(auStack_48);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 4;
  }
  plVar9 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar2 + -4;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  (**(code **)(plVar9[4] + 0x68))(plVar9 + 4);
  local_50 = plVar5;
  FUN_00df8c30(param_1 + 0x21,&local_50);
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[0x13];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar9 = param_1 + 0x88;
  lVar8 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    plVar9 = (long *)0x0;
    bVar7 = true;
LAB_011e41e0:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar2 + 0xf8))(plVar2);
    }
    if (!bVar7) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    return plVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011e41dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011e41dc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011e41dc:
  bVar7 = false;
  goto LAB_011e41e0;
}


