/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01967b00; name: FUN_01967b00
 */


void FUN_01967b00(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((*PTR_DAT_047d8550 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d8550);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8550);
    }
  }
  lVar5 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar5;
  lVar5 = *(long *)(lVar5 + 0x140);
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


