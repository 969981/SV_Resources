/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da2088; name: FUN_00da2088
 */


void FUN_00da2088(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  undefined1 local_8c [4];
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  plVar18 = *(long **)(param_1 + 8);
  uVar22 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(long *)(param_1 + 0x360) == 0) {
    lVar10 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    lVar10 = 0;
    if (lVar13 != 0) {
      lVar10 = lVar13 + -8;
    }
  }
  cVar5 = *(char *)(param_1 + 0x374);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00da2c24:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar18;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x3f8,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xe8))();
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar21 = *(long *)(param_1 + 0x460);
  FUN_00da2ea0(plVar9,uVar22,lVar10,cVar5 != '\0');
  *plVar9 = (long)&DAT_045eba50;
  plVar9[0x6f] = 0;
  plVar9[4] = (long)&PTR_LAB_045ebb00;
  plVar9[5] = (long)&DAT_045ebb50;
  plVar9[0x70] = 0;
  FUN_00da3c3c(plVar9 + 0x71);
  plVar9[0x78] = 0;
  plVar9[0x77] = 0;
  plVar9[0x76] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar14 = tpidr_el0;
    lVar10 = *(long *)(lVar14 + 0x30);
    if (lVar10 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar10 = DAT_04859430;
      *(long *)(lVar14 + 0x30) = DAT_04859430;
    }
  }
  plVar9[0x79] = lVar10;
  plVar9[0x7a] = 0x1fffffffffffffff;
  local_78 = (long *)plVar9[0x3d];
  plVar9[0x7b] = 0;
  *(undefined4 *)(plVar9 + 0x7c) = 0;
  plVar9[0x7d] = param_1 + 0x380;
  plVar9[0x7e] = 0;
  local_70 = (long *)FUN_00da36fc(&local_80,plVar9[1],&local_78);
  if (local_70 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    local_70[0x37] = local_70[0x37] | 8;
    lVar10 = local_70[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00da2c28;
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar22 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar22;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00da2c48;
  }
  FUN_00da3a8c(plVar9,&local_70);
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00da2864:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00da382c(plVar9 + 0x6f,lVar21);
  if (lVar21 != 0) {
    lVar10 = 0;
    do {
      local_80 = plVar9[0x3d];
      local_88 = 0;
      if (plVar9[0x6c] != 0) {
        lVar14 = *(long *)(plVar9[0x6c] + 0x10);
        local_88 = 0;
        if (lVar14 != 0) {
          local_88 = lVar14 + -8;
        }
      }
      local_8c[0] = *(undefined1 *)((long)plVar9 + 0x374);
      local_78 = (long *)FUN_00da2d2c(auStack_68,plVar9[1],&local_80,&local_88,local_8c);
      if (local_78 == (long *)0x0) {
        local_78 = (long *)0x0;
      }
      else {
        local_78[0x37] = local_78[0x37] | 8;
        lVar14 = local_78[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00da2c28;
        psVar1 = (short *)(lVar14 + 0x1a);
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
          uVar22 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar22;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_00da2c48;
      }
      plVar24 = local_78;
      pcVar15 = (code *)local_78[0x71];
      if (pcVar15 != (code *)0x0) {
        local_78[0x72] = 0;
        local_78[0x73] = 0;
        local_78[0x70] = 0;
        local_78[0x71] = 0;
        (*pcVar15)(local_78 + 0x74);
      }
      plVar24[0x74] = (long)plVar9;
      plVar24[0x75] = (long)plVar24;
      plVar23 = plVar24 + 0x3a;
      *(int *)(plVar24 + 0x76) = (int)lVar10;
      plVar24[0x70] = (long)&LAB_02dfda40;
      plVar24[0x71] = (long)&LAB_02dfdb18;
      plVar24[0x72] = (long)&LAB_02dfdb1c;
      plVar24[0x73] = (long)&LAB_02dfdb30;
      lVar14 = nn::os::GetCurrentThread();
LAB_00da2374:
      if (*plVar23 == 0) goto code_r0x00da237c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x3b));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x3b));
            while (*plVar23 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *plVar23 = lVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00da2384;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00da2384:
      plVar23 = plVar9;
      if ((long *)plVar9[0x35] != (long *)0x0) {
        plVar23 = (long *)plVar9[0x35];
      }
      plVar2 = plVar9;
      if ((long *)plVar9[0x36] != (long *)0x0) {
        plVar2 = (long *)plVar9[0x36];
      }
      if (plVar23 == plVar2) goto LAB_00da2c70;
      FUN_00da3100(plVar24);
      plVar23 = (long *)plVar9[0x70];
      if (plVar23 < (long *)plVar9[0x71]) {
        lVar14 = plVar9[0x72];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          *plVar23 = (long)local_78;
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00da2c24;
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *plVar23 = (long)local_78;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        local_78 = (long *)0x0;
        plVar9[0x70] = (long)(plVar23 + 1);
      }
      else {
        FUN_00da3e58(plVar9 + 0x6f,&local_78);
      }
      plVar24[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar24 + 0x3b));
      if (local_78 != (long *)0x0) {
        lVar14 = local_78[6];
        psVar1 = (short *)(lVar14 + 0x1a);
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
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00da2864;
      }
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar21) break;
    } while( true );
  }
  plVar9[0x38] = plVar9[0x38] | 2;
  plVar9[1] = (long)plVar18;
  plVar9[2] = (long)plVar9;
  *(undefined4 *)(plVar9 + 3) = 0x803f8;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar10 = plVar9[6];
  plVar9[0x37] = plVar9[0x37] | 8;
  if (*(long *)(lVar10 + 0x10) != 0) {
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar22 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar22;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_00da2c48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    uVar4 = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(plVar9 + 0x6e) = uVar4;
    plVar18 = plVar9;
    if ((long *)plVar9[0x36] != (long *)0x0) {
      plVar18 = (long *)plVar9[0x36];
    }
    if (plVar18 != plVar9) {
      (**(code **)(*plVar18 + 0x88))(plVar18,uVar4);
    }
    plVar18 = plVar9;
    if ((long *)plVar9[0x35] != (long *)0x0) {
      plVar18 = (long *)plVar9[0x35];
    }
    if (plVar18 != plVar9) {
      (**(code **)(*plVar18 + 0x88))(plVar18,uVar4);
    }
    puVar20 = (undefined8 *)plVar9[0x70];
    for (puVar19 = (undefined8 *)plVar9[0x6f]; puVar19 != puVar20; puVar19 = puVar19 + 1) {
      (**(code **)(*(long *)*puVar19 + 0x88))((long *)*puVar19,uVar4);
    }
    plVar18 = plVar9 + 0x3a;
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar18 == 0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_00da25a0;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x3b));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x3b));
          while (*plVar18 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar6) {
              *plVar18 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00da25a0;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00da25a0:
    lVar10 = param_1;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      lVar10 = *(long *)(param_1 + 0x1a8);
    }
    lVar13 = param_1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      lVar13 = *(long *)(param_1 + 0x1b0);
    }
    if (lVar10 == lVar13) {
LAB_00da2c70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("input != output","InsertDependencyToTarget",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
                 ,700);
    }
    FUN_00da3100(plVar9);
    puVar19 = *(undefined8 **)(param_1 + 0x400);
    if (puVar19 != *(undefined8 **)(param_1 + 0x408)) {
      FUN_00e220f4(plVar9,(*(undefined8 **)(param_1 + 0x408))[-1],0);
      puVar19 = *(undefined8 **)(param_1 + 0x408);
    }
    if (puVar19 < *(undefined8 **)(param_1 + 0x410)) {
      uVar22 = *(undefined8 *)(param_1 + 0x418);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar19 = plVar9;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00da2c24;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar22;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar19 = plVar9;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x408) = puVar19 + 1;
