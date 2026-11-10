/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec6488; name: FUN_00ec6488
 */


void FUN_00ec6488(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar2 = (long *)(param_1 + 0x450);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0 && *(long *)(param_1 + 0x458) == 0) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar9;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00ec64d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
  do {
    if (*plVar2 != 0 || *(long *)(param_1 + 0x458) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
        while (*plVar2 == 0 && *(long *)(param_1 + 0x458) == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar11) {
            *plVar2 = lVar9;
            *(undefined8 *)(param_1 + 0x458) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00ec64d0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar9;
      *(undefined8 *)(param_1 + 0x458) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00ec64d0:
  local_90 = 0;
  uStack_8c = 0xffffffff;
  if (*(ulong *)(param_1 + 0x38) < *(ulong *)(param_1 + 0x40)) {
    FUN_00ee5790(param_1 + 0x30,param_2,&uStack_8c,&local_90);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x50);
    lVar9 = (long)(*(ulong *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 4;
    uVar3 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(ulong *)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
    uVar13 = lVar12 >> 3;
    if (uVar3 <= uVar13) {
      uVar3 = uVar13;
    }
    puVar4 = (undefined8 *)(param_1 + 0x48);
    local_70 = 0;
    if (uVar15 >> 1 <= (ulong)(lVar12 >> 4)) {
      uVar3 = uVar15;
    }
    puStack_68 = puVar4;
    if (uVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,uVar3 << 4,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar4 + 0xe8))();
      }
    }
    plVar6 = (long *)(local_88 + lVar9 * 0x10);
    local_70 = local_88 + uVar3 * 0x10;
    uVar16 = *puVar4;
    local_80 = plVar6;
    local_78 = plVar6;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00ec6898;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    lVar12 = *param_2;
    *plVar6 = lVar12;
    if (lVar12 != 0) {
      piVar5 = (int *)(lVar12 + 0x28);
      do {
        iVar8 = *piVar5;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar11) {
          *piVar5 = iVar8 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    *(undefined4 *)(plVar6 + 1) = 0xffff;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    local_78 = local_78 + 2;
    lVar9 = *(long *)(param_1 + 0x30);
    lVar12 = *(long *)(param_1 + 0x38);
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar6 = local_80;
        uVar16 = *puVar4;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00ec6898:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        lVar14 = *(long *)(lVar12 + -0x10);
        *(undefined8 *)(lVar12 + -0x10) = 0;
        plVar6[-2] = lVar14;
        puVar1 = (undefined4 *)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        *(undefined4 *)(plVar6 + -1) = *puVar1;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        local_80 = local_80 + -2;
      } while (lVar9 != lVar12);
      lVar9 = *(long *)(param_1 + 0x30);
      lVar12 = *(long *)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x30) = local_80;
    *(long **)(param_1 + 0x38) = local_78;
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = local_70;
    local_88 = lVar9;
    local_80 = (long *)lVar9;
    local_78 = (long *)lVar12;
    local_70 = uVar16;
    FUN_00ec68c8(&local_88);
  }
  do {
    lVar9 = *plVar2;
    lVar12 = *(long *)(param_1 + 0x458);
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar9;
      *(long *)(param_1 + 0x458) = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar10 = *plVar2;
    lVar14 = *(long *)(param_1 + 0x458);
    if (lVar10 != lVar9 || lVar14 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00ec66b4;
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = 0;
      *(long *)(param_1 + 0x454) = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar11 = true;
LAB_00ec66b4:
  if (!bVar11) {
    do {
      lVar9 = *plVar2;
      lVar12 = *(long *)(param_1 + 0x458);
      if (lVar9 != lVar10 || lVar12 != lVar14) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ec6858;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = 0;
        *(long *)(param_1 + 0x454) = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar11 = true;
joined_r0x00ec6858:
    if (!bVar11) {
      do {
        lVar10 = *plVar2;
        lVar14 = *(long *)(param_1 + 0x458);
        if (lVar10 != lVar9 || lVar14 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar10;
          lVar12 = lVar14;
          goto joined_r0x00ec6858;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = 0;
          *(long *)(param_1 + 0x454) = lVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
      lVar9 = lVar10;
      lVar12 = lVar14;
      goto joined_r0x00ec6858;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return;
}


