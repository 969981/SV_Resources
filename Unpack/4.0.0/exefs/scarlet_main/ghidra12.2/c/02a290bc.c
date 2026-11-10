/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a290bc; name: FUN_02a290bc
 */


void FUN_02a290bc(long *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if (((DAT_0483adf8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0483adf8), iVar4 != 0)) {
    FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adf8);
  }
  DAT_0483ae00 = DAT_0483ade8;
  if (-1 < (int)param_2) {
    lVar5 = *(long *)(*(long *)(DAT_0483ade8 + 0x220) + 0x40);
    if ((ulong)param_2 < (ulong)(*(long *)(*(long *)(DAT_0483ade8 + 0x220) + 0x48) - lVar5 >> 3)) {
      lVar5 = *(long *)(lVar5 + (ulong)param_2 * 8);
      *param_1 = lVar5;
      if (lVar5 == 0) {
        return;
      }
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
      return;
    }
  }
  *param_1 = 0;
  return;
}