LAB_00da264c:
      plVar9[0x3a] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x3b));
      return;
    }
    uVar17 = *(ulong *)(param_1 + 0x420);
    lVar10 = (long)puVar19 - *(long *)(param_1 + 0x400) >> 3;
    uVar12 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(undefined8 **)(param_1 + 0x410) - *(long *)(param_1 + 0x400);
    uVar16 = lVar13 >> 2;
    if (uVar12 <= uVar16) {
      uVar12 = uVar16;
    }
    if (uVar17 >> 1 <= (ulong)(lVar13 >> 3)) {
      uVar12 = uVar17;
    }
    if (uVar12 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(**(long **)(param_1 + 0x418) + 0x10))
                         (*(long **)(param_1 + 0x418),uVar12 << 3,8);
      if (lVar13 == 0) {
        (**(code **)(**(long **)(param_1 + 0x418) + 0xe8))();
      }
    }
    uVar22 = *(undefined8 *)(param_1 + 0x418);
    puVar19 = (undefined8 *)(lVar13 + lVar10 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar19 = plVar9;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00da2c24;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar22;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar19 = plVar9;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    puVar7 = PTR_LAB_047d3900;
    plVar24 = *(long **)(param_1 + 0x400);
    plVar18 = *(long **)(param_1 + 0x408);
    puVar20 = puVar19;
    if (plVar18 == plVar24) {
      plVar18 = plVar24;
    }
    else {
      do {
        uVar22 = *(undefined8 *)(param_1 + 0x418);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          lVar10 = plVar18[-1];
          plVar18[-1] = 0;
          puVar20[-1] = lVar10;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00da2c24;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar22;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          lVar21 = plVar18[-1];
          plVar18[-1] = 0;
          puVar20[-1] = lVar21;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        plVar18 = plVar18 + -1;
        puVar20 = puVar20 + -1;
      } while (plVar24 != plVar18);
      plVar24 = *(long **)(param_1 + 0x400);
      plVar18 = *(long **)(param_1 + 0x408);
    }
    lVar10 = *(long *)(param_1 + 0x410);
    *(undefined8 **)(param_1 + 0x400) = puVar20;
    *(undefined8 **)(param_1 + 0x408) = puVar19 + 1;
    *(ulong *)(param_1 + 0x410) = lVar13 + uVar12 * 8;
    do {
      while( true ) {
        do {
          if (plVar18 == plVar24) {
            if (plVar24 != (long *)0x0) {
              lVar10 = lVar10 - (long)plVar24;
              plVar18 = *(long **)(param_1 + 0x418);
              uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
              if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                (**(code **)(*plVar18 + 0x18))(plVar18,plVar24,lVar10,8);
              }
              else {
                FUN_00c48fe8(plVar18,plVar24,lVar10,8);
              }
            }
            goto LAB_00da264c;
          }
          plVar18 = plVar18 + -1;
          plVar23 = (long *)*plVar18;
        } while (plVar23 == (long *)0x0);
        lVar13 = plVar23[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 != 1) break;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
    } while (sVar3 != 0);
    goto LAB_00da2864;
  }
LAB_00da2c28:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
code_r0x00da237c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar6) {
    *plVar23 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00da2384;
  goto LAB_00da2374;
}


