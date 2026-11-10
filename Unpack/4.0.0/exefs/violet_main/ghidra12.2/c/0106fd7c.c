/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106fd7c; name: FUN_0106fd7c
 */


void FUN_0106fd7c(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  
  uVar9 = *(ulong *)(param_1 + 0x80);
  lVar14 = *(long *)(param_1 + 0x48);
  lVar8 = *(long *)(param_1 + 0x50);
  plVar11 = (long *)(lVar14 + (uVar9 >> 6 & 0x3fffffffffffff8));
  if (lVar8 == lVar14) {
    puVar12 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x0;
    uVar10 = *(long *)(param_1 + 0x88) + uVar9;
  }
  else {
    uVar10 = *(long *)(param_1 + 0x88) + uVar9;
    puVar12 = (undefined8 *)(*plVar11 + (uVar9 & 0x1ff) * 8);
    puVar7 = (undefined8 *)
             (*(long *)(lVar14 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8);
  }
  if (puVar7 != puVar12) {
    do {
      plVar13 = (long *)*puVar12;
      if (plVar13 != (long *)0x0) {
        lVar14 = plVar13[6];
        if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar6;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        iVar3 = *(int *)plVar13[8];
        lVar14 = plVar13[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (iVar3 == param_2) break;
      }
      puVar12 = puVar12 + 1;
      if ((long)puVar12 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        puVar12 = (undefined8 *)*plVar11;
      }
    } while (puVar7 != puVar12);
    uVar10 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    lVar14 = *(long *)(param_1 + 0x48);
    lVar8 = *(long *)(param_1 + 0x50);
  }
  if (lVar8 == lVar14) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)
             (*(long *)(lVar14 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8);
  }
  if (puVar7 == puVar12) {
    return;
  }
  FUN_0141be1c(param_1 + 0x40,plVar11,puVar12);
  return;
}


