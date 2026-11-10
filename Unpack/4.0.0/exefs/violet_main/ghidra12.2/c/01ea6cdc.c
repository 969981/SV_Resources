/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea6cdc; name: FUN_01ea6cdc
 */


void FUN_01ea6cdc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_8;
  
  *param_1 = (long)&DAT_04553ed0;
  param_1[4] = (long)&PTR_LAB_04553f48;
  param_1[5] = (long)&PTR_LAB_04553f98;
  if ((char)param_1[0x40] != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)((long)param_1 + 500) != '\0') {
    *(undefined1 *)((long)param_1 + 500) = 0;
  }
  if ((char)param_1[0x3d] != '\0') {
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  if (*(char *)((long)param_1 + 0x1dc) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  }
  if ((char)param_1[0x3a] != '\0') {
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  if (*(char *)((long)param_1 + 0x1c4) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1c4) = 0;
  }
  if ((char)param_1[0x37] != '\0') {
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  if (*(char *)((long)param_1 + 0x1ac) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1ac) = 0;
  }
  if ((char)param_1[0x34] != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(char *)((long)param_1 + 0x194) != '\0') {
    *(undefined1 *)((long)param_1 + 0x194) = 0;
  }
  if ((char)param_1[0x31] != '\0') {
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  if (*(char *)((long)param_1 + 0x17c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x17c) = 0;
  }
  if ((char)param_1[0x2e] != '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (*(char *)((long)param_1 + 0x164) != '\0') {
    *(undefined1 *)((long)param_1 + 0x164) = 0;
  }
  if ((char)param_1[0x2b] != '\0') {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  if (*(char *)((long)param_1 + 0x14c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x14c) = 0;
  }
  if (*(char *)((long)param_1 + 0x146) != '\0') {
    *(undefined1 *)((long)param_1 + 0x146) = 0;
  }
  if ((char)param_1[0x27] != '\0') {
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(char *)((long)param_1 + 300) != '\0') {
    *(undefined1 *)((long)param_1 + 300) = 0;
  }
  if ((char)param_1[0x24] != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)((long)param_1 + 0x114) != '\0') {
    *(undefined1 *)((long)param_1 + 0x114) = 0;
  }
  if ((char)param_1[0x21] != '\0') {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  if (*(char *)((long)param_1 + 0xfc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
  }
  if ((char)param_1[0x1e] != '\0') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  if (*(char *)((long)param_1 + 0xe4) != '\0') {
    *(undefined1 *)((long)param_1 + 0xe4) = 0;
  }
  if ((char)param_1[0x1b] != '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  if (*(char *)((long)param_1 + 0xcc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xcc) = 0;
  }
  if ((char)param_1[0x18] != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
  }
  if ((char)param_1[0x15] != '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(char *)((long)param_1 + 0x9c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
  }
  if ((char)param_1[0x12] != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)((long)param_1 + 0x84) != '\0') {
    *(undefined1 *)((long)param_1 + 0x84) = 0;
  }
  puVar9 = (undefined8 *)param_1[0xe];
  if (puVar9 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar9 + 3);
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
      piVar4 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) goto LAB_01ea6f98;
  }
  puVar9 = (undefined8 *)param_1[0xc];
  if (puVar9 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar9 + 3);
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
      piVar4 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) goto LAB_01ea6f98;
  }
  puVar9 = (undefined8 *)param_1[10];
  if (puVar9 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar9 + 3);
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
      piVar4 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) goto LAB_01ea6f98;
  }
  puVar9 = (undefined8 *)param_1[8];
  if (puVar9 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar9 + 3);
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
      piVar4 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) goto LAB_01ea6f98;
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar9 = (undefined8 *)param_1[6];
  if (puVar9 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar9 + 3);
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
      piVar4 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) {
LAB_01ea6f98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


