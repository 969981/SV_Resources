/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123d184; name: FUN_0123d184
 */


void FUN_0123d184(long *param_1,long param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar8 = *(ulong *)(param_2 + 0x1a8);
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
    plVar11 = *(long **)(*(long *)(param_2 + 0x1a0) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar11[1] == uVar9) {
            if (*(uint *)(plVar11 + 2) == param_3) {
LAB_0123d22c:
              lVar7 = plVar11[3];
              *param_1 = lVar7;
              if (lVar7 == 0) {
                return;
              }
              lVar7 = *(long *)(lVar7 + 0x30);
              if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar2 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar2 == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
                *(undefined8 *)(lVar7 + 8) = uVar6;
                *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
                return;
              }
              if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              return;
            }
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar9) {
            if (*(uint *)(plVar11 + 2) == param_3) goto LAB_0123d22c;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar5 * uVar8;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


