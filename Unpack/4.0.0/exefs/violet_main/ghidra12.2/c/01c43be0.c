/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c43be0; name: FUN_01c43be0
 */


undefined8 FUN_01c43be0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char local_30 [8];
  long *local_28;
  
  if (((DAT_04812ab0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04812ab0), iVar5 != 0)) {
    DAT_0452c8f0 = 0x20;
    __cxa_guard_release(&DAT_04812ab0);
  }
  uVar6 = FUN_01c434e0(param_1,1);
  FUN_01c43cd8(local_30,&DAT_0452c8f0,uVar6);
  FUN_00f11c60(param_1,local_30);
  if ((local_30[0] == '\x01') && (local_28 != (long *)0x0)) {
    plVar1 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


