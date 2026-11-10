/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a93edc; name: FUN_00a93edc
 */


void FUN_00a93edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0x508acc5562f54740;
  pcStack_48 = "lookat_disable";
  local_40 = 0xe;
  uStack_38 = 0;
  uVar5 = FUN_00d63848(param_3,&local_50);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)FUN_01a2e4fc(param_3);
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00a93f84;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a93f84:
          bVar4 = false;
        }
        if (bVar4) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          plVar6 = (long *)(lVar7 + -0x28);
          FUN_01f87bd4(param_1,param_2,plVar6,0);
          lVar7 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a94024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x50))(plVar6);
            return;
          }
          if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
}


