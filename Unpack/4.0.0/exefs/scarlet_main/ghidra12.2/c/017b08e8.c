/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b08e8; name: FUN_017b08e8
 */


void FUN_017b08e8(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != puVar7) {
    uVar12 = *(ulong *)(param_1 + 0x40);
    plVar13 = (long *)((long)puVar7 + (uVar12 >> 6 & 0x3fffffffffffff8));
    uVar10 = *(long *)(param_1 + 0x48) + uVar12;
    plVar14 = (long *)(*plVar13 + (uVar12 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar7 + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                     (uVar10 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 != (long *)0x0) {
          lVar11 = plVar6[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar14 = plVar14 + 1;
        if ((long)plVar14 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar14 = (long *)*plVar13;
        }
      } while (plVar2 != plVar14);
      puVar7 = *(undefined8 **)(param_1 + 8);
      puVar9 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar10 = (long)puVar9 - (long)puVar7 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar10) {
    plVar14 = *(long **)(param_1 + 0x50);
    uVar8 = *puVar7;
    uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar8,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar14,uVar8,0x1000,8);
    }
    puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar7;
    lVar11 = *(long *)(param_1 + 0x10) - (long)puVar7;
    while (uVar10 = lVar11 >> 3, 2 < uVar10) {
      plVar14 = *(long **)(param_1 + 0x50);
      uVar8 = *puVar7;
      uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar8,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar14,uVar8,0x1000,8);
      }
      puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      lVar11 = *(long *)(param_1 + 0x10) - (long)puVar7;
    }
  }
  if (uVar10 == 1) {
    uVar8 = 0x100;
  }
  else {
    if (uVar10 != 2) {
      return;
    }
    uVar8 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  return;
}


