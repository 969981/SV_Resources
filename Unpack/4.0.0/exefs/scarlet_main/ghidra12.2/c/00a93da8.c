/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a93da8; name: FUN_00a93da8
 */


void FUN_00a93da8(undefined1 param_1 [16],undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0x508acc5562f54740;
  pcStack_38 = "lookat_disable";
  local_30 = 0xe;
  uStack_28 = 0;
  uVar5 = FUN_00d63848(param_2,&local_40);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)FUN_01a2e4fc(param_2);
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00a93e44;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a93e44:
          bVar4 = false;
        }
        if (bVar4) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          *(long *)(lVar7 + 0xe0) = param_1._8_8_;
          *(long *)(lVar7 + 0xd8) = param_1._0_8_;
          *(undefined4 *)(lVar7 + 0x44) = 2;
          lVar8 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a93ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
            return;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
}


