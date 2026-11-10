/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151d6e4; name: FUN_0151d6e4
 */


void FUN_0151d6e4(undefined1 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  
  if ((((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) && (lVar6 = *param_2, lVar6 != 0)) &&
     (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0151d764;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0151d764:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          lVar9 = *(long *)(lVar6 + 8);
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar8 = (long *)(lVar6 + -0x28);
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar7 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar7 == 0) {
              uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar5;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar7 == -1) goto LAB_0151d908;
            *param_1 = 1;
            *(long **)(param_1 + 8) = plVar8;
            lVar9 = *(long *)(lVar6 + 8);
            if (*(long *)(lVar9 + 0x10) != 0) {
              psVar1 = (short *)(lVar9 + 0x1a);
              do {
                sVar7 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar7 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar7 == 0) {
                uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                *(undefined8 *)(lVar9 + 8) = uVar5;
                *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
              }
              else if (sVar7 == -1) {
LAB_0151d908:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              lVar9 = *(long *)(lVar6 + 8);
              psVar1 = (short *)(lVar9 + 0x1a);
              do {
                sVar7 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar7 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*plVar8 + 0x50))(plVar8);
              }
              else if (sVar7 == 0) goto LAB_0151d840;
              lVar6 = *(long *)(lVar6 + 8);
              psVar1 = (short *)(lVar6 + 0x1a);
              do {
                sVar7 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar7 == 1) {
                *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0151d8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar8 + 0x50))(plVar8);
                return;
              }
              if (sVar7 != 0) {
                return;
              }
LAB_0151d840:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


