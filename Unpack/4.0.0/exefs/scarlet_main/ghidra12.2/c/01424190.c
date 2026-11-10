/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01424190; name: FUN_01424190
 */


void FUN_01424190(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *local_38;
  long *local_18;
  
  uVar3 = *(uint *)(param_1 + 0x194);
  if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_029db6d0();
  }
  FUN_029db6dc(&local_18,param_1,param_3 + (long)(int)uVar3 * 0x20);
  if (local_18 != (long *)0x0) {
    param_3 = param_3 + (long)(int)uVar3 * 0x38;
    lVar8 = *(long *)(param_3 + 0x60);
    lVar2 = *(long *)(param_3 + 0x68);
    if (lVar8 != lVar2) {
      do {
        FUN_029db98c(&local_38,local_18,lVar8,0);
        if (local_38 != (long *)0x0) {
          plVar1 = local_38 + 5;
          *(undefined4 *)(local_38 + 0x12) = *(undefined4 *)(param_2 + 0x48);
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_01424280;
        }
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar2);
      if (local_18 == (long *)0x0) {
        return;
      }
    }
    plVar1 = local_18 + 5;
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_01424280:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


