/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a29ac; name: FUN_015a29ac
 */


long * FUN_015a29ac(long *param_1,undefined8 param_2,undefined8 param_3)

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
  long *local_48;
  
  FUN_015a2bbc(&local_48,param_2,param_3);
  plVar5 = local_48;
  plVar2 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 4;
  }
  plVar9 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    plVar9 = plVar2 + -4;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  (**(code **)(plVar9[4] + 0x68))(plVar9 + 4);
  local_50 = local_48;
  local_48 = (long *)0x0;
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
    else if (sVar3 == 0) goto LAB_015a2b4c;
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar9 = param_1 + 0x88;
  lVar8 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar8) {
    lVar6 = nn::os::GetCurrentThread();
LAB_015a2a60:
    if (*plVar9 == 0) goto code_r0x015a2a68;
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
            if (cVar4 == '\0') goto LAB_015a2a70;
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
LAB_015a2a70:
    bVar7 = false;
    goto LAB_015a2a74;
  }
  plVar9 = (long *)0x0;
  bVar7 = true;
LAB_015a2a74:
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
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0x13];
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
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_015a2b4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return plVar5;
code_r0x015a2a68:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar7) {
    *plVar9 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_015a2a70;
  goto LAB_015a2a60;
}


