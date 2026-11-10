/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011add78; name: FUN_011add78
 */


void FUN_011add78(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[1];
  plVar7 = plVar9;
  if (plVar10 != plVar9) {
    do {
      plVar10 = plVar10 + -1;
      plVar7 = (long *)*plVar10;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    } while (plVar10 != plVar9);
    plVar7 = (long *)*param_1;
  }
  param_1[1] = plVar9;
  lVar8 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar9,plVar7,lVar8 - (long)plVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x011adde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,lVar8 - (long)plVar7,8);
  return;
}


