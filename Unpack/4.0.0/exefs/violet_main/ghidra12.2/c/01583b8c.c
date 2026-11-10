/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01583b8c; name: FUN_01583b8c
 */


void FUN_01583b8c(long *param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  bool bVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  bool bVar21;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar19 = *(long *)PTR_DAT_047d94f0;
  plVar18 = (long *)(lVar19 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar19;
  lVar15 = *plVar18;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar15) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01583bfc:
    if (*plVar18 == 0) goto code_r0x01583c04;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x100));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x100));
          while (*plVar18 == 0) {
            cVar7 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar17) {
              *plVar18 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01583c0c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar17) {
        *plVar18 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01583c0c:
    bVar17 = false;
    goto LAB_01583c10;
  }
  plVar18 = (long *)0x0;
  bVar17 = true;
LAB_01583c10:
  lVar10 = (long)*(int *)(lVar19 + 0x270);
  (**(code **)(*param_1 + 0x18))(&local_88,param_1);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  plVar20 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar20 = param_1 + 5;
  }
  if ((long *)local_88[2] == plVar20) {
    FUN_00c9ea00(&local_a0,&local_88);
  }
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar21) {
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
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_68 = *local_88;
        FUN_00c44438(lVar15 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_01583e9c;
  }
  lVar19 = lVar19 + 0x110;
  plVar20 = (long *)(lVar19 + lVar10 * 0xa8 + 8);
  lVar14 = *plVar20;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 != lVar14) {
    lVar15 = nn::os::GetCurrentThread();
LAB_01583c84:
    if (*plVar20 == 0) goto code_r0x01583c8c;
    pLVar1 = (LightEventType *)(lVar19 + lVar10 * 0xa8 + 0x10);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar20 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar20 == 0) {
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar21) {
              *plVar20 = lVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01583c94;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar21) {
        *plVar20 = lVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01583c94:
    bVar21 = false;
    goto LAB_01583c98;
  }
  plVar20 = (long *)0x0;
  bVar21 = true;
LAB_01583c98:
  lVar15 = lVar19 + lVar10 * 0xa8;
  plVar16 = (long *)(lVar15 + 0x90);
  lVar15 = lVar15 + 0x20;
  local_70 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)*plVar16 + 0x400) + 0x10))
                       (*(long *)*plVar16 + 0x400,0x28,8);
  if (local_70 == (undefined4 *)0x0) {
    plVar3 = (long *)(*plVar16 + 0x20);
    *plVar16 = (long)plVar3;
    puVar11 = (undefined8 *)(lVar19 + lVar10 * 0xa8 + 0x60);
    if (plVar3 == (long *)*puVar11) goto LAB_015840bc;
    lVar14 = *plVar3;
    *(undefined8 *)(lVar14 + 0x410) = 0;
    puVar8 = PTR_DAT_047d96b0;
    *(undefined2 *)(lVar14 + 0x418) = 0;
    *(long *)(lVar14 + 0x420) = lVar14;
    *(undefined **)(lVar14 + 0x400) = puVar8 + 0x10;
    *(undefined **)(lVar14 + 0x408) = puVar8 + 0x128;
    do {
      *(long *)(lVar14 + 0x428) = lVar14;
      *(undefined8 *)(lVar14 + 0x430) = 0x400;
      while( true ) {
        local_70 = (undefined4 *)
                   (**(code **)(*(long *)(*(long *)*plVar16 + 0x400) + 0x10))
                             (*(long *)*plVar16 + 0x400,0x28,8);
        if (local_70 != (undefined4 *)0x0) goto LAB_01583cc8;
        plVar3 = (long *)(*plVar16 + 0x20);
        *plVar16 = (long)plVar3;
        if (plVar3 != (long *)*puVar11) break;
LAB_015840bc:
        FUN_012d0398(lVar15);
      }
      lVar14 = *plVar3;
      *(undefined8 *)(lVar14 + 0x410) = 0;
      puVar8 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar14 + 0x418) = 0;
      *(long *)(lVar14 + 0x420) = lVar14;
      *(undefined **)(lVar14 + 0x400) = puVar8 + 0x10;
      *(undefined **)(lVar14 + 0x408) = puVar8 + 0x128;
    } while( true );
  }
LAB_01583cc8:
  *local_70 = *param_2;
  *(undefined8 *)(local_70 + 2) = *param_3;
  *(undefined8 *)(local_70 + 4) = param_3[1];
  *(undefined8 *)(local_70 + 6) = param_3[2];
  plVar16 = (long *)param_3[3];
  *(long **)(local_70 + 8) = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d0a71c(&local_88,&local_a0);
  lVar14 = lVar19 + lVar10 * 0xa8;
  puVar13 = (ulong *)(lVar14 + 0x28);
  uVar12 = *puVar13;
  if (uVar12 < *(ulong *)(lVar14 + 0x30)) {
    FUN_015841d0(lVar19 + lVar10 * 0xa8 + 0x38,uVar12,&local_70,&local_88);
    *puVar13 = uVar12 + 0x90;
  }
  else {
    FUN_01584424(lVar15,&local_70,&local_88);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_68 = *puVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_01583e9c;
  }
  if (!bVar21) {
    *plVar20 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
  }
  puVar11 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar21) {
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_88 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_01583e9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar17) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  return;
code_r0x01583c04:
  cVar7 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar17) {
    *plVar18 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01583c0c;
  goto LAB_01583bfc;
code_r0x01583c8c:
  cVar7 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar21) {
    *plVar20 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01583c94;
  goto LAB_01583c84;
}


