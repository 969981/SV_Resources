/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02995cc0; name: FUN_02995cc0
 */


void FUN_02995cc0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *local_58;
  long *local_50;
  long *local_48;
  
  FUN_0299632c(&local_48,*(undefined8 *)(param_1 + 0x68));
  iVar6 = FUN_019a8690(local_48);
  if (iVar6 != 0) {
    iVar10 = 0;
    do {
      FUN_019a8928(&local_50,local_48,iVar10);
      piVar7 = (int *)FUN_019a8688(local_50);
      if (*piVar7 != 0x44) {
        if (*piVar7 == 0x45) {
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
        }
        else {
          local_58 = local_50;
          if (local_50 == (long *)0x0) {
            FUN_029963ec(param_1,&local_58);
          }
          else {
            lVar9 = local_50[6];
            if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
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
              uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar8;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            plVar5 = local_58;
            FUN_029963ec(param_1,&local_58);
            if (plVar5 != (long *)0x0) {
              lVar9 = plVar5[6];
              psVar1 = (short *)(lVar9 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar2 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*plVar5 + 0x50))(plVar5);
              }
              else if (sVar2 == 0) goto LAB_02995ea8;
            }
          }
        }
      }
      if (local_50 != (long *)0x0) {
        lVar9 = local_50[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_50 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02995ea8;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar6);
  }
  FUN_02901fc0(*(undefined8 *)(param_1 + 0x68));
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_02995ea8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


