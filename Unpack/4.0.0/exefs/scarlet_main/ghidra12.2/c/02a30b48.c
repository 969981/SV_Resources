/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a30b48; name: FUN_02a30b48
 */


long * FUN_02a30b48(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short *psVar4;
  undefined8 *puVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  short sVar16;
  ulong uVar17;
  bool bVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  long *plStack_c8;
  undefined1 auStack_70 [8];
  undefined1 **local_68;
  
  plVar20 = (long *)param_1[1];
  plVar9 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x20,8);
  if (plVar9 == (long *)0x0) {
    plVar20 = (long *)0x0;
    uVar23 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02a311a8;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *(undefined2 *)(plVar9 + 3) = 0x100;
    *plVar9 = 0;
    *(undefined4 *)((long)plVar9 + 0x1c) = 0xffffffff;
    lVar11 = 0;
    if (*param_2 != 0) {
      lVar13 = *(long *)(*param_2 + 0x10);
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar13 + -0x28;
      }
    }
    *plVar9 = lVar11;
    lVar11 = FUN_0168e7c4(lVar11 + 0x108,&local_f0);
    lVar24 = *plVar9;
    local_f0 = auStack_70;
    plVar9[1] = lVar11;
    plVar1 = (long *)(lVar24 + 0x110);
    lVar13 = *plVar1;
    local_68 = &local_f0;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar13) {
      bVar18 = true;
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x118));
            while (*plVar1 == 0) {
              cVar7 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar18) {
                *plVar1 = lVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_02a30c58;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar18) {
          *plVar1 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_02a30c58:
      bVar18 = false;
    }
    lVar11 = FUN_01e21044(&local_68,lVar24 + 0x128);
    if (lVar11 == 0) {
      lVar11 = FUN_01e21044(&local_68,lVar24 + 0x160);
    }
    if (!bVar18) {
      *(undefined8 *)(lVar24 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x118));
    }
    plVar9[2] = lVar11;
    uVar21 = 8;
    uVar23 = 0x20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar5 = (undefined8 *)param_1[7];
  puVar2 = param_1 + 9;
  if (puVar5 < (undefined8 *)param_1[8]) {
    uVar19 = *puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar5 = plVar9;
      puVar5[1] = plVar20;
      puVar5[2] = uVar23;
      puVar5[3] = uVar21;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02a311a8;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar19;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar5 = plVar9;
      puVar5[1] = plVar20;
      puVar5[2] = uVar23;
      puVar5[3] = uVar21;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    param_1[7] = puVar5 + 4;
  }
  else {
    uVar17 = param_1[10];
    lVar10 = (long)puVar5 - param_1[6] >> 5;
    uVar3 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)param_1[8] - param_1[6];
    uVar14 = lVar11 >> 4;
    local_d8 = (undefined1 *)0x0;
    if (uVar3 <= uVar14) {
      uVar3 = uVar14;
    }
    if (uVar17 >> 1 <= (ulong)(lVar11 >> 5)) {
      uVar3 = uVar17;
    }
    local_d0 = puVar2;
    if (uVar3 == 0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      puVar12 = (undefined1 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 << 5,8);
      if (puVar12 == (undefined1 *)0x0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    puVar5 = (undefined8 *)(puVar12 + lVar10 * 0x20);
    local_d8 = puVar12 + uVar3 * 0x20;
    uVar19 = *puVar2;
    local_f0 = puVar12;
    local_e8 = (code *)puVar5;
    local_e0 = (code *)puVar5;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar5 = plVar9;
      puVar5[1] = plVar20;
      puVar5[2] = uVar23;
      puVar5[3] = uVar21;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02a311a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar19;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar5 = plVar9;
      puVar5[1] = plVar20;
      puVar5[2] = uVar23;
      puVar5[3] = uVar21;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    local_e0 = (code *)((long)local_e0 + 0x20);
    puVar12 = (undefined1 *)param_1[6];
    puVar22 = (undefined1 *)param_1[7];
    if (puVar22 == puVar12) {
      puVar22 = puVar12;
    }
    else {
      do {
        pcVar15 = local_e8;
        uVar21 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02a311a8;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        uVar21 = *(undefined8 *)(puVar22 + -0x20);
        *(undefined8 *)(puVar22 + -0x20) = 0;
        *(undefined8 *)((long)pcVar15 + -0x20) = uVar21;
        uVar21 = *(undefined8 *)(puVar22 + -0x18);
        puVar5 = (undefined8 *)(puVar22 + -0x10);
        uVar23 = *(undefined8 *)(puVar22 + -8);
        puVar22 = puVar22 + -0x20;
        *(undefined8 *)((long)pcVar15 + -0x10) = *puVar5;
        *(undefined8 *)((long)pcVar15 + -8) = uVar23;
        *(undefined8 *)((long)pcVar15 + -0x18) = uVar21;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        local_e8 = (code *)((long)local_e8 + -0x20);
      } while (puVar12 != puVar22);
      puVar12 = (undefined1 *)param_1[6];
      puVar22 = (undefined1 *)param_1[7];
    }
    param_1[6] = local_e8;
    param_1[7] = local_e0;
    uVar21 = param_1[8];
    param_1[8] = local_d8;
    local_f0 = puVar12;
    local_e8 = (code *)puVar12;
    local_e0 = (code *)puVar22;
    local_d8 = (undefined1 *)uVar21;
    FUN_02a311e4(&local_f0);
  }
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar4 = (short *)(lVar10 + 0x1a);
    sVar16 = *(short *)(lVar10 + 0x1a);
    do {
      sVar6 = *psVar4;
      if (sVar6 == sVar16) {
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar18) {
          *psVar4 = sVar16 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_02a310a4;
        bVar18 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a310a4:
        bVar18 = false;
      }
      if (bVar18) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return plVar9;
        }
        local_f0 = &LAB_02a31434;
        local_e8 = FUN_02a315c8;
        local_e0 = FUN_02a315cc;
        local_d8 = &LAB_02a315d8;
        pcVar15 = *(code **)(lVar10 + 0x450);
        local_d0 = param_1;
        plStack_c8 = plVar9;
        if (pcVar15 != (code *)0x0) {
          *(undefined8 *)(lVar10 + 0x458) = 0;
          *(undefined8 *)(lVar10 + 0x460) = 0;
          *(undefined8 *)(lVar10 + 0x448) = 0;
          *(undefined8 *)(lVar10 + 0x450) = 0;
          (*pcVar15)(lVar10 + 0x468);
          if (local_e0 == (code *)0x0) goto LAB_02a3113c;
        }
        (*local_e0)(&local_d0,lVar10 + 0x468);
        *(undefined1 **)(lVar10 + 0x460) = local_d8;
        *(undefined8 *)(lVar10 + 0x448) = local_f0;
        *(code **)(lVar10 + 0x450) = local_e8;
        *(code **)(lVar10 + 0x458) = local_e0;
LAB_02a3113c:
        pcVar15 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (code *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar15)(&local_d0);
        }
        lVar11 = *(long *)(lVar10 + 8);
        psVar4 = (short *)(lVar11 + 0x1a);
        do {
          sVar16 = *psVar4;
          cVar7 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar18) {
            *psVar4 = sVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
          return plVar9;
        }
        if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return plVar9;
      }
      sVar16 = sVar6;
    } while (sVar6 != 0);
  }
  return plVar9;
}


