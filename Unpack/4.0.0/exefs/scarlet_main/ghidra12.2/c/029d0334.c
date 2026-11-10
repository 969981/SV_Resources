/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d0334; name: FUN_029d0334
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029d0334(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  if ((param_2 & 1) == 0) {
    lVar6 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
    if ((lVar6 == 0) || (plVar7 = *(long **)(lVar6 + 0x120), plVar7 == (long *)0x0)) {
      iVar8 = _DAT_00000194;
    }
    else {
      plVar15 = plVar7 + 5;
      do {
        lVar6 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar8 = *(int *)((long)plVar7 + 0x194);
      do {
        lVar6 = *plVar15;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (iVar8 < *(int *)PTR_DAT_047ddf68) {
      puVar9 = *(ulong **)(param_1 + 0x2a0);
      puVar10 = *(ulong **)(param_1 + 0x2a8);
      if (puVar9 != puVar10) {
LAB_029d0388:
        if (((int)puVar9[0x8a] < 0) && (lVar6 = *(long *)(param_1 + 0x2d8), lVar6 != 0)) {
          plVar7 = *(long **)(lVar6 + 0x30);
          if (plVar7 != *(long **)(lVar6 + 0x38)) {
            uVar11 = *puVar9;
LAB_029d03b4:
            uVar12 = *(ulong *)(*plVar7 + 0x40);
            if (uVar12 != 0) {
              uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
              uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar13 < 2) {
                uVar14 = uVar12 - 1 & uVar11;
              }
              else {
                uVar14 = uVar11;
                if (uVar12 <= uVar11) {
                  uVar14 = 0;
                  if (uVar12 != 0) {
                    uVar14 = uVar11 / uVar12;
                  }
                  uVar14 = uVar11 - uVar14 * uVar12;
                }
              }
              plVar15 = *(long **)(*(long *)(*plVar7 + 0x38) + uVar14 * 8);
              if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0))
              {
                if (uVar13 < 2) {
                  do {
                    if (plVar15[1] == uVar11) {
                      if (plVar15[2] == uVar11) goto LAB_029d04a8;
                    }
                    else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
                else {
                  do {
                    uVar13 = plVar15[1];
                    if (uVar13 == uVar11) {
                      if (plVar15[2] == uVar11) goto LAB_029d04a8;
                    }
                    else {
                      if (uVar12 <= uVar13) {
                        uVar5 = 0;
                        if (uVar12 != 0) {
                          uVar5 = uVar13 / uVar12;
                        }
                        uVar13 = uVar13 - uVar5 * uVar12;
                      }
                      if (uVar13 != uVar14) break;
                    }
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
              }
            }
            goto LAB_029d04b0;
          }
        }
      }
    }
  }
  return;
LAB_029d04a8:
  if (-1 < (short)plVar15[6]) goto LAB_029d04c0;
LAB_029d04b0:
  plVar7 = plVar7 + 2;
  if (plVar7 == *(long **)(lVar6 + 0x38)) {
    return;
  }
  goto LAB_029d03b4;
LAB_029d04c0:
  uVar1 = (uint)*(ushort *)((long)plVar7 + 10) + (int)(short)plVar15[6];
  if ((short)uVar1 < 0) {
    return;
  }
  *(uint *)(puVar9 + 0x8a) = uVar1 & 0xffff;
  puVar9 = puVar9 + 0xaa;
  if (puVar9 == puVar10) {
    return;
  }
  goto LAB_029d0388;
}


