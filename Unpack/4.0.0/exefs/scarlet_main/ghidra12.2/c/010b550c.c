/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b550c; name: FUN_010b550c
 */


void FUN_010b550c(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  LightEventType *pLVar1;
  short *psVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  ulong uVar27;
  ulong *puVar28;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [8];
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_047d94e8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar10 != 0)) {
    FUN_00100190(&LAB_00aa3b14,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94e8);
  }
  lVar24 = *(long *)PTR_DAT_047d94f0;
  plVar21 = (long *)(lVar24 + 0xf8);
  *(long *)PTR_DAT_047d94f8 = lVar24;
  lVar17 = *plVar21;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar17) {
    lVar11 = nn::os::GetCurrentThread();
LAB_010b5578:
    if (*plVar21 == 0) goto code_r0x010b5580;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x100));
    do {
      if (*plVar21 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x100));
          while (*plVar21 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_010b5588;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *plVar21 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_010b5588:
    bVar8 = false;
    goto LAB_010b558c;
  }
  plVar21 = (long *)0x0;
  bVar8 = true;
LAB_010b558c:
  lVar11 = (long)*(int *)(lVar24 + 0x270);
  (**(code **)(*param_2 + 0x18))(&local_88,param_2);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  plVar25 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar25 = param_2 + 5;
  }
  if ((long *)local_88[2] == plVar25) {
    FUN_00c9ea00(&local_a8,&local_88);
  }
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar26) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar26) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_68 = *local_88;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_010b57ec;
  }
  lVar24 = lVar24 + 0x110;
  plVar25 = (long *)(lVar24 + lVar11 * 0xa8 + 8);
  lVar15 = *plVar25;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar15) {
    lVar17 = nn::os::GetCurrentThread();
LAB_010b5600:
    if (*plVar25 == 0) goto code_r0x010b5608;
    pLVar1 = (LightEventType *)(lVar24 + lVar11 * 0xa8 + 0x10);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar25 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar25 == 0) {
            cVar7 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar26) {
              *plVar25 = lVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_010b5610;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar26) {
        *plVar25 = lVar17;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_010b5610:
    bVar26 = false;
    goto LAB_010b5614;
  }
  plVar25 = (long *)0x0;
  bVar26 = true;
