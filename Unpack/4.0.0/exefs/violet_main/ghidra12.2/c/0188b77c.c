/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188b77c; name: FUN_0188b77c
 */


void FUN_0188b77c(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  if (puVar12 != puVar11) {
    uVar9 = *(ulong *)(param_1 + 0x40);
    plVar13 = (long *)((long)puVar11 + (uVar9 >> 6 & 0x3fffffffffffff8));
    uVar8 = *(long *)(param_1 + 0x48) + uVar9;
    plVar14 = (long *)(*plVar13 + (uVar9 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar11 + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                     (uVar8 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[6];
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
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar14 = plVar14 + 1;
        if ((long)plVar14 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar14 = (long *)*plVar13;
        }
      } while (plVar2 != plVar14);
      puVar11 = *(undefined8 **)(param_1 + 8);
      puVar12 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar8 = (long)puVar12 - (long)puVar11 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar8) {
    plVar14 = *(long **)(param_1 + 0x50);
    uVar7 = *puVar11;
    uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar7,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar14,uVar7,0x1000,8);
    }
    puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar11;
    lVar10 = *(long *)(param_1 + 0x10) - (long)puVar11;
    while (uVar8 = lVar10 >> 3, 2 < uVar8) {
      plVar14 = *(long **)(param_1 + 0x50);
      uVar7 = *puVar11;
      uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar7,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar14,uVar7,0x1000,8);
      }
      puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar11;
      lVar10 = *(long *)(param_1 + 0x10) - (long)puVar11;
    }
  }
  if (uVar8 == 1) {
    uVar7 = 0x100;
  }
  else {
    if (uVar8 != 2) {
      return;
    }
    uVar7 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  return;
}


