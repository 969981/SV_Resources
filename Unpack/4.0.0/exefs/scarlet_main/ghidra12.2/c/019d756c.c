/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d756c; name: FUN_019d756c
 */


void FUN_019d756c(long *param_1,undefined1 *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      lVar5 = *(long *)(*(long *)(param_2 + 8) + param_3);
      *param_1 = lVar5;
      if (lVar5 == 0) {
        return;
      }
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_019d7604:
      if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      return;
    }
    break;
  case 1:
    FUN_01cb1918(param_2 + 8);
    return;
  case 2:
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + param_3 + -0x28);
      *param_1 = lVar5;
      if (lVar5 == 0) {
        return;
      }
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_019d7604;
    }
  }
  *param_1 = 0;
  return;
}


