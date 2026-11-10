/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e2ba0; name: FUN_020e2ba0
 */


void FUN_020e2ba0(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != puVar9) {
    uVar11 = *(ulong *)(param_1 + 0x40);
    plVar13 = (long *)((long)puVar9 + (uVar11 >> 6 & 0x3fffffffffffff8));
    uVar7 = *(long *)(param_1 + 0x48) + uVar11;
    plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar9 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                     (uVar7 & 0x1ff) * 8);
    if (plVar2 != plVar14) {
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[6];
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
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
      puVar9 = *(undefined8 **)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar8 = (long)puVar10 - (long)puVar9;
  while (uVar7 = lVar8 >> 3, 2 < uVar7) {
    plVar14 = *(long **)(param_1 + 0x50);
    uVar12 = *puVar9;
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar12,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar14,uVar12,0x1000,8);
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar9;
    lVar8 = *(long *)(param_1 + 0x10) - (long)puVar9;
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


