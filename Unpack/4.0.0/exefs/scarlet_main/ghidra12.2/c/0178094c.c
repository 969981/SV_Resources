/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178094c; name: FUN_0178094c
 */


void FUN_0178094c(long *param_1,undefined8 *param_2)

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
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long *plVar18;
  long *plVar19;
  bool bVar20;
  long lVar21;
  long *plVar22;
  bool bVar23;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar21 = *(long *)PTR_DAT_047d94f0;
  plVar19 = (long *)(lVar21 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar21;
  lVar16 = *plVar19;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    lVar10 = nn::os::GetCurrentThread();
LAB_017809b8:
    if (*plVar19 == 0) goto code_r0x017809c0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x100));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x100));
          while (*plVar19 == 0) {
            cVar7 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar20) {
              *plVar19 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_017809c8;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar20) {
        *plVar19 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_017809c8:
    bVar20 = false;
    goto LAB_017809cc;
  }
  plVar19 = (long *)0x0;
  bVar20 = true;
LAB_017809cc:
  lVar10 = (long)*(int *)(lVar21 + 0x270);
  (**(code **)(*param_1 + 0x18))(&local_88,param_1);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  plVar22 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar22 = param_1 + 5;
  }
  if ((long *)local_88[2] == plVar22) {
    FUN_00c9ea00(&local_a0,&local_88);
  }
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar23) {
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
    else if (sVar5 == 0) goto LAB_01780c8c;
  }
  lVar21 = lVar21 + 0x110;
  plVar22 = (long *)(lVar21 + lVar10 * 0xa8 + 8);
  lVar15 = *plVar22;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 != lVar15) {
    lVar16 = nn::os::GetCurrentThread();
LAB_01780a40:
    if (*plVar22 == 0) goto code_r0x01780a48;
    pLVar1 = (LightEventType *)(lVar21 + lVar10 * 0xa8 + 0x10);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar22 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar22 == 0) {
            cVar7 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar23) {
              *plVar22 = lVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01780a50;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar23) {
        *plVar22 = lVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01780a50:
    bVar23 = false;
    goto LAB_01780a54;
  }
  plVar22 = (long *)0x0;
  bVar23 = true;
LAB_01780a54:
  lVar16 = lVar21 + lVar10 * 0xa8;
  plVar18 = (long *)(lVar16 + 0x90);
  lVar16 = lVar16 + 0x20;
  puVar11 = (undefined8 *)
            (**(code **)(*(long *)(*(long *)*plVar18 + 0x400) + 0x10))
                      (*(long *)*plVar18 + 0x400,0x48,8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar3 = (long *)(*plVar18 + 0x20);
    *plVar18 = (long)plVar3;
    puVar13 = (undefined8 *)(lVar21 + lVar10 * 0xa8 + 0x60);
    if (plVar3 == (long *)*puVar13) goto LAB_01780f08;
    lVar15 = *plVar3;
    *(undefined8 *)(lVar15 + 0x410) = 0;
    puVar8 = PTR_DAT_047d96b0;
    *(undefined2 *)(lVar15 + 0x418) = 0;
    *(long *)(lVar15 + 0x420) = lVar15;
    *(undefined **)(lVar15 + 0x400) = puVar8 + 0x10;
    *(undefined **)(lVar15 + 0x408) = puVar8 + 0x128;
    do {
      *(long *)(lVar15 + 0x428) = lVar15;
      *(undefined8 *)(lVar15 + 0x430) = 0x400;
      while( true ) {
        puVar11 = (undefined8 *)
                  (**(code **)(*(long *)(*(long *)*plVar18 + 0x400) + 0x10))
                            (*(long *)*plVar18 + 0x400,0x48,8);
        if (puVar11 != (undefined8 *)0x0) goto LAB_01780a88;
        plVar3 = (long *)(*plVar18 + 0x20);
        *plVar18 = (long)plVar3;
        if (plVar3 != (long *)*puVar13) break;
LAB_01780f08:
        FUN_012d0398(lVar16);
      }
      lVar15 = *plVar3;
      *(undefined8 *)(lVar15 + 0x410) = 0;
      puVar8 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar15 + 0x418) = 0;
      *(long *)(lVar15 + 0x420) = lVar15;
      *(undefined **)(lVar15 + 0x400) = puVar8 + 0x10;
      *(undefined **)(lVar15 + 0x408) = puVar8 + 0x128;
    } while( true );
  }
LAB_01780a88:
  *puVar11 = *param_2;
  puVar11[1] = param_2[1];
  puVar11[2] = param_2[2];
  plVar18 = (long *)param_2[3];
  puVar11[3] = plVar18;
  local_70 = puVar11;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))();
  }
  puVar11[4] = param_2[4];
  puVar11[5] = param_2[5];
  puVar11[6] = param_2[6];
  plVar18 = (long *)param_2[7];
  puVar11[7] = plVar18;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))();
  }
  lVar15 = param_2[8];
  puVar11[8] = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar12;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d0a71c(&local_88,&local_a0);
  lVar15 = lVar21 + lVar10 * 0xa8;
  puVar17 = (ulong *)(lVar15 + 0x28);
  uVar14 = *puVar17;
  if (uVar14 < *(ulong *)(lVar15 + 0x30)) {
    FUN_01781060(lVar21 + lVar10 * 0xa8 + 0x38,uVar14,&local_70,&local_88);
    *puVar17 = uVar14 + 0x90;
  }
  else {
    FUN_017812b4(lVar16,&local_70,&local_88);
  }
  puVar11 = local_88;
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
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_68 = *puVar11;
        FUN_00c44438(lVar21 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_01780c8c;
  }
  if (!bVar23) {
    *plVar22 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
  }
  puVar11 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar23) {
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
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_88 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar21 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_01780c8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar20) {
    *plVar19 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
  }
  return;
code_r0x017809c0:
  cVar7 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar20) {
    *plVar19 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_017809c8;
  goto LAB_017809b8;
code_r0x01780a48:
  cVar7 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar23) {
    *plVar22 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01780a50;
  goto LAB_01780a40;
}


