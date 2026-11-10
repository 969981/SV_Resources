/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c0a3c; name: thunk_FUN_017c0a40
 */


void thunk_FUN_017c0a40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 0x1400) = 0;
  *(undefined1 **)(param_1 + 0x1408) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1410) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0x1418) = 0;
  plVar6 = *(long **)(param_1 + 0x1420);
  *(undefined8 *)(param_1 + 0x1420) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x1428);
  *(undefined8 *)(param_1 + 0x1420) = 0;
  *(undefined8 *)(param_1 + 0x1428) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017c0c30;
  }
  *(undefined4 *)(param_1 + 0x1438) = 0;
  *(undefined8 *)(param_1 + 0x1428) = 0;
  *(undefined8 *)(param_1 + 0x1430) = 0;
  plVar6 = *(long **)(param_1 + 0x1458);
  *(undefined1 **)(param_1 + 0x1440) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1448) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0x1450) = 0;
  *(undefined8 *)(param_1 + 0x1458) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x1460);
  *(undefined8 *)(param_1 + 0x1458) = 0;
  *(undefined8 *)(param_1 + 0x1460) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017c0c30;
  }
  *(undefined4 *)(param_1 + 0x1470) = 0;
  *(undefined8 *)(param_1 + 0x1460) = 0;
  *(undefined8 *)(param_1 + 0x1468) = 0;
  plVar6 = *(long **)(param_1 + 0x1490);
  *(undefined1 **)(param_1 + 0x1478) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1480) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0x1488) = 0;
  *(undefined8 *)(param_1 + 0x1490) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x1498);
  *(undefined8 *)(param_1 + 0x1490) = 0;
  *(undefined8 *)(param_1 + 0x1498) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017c0c30;
  }
  *(undefined4 *)(param_1 + 0x14a8) = 0;
  *(undefined8 *)(param_1 + 0x1498) = 0;
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  plVar6 = *(long **)(param_1 + 0x14c8);
  *(undefined1 **)(param_1 + 0x14b0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x14b8) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x14d0);
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  *(undefined8 *)(param_1 + 0x14d0) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_017c0c30;
  }
  *(undefined4 *)(param_1 + 0x14e0) = 0;
  *(undefined8 *)(param_1 + 0x14d0) = 0;
  *(undefined8 *)(param_1 + 0x14d8) = 0;
  plVar6 = *(long **)(param_1 + 0x1500);
  *(undefined1 **)(param_1 + 0x14e8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x14f0) = &DAT_03c886bc;
  *(undefined8 *)(param_1 + 0x14f8) = 0;
  *(undefined8 *)(param_1 + 0x1500) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x1508);
  *(undefined8 *)(param_1 + 0x1500) = 0;
  *(undefined8 *)(param_1 + 0x1508) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_017c0c30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x1508) = 0;
  *(undefined8 *)(param_1 + 0x1510) = 0;
  return;
}


