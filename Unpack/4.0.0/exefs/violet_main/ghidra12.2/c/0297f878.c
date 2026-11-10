/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f878; name: FUN_0297f878
 */


void FUN_0297f878(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *local_18;
  
  uVar6 = FUN_01689a40();
  uVar7 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
  if ((uVar7 & 0xff) == (uVar6 & 0xff)) {
    FUN_01242424(&local_18,*(undefined8 *)(param_1 + 8));
    (**(code **)(*local_18 + 0x48))(local_18,6,1);
    if (local_18 == (long *)0x0) {
      return;
    }
    plVar1 = local_18 + 5;
    do {
      iVar5 = (int)*plVar1;
      iVar4 = iVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar8 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
    uVar9 = FUN_01242ecc(uVar8,uVar6,uVar7);
    if ((uVar9 & 1) != 0) {
      return;
    }
    FUN_01242424(&local_18,*(undefined8 *)(param_1 + 8));
    (**(code **)(*local_18 + 0x48))(local_18,7,1);
    if (local_18 == (long *)0x0) {
      return;
    }
    plVar1 = local_18 + 5;
    do {
      iVar5 = (int)*plVar1;
      iVar4 = iVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 0) {
    (**(code **)(*local_18 + 0x10))();
  }
  else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


