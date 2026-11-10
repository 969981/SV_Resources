/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0130702c; name: FUN_0130702c
 */


void FUN_0130702c(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined1 local_8c [4];
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  plVar19 = *(long **)(param_1 + 8);
  uVar22 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(long *)(param_1 + 0x360) == 0) {
    lVar9 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar9 = lVar11 + -8;
    }
  }
  cVar5 = *(char *)(param_1 + 0x374);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01307be8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar19;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x3f8,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar21 = *(long *)(param_1 + 0x460);
  FUN_00da2ea0(plVar8,uVar22,lVar9,cVar5 != '\0');
  *plVar8 = (long)&PTR_FUN_045eac30;
  plVar8[4] = (long)&PTR_LAB_045eace0;
  plVar8[5] = (long)&DAT_045ead30;
  FUN_01307cf0();
  plVar8[0x78] = 0;
  plVar8[0x77] = 0;
  plVar8[0x76] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar12 = tpidr_el0;
    lVar9 = *(long *)(lVar12 + 0x30);
    if (lVar9 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar12 + 0x30) = DAT_04859430;
    }
  }
  plVar8[0x79] = lVar9;
  plVar8[0x7a] = 0x1fffffffffffffff;
  local_78 = (long *)plVar8[0x3d];
  plVar8[0x7b] = 0;
  *(undefined4 *)(plVar8 + 0x7c) = 0;
  plVar8[0x7d] = param_1 + 0x380;
  plVar8[0x7e] = 0;
  local_70 = (long *)FUN_00da36fc(&local_80,plVar8[1],&local_78);
  if (local_70 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    local_70[0x37] = local_70[0x37] | 8;
    lVar9 = local_70[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01307bec;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar22;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_01307c0c;
  }
  FUN_00da3a8c(plVar8,&local_70);
  if (local_70 != (long *)0x0) {
    lVar9 = local_70[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01307858:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00da382c(plVar8 + 0x6f,lVar21);
  if (lVar21 != 0) {
    lVar9 = 0;
    do {
      local_80 = plVar8[0x3d];
      local_88 = 0;
      if (plVar8[0x6c] != 0) {
        lVar12 = *(long *)(plVar8[0x6c] + 0x10);
        local_88 = 0;
        if (lVar12 != 0) {
          local_88 = lVar12 + -8;
        }
      }
      local_8c[0] = *(undefined1 *)((long)plVar8 + 0x374);
      local_78 = (long *)FUN_00da2d2c(auStack_68,plVar8[1],&local_80,&local_88,local_8c);
      if (local_78 == (long *)0x0) {
        local_78 = (long *)0x0;
      }
      else {
        local_78[0x37] = local_78[0x37] | 8;
        lVar12 = local_78[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_01307bec;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar22;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_01307c0c;
      }
      plVar18 = local_78;
      pcVar13 = (code *)local_78[0x71];
      if (pcVar13 != (code *)0x0) {
        local_78[0x72] = 0;
        local_78[0x73] = 0;
        local_78[0x70] = 0;
        local_78[0x71] = 0;
        (*pcVar13)(local_78 + 0x74);
      }
      plVar18[0x70] = (long)&LAB_02de8548;
      plVar18[0x71] = (long)&LAB_02de8620;
      plVar18[0x72] = (long)&LAB_02de8624;
      plVar18[0x74] = (long)plVar8;
      plVar18[0x75] = (long)plVar18;
      plVar23 = plVar18 + 0x3a;
      *(int *)(plVar18 + 0x76) = (int)lVar9;
      plVar18[0x73] = (long)&LAB_02de8638;
      lVar12 = nn::os::GetCurrentThread();
LAB_0130730c:
      if (*plVar23 == 0) goto code_r0x01307314;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x3b));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar18 + 0x3b));
            while (*plVar23 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *plVar23 = lVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0130731c;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0130731c:
      plVar23 = plVar8;
      if ((long *)plVar8[0x35] != (long *)0x0) {
        plVar23 = (long *)plVar8[0x35];
      }
      plVar2 = plVar8;
      if ((long *)plVar8[0x36] != (long *)0x0) {
        plVar2 = (long *)plVar8[0x36];
      }
      if (plVar23 == plVar2) goto LAB_01307c34;
      FUN_00da3100(plVar18);
      plVar23 = (long *)plVar8[0x70];
      if (plVar23 < (long *)plVar8[0x71]) {
        lVar12 = plVar8[0x72];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          *plVar23 = (long)local_78;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01307be8;
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar12;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar23 = (long)local_78;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        local_78 = (long *)0x0;
        plVar8[0x70] = (long)(plVar23 + 1);
      }
      else {
        FUN_01313438(plVar8 + 0x6f,&local_78);
      }
      plVar18[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 0x3b));
      if (local_78 != (long *)0x0) {
        lVar12 = local_78[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_01307858;
      }
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar21) break;
    } while( true );
  }
  plVar8[0x38] = plVar8[0x38] | 2;
  *(undefined4 *)(plVar8 + 3) = 0x803f8;
  plVar8[1] = (long)plVar19;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  plVar8[0x37] = plVar8[0x37] | 8;
  lVar9 = plVar8[6];
  local_70 = plVar8;
  if (*(long *)(lVar9 + 0x10) != 0) {
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar22;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_01307c0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar8 = local_70;
    uVar4 = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(local_70 + 0x6e) = uVar4;
    plVar19 = local_70;
    if ((long *)local_70[0x36] != (long *)0x0) {
      plVar19 = (long *)local_70[0x36];
    }
    if (plVar19 != local_70) {
      (**(code **)(*plVar19 + 0x88))(plVar19,uVar4);
    }
    plVar19 = plVar8;
    if ((long *)plVar8[0x35] != (long *)0x0) {
      plVar19 = (long *)plVar8[0x35];
    }
    if (plVar19 != plVar8) {
      (**(code **)(*plVar19 + 0x88))(plVar19,uVar4);
    }
    puVar20 = (undefined8 *)plVar8[0x6f];
    puVar17 = (undefined8 *)plVar8[0x70];
    if ((((puVar20 != puVar17) &&
         ((**(code **)(*(long *)*puVar20 + 0x88))((long *)*puVar20,uVar4), puVar20 + 1 != puVar17))
        && ((**(code **)(*(long *)puVar20[1] + 0x88))((long *)puVar20[1],uVar4),
           puVar20 + 2 != puVar17)) &&
       ((**(code **)(*(long *)puVar20[2] + 0x88))((long *)puVar20[2],uVar4), puVar20 + 3 != puVar17)
       ) {
      (**(code **)(*(long *)puVar20[3] + 0x88))((long *)puVar20[3],uVar4);
      for (puVar20 = puVar20 + 4; puVar20 != puVar17; puVar20 = puVar20 + 1) {
        (**(code **)(*(long *)*puVar20 + 0x88))((long *)*puVar20,uVar4);
      }
    }
    plVar19 = plVar8 + 0x3a;
    lVar9 = nn::os::GetCurrentThread();
    while (*plVar19 == 0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_01307584;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01307584;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01307584:
    lVar9 = param_1;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      lVar9 = *(long *)(param_1 + 0x1a8);
    }
    lVar11 = param_1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      lVar11 = *(long *)(param_1 + 0x1b0);
    }
    if (lVar9 == lVar11) {
LAB_01307c34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("input != output","InsertDependencyToTarget",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
                 ,700);
    }
    FUN_00da3100(plVar8);
    uVar14 = *(ulong *)(param_1 + 0x400);
    if (uVar14 != *(ulong *)(param_1 + 0x408)) {
      FUN_00e220f4(plVar8,*(undefined8 *)(*(ulong *)(param_1 + 0x408) - 8),0);
      uVar14 = *(ulong *)(param_1 + 0x408);
    }
    if (uVar14 < *(ulong *)(param_1 + 0x410)) {
      FUN_01307e90(param_1 + 0x400,&local_70);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x420);
      lVar9 = (long)(uVar14 - *(long *)(param_1 + 0x400)) >> 3;
      uVar14 = lVar9 + 1;
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = *(ulong *)(param_1 + 0x410) - *(long *)(param_1 + 0x400);
      uVar15 = lVar11 >> 2;
      if (uVar14 <= uVar15) {
        uVar14 = uVar15;
      }
      if (uVar16 >> 1 <= (ulong)(lVar11 >> 3)) {
        uVar14 = uVar16;
      }
      if (uVar14 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(**(long **)(param_1 + 0x418) + 0x10))
                           (*(long **)(param_1 + 0x418),uVar14 << 3,8);
        if (lVar11 == 0) {
          (**(code **)(**(long **)(param_1 + 0x418) + 0xe8))();
        }
      }
      puVar20 = (undefined8 *)(lVar11 + lVar9 * 8);
      uVar22 = *(undefined8 *)(param_1 + 0x418);
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 == 0) {
        *puVar20 = local_70;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01307be8;
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar22;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *puVar20 = local_70;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      local_70 = (long *)0x0;
      plVar19 = *(long **)(param_1 + 0x400);
      plVar18 = *(long **)(param_1 + 0x408);
      puVar17 = puVar20;
      if (plVar18 == plVar19) {
        plVar18 = plVar19;
      }
      else {
        do {
          uVar22 = *(undefined8 *)(param_1 + 0x418);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            lVar9 = plVar18[-1];
            plVar18[-1] = 0;
            puVar17[-1] = lVar9;
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01307be8;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar22;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            lVar21 = plVar18[-1];
            plVar18[-1] = 0;
            puVar17[-1] = lVar21;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          plVar18 = plVar18 + -1;
          puVar17 = puVar17 + -1;
        } while (plVar19 != plVar18);
        plVar19 = *(long **)(param_1 + 0x400);
        plVar18 = *(long **)(param_1 + 0x408);
      }
      lVar9 = *(long *)(param_1 + 0x410);
      *(undefined8 **)(param_1 + 0x400) = puVar17;
      *(undefined8 **)(param_1 + 0x408) = puVar20 + 1;
      *(ulong *)(param_1 + 0x410) = lVar11 + uVar14 * 8;
      while (plVar18 != plVar19) {
        plVar18 = plVar18 + -1;
        plVar23 = (long *)*plVar18;
        if (plVar23 != (long *)0x0) {
          lVar11 = plVar23[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar23 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_01307858;
        }
      }
      if (plVar19 != (long *)0x0) {
        plVar18 = *(long **)(param_1 + 0x418);
        lVar9 = lVar9 - (long)plVar19;
        uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar19,lVar9,8);
        }
        else {
          FUN_00c48fe8(plVar18,plVar19,lVar9,8);
        }
      }
    }
    plVar8[0x3a] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
    if (local_70 == (long *)0x0) {
      return;
    }
    lVar9 = local_70[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
      return;
    }
    if (sVar3 != 0) {
      return;
    }
    goto LAB_01307858;
  }
LAB_01307bec:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
code_r0x01307314:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar6) {
    *plVar23 = lVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0130731c;
  goto LAB_0130730c;
}


