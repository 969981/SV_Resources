/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ade440; name: FUN_00ade440
 */


bool FUN_00ade440(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    uVar14 = *param_1;
    if (uVar14 < param_2[-2]) {
      uVar13 = param_1[1];
      param_1[1] = 0;
      *param_1 = param_2[-2];
      param_1[1] = 0;
      uVar8 = param_2[-1];
      param_2[-1] = 0;
      param_1[1] = uVar8;
      plVar6 = (long *)param_2[-1];
      param_2[-2] = uVar14;
      param_2[-1] = 0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar5 = *plVar1;
          iVar12 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
LAB_00ade688:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_2[-1] = uVar13;
    }
    break;
  case 3:
    FUN_00addde0(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_00ade040(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_00ade200(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_00addde0(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      iVar12 = 0;
      puVar9 = param_1 + 6;
      puVar10 = param_1 + 4;
      do {
        puVar7 = puVar9;
        uVar14 = *puVar7;
        if (*puVar10 < uVar14) {
          uVar13 = puVar7[1];
          puVar7[1] = 0;
          plVar6 = (long *)0x0;
          uVar8 = *puVar10;
          puVar9 = puVar7;
          while( true ) {
            puVar11 = puVar10;
            *puVar9 = uVar8;
            puVar9[1] = 0;
            if (plVar6 != (long *)0x0) {
              plVar1 = plVar6 + 5;
              do {
                lVar5 = *plVar1;
                iVar4 = (int)lVar5 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar6 + 0x10))();
              }
              else if ((int)lVar5 == 0) goto LAB_00ade688;
            }
            uVar8 = puVar11[1];
            puVar11[1] = 0;
            puVar9[1] = uVar8;
            if (puVar11 == param_1) {
              puVar9 = param_1;
              goto LAB_00ade5a8;
            }
            uVar8 = puVar11[-2];
            if (uVar14 <= uVar8) break;
            plVar6 = (long *)puVar11[1];
            puVar10 = puVar11 + -2;
            puVar9 = puVar11;
          }
          puVar9 = puVar11;
LAB_00ade5a8:
          *puVar9 = uVar14;
          plVar6 = (long *)puVar11[1];
          puVar11[1] = 0;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 5;
            do {
              lVar5 = *plVar1;
              iVar4 = (int)lVar5 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
            else if ((int)lVar5 == 0) goto LAB_00ade688;
          }
          iVar12 = iVar12 + 1;
          puVar11[1] = uVar13;
          if (iVar12 == 8) {
            return puVar7 + 2 == param_2;
          }
        }
        puVar9 = puVar7 + 2;
        puVar10 = puVar7;
      } while (puVar7 + 2 != param_2);
    }
  }
  return true;
}


