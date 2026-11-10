/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01407a7c; name: FUN_01407a7c
 */


ulong FUN_01407a7c(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  
  puVar9 = (undefined8 *)FUN_00cb7028(param_1,param_3);
  plVar17 = (long *)*puVar9;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 5;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) {
LAB_01407ce0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if ((plVar17[0x22] == 0) || (plVar10 = *(long **)(plVar17[0x22] + 0x70), plVar10 == (long *)0x0)
       ) {
      bVar4 = true;
    }
    else {
      plVar2 = plVar10 + 5;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_01407ce0;
      plVar11 = (long *)plVar10[6];
      if (plVar11 != (long *)plVar10[7]) {
        uVar12 = *param_2;
LAB_01407afc:
        uVar13 = *(ulong *)(*plVar11 + 0x40);
        if (uVar13 != 0) {
          uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            uVar15 = uVar13 - 1 & uVar12;
          }
          else {
            uVar15 = uVar12;
            if (uVar13 <= uVar12) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar12 / uVar13;
              }
              uVar15 = uVar12 - uVar15 * uVar13;
            }
          }
          plVar16 = *(long **)(*(long *)(*plVar11 + 0x38) + uVar15 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            if (uVar14 < 2) {
              do {
                if (plVar16[1] == uVar12) {
                  if (plVar16[2] == uVar12) goto LAB_01407bf0;
                }
                else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
            else {
              do {
                uVar14 = plVar16[1];
                if (uVar14 == uVar12) {
                  if (plVar16[2] == uVar12) goto LAB_01407bf0;
                }
                else {
                  if (uVar13 <= uVar14) {
                    uVar7 = 0;
                    if (uVar13 != 0) {
                      uVar7 = uVar14 / uVar13;
                    }
                    uVar14 = uVar14 - uVar7 * uVar13;
                  }
                  if (uVar14 != uVar15) break;
                }
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
          }
        }
        goto LAB_01407bf8;
      }
LAB_01407c04:
      param_2 = (ulong *)0xffff;
LAB_01407c08:
      do {
        iVar6 = (int)*plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if (iVar6 == 0) goto LAB_01407c98;
      bVar4 = false;
    }
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar8 == 0) {
LAB_01407c98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (!bVar4) goto LAB_01407c48;
  }
  param_2 = (ulong *)0xffff;
LAB_01407c48:
  return (ulong)param_2 & 0xffffffff;
LAB_01407bf0:
  if (-1 < (short)plVar16[6]) {
    param_2 = (ulong *)(ulong)((uint)*(ushort *)((long)plVar11 + 10) + (int)(short)plVar16[6]);
    goto LAB_01407c08;
  }
LAB_01407bf8:
  plVar11 = plVar11 + 2;
  if (plVar11 == (long *)plVar10[7]) goto LAB_01407c04;
  goto LAB_01407afc;
}


