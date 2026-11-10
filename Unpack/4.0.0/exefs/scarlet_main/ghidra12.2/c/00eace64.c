/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eace64; name: FUN_00eace64
 */


void FUN_00eace64(long param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 *puVar14;
  long *local_48;
  
  puVar14 = *(undefined4 **)(param_1 + 0xc0);
  puVar1 = *(undefined4 **)(param_1 + 200);
  if (puVar14 != puVar1) {
    do {
      plVar8 = *(long **)(param_1 + 0x50);
      plVar2 = *(long **)(param_1 + 0x58);
LAB_00eaceac:
      if (plVar8 != plVar2) {
        uVar10 = *(ulong *)(*plVar8 + 0x110);
        if (uVar10 != 0) {
          uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar9 = *(ulong *)(puVar14 + 2);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            uVar12 = uVar10 - 1 & uVar9;
          }
          else if (uVar9 < uVar10) {
            uVar12 = uVar9;
          }
          else {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar9 / uVar10;
            }
            uVar12 = uVar9 - uVar12 * uVar10;
          }
          plVar13 = *(long **)(*(long *)(*plVar8 + 0x108) + uVar12 * 8);
          if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if (plVar13[1] == uVar9) {
                  if (plVar13[2] == uVar9) goto LAB_00eacfa8;
                }
                else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
            else {
              do {
                uVar11 = plVar13[1];
                if (uVar11 == uVar9) {
                  if (plVar13[2] == uVar9) goto LAB_00eacfa8;
                }
                else {
                  if (uVar10 <= uVar11) {
                    uVar6 = 0;
                    if (uVar10 != 0) {
                      uVar6 = uVar11 / uVar10;
                    }
                    uVar11 = uVar11 - uVar6 * uVar10;
                  }
                  if (uVar11 != uVar12) break;
                }
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
          }
        }
        goto LAB_00eacea8;
      }
      local_48 = (long *)0x0;
LAB_00eacfd8:
      FUN_00d101e0(*(undefined8 *)(*param_2 + 200),
                   *(undefined4 *)
                    (*(long *)(param_1 + 0x88) + (param_3 & 0xffffffff) * 0x108 + 0x44),*puVar14,
                   &local_48);
      FUN_00ead0d0(*(undefined8 *)(*param_2 + 200),
                   *(undefined4 *)
                    (*(long *)(param_1 + 0x88) + (param_3 & 0xffffffff) * 0x108 + 0x44),*puVar14,
                   puVar14 + 10);
      if (local_48 != (long *)0x0) {
        plVar8 = local_48 + 5;
        do {
          lVar7 = *plVar8;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      puVar14 = puVar14 + 0xe;
    } while (puVar14 != puVar1);
  }
  return;
LAB_00eacfa8:
  local_48 = (long *)plVar13[6];
  if (local_48 != (long *)0x0) {
    plVar13 = local_48 + 5;
    do {
      lVar7 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)lVar7 + 1;
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
    if (local_48 != (long *)0x0) goto LAB_00eacfd8;
  }
LAB_00eacea8:
  plVar8 = plVar8 + 1;
  goto LAB_00eaceac;
}


