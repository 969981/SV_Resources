/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e93fa8; name: FUN_01e93fa8
 */


void FUN_01e93fa8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *local_58 [4];
  long *local_38;
  char *local_28;
  
  *param_1 = &DAT_045529f8;
  param_1[4] = &PTR_LAB_04552a40;
  param_1[5] = &PTR_LAB_04552a60;
  param_1[6] = &PTR_LAB_04552a78;
  lVar5 = FUN_017ca7a0();
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = 0;
  }
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  lVar5 = *(long *)PTR_DAT_047d8ac8;
  *(long *)PTR_DAT_047d8ad0 = lVar5;
  if (lVar5 != 0) {
    local_28 = "message/dat/JPN/common/message_error.dat";
    FUN_00e52f24(local_58,&local_28);
    FUN_014ed314(lVar5,local_58,*(undefined1 *)(param_1 + 9));
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_58[0] != (long *)0x0) {
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar5 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar5;
  if (lVar5 != 0) {
    FUN_01e9418c(lVar5,param_1 + 6);
  }
  plVar6 = (long *)param_1[8];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01e94110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
    if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


