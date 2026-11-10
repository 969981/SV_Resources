/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2f010; name: FUN_01c2f010
 */


void FUN_01c2f010(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *local_38;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  puVar2 = PTR_FUN_047d5de8;
  if (DAT_048125c8 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_01c0b320(&local_38,param_3);
  uVar7 = FUN_01c31124(param_2,puVar2,0,&local_38);
  local_18 = (undefined4)uVar7;
  *param_1 = 1;
  local_12 = (undefined1)((ulong)uVar7 >> 0x30);
  local_14 = (undefined2)((ulong)uVar7 >> 0x20);
  FUN_01c31174(param_1 + 8,&local_18);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
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
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


