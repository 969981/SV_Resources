/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154c3d4; name: FUN_0154c3d4
 */


void FUN_0154c3d4(long param_1,undefined4 param_2)

{
  LightEventType *pLVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  long *plVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar18 = *(long *)PTR_DAT_047d94f0;
  plVar17 = (long *)(lVar18 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar18;
  lVar16 = *plVar17;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    lVar10 = nn::os::GetCurrentThread();
LAB_0154c44c:
    if (*plVar17 == 0) goto code_r0x0154c454;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x100));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x100));
          while (*plVar17 == 0) {
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar15) {
              *plVar17 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0154c45c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar15) {
        *plVar17 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0154c45c:
    bVar15 = false;
    goto LAB_0154c460;
  }
  plVar17 = (long *)0x0;
  bVar15 = true;
LAB_0154c460:
  lVar10 = (long)*(int *)(lVar18 + 0x270);
  (**(code **)(*plVar14 + 0x18))(&local_88,plVar14);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  plVar19 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar19 = plVar14 + 5;
  }
  if ((long *)local_88[2] == plVar19) {
    FUN_00c9ea00(&local_a0,&local_88);
  }
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar13) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_68 = *local_88;
        FUN_00c44438(lVar16 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_0154c6e8;
  }
  lVar18 = lVar18 + 0x110;
  plVar14 = (long *)(lVar18 + lVar10 * 0xa8 + 8);
  lVar12 = *plVar14;
  local_90 = param_1;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 != lVar12) {
    lVar16 = nn::os::GetCurrentThread();
LAB_0154c4d8:
    if (*plVar14 == 0) goto code_r0x0154c4e0;
    pLVar1 = (LightEventType *)(lVar18 + lVar10 * 0xa8 + 0x10);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar14 == 0) {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar13) {
              *plVar14 = lVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0154c4e8;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0154c4e8:
    bVar13 = false;
    goto LAB_0154c4ec;
  }
  plVar14 = (long *)0x0;
  bVar13 = true;
LAB_0154c4ec:
  lVar16 = lVar18 + lVar10 * 0xa8;
  plVar19 = (long *)(lVar16 + 0x90);
  lVar16 = lVar16 + 0x20;
  local_70 = (undefined8 *)
             (**(code **)(*(long *)(*(long *)*plVar19 + 0x400) + 0x10))
                       (*(long *)*plVar19 + 0x400,0x80,0x10);
  if (local_70 == (undefined8 *)0x0) {
    plVar3 = (long *)(*plVar19 + 0x20);
    *plVar19 = (long)plVar3;
    puVar21 = (undefined8 *)(lVar18 + lVar10 * 0xa8 + 0x60);
    if (plVar3 == (long *)*puVar21) goto LAB_0154c900;
    lVar12 = *plVar3;
    *(undefined8 *)(lVar12 + 0x410) = 0;
    puVar8 = PTR_DAT_047d96b0;
    *(undefined2 *)(lVar12 + 0x418) = 0;
    *(long *)(lVar12 + 0x420) = lVar12;
    *(undefined **)(lVar12 + 0x400) = puVar8 + 0x10;
    *(undefined **)(lVar12 + 0x408) = puVar8 + 0x128;
    do {
      *(long *)(lVar12 + 0x428) = lVar12;
      *(undefined8 *)(lVar12 + 0x430) = 0x400;
      while( true ) {
        local_70 = (undefined8 *)
                   (**(code **)(*(long *)(*(long *)*plVar19 + 0x400) + 0x10))
                             (*(long *)*plVar19 + 0x400,0x80,0x10);
        if (local_70 != (undefined8 *)0x0) goto LAB_0154c51c;
        plVar3 = (long *)(*plVar19 + 0x20);
        *plVar19 = (long)plVar3;
        if (plVar3 != (long *)*puVar21) break;
LAB_0154c900:
        FUN_012d0398(lVar16);
      }
      lVar12 = *plVar3;
      *(undefined8 *)(lVar12 + 0x410) = 0;
      puVar8 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar12 + 0x418) = 0;
      *(long *)(lVar12 + 0x420) = lVar12;
      *(undefined **)(lVar12 + 0x400) = puVar8 + 0x10;
      *(undefined **)(lVar12 + 0x408) = puVar8 + 0x128;
    } while( true );
  }
LAB_0154c51c:
  *(undefined4 *)(local_70 + 4) = param_2;
  *local_70 = &LAB_02bd7f58;
  local_70[1] = &LAB_02bd7f6c;
  local_70[2] = &LAB_02bd7f70;
  local_70[3] = &LAB_02bd7f7c;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d0a71c(&local_88,&local_a0);
  local_78 = local_90;
  lVar12 = lVar18 + lVar10 * 0xa8;
  puVar20 = (ulong *)(lVar12 + 0x28);
  uVar11 = *puVar20;
  if (uVar11 < *(ulong *)(lVar12 + 0x30)) {
    FUN_0154ca1c(lVar18 + lVar10 * 0xa8 + 0x38,uVar11,&local_70,&local_88);
    *puVar20 = uVar11 + 0x90;
  }
  else {
    FUN_0154cc80(lVar16,&local_70,&local_88);
  }
  puVar21 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = *puVar21;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_0154c6e8;
  }
  if (!bVar13) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  puVar21 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar13) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_88 = (undefined8 *)*puVar21;
        FUN_00c44438(lVar18 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_0154c6e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar15) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  return;
code_r0x0154c454:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar15) {
    *plVar17 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0154c45c;
  goto LAB_0154c44c;
code_r0x0154c4e0:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar13) {
    *plVar14 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0154c4e8;
  goto LAB_0154c4d8;
}


