/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013d2548; name: FUN_013d2548
 */


void FUN_013d2548(undefined8 *param_1,long *param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long *local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  FUN_00d1a240(param_1,0x800d8080);
  *param_1 = &PTR_LAB_045a9ec8;
  plVar22 = (long *)param_1[1];
  param_1[4] = &PTR_LAB_045aa008;
  param_1[5] = &DAT_045aa130;
  param_1[6] = &PTR_LAB_045aa188;
  param_1[7] = &PTR_LAB_045aa1b0;
  param_1[0x24] = &PTR_LAB_045aa1e8;
  plVar23 = *(long **)(*param_2 + 0x158);
  if (plVar23 != (long *)0x0) {
    plVar10 = plVar23 + 5;
    do {
      lVar9 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) goto LAB_013d2efc;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_013d2f4c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x178,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xe8))(plVar22);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 5;
    do {
      lVar11 = *plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(int *)plVar24 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_013d2efc;
  }
  puVar7 = PTR_DAT_047d66f8;
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar18 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar10[1] = lVar18;
  plVar10[4] = (long)(puVar7 + 0x88);
  plVar25 = plVar10 + 5;
  *plVar25 = (long)(puVar7 + 0xd8);
  plVar24 = plVar10 + 6;
  *plVar24 = 0;
  plVar10[7] = 0;
  FUN_00d1a3f4(plVar24,plVar25);
  *plVar10 = (long)&DAT_045aa688;
  plVar10[4] = (long)&PTR_LAB_045aa700;
  *plVar25 = (long)&DAT_045aa750;
  plVar10[8] = (long)plVar23;
  if (plVar23 != (long *)0x0) {
    plVar25 = plVar23 + 5;
    do {
      lVar11 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) goto LAB_013d2efc;
  }
  plVar10[0xe] = 0;
  plVar10[0xf] = 0;
  plVar10[10] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[0xb] = 0;
  plVar10[9] = 0;
  FUN_013d3140();
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x10] = 0;
  FUN_013d33b0();
  plVar10[0x19] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  FUN_013d3008(plVar10 + 0x19);
  plVar10[0x1e] = 0;
  FUN_013d34ec(plVar10 + 9,0);
  plVar10[0x1f] = 0;
  *(undefined4 *)((long)plVar10 + 0x10c) = 1;
  nn::os::InitializeLightEvent(plVar10 + 0x20,0,1);
  plVar10[0x22] = 0;
  *(undefined4 *)((long)plVar10 + 0x124) = 1;
  nn::os::InitializeLightEvent(plVar10 + 0x23,0,1);
  plVar10[0x25] = 0;
  plVar10[0x26] = 0;
  FUN_013d3278(plVar10 + 0x27);
  FUN_00ddaef8(plVar10 + 0x2c,*(undefined8 *)(param_3 + 8),0);
  *(undefined1 *)(plVar10 + 0x2d) = 0;
  plVar10[0x2e] = -1;
  if ((*PTR_DAT_047dab38 & 1) != 0) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    lVar11 = *(long *)PTR_DAT_047dab48;
    *(long *)PTR_DAT_047dab50 = lVar11;
    plVar25 = *(long **)(lVar11 + 0x140);
    if (plVar25 != (long *)0x0) {
      plVar1 = plVar25 + 5;
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar11 == -1) {
LAB_013d2efc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar1 = plVar25 + 6;
    lVar18 = *plVar1;
    local_90 = plVar10;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar18) {
      lVar11 = nn::os::GetCurrentThread();
LAB_013d2848:
      if (*plVar1 == 0) goto code_r0x013d2850;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar25 + 7));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar25 + 7));
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar11;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_013d2858;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_013d2858:
      lVar11 = plVar25[0x33];
      if (lVar11 == 0) {
        local_88 = plVar25[1];
        FUN_017adf40(&local_80,local_88,&local_88);
        lVar11 = local_80;
        local_80 = 0;
        lVar18 = plVar25[0x33];
        plVar25[0x33] = lVar11;
        if (lVar18 == 0) {
          plVar25[0x35] = local_70;
          plVar25[0x36] = local_68;
          plVar25[0x34] = local_78;
          local_80 = 0;
        }
        else {
          FUN_013d4b20(plVar25 + 0x34);
          lVar11 = local_80;
          plVar25[0x34] = local_78;
          plVar25[0x35] = local_70;
          plVar25[0x36] = local_68;
          local_80 = 0;
          if (lVar11 != 0) {
            FUN_013d4b20(&local_78);
          }
        }
        lVar11 = plVar25[0x33];
      }
LAB_013d2870:
      lVar18 = *(long *)(lVar11 + 0x80) - *(long *)(lVar11 + 0x78);
      if (lVar18 != 0) goto code_r0x013d287c;
      lVar18 = *(long *)(lVar11 + 8);
      puVar3 = *(undefined8 **)(lVar11 + 0x10);
      if (puVar3 < *(undefined8 **)(lVar11 + 0x18)) {
        uVar13 = *(undefined8 *)(lVar11 + 0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_013d2f4c;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar13;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[3] = &LAB_02b74ebc;
        puVar3[4] = local_90;
        puVar3[2] = &LAB_02b74eb0;
        *puVar3 = &LAB_02b74ea0;
        puVar3[1] = &LAB_02b74eac;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *(undefined8 **)(lVar11 + 0x10) = puVar3 + 0x10;
      }
      else {
        FUN_013d3728(lVar11 + 8,&local_90);
      }
      uVar26 = (long)puVar3 - lVar18 >> 7;
LAB_013d2a08:
      *(ulong *)(lVar11 + 0xb0) = uVar26 + 1;
      goto LAB_013d2a10;
    }
    uVar20 = FUN_013d4838(plVar25,&local_90);
