/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163d9b8; name: FUN_0163d9b8
 */


void FUN_0163d9b8(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1];
  lVar8 = param_1[2];
  do {
    if (lVar8 == lVar9) {
      lVar9 = *param_1;
      if (lVar9 == 0) {
        return;
      }
      lVar8 = param_1[3];
      plVar5 = *(long **)param_1[4];
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if ((uVar6 & 1) != 0) {
        lVar7 = FUN_00c4e600();
        if (0 < *(int *)(lVar7 + 0x12c8)) {
          FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0163da88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
      return;
    }
    param_1[2] = lVar8 + -8;
    plVar5 = *(long **)(lVar8 + -8);
    if (plVar5 != (long *)0x0) {
      lVar8 = plVar5[6];
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
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar8 = param_1[2];
  } while( true );
}


