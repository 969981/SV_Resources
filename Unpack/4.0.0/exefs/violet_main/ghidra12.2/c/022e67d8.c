/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e67d8; name: FUN_022e67d8
 */


long * FUN_022e67d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *local_50;
  long *local_48;
  
  uVar6 = FUN_022e6acc(param_2,param_3);
  FUN_022e6bfc(&local_48,uVar6);
  plVar5 = local_48;
  plVar2 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 4;
  }
  FUN_0133f444(param_1,plVar2);
  local_50 = local_48;
  local_48 = (long *)0x0;
  FUN_00df8c30(param_1 + 0x21,&local_50);
  if (local_50 != (long *)0x0) {
    lVar7 = local_50[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
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
  plVar10 = param_1 + 0x88;
  lVar9 = *plVar10;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_022e6884:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar2 + 0xf8))(plVar2);
    }
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    FUN_022e3ab8(&local_48);
    return plVar5;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_022e6880;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022e6880;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_022e6880:
  bVar8 = false;
  goto LAB_022e6884;
}


