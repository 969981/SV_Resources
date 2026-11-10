/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ca5a8; name: FUN_017ca5a8
 */


void FUN_017ca5a8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  
  FUN_017ca814();
  *param_1 = &DAT_045529f8;
  param_1[4] = &PTR_LAB_04552a40;
  param_1[5] = &PTR_LAB_04552a60;
  param_1[6] = &PTR_LAB_04552a78;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  lVar6 = FUN_00f124d8(local_58,param_1[1],&DAT_03d5b760);
  param_1[8] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar4 = FUN_0168d1c0();
  *(undefined1 *)(param_1 + 9) = uVar4;
  lVar6 = FUN_017ca7a0();
  if (lVar6 != 0) {
    *(undefined8 **)(lVar6 + 0x30) = param_1 + 5;
  }
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  lVar6 = *(long *)PTR_DAT_047d8ac8;
  *(long *)PTR_DAT_047d8ad0 = lVar6;
  if (lVar6 != 0) {
    local_28 = "message/dat/JPN/common/message_error.dat";
    FUN_00e52f24(local_58,&local_28);
    FUN_011fbdf0(lVar6,local_58,*(undefined1 *)(param_1 + 9));
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_58[0] != (long *)0x0) {
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar6 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar6;
  if (lVar6 != 0) {
    FUN_01793e80(lVar6,param_1 + 6);
  }
  return;
}


