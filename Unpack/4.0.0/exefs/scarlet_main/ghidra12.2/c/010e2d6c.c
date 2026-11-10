/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e2d6c; name: FUN_010e2d6c
 */


void FUN_010e2d6c(long *param_1,long param_2,ulong *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  long *local_28;
  
  local_40 = *param_3;
  uVar7 = *(ulong *)(param_2 + 0x48);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar10 = uVar7 - 1 & local_40;
    }
    else {
      uVar10 = local_40;
      if (uVar7 <= local_40) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = local_40 / uVar7;
        }
        uVar10 = local_40 - uVar10 * uVar7;
      }
    }
    lVar9 = *(long *)(param_2 + 0x40);
    plVar11 = *(long **)(lVar9 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == local_40) {
            if (plVar11[2] == local_40) goto LAB_010e2e3c;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == local_40) {
            if (plVar11[2] == local_40) {
LAB_010e2e3c:
              if (uVar8 < 2) {
                plVar11 = *(long **)(lVar9 + (uVar7 - 1 & local_40) * 8);
                do {
                  do {
                    plVar11 = (long *)*plVar11;
                  } while (plVar11[1] != local_40);
                } while (plVar11[2] != local_40);
              }
              else {
                uVar8 = local_40;
                if (uVar7 <= local_40) {
                  uVar8 = 0;
                  if (uVar7 != 0) {
                    uVar8 = local_40 / uVar7;
                  }
                  uVar8 = local_40 - uVar8 * uVar7;
                }
                plVar11 = *(long **)(lVar9 + uVar8 * 8);
                do {
                  do {
                    plVar11 = (long *)*plVar11;
                  } while (plVar11[1] != local_40);
                } while (plVar11[2] != local_40);
              }
              lVar9 = *(long *)(*(long *)(param_2 + 0xa8) + *(long *)((long)plVar11 + 0x30) * 8);
              *param_1 = lVar9;
              if (lVar9 == 0) {
                return;
              }
              lVar9 = *(long *)(lVar9 + 0x30);
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar9 + 0x1a);
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
                uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                *(undefined8 *)(lVar9 + 8) = uVar6;
                *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
                return;
              }
              if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              return;
            }
          }
          else {
            if (uVar7 <= uVar12) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar12 / uVar7;
              }
              uVar12 = uVar12 - uVar5 * uVar7;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = (long *)param_3[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_010e2fe4(param_1,param_2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


