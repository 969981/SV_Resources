/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e6070c; name: FUN_00e6070c
 */


void FUN_00e6070c(long param_1,long param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  bool bVar20;
  undefined1 *puVar21;
  undefined1 local_88 [8];
  long *local_80;
  long *local_78;
  long local_70;
  undefined8 *local_68;
  
  plVar19 = (long *)(param_1 + 0x2b0);
  lVar15 = *plVar19;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar15) {
    lVar8 = nn::os::GetCurrentThread();
LAB_00e60750:
    if (*plVar19 == 0) goto code_r0x00e60758;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2b8));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2b8));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar20) {
              *plVar19 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00e60760;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar20) {
        *plVar19 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00e60760:
    bVar20 = false;
    goto LAB_00e60764;
  }
  plVar19 = (long *)0x0;
  bVar20 = true;
LAB_00e60764:
  puVar16 = *(undefined1 **)(param_1 + 0x310);
  uVar6 = local_88._0_4_;
  if (puVar16 < *(undefined1 **)(param_1 + 0x318)) {
    uVar17 = *(undefined8 *)(param_1 + 800);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar16 = 3;
      *(undefined4 *)(puVar16 + 4) = local_88._3_4_;
      *(undefined4 *)(puVar16 + 1) = uVar6;
      *(long *)(puVar16 + 8) = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e60eec;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar16 = 3;
      *(undefined4 *)(puVar16 + 4) = local_88._3_4_;
      *(undefined4 *)(puVar16 + 1) = uVar6;
      *(long *)(puVar16 + 8) = param_2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *(undefined1 **)(param_1 + 0x310) = puVar16 + 0x10;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x328);
    lVar8 = (long)puVar16 - *(long *)(param_1 + 0x308) >> 4;
    uVar10 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)*(undefined1 **)(param_1 + 0x318) - *(long *)(param_1 + 0x308);
    uVar12 = lVar15 >> 3;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar13 >> 1 <= (ulong)(lVar15 >> 4)) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(**(long **)(param_1 + 800) + 0x10))
                         (*(long **)(param_1 + 800),uVar10 << 4,8);
      if (lVar15 == 0) {
        (**(code **)(**(long **)(param_1 + 800) + 0xe8))();
      }
    }
    puVar16 = (undefined1 *)(lVar15 + lVar8 * 0x10);
    uVar17 = *(undefined8 *)(param_1 + 800);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar16 = 3;
      *(undefined4 *)(puVar16 + 4) = local_88._3_4_;
      *(undefined4 *)(puVar16 + 1) = uVar6;
      *(long *)(puVar16 + 8) = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e60eec;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar16 = 3;
      *(undefined4 *)(puVar16 + 4) = local_88._3_4_;
      *(undefined4 *)(puVar16 + 1) = uVar6;
      *(long *)(puVar16 + 8) = param_2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar18 = *(long *)(param_1 + 0x308);
    lVar8 = *(long *)(param_1 + 0x310);
    puVar21 = puVar16;
    if (lVar8 != lVar18) {
      do {
        uVar17 = *(undefined8 *)(param_1 + 800);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          uVar17 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(puVar21 + -8) = uVar17;
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00e60eec;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar17;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          uVar17 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(puVar21 + -8) = uVar17;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar8 = lVar8 + -0x10;
        puVar21 = puVar21 + -0x10;
      } while (lVar18 != lVar8);
      lVar18 = *(long *)(param_1 + 0x308);
    }
    *(undefined1 **)(param_1 + 0x308) = puVar21;
    *(undefined1 **)(param_1 + 0x310) = puVar16 + 0x10;
    lVar8 = *(long *)(param_1 + 0x318);
    *(ulong *)(param_1 + 0x318) = lVar15 + uVar10 * 0x10;
    if (lVar18 != 0) {
      plVar9 = *(long **)(param_1 + 800);
      lVar8 = lVar8 - lVar18;
      uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar18,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar18,lVar8,8);
      }
    }
  }
  if (*(int *)(param_1 + 0x2c8) == 1) {
    plVar9 = *(long **)(param_1 + 0x2d8);
    puVar1 = (undefined8 *)(param_1 + 0x2e8);
    if (plVar9 == *(long **)(param_1 + 0x2e0)) {
      uVar13 = *(ulong *)(param_1 + 0x2f0);
      lVar8 = (long)plVar9 - *(long *)(param_1 + 0x2d0) >> 3;
      uVar10 = lVar8 + 1;
      if (0x7ffffffffffffffe < uVar13) {
        uVar13 = 0x7fffffffffffffff;
      }
      if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = (long)*(long **)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d0);
      uVar12 = lVar15 >> 2;
      local_70 = 0;
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar13 >> 1 <= (ulong)(lVar15 >> 3)) {
        uVar10 = uVar13;
      }
      local_68 = puVar1;
      if (uVar10 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar10 << 3,8);
        if (lVar15 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      plVar9 = (long *)(lVar15 + lVar8 * 8);
      local_70 = lVar15 + uVar10 * 8;
      uVar17 = *puVar1;
      local_80 = plVar9;
      local_78 = plVar9;
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *plVar9 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e60eec;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *plVar9 = param_2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        plVar9 = local_78;
      }
      local_78 = plVar9 + 1;
      FUN_00da0910(puVar1,*(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)(param_1 + 0x2d8),
                   &local_80);
      plVar14 = *(long **)(param_1 + 0x2d0);
      *(long **)(param_1 + 0x2d0) = local_80;
      plVar9 = *(long **)(param_1 + 0x2d8);
      *(long **)(param_1 + 0x2d8) = local_78;
      lVar8 = *(long *)(param_1 + 0x2e0);
      *(long *)(param_1 + 0x2e0) = local_70;
      local_78 = plVar9;
      if ((long)plVar9 - (long)plVar14 != 0) {
        local_78 = plVar9 + (((long)plVar9 - (long)plVar14) - 8U >> 3 ^ 0xffffffffffffffff);
      }
      local_80 = plVar14;
      local_70 = lVar8;
      if (plVar14 != (long *)0x0) {
        plVar9 = (long *)*local_68;
        uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar14,lVar8 - (long)plVar14,8);
        }
        else {
          FUN_00c48fe8(plVar9,plVar14,lVar8 - (long)plVar14,8);
        }
      }
    }
    else {
      uVar17 = *puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *plVar9 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00e60eec:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *plVar9 = param_2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x2d8) = plVar9 + 1;
    }
  }
  else if (*(int *)(param_1 + 0x2c8) != 2) {
    FUN_00cb9f64(param_2 + 0x108);
    plVar9 = *(long **)(param_2 + 0x538);
    *(undefined8 *)(param_2 + 0x538) = 0;
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (!bVar20) {
    *plVar19 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
    return;
  }
  return;
code_r0x00e60758:
  cVar5 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar20) {
    *plVar19 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00e60760;
  goto LAB_00e60750;
}


