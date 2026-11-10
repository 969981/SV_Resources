/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0f5f8; name: FUN_00f0f5f8
 */


void FUN_00f0f5f8(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  if (puVar12 != puVar6) {
    uVar11 = *(ulong *)(param_1 + 0x40);
    plVar14 = (long *)((long)puVar6 + (uVar11 >> 6 & 0x3fffffffffffff8));
    uVar9 = *(long *)(param_1 + 0x48) + uVar11;
    plVar13 = (long *)(*plVar14 + (uVar11 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar6 + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                     (uVar9 & 0x1ff) * 8);
    if (plVar2 != plVar13) {
      do {
        plVar8 = (long *)*plVar13;
        if (plVar8 != (long *)0x0) {
          lVar10 = plVar8[6];
          psVar1 = (short *)(lVar10 + 0x1a);
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
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar13 = plVar13 + 1;
        if ((long)plVar13 - *plVar14 == 0x1000) {
          plVar14 = plVar14 + 1;
          plVar13 = (long *)*plVar14;
        }
      } while (plVar2 != plVar13);
      puVar6 = *(undefined8 **)(param_1 + 8);
      puVar12 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar9 = (long)puVar12 - (long)puVar6 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar9) {
    plVar13 = *(long **)(param_1 + 0x50);
    uVar7 = *puVar6;
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar7,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar13,uVar7,0x1000,8);
    }
    puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar6;
    lVar10 = *(long *)(param_1 + 0x10) - (long)puVar6;
    while (uVar9 = lVar10 >> 3, 2 < uVar9) {
      plVar13 = *(long **)(param_1 + 0x50);
      uVar7 = *puVar6;
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar7,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar13,uVar7,0x1000,8);
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar6;
      lVar10 = *(long *)(param_1 + 0x10) - (long)puVar6;
    }
  }
  if (uVar9 == 1) {
    uVar7 = 0x100;
  }
  else {
    if (uVar9 != 2) {
      return;
    }
    uVar7 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}


