/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff4d4c; name: FUN_00ff4d4c
 */


byte FUN_00ff4d4c(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0xeb) == '\0') {
    bVar6 = 0;
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
      if ((uVar7 & 1) != 0) {
        lVar8 = FUN_00c8dda0(*(undefined8 *)(param_1 + 0x30));
        bVar6 = 0;
        if (((lVar8 == 0) ||
            (lVar9 = FUN_00c8dda0(*(undefined8 *)(param_1 + 0x30)), bVar6 = 0, lVar9 == 0)) ||
           (plVar10 = *(long **)(lVar9 + 0x120), bVar6 = 0, plVar10 == (long *)0x0))
        goto LAB_00ff4e10;
        plVar1 = plVar10 + 5;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        iVar2 = *(int *)(lVar8 + 0x130);
        do {
          lVar8 = *plVar1;
          iVar5 = (int)lVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
        if (iVar2 == 3) {
          FUN_029e5510(param_1);
          bVar6 = (**(code **)(**(long **)(param_1 + 0x38) + 0x48))
                            (*(long **)(param_1 + 0x38),param_1);
          *(byte *)(param_1 + 0xeb) = bVar6 & 1;
          goto LAB_00ff4e10;
        }
      }
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 1;
  }
LAB_00ff4e10:
  return bVar6 & 1;
}


