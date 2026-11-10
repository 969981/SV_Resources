/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149c40c; name: FUN_0149c40c
 */


void FUN_0149c40c(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long local_40;
  undefined8 local_38;
  
  lVar5 = FUN_0149c980(*(undefined8 *)(param_2 + 8));
  local_40 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_38 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x148) = 0;
  FUN_0149c1c0(&local_38);
  local_40 = 0;
  *(long *)(param_2 + 0x148) = lVar5;
  FUN_0149c1c0(&local_40);
  FUN_0149c4d0(param_1,param_2 + 0x148);
  return;
}


