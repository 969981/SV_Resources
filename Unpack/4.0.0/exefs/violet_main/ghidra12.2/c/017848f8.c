/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017848f8; name: FUN_017848f8
 */


void FUN_017848f8(long *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((*PTR_DAT_047d38d8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d38d8);
    if (iVar4 != 0) {
      FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38d8);
    }
  }
  DAT_04800900 = *(undefined8 *)PTR_DAT_047d38e0;
  lVar5 = FUN_01784ab8(DAT_04800900,param_2);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


