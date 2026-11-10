/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a55fc; name: FUN_011a55fc
 */


void FUN_011a55fc(long *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar4 = (long *)param_1[6];
  while (plVar4 != (long *)0x0) {
    plVar11 = (long *)*plVar4;
    plVar7 = (long *)plVar4[3];
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
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
    plVar7 = (long *)param_1[7];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar4,0x20,8);
      plVar4 = plVar11;
    }
    else {
      FUN_00c48fe8(plVar7,plVar4,0x20,8);
      plVar4 = plVar11;
    }
  }
  lVar10 = *param_1;
  *param_1 = 0;
  if (lVar10 == 0) {
    return;
  }
  lVar3 = param_1[1];
  plVar4 = (long *)param_1[2];
  uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x011a56f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar10,lVar3 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar10,lVar3 << 3,8);
  return;
}


