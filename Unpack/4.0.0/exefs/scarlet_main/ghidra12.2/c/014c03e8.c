/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c03e8; name: FUN_014c03e8
 */


void FUN_014c03e8(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  cVar4 = FUN_014c0588(param_2);
  *(char *)(param_1 + 0x60) = cVar4;
  if (cVar4 != '\0') {
    uVar8 = 0;
    do {
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar5 = (**(code **)(*param_2 + 0x68))(param_2,uVar8 & 0xffffffff);
      lVar6 = FUN_014c0590(uVar9,uVar5);
      if (lVar6 != 0) {
        lVar10 = *(long *)(lVar6 + 0x30);
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar5;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      plVar11 = (long *)(param_1 + uVar8 * 8 + 0x30);
      plVar7 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *plVar11 = lVar6;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 0x60));
  }
  return;
}


