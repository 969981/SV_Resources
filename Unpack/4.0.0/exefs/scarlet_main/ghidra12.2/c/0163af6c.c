/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163af6c; name: FUN_0163af6c
 */


void FUN_0163af6c(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  ulong uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  long *plVar22;
  undefined1 *puVar23;
  long *local_90;
  undefined1 *local_88;
  undefined *local_80;
  undefined *local_78;
  long *local_70;
  undefined8 *puStack_68;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar19 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar19;
  FUN_0163e170(lVar19);
  FUN_0163e37c(lVar19);
  FUN_0163e588(lVar19);
  FUN_0163e794(lVar19);
  FUN_0163e9a0(lVar19);
  FUN_0163ebac(lVar19);
  FUN_0163edb8(lVar19);
  FUN_0163efc4(lVar19);
  plVar20 = *(long **)(lVar19 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0163cf1c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x8178,8);
  if (plVar11 == (long *)0x0) {
    lVar19 = *plVar20;
  }
  else {
    FUN_01645588();
    *(undefined4 *)(plVar11 + 3) = 0x88178;
    plVar11[1] = (long)plVar20;
    plVar11[2] = (long)plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = plVar11[6];
    local_90 = plVar11;
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0163cf20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0163cf40;
    uVar6 = *(ulong *)(lVar19 + 0x1c8);
    plVar11 = (long *)(lVar19 + 0x1c0);
    plVar2 = (long *)(lVar19 + 0x1c8);
    puVar3 = (undefined8 *)(lVar19 + 0x1d8);
    if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
      FUN_01647fa4(puVar3,uVar6,&local_90);
      *plVar2 = uVar6 + 8;
    }
    else {
      uVar18 = *(ulong *)(lVar19 + 0x1e0);
      lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
      uVar6 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar18) {
        uVar18 = 0x7fffffffffffffff;
      }
      if (uVar18 < uVar6) goto LAB_0163d040;
      lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
      uVar17 = lVar14 >> 2;
      local_70 = (long *)0x0;
      if (uVar6 <= uVar17) {
        uVar6 = uVar17;
      }
      if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
        uVar6 = uVar18;
      }
      if (uVar6 == 0) {
        local_88 = (undefined1 *)0x0;
        puStack_68 = puVar3;
      }
      else {
        puStack_68 = puVar3;
        local_88 = (undefined1 *)
                   (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
        if (local_88 == (undefined1 *)0x0) {
          (**(code **)(*(long *)*puVar3 + 0xe8))();
        }
      }
      puVar21 = local_88 + lVar10 * 8;
      plVar20 = (long *)(local_88 + uVar6 * 8);
      local_80 = puVar21;
      local_70 = plVar20;
      FUN_01647fa4(puVar3,puVar21,&local_90);
      local_78 = puVar21 + 8;
      puVar15 = (undefined1 *)*plVar11;
      puVar23 = (undefined1 *)*plVar2;
      if (puVar23 == puVar15) {
        puVar23 = puVar15;
      }
      else {
        do {
          uVar12 = *puVar3;
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            uVar12 = *(undefined8 *)(puVar23 + -8);
            *(undefined8 *)(puVar23 + -8) = 0;
            *(undefined8 *)(puVar21 + -8) = uVar12;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            uVar12 = *(undefined8 *)(puVar23 + -8);
            *(undefined8 *)(puVar23 + -8) = 0;
            *(undefined8 *)(puVar21 + -8) = uVar12;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          puVar23 = puVar23 + -8;
          puVar21 = local_80 + -8;
          local_80 = puVar21;
        } while (puVar15 != puVar23);
        puVar15 = (undefined1 *)*plVar11;
        plVar20 = local_70;
        puVar23 = (undefined1 *)*plVar2;
      }
      *(undefined **)(lVar19 + 0x1c0) = puVar21;
      *(undefined **)(lVar19 + 0x1c8) = local_78;
      local_70 = *(long **)(lVar19 + 0x1d0);
      *(long **)(lVar19 + 0x1d0) = plVar20;
      local_88 = puVar15;
      local_80 = puVar15;
      local_78 = puVar23;
      FUN_0163d9b8(&local_88);
    }
    local_88 = &DAT_e4d07a996e5ef5e8;
    local_80 = &DAT_03c60f6f;
    local_78 = (undefined *)0x4;
    local_70 = (long *)0x0;
    uVar12 = FUN_00f844f4(lVar19,&local_88);
    plVar20 = local_90;
    FUN_0163d06c(uVar12,local_90);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (plVar20 != (long *)0x0) {
      lVar10 = plVar20[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar5 == 0) goto LAB_0163d018;
    }
    FUN_0163f1d0(lVar19);
    FUN_0163f3dc(lVar19);
    FUN_0163f5e8(lVar19);
    FUN_0163f7f4(lVar19);
    FUN_0163fa00(lVar19);
    FUN_0163fc0c(lVar19);
    FUN_0163fe18(lVar19);
    FUN_01640024(lVar19);
    FUN_01640230(lVar19);
    FUN_0164043c(lVar19);
    plVar20 = *(long **)(lVar19 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x128,8);
    if (plVar13 != (long *)0x0) {
      FUN_01641de0();
      *(undefined4 *)(plVar13 + 3) = 0x80128;
      plVar13[1] = (long)plVar20;
      plVar13[2] = (long)plVar13;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      lVar10 = plVar13[6];
      local_90 = plVar13;
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar12;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_0163cf40;
      uVar6 = *(ulong *)(lVar19 + 0x1c8);
      if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
        FUN_01648120(puVar3,uVar6,&local_90);
        *plVar2 = uVar6 + 8;
      }
      else {
        uVar18 = *(ulong *)(lVar19 + 0x1e0);
        lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
        uVar6 = lVar10 + 1;
        if (0x7ffffffffffffffe < uVar18) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 < uVar6) goto LAB_0163d040;
        lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
        uVar17 = lVar14 >> 2;
        local_70 = (long *)0x0;
        if (uVar6 <= uVar17) {
          uVar6 = uVar17;
        }
        if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
          uVar6 = uVar18;
        }
        if (uVar6 == 0) {
          puVar15 = (undefined1 *)0x0;
          puStack_68 = puVar3;
        }
        else {
          puStack_68 = puVar3;
          puVar15 = (undefined1 *)
                    (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
          if (puVar15 == (undefined1 *)0x0) {
            (**(code **)(*(long *)*puVar3 + 0xe8))();
          }
        }
        puVar21 = puVar15 + lVar10 * 8;
        plVar20 = (long *)(puVar15 + uVar6 * 8);
        local_88 = puVar15;
        local_80 = puVar21;
        local_70 = plVar20;
        FUN_01648120(puVar3,puVar21,&local_90);
        local_78 = puVar21 + 8;
        puVar15 = (undefined1 *)*plVar11;
        puVar23 = (undefined1 *)*plVar2;
        if (puVar23 == puVar15) {
          puVar23 = puVar15;
        }
        else {
          do {
            uVar12 = *puVar3;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar10 == 0) {
              uVar12 = *(undefined8 *)(puVar23 + -8);
              *(undefined8 *)(puVar23 + -8) = 0;
              *(undefined8 *)(puVar21 + -8) = uVar12;
            }
            else {
              if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
              *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              uVar12 = *(undefined8 *)(puVar23 + -8);
              *(undefined8 *)(puVar23 + -8) = 0;
              *(undefined8 *)(puVar21 + -8) = uVar12;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            puVar23 = puVar23 + -8;
            puVar21 = local_80 + -8;
            local_80 = puVar21;
          } while (puVar15 != puVar23);
          puVar15 = (undefined1 *)*plVar11;
          plVar20 = local_70;
          puVar23 = (undefined1 *)*plVar2;
        }
        *(undefined **)(lVar19 + 0x1c0) = puVar21;
        *(undefined **)(lVar19 + 0x1c8) = local_78;
        local_70 = *(long **)(lVar19 + 0x1d0);
        *(long **)(lVar19 + 0x1d0) = plVar20;
        local_88 = puVar15;
        local_80 = puVar15;
        local_78 = puVar23;
        FUN_0163d9b8(&local_88);
      }
      local_88 = &DAT_e4d07a996e5ef5e8;
      local_80 = &DAT_03c60f6f;
      local_78 = (undefined *)0x4;
      local_70 = (long *)0x0;
      uVar12 = FUN_00f844f4(lVar19,&local_88);
      plVar20 = local_90;
      FUN_0163d06c(uVar12,local_90);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (plVar20 != (long *)0x0) {
        lVar10 = plVar20[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar20 + 0x50))(plVar20);
        }
        else if (sVar5 == 0) goto LAB_0163d018;
      }
      FUN_01640648(lVar19);
      FUN_01640854(lVar19);
      plVar20 = *(long **)(lVar19 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x758,8);
      if (plVar13 != (long *)0x0) {
        memset(plVar13 + 1,0,0x750);
        puVar21 = PTR_DAT_047d66f8;
        plVar13[2] = 0;
        *(undefined4 *)(plVar13 + 3) = 0;
        *plVar13 = (long)(puVar21 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        puVar21 = PTR_DAT_047d8c78;
        if (lVar14 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          if (*(long *)(lVar14 + 0x80) != 0) {
            lVar16 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8);
          }
        }
        *plVar13 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar13[1] = lVar16;
        plVar13[4] = (long)(puVar21 + 0x88);
        plVar22 = plVar13 + 5;
        *plVar22 = (long)(puVar21 + 0xd8);
        plVar13[7] = 0;
        plVar13[6] = 0;
        FUN_00d1a3f4(plVar13 + 6,plVar22);
        puVar21 = PTR_DAT_047dcc18;
        *plVar13 = (long)(PTR_DAT_047dcc18 + 0x10);
        plVar13[4] = (long)(puVar21 + 0xa0);
        *plVar22 = (long)(puVar21 + 0xf0);
        lVar14 = 0x40;
        while( true ) {
          puVar4 = (undefined4 *)((long)plVar13 + lVar14);
          *puVar4 = 0x1000000;
          *(undefined1 *)(puVar4 + 1) = 0;
          puVar4[2] = 0;
          if (puVar4 + 3 == (undefined4 *)((long)plVar13 + 0x754)) break;
          puVar4[3] = 0x1000000;
          lVar14 = lVar14 + 0x18;
          *(undefined1 *)(puVar4 + 4) = 0;
          puVar4[5] = 0;
        }
        *(undefined1 *)((long)plVar13 + 0x754) = 0x33;
        plVar13[1] = (long)plVar20;
        plVar13[2] = (long)plVar13;
        *(undefined4 *)(plVar13 + 3) = 0x80758;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        lVar10 = plVar13[6];
        local_90 = plVar13;
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar5 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar12;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_0163cf40;
        uVar6 = *(ulong *)(lVar19 + 0x1c8);
        if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
          FUN_0164829c(puVar3,uVar6,&local_90);
          *plVar2 = uVar6 + 8;
        }
        else {
          uVar18 = *(ulong *)(lVar19 + 0x1e0);
          lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
          uVar6 = lVar10 + 1;
          if (0x7ffffffffffffffe < uVar18) {
            uVar18 = 0x7fffffffffffffff;
          }
          if (uVar18 < uVar6) goto LAB_0163d040;
          lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
          uVar17 = lVar14 >> 2;
          local_70 = (long *)0x0;
          if (uVar6 <= uVar17) {
            uVar6 = uVar17;
          }
          if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
            uVar6 = uVar18;
          }
          if (uVar6 == 0) {
            puVar15 = (undefined1 *)0x0;
            puStack_68 = puVar3;
          }
          else {
            puStack_68 = puVar3;
            puVar15 = (undefined1 *)
                      (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
            if (puVar15 == (undefined1 *)0x0) {
              (**(code **)(*(long *)*puVar3 + 0xe8))();
            }
          }
          puVar21 = puVar15 + lVar10 * 8;
          plVar20 = (long *)(puVar15 + uVar6 * 8);
          local_88 = puVar15;
          local_80 = puVar21;
          local_70 = plVar20;
          FUN_0164829c(puVar3,puVar21,&local_90);
          local_78 = puVar21 + 8;
          puVar15 = (undefined1 *)*plVar11;
          puVar23 = (undefined1 *)*plVar2;
          if (puVar23 == puVar15) {
            puVar23 = puVar15;
          }
          else {
            do {
              uVar12 = *puVar3;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar10 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar10 == 0) {
                uVar12 = *(undefined8 *)(puVar23 + -8);
                *(undefined8 *)(puVar23 + -8) = 0;
                *(undefined8 *)(puVar21 + -8) = uVar12;
              }
              else {
                if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                uVar12 = *(undefined8 *)(puVar23 + -8);
                *(undefined8 *)(puVar23 + -8) = 0;
                *(undefined8 *)(puVar21 + -8) = uVar12;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
              }
              puVar23 = puVar23 + -8;
              puVar21 = local_80 + -8;
              local_80 = puVar21;
            } while (puVar15 != puVar23);
            puVar15 = (undefined1 *)*plVar11;
            plVar20 = local_70;
            puVar23 = (undefined1 *)*plVar2;
          }
          *(undefined **)(lVar19 + 0x1c0) = puVar21;
          *(undefined **)(lVar19 + 0x1c8) = local_78;
          local_70 = *(long **)(lVar19 + 0x1d0);
          *(long **)(lVar19 + 0x1d0) = plVar20;
          local_88 = puVar15;
          local_80 = puVar15;
          local_78 = puVar23;
          FUN_0163d9b8(&local_88);
        }
        local_88 = &DAT_e4d07a996e5ef5e8;
        local_80 = &DAT_03c60f6f;
        local_78 = (undefined *)0x4;
        local_70 = (long *)0x0;
        uVar12 = FUN_00f844f4(lVar19,&local_88);
        plVar20 = local_90;
        FUN_0163d06c(uVar12,local_90);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (plVar20 != (long *)0x0) {
          lVar10 = plVar20[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar5 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar5 == 0) goto LAB_0163d018;
        }
        FUN_01640a60(lVar19);
        FUN_01640c6c(lVar19);
        FUN_01640e78(lVar19);
        FUN_01641084(lVar19);
        FUN_01641290(lVar19);
        FUN_0164149c(lVar19);
        FUN_016416a8(lVar19);
        FUN_016418b4(lVar19);
        plVar20 = *(long **)(lVar19 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x46c0,8);
        if (plVar13 != (long *)0x0) {
          FUN_016456f8();
          *(undefined4 *)(plVar13 + 3) = 0x846c0;
          plVar13[1] = (long)plVar20;
          plVar13[2] = (long)plVar13;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          lVar10 = plVar13[6];
          local_90 = plVar13;
          if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar5 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            *(undefined8 *)(lVar10 + 8) = uVar12;
            *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
          }
          else if (sVar5 == -1) goto LAB_0163cf40;
          uVar6 = *(ulong *)(lVar19 + 0x1c8);
          if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
            FUN_01648418(puVar3,uVar6,&local_90);
            *plVar2 = uVar6 + 8;
          }
          else {
            uVar18 = *(ulong *)(lVar19 + 0x1e0);
            lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
            uVar6 = lVar10 + 1;
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            if (uVar18 < uVar6) goto LAB_0163d040;
            lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
            uVar17 = lVar14 >> 2;
            local_70 = (long *)0x0;
            if (uVar6 <= uVar17) {
              uVar6 = uVar17;
            }
            if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
              uVar6 = uVar18;
            }
            if (uVar6 == 0) {
              puVar15 = (undefined1 *)0x0;
              puStack_68 = puVar3;
            }
            else {
              puStack_68 = puVar3;
              puVar15 = (undefined1 *)
                        (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
              if (puVar15 == (undefined1 *)0x0) {
                (**(code **)(*(long *)*puVar3 + 0xe8))();
              }
            }
            puVar21 = puVar15 + lVar10 * 8;
            plVar20 = (long *)(puVar15 + uVar6 * 8);
            local_88 = puVar15;
            local_80 = puVar21;
            local_70 = plVar20;
            FUN_01648418(puVar3,puVar21,&local_90);
            local_78 = puVar21 + 8;
            puVar15 = (undefined1 *)*plVar11;
            puVar23 = (undefined1 *)*plVar2;
            if (puVar23 == puVar15) {
              puVar23 = puVar15;
            }
            else {
              do {
                uVar12 = *puVar3;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar10 == 0) {
                  uVar12 = *(undefined8 *)(puVar23 + -8);
                  *(undefined8 *)(puVar23 + -8) = 0;
                  *(undefined8 *)(puVar21 + -8) = uVar12;
                }
                else {
                  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                  *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                  uVar12 = *(undefined8 *)(puVar23 + -8);
                  *(undefined8 *)(puVar23 + -8) = 0;
                  *(undefined8 *)(puVar21 + -8) = uVar12;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                }
                puVar23 = puVar23 + -8;
                puVar21 = local_80 + -8;
                local_80 = puVar21;
              } while (puVar15 != puVar23);
              puVar15 = (undefined1 *)*plVar11;
              plVar20 = local_70;
              puVar23 = (undefined1 *)*plVar2;
            }
            *(undefined **)(lVar19 + 0x1c0) = puVar21;
            *(undefined **)(lVar19 + 0x1c8) = local_78;
            local_70 = *(long **)(lVar19 + 0x1d0);
            *(long **)(lVar19 + 0x1d0) = plVar20;
            local_88 = puVar15;
            local_80 = puVar15;
            local_78 = puVar23;
            FUN_0163d9b8(&local_88);
          }
          local_88 = &DAT_e4d07a996e5ef5e8;
          local_80 = &DAT_03c60f6f;
          local_78 = (undefined *)0x4;
          local_70 = (long *)0x0;
          uVar12 = FUN_00f844f4(lVar19,&local_88);
          plVar20 = local_90;
          FUN_0163d06c(uVar12,local_90);
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          if (plVar20 != (long *)0x0) {
            lVar10 = plVar20[6];
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar5 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar5 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*plVar20 + 0x50))(plVar20);
            }
            else if (sVar5 == 0) goto LAB_0163d018;
          }
          FUN_01641ac0(lVar19);
          plVar20 = *(long **)(lVar19 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xd88,8);
          if (plVar13 != (long *)0x0) {
            FUN_01641efc();
            *(undefined4 *)(plVar13 + 3) = 0x80d88;
            plVar13[1] = (long)plVar20;
            plVar13[2] = (long)plVar13;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            lVar10 = plVar13[6];
            local_90 = plVar13;
            if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar5 = *psVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar5 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar5 == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
              *(undefined8 *)(lVar10 + 8) = uVar12;
              *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) goto LAB_0163cf40;
            uVar6 = *(ulong *)(lVar19 + 0x1c8);
            if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
              FUN_01648594(puVar3,uVar6,&local_90);
              *plVar2 = uVar6 + 8;
            }
            else {
              uVar18 = *(ulong *)(lVar19 + 0x1e0);
              lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
              uVar6 = lVar10 + 1;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              if (uVar18 < uVar6) goto LAB_0163d040;
              lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
              uVar17 = lVar14 >> 2;
              local_70 = (long *)0x0;
              if (uVar6 <= uVar17) {
                uVar6 = uVar17;
              }
              if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
                uVar6 = uVar18;
              }
              if (uVar6 == 0) {
                puVar15 = (undefined1 *)0x0;
                puStack_68 = puVar3;
              }
              else {
                puStack_68 = puVar3;
                puVar15 = (undefined1 *)
                          (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
                if (puVar15 == (undefined1 *)0x0) {
                  (**(code **)(*(long *)*puVar3 + 0xe8))();
                }
              }
              puVar21 = puVar15 + lVar10 * 8;
              plVar20 = (long *)(puVar15 + uVar6 * 8);
              local_88 = puVar15;
              local_80 = puVar21;
              local_70 = plVar20;
              FUN_01648594(puVar3,puVar21,&local_90);
              local_78 = puVar21 + 8;
              puVar15 = (undefined1 *)*plVar11;
              puVar23 = (undefined1 *)*plVar2;
              if (puVar23 == puVar15) {
                puVar23 = puVar15;
              }
              else {
                do {
                  uVar12 = *puVar3;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar10 == 0) {
                    uVar12 = *(undefined8 *)(puVar23 + -8);
                    *(undefined8 *)(puVar23 + -8) = 0;
                    *(undefined8 *)(puVar21 + -8) = uVar12;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                    uVar12 = *(undefined8 *)(puVar23 + -8);
                    *(undefined8 *)(puVar23 + -8) = 0;
                    *(undefined8 *)(puVar21 + -8) = uVar12;
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                  }
                  puVar23 = puVar23 + -8;
                  puVar21 = local_80 + -8;
                  local_80 = puVar21;
                } while (puVar15 != puVar23);
                puVar15 = (undefined1 *)*plVar11;
                plVar20 = local_70;
                puVar23 = (undefined1 *)*plVar2;
              }
              *(undefined **)(lVar19 + 0x1c0) = puVar21;
              *(undefined **)(lVar19 + 0x1c8) = local_78;
              local_70 = *(long **)(lVar19 + 0x1d0);
              *(long **)(lVar19 + 0x1d0) = plVar20;
              local_88 = puVar15;
              local_80 = puVar15;
              local_78 = puVar23;
              FUN_0163d9b8(&local_88);
            }
            local_88 = &DAT_e4d07a996e5ef5e8;
            local_80 = &DAT_03c60f6f;
            local_78 = (undefined *)0x4;
            local_70 = (long *)0x0;
            uVar12 = FUN_00f844f4(lVar19,&local_88);
            plVar20 = local_90;
            FUN_0163d06c(uVar12,local_90);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            if (plVar20 != (long *)0x0) {
              lVar10 = plVar20[6];
              psVar1 = (short *)(lVar10 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar5 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar10 + 0x10) = 0;
                (**(code **)(*plVar20 + 0x50))(plVar20);
              }
              else if (sVar5 == 0) goto LAB_0163d018;
            }
            plVar20 = *(long **)(lVar19 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1300,8);
            if (plVar13 != (long *)0x0) {
              FUN_01645430();
              *(undefined4 *)(plVar13 + 3) = 0x81300;
              plVar13[1] = (long)plVar20;
              plVar13[2] = (long)plVar13;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
              lVar10 = plVar13[6];
              local_90 = plVar13;
              if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
              psVar1 = (short *)(lVar10 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar5 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar5 == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                *(undefined8 *)(lVar10 + 8) = uVar12;
                *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
              }
              else if (sVar5 == -1) goto LAB_0163cf40;
              uVar6 = *(ulong *)(lVar19 + 0x1c8);
              if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
                FUN_01648710(puVar3,uVar6,&local_90);
                *plVar2 = uVar6 + 8;
              }
              else {
                uVar18 = *(ulong *)(lVar19 + 0x1e0);
                lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
                uVar6 = lVar10 + 1;
                if (0x7ffffffffffffffe < uVar18) {
                  uVar18 = 0x7fffffffffffffff;
                }
                if (uVar18 < uVar6) goto LAB_0163d040;
                lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
                uVar17 = lVar14 >> 2;
                local_70 = (long *)0x0;
                if (uVar6 <= uVar17) {
                  uVar6 = uVar17;
                }
                if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
                  uVar6 = uVar18;
                }
                if (uVar6 == 0) {
                  puVar15 = (undefined1 *)0x0;
                  puStack_68 = puVar3;
                }
                else {
                  puStack_68 = puVar3;
                  puVar15 = (undefined1 *)
                            (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
                  if (puVar15 == (undefined1 *)0x0) {
                    (**(code **)(*(long *)*puVar3 + 0xe8))();
                  }
                }
                puVar21 = puVar15 + lVar10 * 8;
                plVar20 = (long *)(puVar15 + uVar6 * 8);
                local_88 = puVar15;
                local_80 = puVar21;
                local_70 = plVar20;
                FUN_01648710(puVar3,puVar21,&local_90);
                local_78 = puVar21 + 8;
                puVar15 = (undefined1 *)*plVar11;
                puVar23 = (undefined1 *)*plVar2;
                if (puVar23 == puVar15) {
                  puVar23 = puVar15;
                }
                else {
                  do {
                    uVar12 = *puVar3;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar10 == 0) {
                      uVar12 = *(undefined8 *)(puVar23 + -8);
                      *(undefined8 *)(puVar23 + -8) = 0;
                      *(undefined8 *)(puVar21 + -8) = uVar12;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                      uVar12 = *(undefined8 *)(puVar23 + -8);
                      *(undefined8 *)(puVar23 + -8) = 0;
                      *(undefined8 *)(puVar21 + -8) = uVar12;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                    }
                    puVar23 = puVar23 + -8;
                    puVar21 = local_80 + -8;
                    local_80 = puVar21;
                  } while (puVar15 != puVar23);
                  puVar15 = (undefined1 *)*plVar11;
                  plVar20 = local_70;
                  puVar23 = (undefined1 *)*plVar2;
                }
                *(undefined **)(lVar19 + 0x1c0) = puVar21;
                *(undefined **)(lVar19 + 0x1c8) = local_78;
                local_70 = *(long **)(lVar19 + 0x1d0);
                *(long **)(lVar19 + 0x1d0) = plVar20;
                local_88 = puVar15;
                local_80 = puVar15;
                local_78 = puVar23;
                FUN_0163d9b8(&local_88);
              }
              local_88 = &DAT_e4d07a996e5ef5e8;
              local_80 = &DAT_03c60f6f;
              local_78 = (undefined *)0x4;
              local_70 = (long *)0x0;
              uVar12 = FUN_00f844f4(lVar19,&local_88);
              plVar20 = local_90;
              FUN_0163d06c(uVar12,local_90);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              if (plVar20 != (long *)0x0) {
                lVar10 = plVar20[6];
                psVar1 = (short *)(lVar10 + 0x1a);
                do {
                  sVar5 = *psVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar5 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar5 == 1) {
                  *(undefined8 *)(lVar10 + 0x10) = 0;
                  (**(code **)(*plVar20 + 0x50))(plVar20);
                }
                else if (sVar5 == 0) goto LAB_0163d018;
              }
              plVar20 = *(long **)(lVar19 + 8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar10 = nn::os::GetTlsValue(DAT_04865a30);
              if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
              *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xc08,8);
              if (plVar13 != (long *)0x0) {
                FUN_0164dcc4();
                *(undefined4 *)(plVar13 + 3) = 0x80c08;
                plVar13[1] = (long)plVar20;
                plVar13[2] = (long)plVar13;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                lVar10 = plVar13[6];
                local_90 = plVar13;
                if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0163cf20;
                psVar1 = (short *)(lVar10 + 0x1a);
                do {
                  sVar5 = *psVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar8) {
                    *psVar1 = sVar5 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar5 == 0) {
                  uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                  *(undefined8 *)(lVar10 + 8) = uVar12;
                  *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
                }
                else if (sVar5 == -1) goto LAB_0163cf40;
                uVar6 = *(ulong *)(lVar19 + 0x1c8);
                if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
                  FUN_0164888c(puVar3,uVar6,&local_90);
                  *plVar2 = uVar6 + 8;
                }
                else {
                  uVar18 = *(ulong *)(lVar19 + 0x1e0);
                  lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
                  uVar6 = lVar10 + 1;
                  if (0x7ffffffffffffffe < uVar18) {
                    uVar18 = 0x7fffffffffffffff;
                  }
                  if (uVar18 < uVar6) goto LAB_0163d040;
                  lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
                  uVar17 = lVar14 >> 2;
                  local_70 = (long *)0x0;
                  if (uVar6 <= uVar17) {
                    uVar6 = uVar17;
                  }
                  if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
                    uVar6 = uVar18;
                  }
                  if (uVar6 == 0) {
                    puVar15 = (undefined1 *)0x0;
                    puStack_68 = puVar3;
                  }
                  else {
                    puStack_68 = puVar3;
                    puVar15 = (undefined1 *)
                              (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar6 << 3,8);
                    if (puVar15 == (undefined1 *)0x0) {
                      (**(code **)(*(long *)*puVar3 + 0xe8))();
                    }
                  }
                  puVar21 = puVar15 + lVar10 * 8;
                  plVar20 = (long *)(puVar15 + uVar6 * 8);
                  local_88 = puVar15;
                  local_80 = puVar21;
                  local_70 = plVar20;
                  FUN_0164888c(puVar3,puVar21,&local_90);
                  local_78 = puVar21 + 8;
                  puVar15 = (undefined1 *)*plVar11;
                  puVar23 = (undefined1 *)*plVar2;
                  if (puVar23 == puVar15) {
                    puVar23 = puVar15;
                  }
                  else {
                    do {
                      uVar12 = *puVar3;
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar10 == 0) {
                        uVar12 = *(undefined8 *)(puVar23 + -8);
                        *(undefined8 *)(puVar23 + -8) = 0;
                        *(undefined8 *)(puVar21 + -8) = uVar12;
                      }
                      else {
                        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                        uVar12 = *(undefined8 *)(puVar23 + -8);
                        *(undefined8 *)(puVar23 + -8) = 0;
                        *(undefined8 *)(puVar21 + -8) = uVar12;
                        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                      }
                      puVar23 = puVar23 + -8;
                      puVar21 = local_80 + -8;
                      local_80 = puVar21;
                    } while (puVar15 != puVar23);
                    puVar15 = (undefined1 *)*plVar11;
                    plVar20 = local_70;
                    puVar23 = (undefined1 *)*plVar2;
                  }
                  *(undefined **)(lVar19 + 0x1c0) = puVar21;
                  *(undefined **)(lVar19 + 0x1c8) = local_78;
                  local_70 = *(long **)(lVar19 + 0x1d0);
                  *(long **)(lVar19 + 0x1d0) = plVar20;
                  local_88 = puVar15;
                  local_80 = puVar15;
                  local_78 = puVar23;
                  FUN_0163d9b8(&local_88);
                }
                local_88 = &DAT_e4d07a996e5ef5e8;
                local_80 = &DAT_03c60f6f;
                local_78 = (undefined *)0x4;
                local_70 = (long *)0x0;
                uVar12 = FUN_00f844f4(lVar19,&local_88);
                plVar20 = local_90;
                FUN_0163d06c(uVar12,local_90);
                if (local_70 != (long *)0x0) {
                  (**(code **)(*local_70 + 0x20))();
                }
                if (plVar20 != (long *)0x0) {
                  lVar10 = plVar20[6];
                  psVar1 = (short *)(lVar10 + 0x1a);
                  do {
                    sVar5 = *psVar1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar5 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar5 == 1) {
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    (**(code **)(*plVar20 + 0x50))(plVar20);
                  }
                  else if (sVar5 == 0) goto LAB_0163d018;
                }
                plVar20 = *(long **)(lVar19 + 8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                plVar13 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xef8,8);
                if (plVar13 != (long *)0x0) {
                  FUN_01641ccc();
                  *(undefined4 *)(plVar13 + 3) = 0x80ef8;
                  plVar13[1] = (long)plVar20;
                  plVar13[2] = (long)plVar13;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                  lVar10 = plVar13[6];
                  local_90 = plVar13;
                  if (*(long *)(lVar10 + 0x10) != 0) {
                    psVar1 = (short *)(lVar10 + 0x1a);
                    do {
                      sVar5 = *psVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar8) {
                        *psVar1 = sVar5 + 1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (sVar5 == 0) {
                      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                      *(undefined8 *)(lVar10 + 8) = uVar12;
                      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
                    }
                    else if (sVar5 == -1) {
LAB_0163cf40:
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl
                                ("count != 0","AddReference",
                                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                 ,0x58,"Reference counter overflows.");
                    }
                    uVar6 = *(ulong *)(lVar19 + 0x1c8);
                    if (uVar6 < *(ulong *)(lVar19 + 0x1d0)) {
                      FUN_01648a08(puVar3,uVar6,&local_90);
                      *plVar2 = uVar6 + 8;
                    }
                    else {
                      uVar18 = *(ulong *)(lVar19 + 0x1e0);
                      lVar10 = (long)(uVar6 - *(long *)(lVar19 + 0x1c0)) >> 3;
                      uVar6 = lVar10 + 1;
                      if (0x7ffffffffffffffe < uVar18) {
                        uVar18 = 0x7fffffffffffffff;
                      }
                      if (uVar18 < uVar6) {
LAB_0163d040:
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      lVar14 = *(ulong *)(lVar19 + 0x1d0) - *(long *)(lVar19 + 0x1c0);
                      uVar17 = lVar14 >> 2;
                      local_70 = (long *)0x0;
                      if (uVar6 <= uVar17) {
                        uVar6 = uVar17;
                      }
                      if (uVar18 >> 1 <= (ulong)(lVar14 >> 3)) {
                        uVar6 = uVar18;
                      }
                      if (uVar6 == 0) {
                        puVar15 = (undefined1 *)0x0;
                        puStack_68 = puVar3;
                      }
                      else {
                        puStack_68 = puVar3;
                        puVar15 = (undefined1 *)
                                  (**(code **)(*(long *)*puVar3 + 0x10))
                                            ((long *)*puVar3,uVar6 << 3,8);
                        if (puVar15 == (undefined1 *)0x0) {
                          (**(code **)(*(long *)*puVar3 + 0xe8))();
                        }
                      }
                      puVar21 = puVar15 + lVar10 * 8;
                      plVar20 = (long *)(puVar15 + uVar6 * 8);
                      local_88 = puVar15;
                      local_80 = puVar21;
                      local_70 = plVar20;
                      FUN_01648a08(puVar3,puVar21,&local_90);
                      local_78 = puVar21 + 8;
                      puVar15 = (undefined1 *)*plVar11;
                      puVar23 = (undefined1 *)*plVar2;
                      if (puVar23 == puVar15) {
                        puVar23 = puVar15;
                      }
                      else {
                        do {
                          uVar12 = *puVar3;
                          if (((DAT_04865a38 & 1) == 0) &&
                             (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                            __cxa_guard_release(&DAT_04865a38);
                          }
                          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                          if (lVar10 == 0) {
                            uVar12 = *(undefined8 *)(puVar23 + -8);
                            *(undefined8 *)(puVar23 + -8) = 0;
                            *(undefined8 *)(puVar21 + -8) = uVar12;
                          }
                          else {
                            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0163cf1c;
                            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
                            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                            uVar12 = *(undefined8 *)(puVar23 + -8);
                            *(undefined8 *)(puVar23 + -8) = 0;
                            *(undefined8 *)(puVar21 + -8) = uVar12;
                            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                          }
                          puVar23 = puVar23 + -8;
                          puVar21 = local_80 + -8;
                          local_80 = puVar21;
                        } while (puVar15 != puVar23);
                        puVar15 = (undefined1 *)*plVar11;
                        plVar20 = local_70;
                        puVar23 = (undefined1 *)*plVar2;
                      }
                      *(undefined **)(lVar19 + 0x1c0) = puVar21;
                      *(undefined **)(lVar19 + 0x1c8) = local_78;
                      local_70 = *(long **)(lVar19 + 0x1d0);
                      *(long **)(lVar19 + 0x1d0) = plVar20;
                      local_88 = puVar15;
                      local_80 = puVar15;
                      local_78 = puVar23;
                      FUN_0163d9b8(&local_88);
                    }
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    uVar12 = FUN_00f844f4(lVar19,&local_88);
                    plVar20 = local_90;
                    FUN_0163d06c(uVar12,local_90);
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    if (plVar20 != (long *)0x0) {
                      lVar10 = plVar20[6];
                      psVar1 = (short *)(lVar10 + 0x1a);
                      do {
                        sVar5 = *psVar1;
                        cVar7 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar8) {
                          *psVar1 = sVar5 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (sVar5 == 1) {
                        *(undefined8 *)(lVar10 + 0x10) = 0;
                        (**(code **)(*plVar20 + 0x50))(plVar20);
                      }
                      else if (sVar5 == 0) {
LAB_0163d018:
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl
                                  ("count != std::numeric_limits<uint16_t>::max()",
                                   "ReleaseReference",
                                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                   ,0x60,"Reference counter underflows.");
                      }
                    }
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    FUN_00f844f4(lVar19,&local_88);
                    FUN_0163dae0();
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    FUN_00f844f4(lVar19,&local_88);
                    FUN_0163db10();
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    FUN_00f844f4(lVar19,&local_88);
                    FUN_0163db40();
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    FUN_00f844f4(lVar19,&local_88);
                    FUN_0163db70();
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    thunk_FUN_0163e008(*(undefined8 *)(param_1 + 8));
                    local_88 = &DAT_e4d07a996e5ef5e8;
                    local_80 = &DAT_03c60f6f;
                    local_78 = (undefined *)0x4;
                    local_70 = (long *)0x0;
                    FUN_00f844f4(lVar19,&local_88);
                    FUN_0163dba0();
                    if (local_70 != (long *)0x0) {
                      (**(code **)(*local_70 + 0x20))();
                    }
                    return;
                  }
                  goto LAB_0163cf20;
                }
              }
            }
          }
        }
      }
    }
    lVar19 = *plVar20;
  }
  (**(code **)(lVar19 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
             ,0x40);
}


