/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0174fae0; name: FUN_0174fae0
 */


undefined4 FUN_0174fae0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long *unaff_x30;
  undefined1 auStack_90 [128];
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04840ed0), iVar5 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  DAT_04840ed8 = DAT_04840ec0;
  FUN_0174fbdc(auStack_90 + 0x88);
  uVar6 = FUN_0174fcac(unaff_x30,0);
  if (unaff_x30 != (long *)0x0) {
    plVar1 = unaff_x30 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*unaff_x30 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar6;
}


