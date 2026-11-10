/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105ceb0; name: FUN_0105ceb0
 */


undefined8 FUN_0105ceb0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 local_30;
  long *local_28;
  
  piVar5 = (int *)FUN_019a8688(*param_2);
  if ((*piVar5 == 0x15) && (*(long *)(param_1 + 0x2e0) != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x30);
    local_30 = *(undefined8 *)(param_1 + 0x38);
    local_28 = (long *)0x0;
    FUN_0105b304(&local_28,*param_2);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x2e0) + 0xa0))
                      (*(long **)(param_1 + 0x2e0),&local_38);
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
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
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


