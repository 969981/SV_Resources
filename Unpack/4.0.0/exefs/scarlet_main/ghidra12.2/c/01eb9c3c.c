/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb9c3c; name: FUN_01eb9c3c
 */


void FUN_01eb9c3c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &DAT_045546a0;
  param_1[4] = &PTR_LAB_045546f0;
  param_1[5] = &PTR_LAB_04554710;
  param_1[6] = &PTR_LAB_04554728;
  param_1[7] = &PTR_LAB_04554740;
  FUN_01eb9d10(param_1 + 0x2a);
  FUN_01eb9db0(param_1 + 0x23);
  FUN_01eb9e50(param_1 + 0x1c);
  FUN_01eb9ef0(param_1 + 0x15);
  FUN_01eb9f90(param_1 + 0xe);
  plVar5 = (long *)param_1[0xc];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
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
  nn::os::FinalizeMutex((MutexType *)(param_1 + 8));
  return;
}


