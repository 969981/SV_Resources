/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2e0a0; name: FUN_01b2e0a0
 */


void FUN_01b2e0a0(char *param_1,char *param_2)

{
  long *plVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  short sVar9;
  long *local_30;
  long *local_28;
  
  uVar6 = DAT_04805ec8;
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar9) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01b2e200;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01b2e200:
          bVar5 = false;
        }
        if (bVar5) {
          local_28 = (long *)0x0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            local_28 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          }
          goto LAB_01b2e0d4;
        }
        sVar9 = sVar4;
      } while (sVar4 != 0);
    }
LAB_01b2e0d0:
    local_28 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_01b2e0d0;
    local_28 = *(long **)(param_1 + 8);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
  }
LAB_01b2e0d4:
  if (*param_2 == '\x01') {
    local_30 = *(long **)(param_2 + 8);
    if (local_30 == (long *)0x0) goto LAB_01b2e108;
    plVar1 = local_30 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_30 = (long *)0x0;
      goto LAB_01b2e108;
    }
    local_30 = *(long **)(param_2 + 8);
    if (local_30 == (long *)0x0) goto LAB_01b2e108;
    plVar1 = local_30 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01b2e108:
  FUN_01b2f660(uVar6,&local_28,&local_30);
  if (local_30 != (long *)0x0) {
    plVar1 = local_30 + 5;
    do {
      lVar7 = *plVar1;
      iVar8 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}


