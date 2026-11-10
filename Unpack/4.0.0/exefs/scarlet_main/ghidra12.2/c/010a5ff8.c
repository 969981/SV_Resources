/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a5ff8; name: FUN_010a5ff8
 */


void FUN_010a5ff8(long param_1,int param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 < 5) || (param_2 == 0xff)) {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    if (param_2 < 5) {
      uVar5 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x38));
      local_40 = FUN_015b5634(uVar5,param_2);
    }
    FUN_010a6424(&local_50,*param_3);
    FUN_010a6560(&local_48,param_3[1]);
    FUN_010a62f4(param_1,param_2,&local_50);
    if (local_48 != (long *)0x0) {
      lVar6 = local_48[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010a60e4;
    }
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_010a60e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


