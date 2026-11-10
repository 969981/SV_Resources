/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01450458; name: FUN_01450458
 */


void FUN_01450458(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  puVar15 = *(undefined8 **)(param_1 + 8);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11 != puVar15) {
    uVar13 = *(ulong *)(param_1 + 0x40);
    uVar12 = *(long *)(param_1 + 0x48) + uVar13;
    lVar17 = puVar15[uVar13 / 0x55] + (uVar13 % 0x55) * 0x30;
    lVar18 = puVar15[uVar12 / 0x55] + (uVar12 % 0x55) * 0x30;
    if (lVar18 != lVar17) {
      plVar16 = puVar15 + uVar13 / 0x55;
      pbVar14 = PTR_DAT_047d3908;
      do {
        puVar15 = *(undefined8 **)(lVar17 + 8);
        if (puVar15 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar15 + 3);
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
            piVar2 = (int *)((long)puVar15 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*pbVar14 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)puVar6;
              *(long *)puVar7 = lVar9;
              local_68 = *puVar15;
              FUN_00c44438(lVar9 + 0x8040,&local_68);
              pbVar14 = PTR_DAT_047d3908;
            }
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar17 = lVar17 + 0x30;
        if (lVar17 - *plVar16 == 0xff0) {
          plVar16 = plVar16 + 1;
          lVar17 = *plVar16;
        }
      } while (lVar18 != lVar17);
      puVar15 = *(undefined8 **)(param_1 + 8);
      puVar11 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  uVar12 = (long)puVar11 - (long)puVar15 >> 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (2 < uVar12) {
    plVar16 = *(long **)(param_1 + 0x50);
    uVar10 = *puVar15;
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,uVar10,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar16,uVar10,0xff0,8);
    }
    puVar15 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar15;
    lVar17 = *(long *)(param_1 + 0x10) - (long)puVar15;
    while (uVar12 = lVar17 >> 3, 2 < uVar12) {
      plVar16 = *(long **)(param_1 + 0x50);
      uVar10 = *puVar15;
      uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar10,0xff0,8);
      }
      else {
        FUN_00c48fe8(plVar16,uVar10,0xff0,8);
      }
      puVar15 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar15;
      lVar17 = *(long *)(param_1 + 0x10) - (long)puVar15;
    }
  }
  if (uVar12 == 1) {
    uVar10 = 0x2a;
  }
  else {
    if (uVar12 != 2) {
      return;
    }
    uVar10 = 0x55;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  return;
}


