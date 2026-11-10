/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a3edc; name: FUN_010a3edc
 */


void FUN_010a3edc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x148);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x148) = 0;
  FUN_01958568(&local_18);
  FUN_010b1544(&local_38,param_1,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x138),
               *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),uVar6);
  local_18 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_019584f0(&local_18);
  uVar6 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  FUN_019584f0(&local_38);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  local_40 = *(long *)(param_1 + 0x140);
  if (local_40 != 0) {
    lVar7 = *(long *)(local_40 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar5;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_010a402c(uVar6,&local_40);
  FUN_019584f0(&local_40);
  FUN_010a4038(*(undefined8 *)(param_1 + 0xb0));
  return;
}


