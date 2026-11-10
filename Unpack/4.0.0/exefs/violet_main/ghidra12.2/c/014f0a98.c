/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f0a98; name: FUN_014f0a98
 */


void FUN_014f0a98(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *local_60;
  long *local_58;
  
  puVar15 = (undefined8 *)param_1[5];
  if (puVar15 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar15 + 3);
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
      piVar2 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58 = (long *)*puVar15;
        FUN_00c44438(lVar13 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar9 = (long *)param_1[4];
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[6];
    psVar1 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar13 = *param_1;
  *param_1 = 0;
  if (lVar13 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8);
    iVar8 = iVar5 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
      *(int *)(lVar10 + 0x12cc) = iVar8;
    }
    FUN_011add78(lVar13);
    plVar9 = (long *)param_1[1];
    lVar10 = param_1[2];
    lVar14 = param_1[3];
    uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar10,lVar14);
    }
    else {
      FUN_00c48fe8(plVar9,lVar13,lVar10,lVar14);
    }
    lVar13 = FUN_00c4e600();
    iVar8 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_60 = plVar9 + plVar9[600] * 3;
        local_58 = plVar9;
        FUN_00c4ea30(&local_58,&local_60);
        plVar16 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          lVar14 = 0;
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          lVar14 = 0;
          plVar17 = plVar9;
          do {
            (**(code **)(*(long *)*plVar17 + 0xd0))();
            if ((long *)*plVar17 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + lVar14 * 3,plVar17);
              plVar16 = (long *)*plVar17;
              lVar14 = lVar10;
            }
            plVar17 = plVar17 + 3;
            lVar10 = lVar10 + 1;
          } while (plVar3 != plVar17);
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + lVar14 * 3,plVar9 + lVar10 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  return;
}


