/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2da18; name: FUN_01a2da18
 */


void FUN_01a2da18(long *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a2da74;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a2da74:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        plVar6 = (long *)(lVar7 + -0x28);
        if (lVar7 != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar6 + ((long)param_4 >> 1)));
          }
          plVar4 = (long *)(*param_3)();
          plVar4 = (long *)*plVar4;
          *param_1 = (long)plVar4;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
          }
          lVar7 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a2db34. Too many branches */
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
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = 0;
  return;
}


