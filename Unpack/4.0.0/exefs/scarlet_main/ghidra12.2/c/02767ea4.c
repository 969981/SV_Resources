/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02767ea4; name: FUN_02767ea4
 */


void FUN_02767ea4(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x130) == 3) {
    puVar6 = (undefined8 *)FUN_00cb7028(param_1,param_3);
    plVar9 = (long *)*puVar6;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar10 = plVar9 + 0x32;
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          uVar8 = 1;
          if ((param_2 & 1) == 0) {
            uVar8 = 2;
          }
          *(undefined4 *)(plVar9 + 0x35) = uVar8;
          goto LAB_02767fb8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = (long *)plVar9[0x1b];
      for (plVar10 = (long *)plVar9[0x1a]; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        lVar7 = *plVar10 + 0x68;
        lVar11 = *(long *)(*plVar10 + 0x70);
        if (lVar11 != lVar7) {
          FUN_00e12ca8(*(undefined8 *)(lVar11 + 0x10),param_2 & 1);
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 != lVar7) {
            FUN_00e12ca8(*(undefined8 *)(lVar11 + 0x10),param_2 & 1);
            for (lVar11 = *(long *)(lVar11 + 8); lVar11 != lVar7; lVar11 = *(long *)(lVar11 + 8)) {
              FUN_00e12ca8(*(undefined8 *)(lVar11 + 0x10),param_2 & 1);
            }
          }
        }
      }
      *(undefined4 *)(plVar9 + 0x35) = 0;
      plVar9[0x32] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x33));
LAB_02767fb8:
      do {
        lVar7 = *plVar1;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02768008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
      if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


