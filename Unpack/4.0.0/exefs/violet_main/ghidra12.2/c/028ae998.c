/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ae998; name: FUN_028ae998
 */


void FUN_028ae998(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  long lVar9;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != puVar8) {
    uVar11 = *(ulong *)(param_1 + 0x40);
    plVar13 = (long *)((long)puVar8 + (uVar11 >> 6 & 0x3fffffffffffff8));
    uVar7 = *(long *)(param_1 + 0x48) + uVar11;
    plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar8 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                     (uVar7 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 != (long *)0x0) {
          lVar9 = plVar6[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar14 = plVar14 + 1;
        if ((long)plVar14 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar14 = (long *)*plVar13;
        }
      } while (plVar2 != plVar14);
      puVar8 = *(undefined8 **)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar9 = (long)puVar10 - (long)puVar8;
  while (uVar7 = lVar9 >> 3, 2 < uVar7) {
    plVar14 = *(long **)(param_1 + 0x50);
    uVar12 = *puVar8;
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar12,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar14,uVar12,0x1000,8);
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar8;
    lVar9 = *(long *)(param_1 + 0x10) - (long)puVar8;
  }
  if (uVar7 == 1) {
    uVar12 = 0x100;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    uVar12 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  return;
}


