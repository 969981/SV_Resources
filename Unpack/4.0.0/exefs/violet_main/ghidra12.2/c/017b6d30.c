/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b6d30; name: FUN_017b6d30
 */


undefined4 FUN_017b6d30(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long *local_8;
  
  if ((*PTR_DAT_047d8ac0 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ac0);
    if (iVar6 != 0) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar7;
  FUN_01286898(&local_8,uVar7,param_1,0);
  if (local_8 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_017b6e50(local_8,param_2);
    if (local_8 != (long *)0x0) {
      plVar1 = local_8 + 5;
      do {
        lVar4 = *plVar1;
        iVar6 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_8 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return uVar5;
}


