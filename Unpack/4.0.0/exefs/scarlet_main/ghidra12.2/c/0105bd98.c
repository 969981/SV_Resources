/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105bd98; name: FUN_0105bd98
 */


void FUN_0105bd98(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = *(ulong *)(param_1 + 0x80);
  lVar12 = *(long *)(param_1 + 0x48);
  lVar13 = *(long *)(param_1 + 0x50);
  plVar9 = (long *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffff8));
  if (lVar13 == lVar12) {
    puVar10 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
    uVar8 = *(long *)(param_1 + 0x88) + uVar7;
  }
  else {
    uVar8 = *(long *)(param_1 + 0x88) + uVar7;
    puVar10 = (undefined8 *)(*plVar9 + (uVar7 & 0x1ff) * 8);
    puVar6 = (undefined8 *)
             (*(long *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8);
  }
  if (puVar6 != puVar10) {
    do {
      plVar11 = (long *)*puVar10;
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[6];
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar12 + 0x1a);
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
          uVar5 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar5;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar13 = *(long *)(plVar11[8] + 8);
        lVar12 = plVar11[6];
        psVar1 = (short *)(lVar12 + 0x1a);
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
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (lVar13 == param_2) break;
      }
      puVar10 = puVar10 + 1;
      if ((long)puVar10 - *plVar9 == 0x1000) {
        plVar9 = plVar9 + 1;
        puVar10 = (undefined8 *)*plVar9;
      }
    } while (puVar6 != puVar10);
    uVar8 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    lVar12 = *(long *)(param_1 + 0x48);
    lVar13 = *(long *)(param_1 + 0x50);
  }
  if (lVar13 == lVar12) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             (*(long *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8);
  }
  if (puVar6 == puVar10) {
    return;
  }
  FUN_0141be1c(param_1 + 0x40,plVar9,puVar10);
  return;
}