LAB_010b5614:
  lVar17 = lVar24 + lVar11 * 0xa8;
  plVar18 = (long *)(lVar17 + 0x90);
  puVar16 = (ulong *)(lVar17 + 0x20);
  local_70 = (undefined1 *)
             (**(code **)(*(long *)(*(long *)*plVar18 + 0x400) + 0x10))
                       (*(long *)*plVar18 + 0x400,1,1);
  if (local_70 == (undefined1 *)0x0) {
    plVar3 = (long *)(*plVar18 + 0x20);
    *plVar18 = (long)plVar3;
    puVar23 = (undefined8 *)(lVar24 + lVar11 * 0xa8 + 0x60);
    if (plVar3 == (long *)*puVar23) {
      FUN_012d0398(puVar16);
    }
    else {
      lVar17 = *plVar3;
      *(undefined8 *)(lVar17 + 0x410) = 0;
      puVar9 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar17 + 0x418) = 0;
      *(long *)(lVar17 + 0x420) = lVar17;
      *(long *)(lVar17 + 0x428) = lVar17;
      *(undefined **)(lVar17 + 0x408) = puVar9 + 0x128;
      *(undefined **)(lVar17 + 0x400) = puVar9 + 0x10;
      *(undefined8 *)(lVar17 + 0x430) = 0x400;
    }
    local_70 = (undefined1 *)
               (**(code **)(*(long *)(*(long *)*plVar18 + 0x400) + 0x10))
                         (*(long *)*plVar18 + 0x400,1,1);
    puVar9 = PTR_DAT_047d96b0;
    while (local_70 == (undefined1 *)0x0) {
      plVar3 = (long *)(*plVar18 + 0x20);
      *plVar18 = (long)plVar3;
      if (plVar3 == (long *)*puVar23) {
        FUN_012d0398(puVar16);
      }
      else {
        lVar17 = *plVar3;
        *(undefined **)(lVar17 + 0x400) = puVar9 + 0x10;
        *(undefined8 *)(lVar17 + 0x410) = 0;
        *(undefined2 *)(lVar17 + 0x418) = 0;
        *(undefined **)(lVar17 + 0x408) = puVar9 + 0x128;
        *(long *)(lVar17 + 0x420) = lVar17;
        *(long *)(lVar17 + 0x428) = lVar17;
        *(undefined8 *)(lVar17 + 0x430) = 0x400;
      }
      local_70 = (undefined1 *)
                 (**(code **)(*(long *)(*(long *)*plVar18 + 0x400) + 0x10))
                           (*(long *)*plVar18 + 0x400,1,1);
    }
  }
  *local_70 = *param_3;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d0a71c(&local_88,&local_a8);
  lVar17 = lVar24 + lVar11 * 0xa8;
  puVar28 = (ulong *)(lVar17 + 0x28);
  uVar19 = *puVar28;
  puVar22 = (ulong *)(lVar17 + 0x30);
  puVar23 = (undefined8 *)(lVar17 + 0x38);
  if (uVar19 < *puVar22) {
    FUN_010b5d50(puVar23,uVar19,&local_70,&local_88,auStack_90);
    *puVar28 = uVar19 + 0x90;
  }
  else {
    lVar17 = (long)(uVar19 - *puVar16) >> 4;
    uVar14 = *(ulong *)(lVar24 + lVar11 * 0xa8 + 0x40);
    uVar19 = lVar17 * -0x71c71c71c71c71c7 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar24 = (long)(*puVar22 - *puVar16) >> 4;
    uVar13 = lVar24 * 0x1c71c71c71c71c72;
    if (uVar19 <= uVar13) {
      uVar19 = uVar13;
    }
    if (uVar14 >> 1 <= (ulong)(lVar24 * -0x71c71c71c71c71c7)) {
      uVar19 = uVar14;
    }
    if (uVar19 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (**(code **)(*(long *)*puVar23 + 0x10))((long *)*puVar23,uVar19 * 0x90,0x10);
      if (lVar24 == 0) {
        (**(code **)(*(long *)*puVar23 + 0xe8))();
      }
    }
    uVar20 = lVar24 + lVar17 * 0x10;
    FUN_010b5d50(puVar23,uVar20,&local_70,&local_88,auStack_90);
    uVar27 = *puVar16;
    uVar14 = uVar20 + 0x90;
    uVar13 = *puVar28;
    if (uVar13 == uVar27) {
      uVar13 = uVar27;
    }
    else {
      do {
        uVar20 = uVar20 - 0x90;
        uVar13 = uVar13 - 0x90;
        FUN_010b5fa4(puVar23,uVar20,uVar13);
      } while (uVar27 != uVar13);
      uVar27 = *puVar16;
      uVar13 = *puVar28;
    }
    *puVar16 = uVar20;
    *puVar28 = uVar14;
    uVar14 = *puVar22;
    *puVar22 = lVar24 + uVar19 * 0x90;
    while (uVar19 = uVar13, uVar19 != uVar27) {
      if (*(code **)(uVar19 - 0x50) != (code *)0x0) {
        local_68 = *(undefined8 *)(uVar19 - 0x10);
        (**(code **)(uVar19 - 0x50))(uVar19 - 0x30,&local_68);
      }
      pcVar12 = *(code **)(uVar19 - 0x48);
      if (pcVar12 != (code *)0x0) {
        *(undefined8 *)(uVar19 - 0x40) = 0;
        *(undefined8 *)(uVar19 - 0x38) = 0;
        *(undefined8 *)(uVar19 - 0x50) = 0;
        *(undefined8 *)(uVar19 - 0x48) = 0;
        (*pcVar12)(uVar19 - 0x30);
      }
      pcVar12 = *(code **)(uVar19 - 0x88);
      uVar13 = uVar19 - 0x90;
      if (pcVar12 != (code *)0x0) {
        *(undefined8 *)(uVar19 - 0x80) = 0;
        *(undefined8 *)(uVar19 - 0x78) = 0;
        *(undefined8 *)(uVar19 - 0x90) = 0;
        *(undefined8 *)(uVar19 - 0x88) = 0;
        (*pcVar12)(uVar19 - 0x70);
      }
    }
    if (uVar27 != 0) {
      plVar18 = (long *)*puVar23;
      uVar19 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar19 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,uVar27,uVar14 - uVar27,0x10);
      }
      else {
        FUN_00c48fe8(plVar18,uVar27,uVar14 - uVar27,0x10);
      }
    }
  }
  puVar23 = local_88;
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
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar24;
        local_68 = *puVar23;
        FUN_00c44438(lVar24 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_010b57ec;
  }
  if (!bVar26) {
    *plVar25 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
  }
  puVar23 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar26) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar26) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar24;
        local_88 = (undefined8 *)*puVar23;
        FUN_00c44438(lVar24 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) {
LAB_010b57ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar8) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  return;
code_r0x010b5580:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar8) {
    *plVar21 = lVar11;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_010b5588;
  goto LAB_010b5578;
code_r0x010b5608:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar17;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_010b5610;
  goto LAB_010b5600;
}


