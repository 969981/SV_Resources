/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009ff334; name: FUN_009ff334
 */


ulong FUN_009ff334(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  if (*param_1 < 4) {
    lVar7 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 8) + lVar7);
joined_r0x009ff3a0:
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar8);
        }
                    /* WARNING: Could not recover jumptable at 0x009ff384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)();
        return uVar5;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
        plVar8 = (long *)(lVar6 + lVar7 + -0x28);
        goto joined_r0x009ff3a0;
      }
      break;
    case 3:
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar10 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar10) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_009ff3e4;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_009ff3e4:
            bVar9 = false;
          }
          if (bVar9) {
            lVar6 = *(long *)(lVar6 + 0x10);
            plVar8 = (long *)(lVar6 + -0x28);
            if (lVar6 != 0) {
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar8 + lVar7));
              }
              uVar4 = (*UNRECOVERED_JUMPTABLE)();
              lVar7 = *(long *)(lVar6 + 8);
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar10 = *psVar1;
                cVar3 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar10 == 1) {
                *(undefined8 *)(lVar7 + 0x10) = 0;
                (**(code **)(*plVar8 + 0x50))(plVar8);
              }
              else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
              goto LAB_009ff470;
            }
            break;
          }
          sVar10 = sVar2;
        } while (sVar2 != 0);
      }
    }
  }
  uVar4 = 0;
LAB_009ff470:
  return (ulong)(uVar4 & 1);
}


