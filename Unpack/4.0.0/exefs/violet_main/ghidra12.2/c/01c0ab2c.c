/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0ab2c; name: FUN_01c0ab2c
 */


uint FUN_01c0ab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  long *local_28;
  
  puVar2 = PTR_FUN_047d5b28;
  if (DAT_04812500 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_01c0b320(&local_28,param_2);
  uVar8 = FUN_01c0b3bc(param_3);
  local_44 = param_4;
  FUN_01c0b43c(auStack_50,param_5);
  uVar7 = FUN_01c0b480(param_1,puVar2,0,&local_28,uVar8,&local_44,auStack_50);
  FUN_01c0b508(auStack_50);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar7 & 1;
}


