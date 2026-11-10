/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe56d4; name: FUN_00fe56d4
 */


long FUN_00fe56d4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  
  plVar1 = param_1 + 0x22;
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar7 = true;
LAB_00fe5724:
    lVar4 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],param_2,param_3);
    if (lVar4 == 0) {
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","OnAllocationFailed",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\mem/branch_resource.h"
                   ,0x147,"Allocation failed. request size = %lu",param_2);
      }
    }
    else {
      if ((char)param_1[10] == '\0') {
        lVar6 = (**(code **)(*param_1 + 0x38))(param_1,lVar4);
      }
      else {
        lVar6 = FUN_00fe5860(param_2,param_3);
      }
      plVar1 = param_1 + 7;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = param_1 + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = FUN_00fe5860(param_2,param_3);
      FUN_00fe5b04(param_1 + 0xb,lVar4,param_2,uVar5);
    }
    if (!bVar7) {
      param_1[0x22] = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x23));
    }
    return lVar4;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00fe5720;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00fe5720;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00fe5720:
  bVar7 = false;
  goto LAB_00fe5724;
}


