/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b23b68; name: FUN_01b23b68
 */


void FUN_01b23b68(undefined8 *param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  long *local_28;
  long *local_20;
  long *local_18;
  
  uVar5 = *param_1;
  if (*param_2 == '\x01') {
    local_18 = *(long **)(param_2 + 8);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01b23ba4:
      if (iVar6 == -1) goto LAB_01b23d98;
    }
  }
  else if (*param_2 == '\0') {
    local_18 = *(long **)(param_2 + 8);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01b23ba4;
    }
  }
  else {
    local_18 = (long *)0x0;
  }
  if (*param_3 == '\x01') {
    local_20 = *(long **)(param_3 + 8);
    if (local_20 != (long *)0x0) {
      plVar1 = local_20 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01b23bd8:
      if (iVar6 == -1) goto LAB_01b23d98;
    }
  }
  else if (*param_3 == '\0') {
    local_20 = *(long **)(param_3 + 8);
    if (local_20 != (long *)0x0) {
      plVar1 = local_20 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01b23bd8;
    }
  }
  else {
    local_20 = (long *)0x0;
  }
  if (*param_4 == '\x01') {
    local_28 = *(long **)(param_4 + 8);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01b23c0c:
      if (iVar6 == -1) {
LAB_01b23d98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  else if (*param_4 == '\0') {
    local_28 = *(long **)(param_4 + 8);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        iVar6 = (int)*plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01b23c0c;
    }
  }
  else {
    local_28 = (long *)0x0;
  }
  local_30 = param_6;
  uStack_2c = param_5;
  FUN_01b25180(uVar5,&local_18,&local_20,&local_28,&uStack_2c,&local_30);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01b23cb0;
  }
  if (local_20 != (long *)0x0) {
    plVar1 = local_20 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01b23cb0;
  }
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_01b23cb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


