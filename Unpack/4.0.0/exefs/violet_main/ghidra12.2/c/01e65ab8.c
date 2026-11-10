/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e65ab8; name: FUN_01e65ab8
 */


void FUN_01e65ab8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_38;
  
  puVar13 = (undefined8 *)param_1[0x24];
  *param_1 = (long)&DAT_04551a68;
  param_1[8] = (long)&PTR_LAB_04551b90;
  param_1[4] = (long)&PTR_LAB_04551ae8;
  param_1[5] = (long)&PTR_LAB_04551b38;
  param_1[0x24] = 0;
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
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_01e65c44;
  }
  param_1[0x25] = 0;
  FUN_01e65e68(param_1 + 0x31);
  FUN_01e65f78(param_1 + 0x30);
  FUN_01e65f78(param_1 + 0x2f);
  FUN_01e65f78(param_1 + 0x2e);
  FUN_01e65f78(param_1 + 0x2d);
  FUN_01e65f78(param_1 + 0x2c);
  FUN_01e65f78(param_1 + 0x2b);
  FUN_01e65f78(param_1 + 0x2a);
  puVar13 = (undefined8 *)param_1[0x24];
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
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_01e65c44;
  }
  FUN_00d8e444(param_1 + 0x21);
  FUN_01e65ff0(param_1 + 0x17);
  lVar14 = param_1[0x10];
  if (lVar14 != 0) {
    lVar6 = param_1[0x12];
    plVar7 = (long *)param_1[0x13];
    param_1[0x11] = lVar14;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar14,lVar6 - lVar14,8);
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
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
LAB_01e65c44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


