/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea9a98; name: FUN_01ea9a98
 */


void FUN_01ea9a98(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  short *psVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  lVar8 = *(long *)(param_3 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01ea9ae8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ea9ae8:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          cVar5 = *param_3;
          if (cVar5 != '\0') {
            uVar3 = *(undefined2 *)(param_3 + 2);
            cVar2 = param_3[0x18];
            *(undefined8 *)(param_1 + 8) = param_2;
            *(undefined2 *)(param_1 + 0x10) = uVar3;
            param_1[0x12] = cVar2;
          }
          *param_1 = cVar5 != '\0';
          lVar7 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ea9b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
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
        break;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
  return;
}


