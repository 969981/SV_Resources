/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c84cc; name: FUN_022c84cc
 */


void FUN_022c84cc(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar6 = auStack_50;
  uVar5 = FUN_022c3520();
  if ((uVar5 & 1) != 0) {
switchD_022c852c_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar7 = FUN_022c8d30(*(long *)(param_2 + 8) + 0x28);
    *param_1 = 0;
    break;
  case 1:
    lVar7 = FUN_022c8d30(*(long *)(param_2 + 8) + 0x28);
    if (lVar7 != 0) {
      lVar9 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    *param_1 = 1;
    break;
  case 2:
    FUN_022c8d80(auStack_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_022c0cbc(param_1 + 8,auStack_40);
    puVar6 = auStack_40;
    goto LAB_022c85a0;
  case 3:
    FUN_022c8d80(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_022c0cbc(param_1 + 8,auStack_50);
LAB_022c85a0:
    FUN_022c0924(puVar6);
    return;
  default:
    goto switchD_022c852c_default;
  }
  *(long *)(param_1 + 8) = lVar7;
  return;
}


