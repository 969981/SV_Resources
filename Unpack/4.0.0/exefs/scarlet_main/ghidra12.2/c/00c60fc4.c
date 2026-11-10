/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c60fc4; name: FUN_00c60fc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c60fc4(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long *plVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long *local_58;
  
  piVar13 = *(int **)(param_1 + 0x250);
  piVar14 = *(int **)(param_1 + 600);
  do {
    if (piVar13 == piVar14) {
      return;
    }
    if (*(long *)(piVar13 + 2) != 0) {
      iVar3 = *piVar13;
      lVar15 = param_1;
      if (-1 < iVar3) {
LAB_00c61010:
        plVar8 = *(long **)(lVar15 + 0x58);
        if (plVar8 == (long *)0x0) {
          plVar12 = _DAT_00000048;
        }
        else {
          plVar1 = plVar8 + 5;
          do {
            lVar7 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = (int)lVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar7 == -1) goto LAB_00c611e4;
          plVar12 = (long *)plVar8[9];
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_00c611bc;
        }
        if (plVar12 == (long *)0x0) break;
        piVar11 = (int *)*plVar12;
        piVar2 = (int *)plVar12[1];
        if (piVar11 != piVar2) {
          do {
            if (*piVar11 == iVar3) goto LAB_00c6106c;
            piVar11 = piVar11 + 10;
          } while (piVar2 != piVar11);
          break;
        }
LAB_00c6106c:
        if ((piVar11 == piVar2) || (plVar8 = *(long **)(piVar11 + 2), plVar8 == (long *)0x0)) break;
        plVar12 = plVar8 + 5;
        do {
          lVar15 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = (int)lVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar15 != -1) {
          uVar9 = FUN_00ccbbb0(*(undefined8 *)(plVar8[0xe] + 0x110),plVar8 + 6);
          uVar10 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(piVar13 + 2) + 0x70) + 0x110),
                                *(long *)(piVar13 + 2) + 0x30);
          FUN_0270be44(param_2,uVar9,uVar10);
          do {
            iVar3 = (int)*plVar12;
            iVar6 = iVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(int *)plVar12 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto joined_r0x00c610e0;
        }
LAB_00c611e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_00e02ad4(&local_58,param_1);
      plVar8 = local_58;
      if (local_58 != (long *)0x0) {
        uVar9 = FUN_00ccbbb0(*(undefined8 *)(local_58[0xe] + 0x110),local_58 + 6);
        uVar10 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(piVar13 + 2) + 0x70) + 0x110),
                              *(long *)(piVar13 + 2) + 0x30);
        FUN_0270be44(param_2,uVar9,uVar10);
        plVar12 = plVar8 + 5;
        do {
          iVar3 = (int)*plVar12;
          iVar6 = iVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
joined_r0x00c610e0:
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if (iVar3 == 0) {
LAB_00c611bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
LAB_00c610e8:
    piVar13 = piVar13 + 4;
  } while( true );
  lVar15 = *(long *)(lVar15 + 0x148);
  if (lVar15 == 0) goto LAB_00c610e8;
  goto LAB_00c61010;
}


