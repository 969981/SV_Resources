/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a6cc8; name: FUN_010a6cc8
 */


void FUN_010a6cc8(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint local_4;
  
  uVar7 = *(ulong *)(param_2 + 0xa0);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar11 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar8 = (ulong)param_3;
    if (uVar11 < 2) {
      uVar9 = (ulong)((int)uVar7 - 1U & param_3);
    }
    else {
      uVar9 = uVar8;
      if (uVar7 <= uVar8) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar8 / uVar7;
        }
        uVar9 = uVar8 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x98) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar10[1] == uVar8) {
            if (*(uint *)(plVar10 + 2) == param_3) goto LAB_010a6d78;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            if (*(uint *)(plVar10 + 2) == param_3) {
LAB_010a6d78:
              local_4 = param_3;
              plVar10 = (long *)FUN_010a6e40((long *)(param_2 + 0x98),&local_4);
              lVar6 = *plVar10;
              *param_1 = lVar6;
              if (lVar6 == 0) {
                return;
              }
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
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              return;
            }
          }
          else {
            if (uVar7 <= uVar11) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar5 * uVar7;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


