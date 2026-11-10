/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e96e7c; name: FUN_00e96e7c
 */


undefined1  [16] FUN_00e96e7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  long *local_8;
  
  local_30 = 0;
  uStack_28 = 0;
  if ((DAT_048383f8 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar6 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  DAT_04838400 = DAT_048383e8;
  param_1 = (long *)*param_1;
  local_8 = param_1;
  if (param_1 == (long *)0x0) {
    FUN_00e9725c(&local_30,&local_8);
  }
  else {
    plVar1 = param_1 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00e9725c(&local_30,&local_8);
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 5;
      do {
        lVar5 = *plVar1;
        iVar6 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*param_1 + 0x10))(param_1);
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
  auVar4._8_8_ = uStack_28;
  auVar4._0_8_ = local_30;
  return auVar4;
}


