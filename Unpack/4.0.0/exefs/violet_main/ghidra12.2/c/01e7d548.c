/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7d548; name: FUN_01e7d548
 */


void FUN_01e7d548(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  short *psVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long local_40;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_04552090;
  param_1[4] = (long)&PTR_LAB_04552138;
  param_1[5] = (long)&PTR_LAB_04552188;
  if (param_1[0x25] != 0) {
    FUN_014ece90();
  }
  plVar13 = (long *)param_1[0x26];
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 3;
    do {
      sVar5 = (short)*plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(short *)plVar10 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)plVar13 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_40 = *plVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_40);
      }
    }
    else if (sVar5 == 0) goto LAB_01e7d768;
  }
  plVar13 = (long *)param_1[0x25];
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[6];
    psVar4 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar7) {
        *psVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_01e7d7c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar13 = (long *)param_1[0x1e];
  if (plVar13 != (long *)0x0) {
    plVar15 = (long *)param_1[0x1f];
    plVar10 = plVar13;
    if (plVar15 != plVar13) {
      do {
        plVar15 = plVar15 + -1;
        plVar10 = (long *)*plVar15;
        if (plVar10 != (long *)0x0) {
          lVar12 = plVar10[6];
          psVar4 = (short *)(lVar12 + 0x1a);
          do {
            sVar5 = *psVar4;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar7) {
              *psVar4 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))();
          }
          else if (sVar5 == 0) goto LAB_01e7d7c4;
        }
      } while (plVar15 != plVar13);
      plVar10 = (long *)param_1[0x1e];
    }
    lVar12 = param_1[0x20];
    plVar15 = (long *)param_1[0x21];
    param_1[0x1f] = (long)plVar13;
    uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar9 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar10,lVar12 - (long)plVar10,8);
    }
    else {
      FUN_00c48fe8(plVar15,plVar10,lVar12 - (long)plVar10,8);
    }
  }
  lVar14 = param_1[0x1c];
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar12 + 0x30) = DAT_04859430;
  }
  local_40 = *(long *)(lVar12 + 0x30);
  local_38 = *(undefined8 *)(lVar12 + 0x38);
  *(long *)(lVar12 + 0x30) = lVar14;
  *(undefined2 *)(lVar12 + 0x38) = 1;
  plVar13 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar13 == (long *)0x0) {
    *(long *)(lVar12 + 0x30) = local_40;
    *(undefined2 *)(lVar12 + 0x38) = (undefined2)local_38;
  }
  else {
    (**(code **)(*plVar13 + 8))();
    plVar13 = (long *)param_1[0x1d];
    *(long *)(lVar12 + 0x30) = local_40;
    *(undefined2 *)(lVar12 + 0x38) = (undefined2)local_38;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
  }
  if ((char)param_1[0x1a] != '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  pcVar11 = (code *)param_1[0xb];
  if (pcVar11 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar11)(param_1 + 0xe);
  }
  *param_1 = (long)&DAT_045521e0;
  param_1[4] = (long)&PTR_LAB_04552288;
  param_1[5] = (long)&PTR_LAB_045522d8;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar13 = (long *)param_1[6];
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 3;
    do {
      sVar5 = (short)*plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(short *)plVar10 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)plVar13 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_40 = *plVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_40);
      }
    }
    else if (sVar5 == 0) {
LAB_01e7d768:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


