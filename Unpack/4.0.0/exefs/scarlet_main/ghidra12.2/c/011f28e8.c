/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f28e8; name: FUN_011f28e8
 */


void FUN_011f28e8(long param_1)

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
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_011f2ec0();
    lVar8 = *(long *)(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x28);
    lVar9 = *(long *)(param_1 + 0x20) - lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9,0x10);
        goto LAB_011f2904;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9,0x10);
  }
LAB_011f2904:
  plVar5 = *(long **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x011f2980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


