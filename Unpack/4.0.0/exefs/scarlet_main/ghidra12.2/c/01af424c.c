/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af424c; name: FUN_01af424c
 */


void FUN_01af424c(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar6 = auStack_50;
  uVar5 = FUN_01af4d4c();
  if ((uVar5 & 1) != 0) {
switchD_01af42ac_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar8 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar8 + 0x28))();
    uVar5 = FUN_011b6e8c();
    if ((uVar5 & 1) == 0) {
      lVar8 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar8;
    return;
  case 1:
    lVar8 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar8 + 0x28))();
    uVar5 = FUN_011b6e8c();
    if ((uVar5 & 1) == 0) {
      lVar8 = 0;
    }
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    *param_1 = 1;
    *(long *)(param_1 + 8) = lVar8;
    return;
  case 2:
    FUN_01af4da0(auStack_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01af4df0(param_1 + 8,auStack_40);
    puVar6 = auStack_40;
    break;
  case 3:
    FUN_01af4da0(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01af4df0(param_1 + 8,auStack_50);
    break;
  default:
    goto switchD_01af42ac_default;
  }
  FUN_01af4738(puVar6);
  return;
}


