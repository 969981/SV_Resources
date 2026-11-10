/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022bf3e8; name: FUN_022bf3e8
 */


void FUN_022bf3e8(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  undefined2 local_3c [2];
  long *local_38;
  
  uVar7 = DAT_04846398;
  uVar2 = 0x140;
  if (DAT_04846390 == '\0') {
    uVar2 = 0;
  }
  FUN_022c14c0(&local_38,param_2);
  local_3c[0] = param_3;
  FUN_022c155c(param_1,uVar2,uVar7,&local_38,local_3c);
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


