/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3c884; name: FUN_01e3c884
 */


void FUN_01e3c884(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  short *psVar4;
  short sVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_28;
  
  puVar13 = (undefined8 *)param_1[0x32];
  *param_1 = (long)&DAT_04546558;
  param_1[4] = (long)&PTR_LAB_045465d0;
  param_1[5] = (long)&PTR_LAB_04546620;
  if (puVar13 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) goto LAB_01e3c974;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x30));
  if (param_1[0x2a] != 0) {
    lVar12 = param_1[0x28];
    plVar7 = (long *)param_1[0x29];
    *(undefined8 *)(*plVar7 + 8) = *(undefined8 *)(lVar12 + 8);
    **(long **)(lVar12 + 8) = *plVar7;
    param_1[0x2a] = 0;
    while (plVar7 != param_1 + 0x28) {
      plVar6 = (long *)plVar7[1];
      plVar14 = (long *)plVar7[2];
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[6];
        psVar4 = (short *)(lVar12 + 0x1a);
        do {
          sVar5 = *psVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar9) {
            *psVar4 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar14 = (long *)param_1[0x2b];
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,0x18,8);
        plVar7 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar14,plVar7,0x18,8);
        plVar7 = plVar6;
      }
    }
  }
  puVar13 = (undefined8 *)param_1[8];
  if (puVar13 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) goto LAB_01e3c974;
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar9) {
        *psVar4 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) {
LAB_01e3c974:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


