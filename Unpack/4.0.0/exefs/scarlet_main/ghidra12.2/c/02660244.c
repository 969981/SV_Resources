/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02660244; name: FUN_02660244
 */


void FUN_02660244(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0266029c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0266029c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = *(long *)(lVar4 + 0x10);
        plVar5 = (long *)(lVar4 + -0x28);
        if (lVar4 != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar5 + ((long)param_4 >> 1)));
          }
          (*param_3)();
          lVar4 = *(long *)(lVar4 + 8);
          psVar1 = (short *)(lVar4 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0266033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x50))(plVar5);
            return;
          }
          if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


