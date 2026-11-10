/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e8e9c; name: FUN_014e8e9c
 */


short * FUN_014e8e9c(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_8;
  
  uVar2 = 0;
  if (param_2 < 0x21) {
    uVar2 = param_2;
  }
  psVar8 = (short *)(param_1 + (ulong)uVar2 * 0x22 + 0x40);
  if (*psVar8 == 0) {
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d8ac8;
    local_30 = 7;
    local_28 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d8ad0 = uVar7;
    local_40 = 0x49b5b2e8a6b4fb19;
    pcStack_38 = "boxname";
    FUN_0151370c(&local_8,uVar7,&local_40,(ulong)uVar2,0);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    psVar8 = (short *)FUN_0196c644(local_8);
    if (local_8 != (long *)0x0) {
      plVar1 = local_8 + 5;
      do {
        lVar5 = *plVar1;
        iVar6 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_8 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return psVar8;
}


