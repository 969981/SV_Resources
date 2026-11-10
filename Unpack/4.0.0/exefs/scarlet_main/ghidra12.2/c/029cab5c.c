/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029cab5c; name: FUN_029cab5c
 */


void FUN_029cab5c(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  
  if ((((*(char *)(param_1 + 0x2e0) == '\0') && (*(long *)(param_1 + 0x140) != 0)) &&
      (*(short *)(*(long *)(param_1 + 0x140) + 0x1a) != 0)) &&
     ((lVar8 = *(long *)(param_1 + 0x140), lVar8 != 0 && (*(short *)(lVar8 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_029cabe4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029cabe4:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar10 = (long *)(lVar8 + -0x28);
        uVar7 = FUN_01e0d238(plVar10);
        if (((uVar7 & 1) != 0) && (plVar11 = *(long **)(lVar8 + 0xf8), plVar11 != (long *)0x0)) {
          plVar2 = plVar11 + 5;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)lVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          FUN_00c6fed4(param_1 + 0x1f8);
          FUN_016b0abc(param_1,plVar10,*(undefined4 *)((long)plVar11 + 0x194));
          FUN_029cacf8(param_1 + 0x1f8);
          do {
            lVar8 = *plVar2;
            iVar6 = (int)lVar8 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
          else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
                    /* WARNING: Could not recover jumptable at 0x029cac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x60))(plVar10);
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


