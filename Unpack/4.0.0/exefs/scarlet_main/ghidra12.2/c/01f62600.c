/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f62600; name: FUN_01f62600
 */


void FUN_01f62600(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_8;
  
  lVar9 = param_1[0x28];
  *param_1 = (long)&DAT_04558698;
  param_1[4] = (long)&PTR_LAB_04558718;
  param_1[5] = (long)&PTR_LAB_04558768;
  param_1[0x28] = 0;
  if (lVar9 != 0) {
    FUN_01f5fed0(param_1 + 0x29);
  }
  lVar9 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar9 != 0) {
    FUN_01f5fed0(param_1 + 0x23);
  }
  lVar9 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar9 != 0) {
    FUN_01f5fed0(param_1 + 0x1d);
  }
  lVar9 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar9 != 0) {
    FUN_01f5fed0(param_1 + 0x17);
  }
  lVar9 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar9 != 0) {
    FUN_01f5fed0(param_1 + 0x13);
  }
  FUN_01f603fc(param_1 + 0xe);
  puVar10 = (undefined8 *)param_1[9];
  if (puVar10 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar10 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) goto LAB_01f62718;
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar10 = (undefined8 *)param_1[6];
  if (puVar10 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar10 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_8 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) {
LAB_01f62718:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


