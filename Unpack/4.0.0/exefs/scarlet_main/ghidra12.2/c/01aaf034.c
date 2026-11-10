/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aaf034; name: FUN_01aaf034
 */


void FUN_01aaf034(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01aaf090;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01aaf090:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar6 = (long *)(lVar5 + -0x28);
        if (lVar5 != 0) {
          plVar2 = (long *)((long)plVar6 + ((long)param_4 >> 1));
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *plVar2);
          }
          (*param_3)(plVar2,param_5);
          lVar5 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar5 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01aaf134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x50))(plVar6);
            return;
          }
          if (sVar8 == 0) {
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
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


