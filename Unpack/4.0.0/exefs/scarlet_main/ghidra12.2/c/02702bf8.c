/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02702bf8; name: FUN_02702bf8
 */


void FUN_02702bf8(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  long *local_8;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02702c50;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02702c50:
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        if (*(long *)(lVar6 + 0x10) == 0) {
          return;
        }
        local_8 = (long *)*param_3;
        if (local_8 != (long *)0x0) {
          plVar2 = local_8 + 5;
          do {
            lVar6 = *plVar2;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = (int)lVar6 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.",param_4 & 0xffffffff);
          }
        }
        FUN_0113c1f8(plVar7,param_2,param_4 & 0xffffffff,&local_8);
        if (local_8 != (long *)0x0) {
          plVar2 = local_8 + 5;
          do {
            lVar6 = *plVar2;
            iVar5 = (int)lVar6 + -1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_8 + 0x10))();
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar7 + 0x60))(plVar7);
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


