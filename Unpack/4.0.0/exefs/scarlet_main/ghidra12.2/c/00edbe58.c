/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edbe58; name: FUN_00edbe58
 */


void FUN_00edbe58(long param_1,long *param_2,int param_3,undefined2 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 *puStack_68;
  
  plVar2 = (long *)(param_1 + 0x450);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar2 == 0 && *(long *)(param_1 + 0x458) == 0) {
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = lVar12;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_00edbea8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
  do {
    if (*plVar2 != 0 || *(long *)(param_1 + 0x458) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
        while (*plVar2 == 0 && *(long *)(param_1 + 0x458) == 0) {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *plVar2 = lVar12;
            *(undefined8 *)(param_1 + 0x458) = 0;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00edbea8;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = lVar12;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00edbea8:
  sVar8 = *(short *)(*(long *)(param_1 + 0x38) + -6);
  sVar10 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + -0x10) + 0x30) +
                                 0x30) + 0x10))();
  sVar10 = sVar10 + sVar8;
  puVar3 = (undefined8 *)(param_1 + 0x48);
  plVar17 = (long *)(*(long *)(*param_2 + 0x30) + (long)param_3 * 0x10);
  plVar20 = *(long **)(param_1 + 0x38);
  if (plVar20 < *(long **)(param_1 + 0x40)) {
    uVar19 = *puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00edc358;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    lVar14 = *plVar17;
    *plVar20 = lVar14;
    if (lVar14 != 0) {
      piVar5 = (int *)(lVar14 + 0x28);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar13) {
          *piVar5 = iVar11 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == -1) goto LAB_00edc35c;
    }
    *(undefined2 *)(plVar20 + 1) = param_4;
    *(short *)((long)plVar20 + 10) = sVar10;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x38) = plVar20 + 2;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x50);
    lVar12 = (long)plVar20 - *(long *)(param_1 + 0x30) >> 4;
    uVar4 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(long **)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
    uVar15 = lVar14 >> 3;
    local_70 = (long *)0x0;
    if (uVar4 <= uVar15) {
      uVar4 = uVar15;
    }
    if (uVar18 >> 1 <= (ulong)(lVar14 >> 4)) {
      uVar4 = uVar18;
    }
    puStack_68 = puVar3;
    if (uVar4 == 0) {
      local_88 = (long *)0x0;
    }
    else {
      local_88 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar4 << 4,8);
      if (local_88 == (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 0xe8))();
      }
    }
    plVar20 = local_88 + lVar12 * 2;
    local_70 = local_88 + uVar4 * 2;
    uVar19 = *puVar3;
    local_80 = plVar20;
    local_78 = plVar20;
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00edc358;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    lVar14 = *plVar17;
    *plVar20 = lVar14;
    if (lVar14 != 0) {
      piVar5 = (int *)(lVar14 + 0x28);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar13) {
          *piVar5 = iVar11 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == -1) {
LAB_00edc35c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    *(undefined2 *)(plVar20 + 1) = param_4;
    *(short *)((long)plVar20 + 10) = sVar10;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    local_78 = local_78 + 2;
    plVar17 = *(long **)(param_1 + 0x30);
    plVar20 = *(long **)(param_1 + 0x38);
    if (plVar20 == plVar17) {
      plVar20 = plVar17;
    }
    else {
      do {
        plVar16 = local_80;
        uVar19 = *puVar3;
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00edc358:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        lVar14 = plVar20[-2];
        plVar20[-2] = 0;
        plVar16[-2] = lVar14;
        plVar1 = plVar20 + -1;
        plVar20 = plVar20 + -2;
        *(int *)(plVar16 + -1) = (int)*plVar1;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        local_80 = local_80 + -2;
      } while (plVar17 != plVar20);
      plVar17 = *(long **)(param_1 + 0x30);
      plVar20 = *(long **)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x30) = local_80;
    *(long **)(param_1 + 0x38) = local_78;
    plVar16 = *(long **)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = local_70;
    local_88 = plVar17;
    local_80 = plVar17;
    local_78 = plVar20;
    local_70 = plVar16;
    FUN_00ec68c8(&local_88);
  }
  do {
    lVar12 = *plVar2;
    lVar14 = *(long *)(param_1 + 0x458);
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = lVar12;
      *(long *)(param_1 + 0x458) = lVar14;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar6 = *plVar2;
    lVar7 = *(long *)(param_1 + 0x458);
    if (lVar6 != lVar12 || lVar7 != lVar14) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00edc0ac;
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = 0;
      *(long *)(param_1 + 0x454) = lVar14;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar13 = true;
LAB_00edc0ac:
  if (!bVar13) {
    do {
      lVar12 = *plVar2;
      lVar14 = *(long *)(param_1 + 0x458);
      if (lVar12 != lVar6 || lVar14 != lVar7) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00edc318;
      }
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = 0;
        *(long *)(param_1 + 0x454) = lVar7;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar13 = true;
joined_r0x00edc318:
    if (!bVar13) {
      do {
        lVar6 = *plVar2;
        lVar7 = *(long *)(param_1 + 0x458);
        if (lVar6 != lVar12 || lVar7 != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar12 = lVar6;
          lVar14 = lVar7;
          goto joined_r0x00edc318;
        }
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = 0;
          *(long *)(param_1 + 0x454) = lVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar13 = true;
      lVar12 = lVar6;
      lVar14 = lVar7;
      goto joined_r0x00edc318;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return;
}


