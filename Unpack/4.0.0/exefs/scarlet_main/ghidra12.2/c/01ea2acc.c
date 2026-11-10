/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea2acc; name: FUN_01ea2acc
 */


void FUN_01ea2acc(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long local_30 [2];
  undefined8 *local_20;
  undefined1 local_18;
  
  *param_1 = &DAT_04553bd0;
  param_1[4] = &PTR_LAB_04553c18;
  param_1[5] = &PTR_LAB_04553c38;
  param_1[6] = &PTR_LAB_04553c58;
  if ((*PTR_DAT_047d6c98 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98);
    if (iVar5 != 0) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
  }
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  if (lVar6 != 0) {
    local_20 = param_1 + 6;
    local_18 = 1;
    local_30[0] = 0;
    local_30[1] = 0;
    FUN_01ea2bf8(lVar6,local_30);
    if (local_30[0] != 0) {
      psVar1 = (short *)(local_30[0] + 0x18);
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
        FUN_0116e168();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


