/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a8b70; name: FUN_012a8b70
 */


int FUN_012a8b70(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  lVar17 = *(long *)(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar17 == lVar5) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00ca1a48(&local_78,lVar17 + 0x78);
      puVar12 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        sVar3 = *(short *)((long)local_78 + 0x1a);
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar8 = lVar15;
              local_68 = *puVar12;
              FUN_00c44438(lVar15 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_012a8dbc;
        }
        if (sVar3 != 0) {
          iVar16 = iVar16 + 1;
        }
      }
      lVar17 = lVar17 + 0xd0;
    } while (lVar17 != lVar5);
  }
  puVar11 = PTR_LAB_047d3de8;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  lVar17 = *(long *)(param_1 + 0x88);
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar17 == lVar5) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00ca1a48(&local_78,lVar17 + 0x78);
      puVar12 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        sVar3 = *(short *)((long)local_78 + 0x1a);
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar14 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar14 != -1) {
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar8);
              }
              lVar15 = *(long *)puVar9;
              *(long *)puVar10 = lVar15;
              local_68 = *puVar12;
              FUN_00c44438(lVar15 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) {
LAB_012a8dbc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if (sVar3 != 0) {
          iVar13 = iVar13 + 1;
        }
      }
      lVar17 = lVar17 + 0xc0;
    } while (lVar17 != lVar5);
  }
  return iVar13 + iVar16;
}


