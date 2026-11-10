/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01765b90; name: FUN_01765b90
 */


uint FUN_01765b90(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  long *local_8;
  
  pcVar6 = (code *)*param_1;
  if (*param_2 == '\x01') {
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_01765bd0;
    plVar1 = local_8 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_8 = (long *)0x0;
      goto LAB_01765bd0;
    }
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_01765bd0;
    plVar1 = local_8 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01765bd0:
  uVar5 = (*pcVar6)(&local_8);
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar5 & 1;
}


