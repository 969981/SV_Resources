/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfc570; name: FUN_01cfc570
 */


void FUN_01cfc570(undefined1 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_140 [256];
  
  if (((*param_2 == '\0') || (*param_2 == '\x01')) && (*(long *)(param_2 + 8) != 0)) {
    plVar6 = (long *)FUN_01d01d2c();
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) goto LAB_01cfc64c;
    }
    memcpy(auStack_140,plVar6 + 1,0x100);
    lVar8 = plVar6[0x21];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
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
LAB_01cfc64c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    lVar5 = plVar6[0x22];
    *(long *)(param_1 + 8) = lVar7;
    memcpy(param_1 + 0x10,auStack_140,0x100);
    *(long *)(param_1 + 0x110) = lVar8;
    param_1[0x118] = (char)lVar5;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


