/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01942f58; name: FUN_01942f58
 */


void FUN_01942f58(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  lVar6 = FUN_01943098(*(undefined8 *)(param_1 + 8));
  local_30 = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_28 = *(undefined8 *)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x728) = 0;
  FUN_0186c2d4(&local_28);
  local_30 = 0;
  *(long *)(param_1 + 0x728) = lVar6;
  FUN_0186c2d4(&local_30);
  lVar6 = *(long *)(param_1 + 0x728);
  FUN_0135d328(&local_30,*(undefined8 *)(lVar6 + 8),0);
  local_58 = 0x60;
  FUN_019432a0(&local_50,*(undefined8 *)(lVar6 + 8),&local_58);
  uVar5 = local_50;
  local_50 = 0;
  lVar7 = *(long *)(lVar6 + 0x50);
  *(undefined8 *)(lVar6 + 0x50) = uVar5;
  if (lVar7 != 0) {
    FUN_019433d0(lVar6 + 0x58);
  }
  *(undefined8 *)(lVar6 + 0x60) = uStack_40;
  *(undefined8 *)(lVar6 + 0x68) = local_38;
  *(undefined8 *)(lVar6 + 0x58) = local_48;
  FUN_0135d2ec(&local_30);
  return;
}


