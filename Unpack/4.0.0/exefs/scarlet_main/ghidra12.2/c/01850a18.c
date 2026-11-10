/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01850a18; name: FUN_01850a18
 */


void FUN_01850a18(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long local_40 [2];
  
  (**(code **)(*param_2 + 0x18))(local_40);
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar2 = param_2 + 5;
  }
  if (*(long **)(local_40[0] + 0x10) == plVar2) {
    FUN_0185138c(param_1,local_40);
  }
  if (local_40[0] != 0) {
    psVar1 = (short *)(local_40[0] + 0x18);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      FUN_0116e168();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


