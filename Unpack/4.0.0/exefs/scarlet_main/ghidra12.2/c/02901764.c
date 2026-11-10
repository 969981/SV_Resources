/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02901764; name: FUN_02901764
 */


void FUN_02901764(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 8) +
                               (*(ulong *)(param_1 + 0x40) >> 6 & 0x3fffffffffffff8)) +
                     (*(ulong *)(param_1 + 0x40) & 0x1ff) * 8);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar6 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar6;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar6 < 0x400) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  uVar8 = **(undefined8 **)(param_1 + 8);
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,0x1000,8);
  }
  else {
    FUN_00c48fe8(plVar5,uVar8,0x1000,8);
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x200;
  return;
}


