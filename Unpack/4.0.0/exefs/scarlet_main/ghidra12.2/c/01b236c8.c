/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b236c8; name: FUN_01b236c8
 */


void FUN_01b236c8(char *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 byte param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  byte local_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  long *local_28;
  long *local_20;
  long *local_18;
  
  uVar5 = DAT_04805e88;
  if (*param_1 == '\x01') {
    local_18 = *(long **)(param_1 + 8);
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
LAB_01b2370c:
      if (iVar6 == -1) goto LAB_01b2390c;
    }
  }
  else if (*param_1 == '\0') {
    local_18 = *(long **)(param_1 + 8);
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
      goto LAB_01b2370c;
    }
  }
  else {
    local_18 = (long *)0x0;
  }
  if (*param_2 == '\x01') {
    local_20 = *(long **)(param_2 + 8);
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
LAB_01b23740:
      if (iVar6 == -1) goto LAB_01b2390c;
    }
  }
  else if (*param_2 == '\0') {
    local_20 = *(long **)(param_2 + 8);
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
      goto LAB_01b23740;
    }
  }
  else {
    local_20 = (long *)0x0;
  }
  if (*param_3 == '\x01') {
    local_28 = *(long **)(param_3 + 8);
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
LAB_01b23774:
      if (iVar6 == -1) {
LAB_01b2390c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  else if (*param_3 == '\0') {
    local_28 = *(long **)(param_3 + 8);
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
      goto LAB_01b23774;
    }
  }
  else {
    local_28 = (long *)0x0;
  }
  local_34[0] = param_6 & 1;
  local_30 = param_5;
  uStack_2c = param_4;
  FUN_01b25050(uVar5,&local_18,&local_20,&local_28,&uStack_2c,&local_30,local_34);
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
    else if ((int)lVar4 == 0) goto LAB_01b23824;
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
    else if ((int)lVar4 == 0) goto LAB_01b23824;
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
LAB_01b23824:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


