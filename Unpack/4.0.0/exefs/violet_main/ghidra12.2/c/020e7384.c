/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e7384; name: FUN_020e7384
 */


undefined2 FUN_020e7384(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined2 uVar5;
  int iVar6;
  long *local_50;
  undefined1 **local_48;
  long **pplStack_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_8 [8];
  
  if ((DAT_04840580 & 1) == 0) {
    param_2 = param_2 & 0xffffffff;
    iVar6 = __cxa_guard_acquire(&DAT_04840580);
    if (iVar6 != 0) {
      FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
    }
  }
  DAT_04840568 = DAT_04840570;
  local_50 = (long *)*param_1;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_38 = auStack_8;
  puStack_30 = auStack_28;
  local_48 = &local_38;
  pplStack_40 = &local_50;
  uVar5 = FUN_020e74f4(&local_48,param_2);
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 5;
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
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar5;
}


