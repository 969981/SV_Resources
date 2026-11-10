/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01450054; name: FUN_01450054
 */


void FUN_01450054(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long lVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_48;
  
  puVar13 = (undefined8 *)param_1[0x16];
  *param_1 = (long)&PTR_FUN_04543b78;
  param_1[4] = (long)&PTR_LAB_04543bf0;
  param_1[5] = (long)&PTR_LAB_04543c40;
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_48 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_01450210;
  }
  FUN_01450458(param_1 + 8);
  puVar13 = (undefined8 *)param_1[9];
  puVar7 = (undefined8 *)param_1[10];
  if (puVar13 != puVar7) {
    plVar16 = (long *)param_1[0x12];
    uVar15 = *puVar13;
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0xff0,8);
    }
    else {
      FUN_00c48fe8(plVar16,uVar15,0xff0,8);
    }
    if (puVar13 + 1 != puVar7) {
      plVar16 = (long *)param_1[0x12];
      uVar15 = puVar13[1];
      uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0xff0,8);
      }
      else {
        FUN_00c48fe8(plVar16,uVar15,0xff0,8);
      }
      for (puVar13 = puVar13 + 2; puVar13 != puVar7; puVar13 = puVar13 + 1) {
        plVar16 = (long *)param_1[0x12];
        uVar15 = *puVar13;
        uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0xff0,8);
        }
        else {
          FUN_00c48fe8(plVar16,uVar15,0xff0,8);
        }
      }
    }
    lVar14 = param_1[10] - param_1[9];
    if (lVar14 != 0) {
      param_1[10] = param_1[10] + (lVar14 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar14 = param_1[8];
  if (lVar14 != 0) {
    lVar6 = param_1[0xb];
    plVar16 = (long *)param_1[0xc];
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar6 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar14,lVar6 - lVar14,8);
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_48 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) {
LAB_01450210:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


