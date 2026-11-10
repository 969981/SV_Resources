/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a4ef4; name: FUN_029a4ef4
 */


void FUN_029a4ef4(long *param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar2 = *param_2;
    if (*(short *)(lVar6 + 0x1a) != 0) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar7) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_029a4f4c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_029a4f4c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            return;
          }
          plVar8 = (long *)(lVar6 + -0x28);
          FUN_0299b310(plVar8,uVar2);
          lVar6 = *(long *)(lVar6 + 0x70);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x029a4fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x50))(plVar8);
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
        sVar7 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


