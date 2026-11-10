/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e8ffc; name: FUN_014e8ffc
 */


void FUN_014e8ffc(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if (*(short *)(param_2 + (ulong)param_3 * 0x16 + 0x4a2) == 0) {
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d8ac8;
    local_48 = 7;
    local_40 = (long *)0x0;
    local_58 = 0x49b5b2e8a6b4fb19;
    pcStack_50 = "boxname";
    *(undefined8 *)PTR_DAT_047d8ad0 = uVar6;
    FUN_0151370c(param_1,uVar6,&local_58,param_3 + 0x21,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,0x11);
    lVar5 = FUN_00ea5b00(auStack_38,*(undefined8 *)(param_2 + 8),&local_58);
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
    uVar6 = FUN_020eb910(param_2,param_3);
    FUN_019202d0(lVar5,uVar6);
    *param_1 = lVar5;
  }
  return;
}


