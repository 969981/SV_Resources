/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af78f8; name: FUN_01af78f8
 */


void FUN_01af78f8(undefined8 param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 local_20;
  long *local_18;
  
  puVar2 = PTR_LAB_047d3d68;
  if (DAT_04802188 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (*param_2 == '\x01') {
    local_18 = *(long **)(param_2 + 8);
    if (local_18 == (long *)0x0) goto LAB_01af7954;
    plVar1 = local_18 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_18 = (long *)0x0;
      goto LAB_01af7954;
    }
    local_18 = *(long **)(param_2 + 8);
    if (local_18 == (long *)0x0) goto LAB_01af7954;
    plVar1 = local_18 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01af7954:
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_20 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_20 = 0;
  }
  FUN_01af7ea4(param_1,puVar2,0,&local_18,&local_20);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
    do {
      lVar5 = *plVar1;
      iVar6 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


