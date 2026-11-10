/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157a7f8; name: FUN_0157a7f8
 */


void FUN_0157a7f8(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  FUN_0123d184(&local_28,param_1,0);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0157ac10(local_28);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_00f0f440(&local_28,param_1,0);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_00f0f5f8(local_28[9] + 0x40);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_0123d184(&local_28,param_1,1);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0157ac10(local_28);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_00f0f440(&local_28,param_1,1);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_00f0f5f8(local_28[9] + 0x40);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_0123d184(&local_28,param_1,2);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0157ac10(local_28);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_00f0f440(&local_28,param_1,2);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_00f0f5f8(local_28[9] + 0x40);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_0123d184(&local_28,param_1,3);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0157ac10(local_28);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_00f0f440(&local_28,param_1,3);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_00f0f5f8(local_28[9] + 0x40);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_0123d184(&local_28,param_1,4);
  plVar5 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0157ac10(local_28);
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    else if (sVar2 == 0) goto LAB_0157aaf8;
  }
  FUN_00f0f440(&local_28,param_1,4);
  if (local_28 != (long *)0x0) {
    FUN_00f0f5f8(local_28[9] + 0x40);
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))(local_28);
    }
    else if (sVar2 == 0) {
LAB_0157aaf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


