/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a291c0; name: FUN_02a291c0
 */


void FUN_02a291c0(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar6 = *(ulong *)(*(long *)(param_2 + 0x220) + 0x80);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & param_3;
    }
    else {
      uVar9 = param_3;
      if (uVar6 <= param_3) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = param_3 / uVar6;
        }
        uVar9 = param_3 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(*(long *)(param_2 + 0x220) + 0x78) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == param_3) {
            if (plVar10[2] == param_3) {
LAB_02a292c8:
              lVar7 = plVar10[3];
              *param_1 = lVar7;
              if (lVar7 == 0) {
                return;
              }
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
              if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              return;
            }
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == param_3) {
            if (plVar10[2] == param_3) goto LAB_02a292c8;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar5 = 0;
              if (uVar6 != 0) {
                uVar5 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar5 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


