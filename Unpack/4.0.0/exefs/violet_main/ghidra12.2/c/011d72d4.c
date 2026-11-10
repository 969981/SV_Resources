/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d72d4; name: FUN_011d72d4
 */


void FUN_011d72d4(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 local_8;
  
  *param_1 = (long)&PTR_FUN_04545c80;
  param_1[4] = (long)&PTR_LAB_04545d20;
  param_1[5] = (long)&PTR_LAB_04545d70;
  if ((char)param_1[0x2c] != '\0') {
    plVar11 = (long *)param_1[0x2b];
    do {
      lVar12 = *plVar11;
      lVar8 = plVar11[1];
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar14) {
        *plVar11 = lVar12;
        plVar11[1] = lVar8;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      lVar5 = *plVar11;
      lVar6 = plVar11[1];
      if (lVar5 != lVar12 || lVar6 != lVar8) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_011d7348;
      }
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar14) {
        *plVar11 = 0;
        *(long *)((long)plVar11 + 4) = lVar8;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar14 = true;
LAB_011d7348:
    if (!bVar14) {
      do {
        lVar12 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar12 != lVar5 || lVar8 != lVar6) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x011d771c;
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar14) {
          *plVar11 = 0;
          *(long *)((long)plVar11 + 4) = lVar6;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar14 = true;
joined_r0x011d771c:
      if (!bVar14) {
        do {
          lVar5 = *plVar11;
          lVar6 = plVar11[1];
          if (lVar5 != lVar12 || lVar6 != lVar8) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar12 = lVar5;
            lVar8 = lVar6;
            goto joined_r0x011d771c;
          }
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar14) {
            *plVar11 = 0;
            *(long *)((long)plVar11 + 4) = lVar8;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar14 = true;
        lVar12 = lVar5;
        lVar8 = lVar6;
        goto joined_r0x011d771c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  if ((char)param_1[0x2a] != '\0') {
    plVar11 = (long *)param_1[0x29];
    do {
      lVar12 = *plVar11;
      lVar8 = plVar11[1];
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar14) {
        *plVar11 = lVar12;
        plVar11[1] = lVar8;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      lVar5 = *plVar11;
      lVar6 = plVar11[1];
      if (lVar5 != lVar12 || lVar6 != lVar8) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_011d739c;
      }
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar14) {
        *plVar11 = lVar12;
        *(long *)((long)plVar11 + 4) = lVar8 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar14 = true;
LAB_011d739c:
    if (!bVar14) {
      do {
        lVar12 = *plVar11;
        lVar8 = plVar11[1];
        if (lVar12 != lVar5 || lVar8 != lVar6) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x011d7614;
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar14) {
          *plVar11 = lVar5;
          *(long *)((long)plVar11 + 4) = lVar6 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar14 = true;
joined_r0x011d7614:
      if (!bVar14) {
        do {
          lVar5 = *plVar11;
          lVar6 = plVar11[1];
          if (lVar5 != lVar12 || lVar6 != lVar8) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar12 = lVar5;
            lVar8 = lVar6;
            goto joined_r0x011d7614;
          }
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar14) {
            *plVar11 = lVar12;
            *(long *)((long)plVar11 + 4) = lVar8 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar14 = true;
        lVar12 = lVar5;
        lVar8 = lVar6;
        goto joined_r0x011d7614;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 2));
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x26));
  plVar11 = (long *)param_1[0x23];
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_011d74e8;
  }
  plVar11 = (long *)param_1[0x1f];
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar7 == 0) {
LAB_011d74e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x20))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x20))();
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x12));
  puVar13 = (undefined8 *)param_1[10];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar14) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_8 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_8);
      }
    }
    else if (sVar7 == 0) goto LAB_011d747c;
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar14) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_8 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_8);
      }
    }
    else if (sVar7 == 0) {
LAB_011d747c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


