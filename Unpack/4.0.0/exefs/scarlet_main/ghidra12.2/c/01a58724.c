/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a58724; name: FUN_01a58724
 */


void FUN_01a58724(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined1 auStack_a0 [128];
  
  if (*(char *)(param_2 + 3) != '\0') {
    FUN_01a58844(param_1);
  }
  if (*(char *)(param_2 + 1) == '\0') {
    return;
  }
  FUN_01a58b84(auStack_a0 + 0x98,*(undefined8 *)(param_1 + 0x68));
  plVar6 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0xd8) = unaff_x19;
  FUN_00eb2008(*(undefined8 *)(unaff_x19 + 200),4);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 200),2,1);
  FUN_00eb1310(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 200),0,0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 200),0,1);
  return;
}


