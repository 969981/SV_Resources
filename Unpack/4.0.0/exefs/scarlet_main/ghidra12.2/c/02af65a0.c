/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02af65a0; name: FUN_02af65a0
 */


undefined8 FUN_02af65a0(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0xa00);
  if (uVar3 < 0x14) {
    lVar10 = *param_2;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar2 = (long *)(param_1 + (ulong)uVar3 * 0x80);
    plVar7 = (long *)*plVar2;
    *plVar2 = lVar10;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 5;
      do {
        lVar10 = *plVar8;
        iVar6 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    memcpy(plVar2 + 2,param_2 + 2,0x24);
    plVar7 = (long *)param_2[7];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar8 = (long *)plVar2[7];
    plVar2[7] = (long)plVar7;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    memcpy(plVar2 + 8,param_2 + 8,0x34);
    uVar9 = 1;
    *(int *)(param_1 + 0xa00) = *(int *)(param_1 + 0xa00) + 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


