/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b322c4; name: FUN_01b322c4
 */


void FUN_01b322c4(undefined8 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined4 local_24;
  long *local_20;
  undefined4 local_14;
  
  puVar2 = PTR_FUN_047d4730;
  if (DAT_04805f38 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  local_14 = param_2;
  if (*param_3 == '\x01') {
    local_20 = *(long **)(param_3 + 8);
    if (local_20 == (long *)0x0) goto LAB_01b32324;
    plVar1 = local_20 + 5;
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
    if (*param_3 != '\0') {
      local_20 = (long *)0x0;
      goto LAB_01b32324;
    }
    local_20 = *(long **)(param_3 + 8);
    if (local_20 == (long *)0x0) goto LAB_01b32324;
    plVar1 = local_20 + 5;
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
LAB_01b32324:
  local_24 = param_4;
  FUN_01b32a68(param_1,puVar2,0,&local_14,&local_20,&local_24);
  if (local_20 != (long *)0x0) {
    plVar1 = local_20 + 5;
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
      (**(code **)(*local_20 + 0x10))();
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


