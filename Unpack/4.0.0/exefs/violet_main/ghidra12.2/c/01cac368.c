/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cac368; name: FUN_01cac368
 */


void FUN_01cac368(long *param_1,undefined1 *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 8) + param_3);
LAB_01cac398:
      lVar6 = *plVar5;
      *param_1 = lVar6;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x28);
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
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 != 0)) {
      plVar5 = (long *)(lVar6 + param_3 + -0x28);
      goto LAB_01cac398;
    }
  }
  *param_1 = 0;
  return;
}


