/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028af348; name: FUN_028af348
 */


void FUN_028af348(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  long lVar8;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != puVar7) {
    uVar10 = *(ulong *)(param_1 + 0x40);
    uVar6 = *(long *)(param_1 + 0x48) + uVar10;
    plVar12 = (long *)(puVar7[uVar10 / 0xaa] + (uVar10 % 0xaa) * 0x18);
    plVar13 = (long *)(puVar7[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18);
    if (plVar13 != plVar12) {
      plVar14 = puVar7 + uVar10 / 0xaa;
      do {
        if ((char)plVar12[1] != '\0') {
          *(undefined1 *)(plVar12 + 1) = 0;
        }
        plVar5 = (long *)*plVar12;
        if (plVar5 != (long *)0x0) {
          lVar8 = plVar5[6];
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar5 + 0x50))();
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        plVar12 = plVar12 + 3;
        if ((long)plVar12 - *plVar14 == 0xff0) {
          plVar14 = plVar14 + 1;
          plVar12 = (long *)*plVar14;
        }
      } while (plVar13 != plVar12);
      puVar7 = *(undefined8 **)(param_1 + 8);
      puVar9 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar8 = (long)puVar9 - (long)puVar7;
  while (uVar6 = lVar8 >> 3, 2 < uVar6) {
    plVar12 = *(long **)(param_1 + 0x50);
    uVar11 = *puVar7;
    uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar11,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar12,uVar11,0xff0,8);
    }
    puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar7;
    lVar8 = *(long *)(param_1 + 0x10) - (long)puVar7;
  }
  if (uVar6 == 1) {
    uVar11 = 0x55;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    uVar11 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  return;
}


