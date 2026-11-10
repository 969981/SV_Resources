/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152e62c; name: FUN_0152e62c
 */


void FUN_0152e62c(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *local_18;
  
  if ((DAT_04840580 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(&DAT_04840580);
    if (iVar6 != 0) {
      FUN_00100190(param_2,&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
    }
  }
  uVar5 = DAT_04840570;
  DAT_04840568 = DAT_04840570;
  local_18 = (long *)*param_3;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
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
                 ,0x53,"Reference counter overflows.",(ulong)param_2);
    }
  }
  FUN_0152e784(uVar5,param_1,(ulong)param_2,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
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
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


