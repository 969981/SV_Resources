/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148fa18; name: FUN_0148fa18
 */


ulong FUN_0148fa18(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  cVar2 = *param_1;
  lVar7 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar6 + lVar7 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0148fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)();
      return uVar5;
    }
  }
  else {
    if (cVar2 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_0148fabc:
        uVar4 = 0;
      }
      else {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar10 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_0148fb04;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0148fb04:
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
                cVar2 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (sVar10 == 1) {
                *(undefined8 *)(lVar7 + 0x10) = 0;
                (**(code **)(*plVar8 + 0x50))(plVar8);
              }
              else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
              break;
            }
            goto LAB_0148fabc;
          }
          uVar4 = 0;
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      return (ulong)(uVar4 & 1);
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar7));
        }
                    /* WARNING: Could not recover jumptable at 0x0148fa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)();
        return uVar5;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar7));
      }
                    /* WARNING: Could not recover jumptable at 0x0148fa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)();
      return uVar5;
    }
  }
  return 0;
}


