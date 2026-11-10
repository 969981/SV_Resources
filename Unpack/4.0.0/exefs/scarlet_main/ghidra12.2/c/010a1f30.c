/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a1f30; name: FUN_010a1f30
 */


void FUN_010a1f30(long param_1,ulong param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  uVar8 = *(ulong *)(param_1 + 0x148);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar12 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar9 = (ulong)param_3;
    if (uVar12 < 2) {
      uVar10 = (ulong)((int)uVar8 - 1U & param_3);
    }
    else {
      uVar10 = uVar9;
      if (uVar8 <= uVar9) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar9 / uVar8;
        }
        uVar10 = uVar9 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x140) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar11[1] == uVar9) {
            if (*(uint *)(plVar11 + 2) == param_3) goto LAB_010a1fcc;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) {
            return;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar9) {
            if (*(uint *)(plVar11 + 2) == param_3) {
LAB_010a1fcc:
              plVar11 = (long *)plVar11[3];
              if (plVar11 == (long *)0x0) {
                param_1 = param_1 + (param_2 & 0xff) * 0x38;
                bVar3 = *(byte *)(param_1 + 0x58);
                *(byte *)(param_1 + 0x58) = bVar3 + 1;
                *(undefined8 *)(param_1 + (ulong)bVar3 * 8 + 0x28) = 0;
                return;
              }
              lVar13 = plVar11[6];
              if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar13 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar2 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar2 == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
                *(undefined8 *)(lVar13 + 8) = uVar7;
                *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
              }
              else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              param_1 = param_1 + (param_2 & 0xff) * 0x38;
              bVar3 = *(byte *)(param_1 + 0x58);
              *(byte *)(param_1 + 0x58) = bVar3 + 1;
              *(long **)(param_1 + (ulong)bVar3 * 8 + 0x28) = plVar11;
              lVar13 = plVar11[6];
              psVar1 = (short *)(lVar13 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar2 == 1) {
                *(undefined8 *)(lVar13 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x010a20f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar11 + 0x50))(plVar11);
                return;
              }
              if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
              return;
            }
          }
          else {
            if (uVar8 <= uVar12) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar6 * uVar8;
            }
            if (uVar12 != uVar10) {
              return;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  return;
}