LAB_013d2a94:
    plVar1 = plVar25 + 5;
    plVar10[0x2e] = uVar20;
    do {
      lVar11 = *plVar1;
      iVar8 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      goto LAB_013d2ab4;
    }
    if ((int)lVar11 != 0) goto LAB_013d2ab4;
LAB_013d2c5c:
    pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar15 = "DecrementReferenceInternal";
    pcVar16 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar17 = "Reference counter underflows.";
    goto LAB_013d2f44;
  }
LAB_013d2ab4:
  if (plVar23 == (long *)0x0) {
    *plVar10 = (long)&DAT_045aa568;
    plVar10[4] = (long)&PTR_LAB_045aa5e0;
    plVar10[5] = (long)&DAT_045aa630;
  }
  else {
    plVar25 = plVar23 + 5;
    do {
      lVar11 = *plVar25;
      iVar8 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar11 == 0) goto LAB_013d2c5c;
    *plVar10 = (long)&DAT_045aa568;
    plVar10[4] = (long)&PTR_LAB_045aa5e0;
    plVar10[5] = (long)&DAT_045aa630;
    do {
      lVar11 = *plVar25;
      iVar8 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar11 == 0) goto LAB_013d2c5c;
  }
  plVar10[1] = (long)plVar22;
  plVar10[2] = (long)plVar10;
  *(undefined4 *)(plVar10 + 3) = 0x80178;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_013d2f04;
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar13;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_013d2b24:
    *(undefined4 *)(param_1 + 0x26) = param_4;
    param_1[0x27] = plVar10;
    param_1[0x24] = &PTR_LAB_045aa7a8;
    param_1[0x25] = &LAB_02b7477c;
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_013d2f04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar13;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_013d2b74:
      param_1[0x28] = param_1 + 0x29;
      lVar9 = *plVar24;
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      *param_1 = &PTR_LAB_045a9ec8;
      param_1[4] = &PTR_LAB_045aa008;
      param_1[5] = &DAT_045aa130;
      param_1[6] = &PTR_LAB_045aa188;
      param_1[7] = &PTR_LAB_045aa1b0;
      param_1[0x24] = &PTR_LAB_045aa1e8;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      FUN_013d3008(param_1 + 0x2b);
      return;
    }
    if (sVar4 != -1) goto LAB_013d2b74;
  }
  else if (sVar4 != -1) goto LAB_013d2b24;
  pcVar14 = "count != 0";
  pcVar15 = "AddReference";
  pcVar16 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
  ;
  pcVar17 = "Reference counter overflows.";
LAB_013d2f44:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
code_r0x013d2850:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar11;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_013d2858;
  goto LAB_013d2848;
code_r0x013d287c:
  uVar26 = *(ulong *)(*(long *)(lVar11 + 0x80) + -8);
  *(long *)(lVar11 + 0x80) = lVar18 + *(long *)(lVar11 + 0x78) + -8;
  uVar20 = uVar26 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar11 + 0x40) + uVar20) =
       *(ulong *)(*(long *)(lVar11 + 0x40) + uVar20) & (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU)
  ;
  if (uVar26 < (ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 7))
  goto code_r0x013d28b8;
  goto LAB_013d2870;
code_r0x013d28b8:
  puVar3 = (undefined8 *)(*(long *)(lVar11 + 8) + uVar26 * 0x80);
  pcVar19 = (code *)puVar3[1];
  if (pcVar19 != (code *)0x0) {
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    (*pcVar19)(puVar3 + 4);
  }
  puVar3[4] = local_90;
  *puVar3 = &LAB_02b74ea0;
  puVar3[1] = &LAB_02b74eac;
  puVar3[2] = &LAB_02b74eb0;
  puVar3[3] = &LAB_02b74ebc;
  if (*(ulong *)(lVar11 + 0xb0) <= uVar26) goto LAB_013d2a08;
LAB_013d2a10:
  local_80 = 0;
  do {
    lVar11 = plVar25[0x2c] - plVar25[0x2b];
    local_78 = uVar26;
    if (lVar11 == 0) {
      uVar20 = plVar25[0x1e] - plVar25[0x1d] >> 4;
      FUN_013d2fe0(plVar25 + 0x1d,&local_80);
LAB_013d2a7c:
      plVar25[0x32] = uVar20 + 1;
      goto LAB_013d2a84;
    }
    uVar20 = *(ulong *)(plVar25[0x2c] + -8);
    plVar25[0x2c] = lVar11 + plVar25[0x2b] + -8;
    uVar21 = uVar20 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(plVar25[0x24] + uVar21) =
         *(ulong *)(plVar25[0x24] + uVar21) & (1L << (uVar20 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(plVar25[0x1e] - plVar25[0x1d] >> 4) <= uVar20);
  puVar3 = (undefined8 *)(plVar25[0x1d] + uVar20 * 0x10);
  *puVar3 = 0;
  puVar3[1] = uVar26;
  if ((ulong)plVar25[0x32] <= uVar20) goto LAB_013d2a7c;
LAB_013d2a84:
  plVar25[6] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar25 + 7));
  goto LAB_013d2a94;
}


