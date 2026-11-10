/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b6760; name: FUN_026b6760
 */


void FUN_026b6760(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026b67b8;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026b67b8:
        bVar7 = false;
      }
      if (bVar7) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar2 = (long *)(lVar6 + -0x28 + ((long)param_3 >> 1));
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar2);
        }
        (*param_2)(plVar2,*param_4);
        lVar5 = *(long *)(lVar6 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x026b6864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
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
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


