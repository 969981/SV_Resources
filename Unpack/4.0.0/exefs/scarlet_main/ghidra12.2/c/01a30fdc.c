/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a30fdc; name: FUN_01a30fdc
 */


void FUN_01a30fdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_40;
  long *local_38;
  undefined1 auStack_18 [8];
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  lVar7 = 0;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[9];
  }
  lVar7 = FUN_01086108(lVar7 + 0x108,auStack_18);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x128) == 2)) {
    uVar5 = FUN_00f351bc();
    FUN_00eaa980(param_1 + 0x138,lVar7 + 0x130,uVar5);
    uVar6 = 3;
    if (*(char *)(param_1 + 0x144) == '\0') {
      uVar6 = 4;
    }
    *(undefined4 *)(param_1 + 0x130) = uVar6;
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  return;
}


