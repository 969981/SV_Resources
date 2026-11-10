/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01667b40; name: FUN_01667b40
 */


void FUN_01667b40(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long local_40 [2];
  undefined8 *local_30;
  undefined1 local_28;
  
  FUN_01667fbc();
  param_1[6] = &PTR_LAB_04553c58;
  *param_1 = &DAT_04553bd0;
  param_1[4] = &PTR_LAB_04553c18;
  param_1[5] = &PTR_LAB_04553c38;
  *(undefined2 *)(param_1 + 7) = 0;
  puVar5 = PTR_DAT_047d6c98;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar7 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar7;
  if (lVar7 != 0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_28 = 1;
    local_30 = param_1 + 6;
    FUN_01667c7c(lVar7,local_40);
    if (local_40[0] != 0) {
      psVar1 = (short *)(local_40[0] + 0x18);
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


