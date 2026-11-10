/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014179e0; name: FUN_014179e0
 */


void FUN_014179e0(undefined8 param_1,long *param_2,undefined8 *param_3)

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
  long lVar14;
  bool bVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar9 != 0))
  {
    FUN_00100190(&LAB_00aa3b14,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar17 = *(long *)PTR_DAT_047d94f0;
  plVar16 = (long *)(lVar17 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar17;
  lVar14 = *plVar16;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar14) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01417a4c:
    if (*plVar16 == 0) goto code_r0x01417a54;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x100));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x100));
          while (*plVar16 == 0) {
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar15) {
              *plVar16 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01417a5c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar15) {
        *plVar16 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01417a5c:
    bVar15 = false;
    goto LAB_01417a60;
  }
  plVar16 = (long *)0x0;
  bVar15 = true;
LAB_01417a60:
  lVar10 = (long)*(int *)(lVar17 + 0x270);
  (**(code **)(*param_2 + 0x18))(&local_88,param_2);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  plVar18 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar18 = param_2 + 5;
  }
  if ((long *)local_88[2] == plVar18) {
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *local_88;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_01417cbc;
  }
  lVar17 = lVar17 + 0x110;
  plVar18 = (long *)(lVar17 + lVar10 * 0xa8 + 8);
  lVar12 = *plVar18;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar12) {
    lVar14 = nn::os::GetCurrentThread();
LAB_01417ad4:
    if (*plVar18 == 0) goto code_r0x01417adc;
    pLVar1 = (LightEventType *)(lVar17 + lVar10 * 0xa8 + 0x10);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar18 == 0) {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar13) {
              *plVar18 = lVar14;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01417ae4;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar13) {
        *plVar18 = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01417ae4:
    bVar13 = false;
    goto LAB_01417ae8;
  }
  plVar18 = (long *)0x0;
  bVar13 = true;
LAB_01417ae8:
  lVar14 = lVar17 + lVar10 * 0xa8;
  plVar19 = (long *)(lVar14 + 0x90);
  lVar14 = lVar14 + 0x20;
  local_70 = (undefined8 *)
             (**(code **)(*(long *)(*(long *)*plVar19 + 0x400) + 0x10))
                       (*(long *)*plVar19 + 0x400,8,8);
  if (local_70 == (undefined8 *)0x0) {
    plVar3 = (long *)(*plVar19 + 0x20);
    *plVar19 = (long)plVar3;
    puVar21 = (undefined8 *)(lVar17 + lVar10 * 0xa8 + 0x60);
    if (plVar3 == (long *)*puVar21) goto LAB_01417ed8;
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
                             (*(long *)*plVar19 + 0x400,8,8);
        if (local_70 != (undefined8 *)0x0) goto LAB_01417b18;
        plVar3 = (long *)(*plVar19 + 0x20);
        *plVar19 = (long)plVar3;
        if (plVar3 != (long *)*puVar21) break;
LAB_01417ed8:
        FUN_012d0398(lVar14);
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
LAB_01417b18:
  *local_70 = *param_3;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d0a71c(&local_88,&local_a0);
  lVar12 = lVar17 + lVar10 * 0xa8;
  puVar20 = (ulong *)(lVar12 + 0x28);
  uVar11 = *puVar20;
  if (uVar11 < *(ulong *)(lVar12 + 0x30)) {
    FUN_01417fec(lVar17 + lVar10 * 0xa8 + 0x38,uVar11,&local_70,&local_88,&local_68);
    *puVar20 = uVar11 + 0x90;
  }
  else {
    FUN_01418aa0(lVar14,&local_70,&local_88,&local_68);
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
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_68 = *puVar21;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_01417cbc;
  }
  if (!bVar13) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
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
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_88 = (undefined8 *)*puVar21;
        FUN_00c44438(lVar17 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_01417cbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar15) {
    *plVar16 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
  }
  return;
code_r0x01417a54:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar15) {
    *plVar16 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01417a5c;
  goto LAB_01417a4c;
code_r0x01417adc:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar13) {
    *plVar18 = lVar14;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01417ae4;
  goto LAB_01417ad4;
}


