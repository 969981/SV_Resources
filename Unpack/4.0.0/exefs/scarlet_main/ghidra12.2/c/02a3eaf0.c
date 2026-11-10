/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3eaf0; name: FUN_02a3eaf0
 */


void FUN_02a3eaf0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  char *__s;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  undefined2 auStack_70 [32];
  undefined1 auStack_18 [8];
  
  __s = (char *)FUN_01b3c8e0();
  sVar7 = strlen(__s);
  if (0x1f < sVar7) {
    sVar7 = 0x20;
  }
  lVar8 = FUN_019c9f30(auStack_70,0x20,__s,sVar7);
  if (lVar8 != 0) {
    auStack_70[lVar8 - (ulong)(lVar8 == 0x20)] = 0;
  }
  *param_1 = 0;
  lVar8 = FUN_01fb1f0c();
  if (lVar8 != 0) {
    lVar8 = FUN_02a3ef58(auStack_18,*(undefined8 *)(lVar8 + 8),auStack_70);
    if (lVar8 == 0) {
      *param_1 = 0;
    }
    else {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar9 = (long *)*param_1;
      *param_1 = 0;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 5;
        do {
          lVar6 = *plVar2;
          iVar3 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    *param_1 = lVar8;
  }
  return;
}


