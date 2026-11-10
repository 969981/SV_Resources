/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106edf4; name: FUN_0106edf4
 */


undefined8 FUN_0106edf4(long param_1,ulong param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *local_38;
  
  uVar6 = FUN_0106ef64(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 0x38));
  if (((uVar6 & 1) == 0) ||
     (uVar6 = FUN_0106f590(*(undefined8 *)(param_1 + 0x30),param_3,*(undefined4 *)(param_1 + 0x38)),
     (uVar6 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_0106f324(&local_38,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    plVar5 = local_38;
    if (local_38 != (long *)0x0) {
      FUN_0106fd7c(local_38,param_2 & 0xffffffff);
      lVar9 = plVar5[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
      else if (sVar2 == 0) {
        pcVar8 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
        ;
        goto LAB_0106ef5c;
      }
    }
    FUN_00f634c8(&local_38,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    if (local_38 != (long *)0x0) {
      FUN_0106fd7c(local_38,param_3);
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) {
          pcVar8 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
LAB_0106ef5c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",pcVar8,0x60,
                     "Reference counter underflows.");
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


