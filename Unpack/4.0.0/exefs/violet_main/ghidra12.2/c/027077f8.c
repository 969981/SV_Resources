/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027077f8; name: FUN_027077f8
 */


void FUN_027077f8(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_045d0398;
  param_1[4] = (long)&PTR_LAB_045d0410;
  param_1[5] = (long)&DAT_045d0460;
  puVar2 = PTR_DAT_047d38f8;
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar12) {
    uVar11 = nn::os::GetCurrentThread();
LAB_027079cc:
    if (*(long *)puVar2 == 0) goto code_r0x027079d4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar14) {
              *(undefined8 *)puVar2 = uVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_027079dc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar14) {
        *(undefined8 *)puVar2 = uVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_027079dc:
    bVar14 = false;
    goto LAB_02707844;
  }
  bVar14 = true;
LAB_02707844:
  plVar10 = (long *)param_1[0xf];
  if (plVar10 != (long *)0x0) {
    param_1[0xf] = 0;
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_02707a08;
  }
  if (DAT_04859eb0 == param_1 + 0x11) {
    DAT_04859eb0 = (long *)0x0;
  }
  if (*(char *)((long)param_1 + 0x41) == '\0') {
    FUN_00d34480(&DAT_04859ea0);
    FUN_02707be0(param_1[0xe]);
    FUN_02707cc0(param_1[0xe]);
  }
  else if ((param_1[9] != 0) && (*(short *)(param_1[9] + 0x1a) != 0)) {
    FUN_02707be0(param_1[0xe]);
    FUN_02707cd0(param_1[0xe],param_1);
  }
  if (!bVar14) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  }
  FUN_02707d1c(param_1 + 0x28);
  FUN_02707d1c(param_1 + 0x21);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1f));
  FUN_02707dbc(param_1 + 0x11);
  plVar10 = (long *)param_1[0xf];
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02707a08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar13 = (undefined8 *)param_1[9];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar14) {
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
        local_38 = *puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_0270799c;
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
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar14) {
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
        local_38 = *puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
LAB_0270799c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x027079d4:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar14) {
    *(undefined8 *)puVar2 = uVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_027079dc;
  goto LAB_027079cc;
}


