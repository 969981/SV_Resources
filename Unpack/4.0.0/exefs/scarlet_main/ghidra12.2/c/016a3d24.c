/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a3d24; name: FUN_016a3d24
 */


uint FUN_016a3d24(undefined8 param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  long *local_8;
  
  uVar6 = DAT_0482d160;
  uVar2 = 0x30;
  if (DAT_0482d158 == '\0') {
    uVar2 = 0;
  }
  if (*param_2 == '\x01') {
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_016a3d84;
    plVar1 = local_8 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_8 = (long *)0x0;
      goto LAB_016a3d84;
    }
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_016a3d84;
    plVar1 = local_8 + 5;
    do {
      iVar8 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
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
LAB_016a3d84:
  uVar7 = FUN_016a3e54(param_1,uVar2,uVar6,&local_8);
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar5 = *plVar1;
      iVar8 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar7 & 1;
}


