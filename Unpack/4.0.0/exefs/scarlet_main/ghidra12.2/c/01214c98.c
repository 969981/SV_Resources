/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01214c98; name: FUN_01214c98
 */


void FUN_01214c98(long param_1,long *param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  short sVar7;
  ushort uVar8;
  char cVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  bool bVar25;
  long lVar26;
  long *plVar27;
  undefined8 *local_320;
  undefined8 uStack_318;
  undefined1 *local_310;
  code *local_308;
  undefined1 *local_300;
  undefined1 *puStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 *local_290;
  undefined8 uStack_288;
  undefined8 *local_280;
  undefined8 uStack_278;
  code *local_270;
  code *local_268;
  code *local_260;
  code *pcStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  int *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 *local_150;
  long *local_148;
  long local_140;
  long lStack_138;
  long local_130;
  long *local_128;
  long *local_120;
  code *local_118;
  undefined1 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  plVar23 = (long *)(param_1 + 0x28);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar23 == 0) {
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar25) {
      *plVar23 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_01214ce0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar23 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar23 == 0) {
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar25) {
            *plVar23 = lVar13;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_01214ce0;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar25) {
      *plVar23 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_01214ce0:
  plVar23 = (long *)*param_2;
  plVar24 = (long *)plVar23[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_012170d4;
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar24;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xb70,0x10);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xe8))(plVar24);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0121829c();
  *(undefined4 *)(plVar14 + 3) = 0x100b70;
  plVar14[1] = (long)plVar24;
  plVar14[2] = (long)plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = plVar14[0x13];
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_0121736c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar25) {
      *psVar1 = sVar7 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar7 == 0) {
    uVar22 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    *(undefined8 *)(lVar13 + 8) = uVar22;
    *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
  }
  else if (sVar7 == -1) goto LAB_0121738c;
  plVar24 = plVar14 + 4;
  (**(code **)(*plVar24 + 0xe8))(plVar24,plVar23);
  (**(code **)(*plVar24 + 0x68))(plVar24);
  local_120 = plVar14;
  FUN_00df8c30(plVar23 + 0x21,&local_120);
  if (local_120 != (long *)0x0) {
    lVar13 = local_120[0x13];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_120 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_01216264;
  }
  (**(code **)(*plVar23 + 0x100))(plVar23,plVar24);
  plVar27 = plVar23 + 0x88;
  lVar26 = *plVar27;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar26) {
    plVar27 = (long *)0x0;
    bVar25 = true;
LAB_01214e18:
    if ((*(byte *)(plVar23 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar23,0,0);
    }
    else {
      (**(code **)(*plVar24 + 0xf8))(plVar24);
    }
    if (!bVar25) {
      *plVar27 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
    }
    lVar13 = plVar14[0x13];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0121736c;
    lVar26 = *param_2;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar7 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar22;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) goto LAB_0121738c;
    lVar13 = plVar14[0x13];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0121736c;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar7 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar22;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) {
LAB_0121738c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar23 = *(long **)(lVar26 + 0x808);
    *(long **)(lVar26 + 0x808) = plVar14;
    if (plVar23 != (long *)0x0) {
      lVar13 = plVar23[0x13];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar25) {
          *psVar1 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar23 + 0x50))();
      }
      else if (sVar7 == 0) goto LAB_01216264;
    }
    lVar13 = plVar14[0x13];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar25) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar7 == 0) {
LAB_01216264:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    lVar26 = *param_2;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,lVar26 + 0x30);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    lVar13 = 0;
    if (lVar26 != 0) {
      lVar13 = lVar26 + 0x28;
    }
    if (local_120[2] == lVar13) {
      FUN_011d6250(&local_80,&local_120);
    }
    plVar23 = local_120;
    if (local_120 != (long *)0x0) {
      plVar24 = local_120 + 3;
      do {
        sVar7 = (short)*plVar24;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar25) {
          *(short *)plVar24 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_120 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_1d0 = (int *)*plVar23;
          FUN_00c44438(lVar13 + 0x8040,&local_1d0);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    lVar26 = *(long *)(*param_2 + 0x800);
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_00c43ef0(&local_120,lVar26 + 0x98);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    lVar13 = 0;
    if (lVar26 != 0) {
      lVar13 = lVar26 + 0x28;
    }
    if (local_120[2] == lVar13) {
      FUN_01218a70(&local_90,&local_120);
    }
    plVar23 = local_120;
    if (local_120 != (long *)0x0) {
      plVar24 = local_120 + 3;
      do {
        sVar7 = (short)*plVar24;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar25) {
          *(short *)plVar24 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_120 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_1d0 = (int *)*plVar23;
          FUN_00c44438(lVar13 + 0x8040,&local_1d0);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    (**(code **)(*plVar14 + 0x18))(&local_120,plVar14);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    if ((long *)local_120[2] == plVar14 + 5) {
      FUN_01218d94(&local_a0,&local_120);
    }
    plVar23 = local_120;
    if (local_120 != (long *)0x0) {
      plVar24 = local_120 + 3;
      do {
        sVar7 = (short)*plVar24;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar25) {
          *(short *)plVar24 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_120 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_1d0 = (int *)*plVar23;
          FUN_00c44438(lVar13 + 0x8040,&local_1d0);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    local_1d0 = (int *)0x0;
    local_1c8 = (code *)0x0;
    FUN_01217ab0(&local_1d0,&local_90);
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_0121778c(&local_100,&local_1d0);
    local_120 = (long *)&LAB_02b663b0;
    local_118 = FUN_021dc4e8;
    local_110 = &LAB_021dc5f8;
    local_108 = FUN_021dc60c;
    pcVar20 = (code *)plVar14[0x149];
    if (pcVar20 == (code *)0x0) {
LAB_01215030:
      (*local_108)(&local_100,plVar14 + 0x14c);
      pcVar20 = local_118;
      plVar14[0x14b] = (long)local_108;
      plVar14[0x148] = (long)local_120;
      plVar14[0x149] = (long)local_118;
      plVar14[0x14a] = (long)local_110;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
        goto LAB_01215e5c;
      }
    }
    else {
      plVar14[0x14a] = 0;
      plVar14[0x14b] = 0;
      plVar14[0x148] = 0;
      plVar14[0x149] = 0;
      (*pcVar20)(plVar14 + 0x14c);
      if (local_108 != (code *)0x0) goto LAB_01215030;
LAB_01215e5c:
      pcVar20 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
      }
    }
    piVar4 = local_1d0;
    if (local_1d0 != (int *)0x0) {
      piVar2 = local_1d0 + 6;
      do {
        sVar7 = (short)*piVar2;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar25) {
          *(short *)piVar2 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar2 = local_1d0 + 7;
        do {
          iVar12 = *piVar2;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar25) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_270 = *(code **)piVar4;
          FUN_00c44438(lVar13 + 0x8040,&local_270);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    local_1d0 = (int *)0x0;
    local_1c8 = (code *)0x0;
    FUN_011a6c54(&local_1d0,&local_80);
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    FUN_011a680c(&local_100,&local_1d0);
    local_120 = (long *)&LAB_010922b0;
    local_118 = FUN_021dc620;
    local_110 = &LAB_021dc730;
    local_108 = FUN_021dc744;
    pcVar20 = (code *)plVar14[0x159];
    if (pcVar20 == (code *)0x0) {
LAB_012150c4:
      (*local_108)(&local_100,plVar14 + 0x15c);
      pcVar20 = local_118;
      plVar14[0x15b] = (long)local_108;
      plVar14[0x158] = (long)local_120;
      plVar14[0x159] = (long)local_118;
      plVar14[0x15a] = (long)local_110;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
        goto LAB_01215e88;
      }
    }
    else {
      plVar14[0x15a] = 0;
      plVar14[0x15b] = 0;
      plVar14[0x158] = 0;
      plVar14[0x159] = 0;
      (*pcVar20)(plVar14 + 0x15c);
      if (local_108 != (code *)0x0) goto LAB_012150c4;
LAB_01215e88:
      pcVar20 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
      }
    }
    piVar4 = local_1d0;
    if (local_1d0 != (int *)0x0) {
      piVar2 = local_1d0 + 6;
      do {
        sVar7 = (short)*piVar2;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar25) {
          *(short *)piVar2 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar2 = local_1d0 + 7;
        do {
          iVar12 = *piVar2;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar25) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_270 = *(code **)piVar4;
          FUN_00c44438(lVar13 + 0x8040,&local_270);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    puVar16 = (ushort *)((long)param_3 - (long)*param_3);
    uVar8 = *puVar16;
    if ((((0xe < uVar8) && (0x10 < uVar8 && puVar16[7] != 0)) && (0x12 < uVar8)) &&
       ((puVar16[8] != 0 && (puVar16[9] != 0)))) {
      puVar5 = (uint *)((long)param_3 + (ulong)puVar16[7]);
      local_150 = (undefined1 *)((long)puVar5 + (ulong)*puVar5);
      FUN_00ea0a7c(&local_148,&local_150);
      plVar10 = local_148;
      plVar27 = (long *)PTR_DAT_047d8b70;
      plVar24 = (long *)PTR_PTR_047d4508;
      plVar23 = (long *)PTR_DAT_047d8b70;
      if (local_148 != (long *)0x0) {
        plVar23 = local_148 + 6;
      }
      local_140 = *plVar23;
      plVar23 = (long *)PTR_PTR_047d4508;
      if (local_148 != (long *)0x0) {
        plVar23 = local_148 + 7;
      }
      lStack_138 = *plVar23;
      if (local_148 == (long *)0x0) {
        local_130 = 0;
      }
      else {
        local_130 = local_148[8];
      }
      local_128 = (long *)0x0;
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))(local_148);
      }
      local_128 = plVar10;
      local_120 = (long *)&LAB_021dcac8;
      local_118 = FUN_02b6693c;
      local_110 = &LAB_02b66940;
      local_108 = (code *)&LAB_02b66944;
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      FUN_01218038(&local_1f0,&local_a0);
      local_1e0 = (undefined8 *)0x0;
      uStack_1d8 = 0;
      FUN_01217ab0(&local_1e0,&local_90);
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      FUN_01217d14(&local_1b0,&local_1f0);
      local_1a0 = 0;
      uStack_198 = 0;
      FUN_0121778c(&local_1a0,&local_1e0);
      local_1d0 = (int *)&LAB_021dcb44;
      local_1c8 = FUN_021dcea4;
      local_1c0 = FUN_021dd088;
      pcStack_1b8 = FUN_021dd0c8;
      local_290 = (undefined8 *)0x0;
      uStack_288 = 0;
      FUN_01218038(&local_290,&local_a0);
      local_280 = (undefined8 *)0x0;
      uStack_278 = 0;
      FUN_01217ab0(&local_280,&local_90);
      local_250 = 0;
      uStack_248 = 0;
      local_260 = (code *)0x0;
      pcStack_258 = (code *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      FUN_01217d14(&local_250,&local_290);
      local_240 = 0;
      uStack_238 = 0;
      FUN_0121778c(&local_240,&local_280);
      local_270 = (code *)&LAB_021dd108;
      local_268 = FUN_021dd428;
      local_260 = FUN_021dd60c;
      pcStack_258 = FUN_021dd64c;
      local_320 = (undefined8 *)0x0;
      uStack_318 = 0;
      FUN_01217ab0(&local_320,&local_90);
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = (undefined1 *)0x0;
      puStack_2f8 = (undefined1 *)0x0;
      local_310 = (undefined1 *)0x0;
      local_308 = (code *)0x0;
      FUN_0121778c(&local_2f0,&local_320);
      local_310 = &LAB_021dd68c;
      local_308 = FUN_021dd750;
      local_300 = &LAB_021dd860;
      puStack_2f8 = &LAB_021dd874;
      FUN_012190b8(plVar14,0,&local_140,&local_120,&local_1d0,&local_270,&local_310);
      pcVar20 = local_308;
      if (local_308 != (code *)0x0) {
        local_300 = (undefined1 *)0x0;
        puStack_2f8 = (undefined1 *)0x0;
        local_310 = (undefined1 *)0x0;
        local_308 = (code *)0x0;
        (*pcVar20)(&local_2f0);
      }
      puVar6 = local_320;
      if (local_320 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_320 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_320 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_70[0] = *puVar6;
            FUN_00c44438(lVar13 + 0x8040,local_70);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_268;
      if (local_268 != (code *)0x0) {
        local_260 = (code *)0x0;
        pcStack_258 = (code *)0x0;
        local_270 = (code *)0x0;
        local_268 = (code *)0x0;
        (*pcVar20)(&local_250);
      }
      puVar6 = local_280;
      if (local_280 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_280 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_280 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_290 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_290 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (code *)0x0;
        pcStack_1b8 = (code *)0x0;
        local_1d0 = (int *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar20)(&local_1b0);
      }
      puVar6 = local_1e0;
      if (local_1e0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1e0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1e0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_1f0;
      if (local_1f0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1f0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1f0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (*(ushort *)((long)param_3 - (long)*param_3) < 0x11) {
        local_150 = (undefined1 *)0x0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[8];
        local_150 = (undefined1 *)0x0;
        if (uVar17 != 0) {
          puVar5 = (uint *)((long)param_3 + uVar17);
          local_150 = (undefined1 *)((long)puVar5 + (ulong)*puVar5);
        }
      }
      FUN_00ea0a7c(&local_148,&local_150);
      plVar11 = local_148;
      plVar23 = plVar24;
      plVar10 = plVar27;
      if (local_148 != (long *)0x0) {
        plVar23 = local_148 + 7;
        plVar10 = local_148 + 6;
      }
      local_140 = *plVar10;
      lStack_138 = *plVar23;
      if (local_148 == (long *)0x0) {
        local_130 = 0;
      }
      else {
        local_130 = local_148[8];
      }
      local_128 = (long *)0x0;
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))(local_148);
      }
      local_128 = plVar11;
      local_120 = (long *)&LAB_021dd888;
      local_118 = FUN_02b66948;
      local_110 = &LAB_02b6694c;
      local_108 = (code *)&LAB_02b66950;
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      FUN_01218038(&local_1f0,&local_a0);
      local_1e0 = (undefined8 *)0x0;
      uStack_1d8 = 0;
      FUN_01217ab0(&local_1e0,&local_90);
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      FUN_01217d14(&local_1b0,&local_1f0);
      local_1a0 = 0;
      uStack_198 = 0;
      FUN_0121778c(&local_1a0,&local_1e0);
      local_1d0 = (int *)&LAB_021dd904;
      local_1c8 = FUN_021ddc44;
      local_1c0 = FUN_021dde28;
      pcStack_1b8 = FUN_021dde68;
      local_290 = (undefined8 *)0x0;
      uStack_288 = 0;
      FUN_01218038(&local_290,&local_a0);
      local_280 = (undefined8 *)0x0;
      uStack_278 = 0;
      FUN_01217ab0(&local_280,&local_90);
      local_250 = 0;
      uStack_248 = 0;
      local_260 = (code *)0x0;
      pcStack_258 = (code *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      FUN_01217d14(&local_250,&local_290);
      local_240 = 0;
      uStack_238 = 0;
      FUN_0121778c(&local_240,&local_280);
      local_270 = (code *)&LAB_021ddea8;
      local_268 = FUN_021de1c0;
      local_260 = FUN_021de3a4;
      pcStack_258 = FUN_021de3e4;
      local_320 = (undefined8 *)0x0;
      uStack_318 = 0;
      FUN_01217ab0(&local_320,&local_90);
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = (undefined1 *)0x0;
      puStack_2f8 = (undefined1 *)0x0;
      local_310 = (undefined1 *)0x0;
      local_308 = (code *)0x0;
      FUN_0121778c(&local_2f0,&local_320);
      local_310 = &LAB_021de424;
      local_308 = FUN_021de574;
      local_300 = &LAB_021de684;
      puStack_2f8 = &LAB_021de698;
      FUN_012190b8(plVar14,1,&local_140,&local_120,&local_1d0,&local_270,&local_310);
      pcVar20 = local_308;
      if (local_308 != (code *)0x0) {
        local_300 = (undefined1 *)0x0;
        puStack_2f8 = (undefined1 *)0x0;
        local_310 = (undefined1 *)0x0;
        local_308 = (code *)0x0;
        (*pcVar20)(&local_2f0);
      }
      puVar6 = local_320;
      if (local_320 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_320 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_320 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_70[0] = *puVar6;
            FUN_00c44438(lVar13 + 0x8040,local_70);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_268;
      if (local_268 != (code *)0x0) {
        local_260 = (code *)0x0;
        pcStack_258 = (code *)0x0;
        local_270 = (code *)0x0;
        local_268 = (code *)0x0;
        (*pcVar20)(&local_250);
      }
      puVar6 = local_280;
      if (local_280 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_280 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_280 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_290 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_290 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (code *)0x0;
        pcStack_1b8 = (code *)0x0;
        local_1d0 = (int *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar20)(&local_1b0);
      }
      puVar6 = local_1e0;
      if (local_1e0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1e0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1e0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_1f0;
      if (local_1f0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1f0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1f0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
      if (*(ushort *)((long)param_3 - (long)*param_3) < 0x13) {
        local_150 = (undefined1 *)0x0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[9];
        local_150 = (undefined1 *)0x0;
        if (uVar17 != 0) {
          puVar5 = (uint *)((long)param_3 + uVar17);
          local_150 = (undefined1 *)((long)puVar5 + (ulong)*puVar5);
        }
      }
      FUN_00ea0a7c(&local_148,&local_150);
      plVar23 = local_148;
      if (local_148 != (long *)0x0) {
        plVar24 = local_148 + 7;
        plVar27 = local_148 + 6;
      }
      local_140 = *plVar27;
      lStack_138 = *plVar24;
      if (local_148 == (long *)0x0) {
        local_130 = 0;
      }
      else {
        local_130 = local_148[8];
      }
      local_128 = (long *)0x0;
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x18))(local_148);
      }
      local_128 = plVar23;
      local_120 = (long *)&LAB_021de6ac;
      local_118 = FUN_02b66954;
      local_110 = &LAB_02b66958;
      local_108 = (code *)&LAB_02b6695c;
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      FUN_01218038(&local_1f0,&local_a0);
      local_1e0 = (undefined8 *)0x0;
      uStack_1d8 = 0;
      FUN_01217ab0(&local_1e0,&local_90);
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      FUN_01217d14(&local_1b0,&local_1f0);
      local_1a0 = 0;
      uStack_198 = 0;
      FUN_0121778c(&local_1a0,&local_1e0);
      local_1d0 = (int *)&LAB_021de728;
      local_1c8 = FUN_021dea68;
      local_1c0 = FUN_021dec4c;
      pcStack_1b8 = FUN_021dec8c;
      local_290 = (undefined8 *)0x0;
      uStack_288 = 0;
      FUN_01218038(&local_290,&local_a0);
      local_280 = (undefined8 *)0x0;
      uStack_278 = 0;
      FUN_01217ab0(&local_280,&local_90);
      local_250 = 0;
      uStack_248 = 0;
      local_260 = (code *)0x0;
      pcStack_258 = (code *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      FUN_01217d14(&local_250,&local_290);
      local_240 = 0;
      uStack_238 = 0;
      FUN_0121778c(&local_240,&local_280);
      local_270 = thunk_FUN_017ee800;
      local_268 = FUN_021deccc;
      local_260 = FUN_021deeb0;
      pcStack_258 = FUN_021deef0;
      local_320 = (undefined8 *)0x0;
      uStack_318 = 0;
      FUN_01217ab0(&local_320,&local_90);
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = (undefined1 *)0x0;
      puStack_2f8 = (undefined1 *)0x0;
      local_310 = (undefined1 *)0x0;
      local_308 = (code *)0x0;
      FUN_0121778c(&local_2f0,&local_320);
      local_310 = &LAB_021def30;
      local_308 = FUN_021df080;
      local_300 = &LAB_021df190;
      puStack_2f8 = &LAB_021df1a4;
      FUN_012190b8(plVar14,2,&local_140,&local_120,&local_1d0,&local_270,&local_310);
      pcVar20 = local_308;
      if (local_308 != (code *)0x0) {
        local_300 = (undefined1 *)0x0;
        puStack_2f8 = (undefined1 *)0x0;
        local_310 = (undefined1 *)0x0;
        local_308 = (code *)0x0;
        (*pcVar20)(&local_2f0);
      }
      puVar6 = local_320;
      if (local_320 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_320 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_320 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_70[0] = *puVar6;
            FUN_00c44438(lVar13 + 0x8040,local_70);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_268;
      if (local_268 != (code *)0x0) {
        local_260 = (code *)0x0;
        pcStack_258 = (code *)0x0;
        local_270 = (code *)0x0;
        local_268 = (code *)0x0;
        (*pcVar20)(&local_250);
      }
      puVar6 = local_280;
      if (local_280 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_280 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_280 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_290 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_290 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_310 = (undefined1 *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_310);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (code *)0x0;
        pcStack_1b8 = (code *)0x0;
        local_1d0 = (int *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar20)(&local_1b0);
      }
      puVar6 = local_1e0;
      if (local_1e0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1e0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1e0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      puVar6 = local_1f0;
      if (local_1f0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1f0 + 3);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar25) {
            *psVar1 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar4 = (int *)((long)local_1f0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar9 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar25) {
              *piVar4 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_270 = (code *)*puVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_270);
          }
        }
        else if (sVar7 == 0) goto LAB_01215db0;
      }
      pcVar20 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar20)(&local_100);
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 0x20))();
      }
    }
    local_120 = (long *)&LAB_021df1b8;
    local_118 = FUN_02b66960;
    local_110 = &LAB_02b66964;
    local_108 = (code *)&LAB_02b66968;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    FUN_01217ab0(&local_270,&local_90);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = (code *)0x0;
    pcStack_1b8 = (code *)0x0;
    local_1d0 = (int *)0x0;
    local_1c8 = (code *)0x0;
    FUN_0121778c(&local_1b0,&local_270);
    local_1d0 = (int *)&LAB_021df234;
    local_1c8 = FUN_021df348;
    local_1c0 = (code *)&LAB_021df458;
    pcStack_1b8 = (code *)&LAB_021df46c;
    FUN_0121848c(plVar14,4,&local_120,&local_1d0);
    pcVar20 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar20)(&local_1b0);
    }
    pcVar20 = local_270;
    if (local_270 != (code *)0x0) {
      pcVar3 = local_270 + 0x18;
      do {
        sVar7 = *(short *)pcVar3;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar25) {
          *(short *)pcVar3 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        pcVar3 = local_270 + 0x1c;
        do {
          iVar12 = *(int *)pcVar3;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar25) {
            *(int *)pcVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_310 = *(undefined1 **)pcVar20;
          FUN_00c44438(lVar13 + 0x8040,&local_310);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    pcVar20 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar20)(&local_100);
    }
    local_120 = (long *)&LAB_021df480;
    local_118 = FUN_02b6696c;
    local_110 = &LAB_02b66970;
    local_108 = (code *)&LAB_02b66974;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    FUN_01217ab0(&local_270,&local_90);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = (code *)0x0;
    pcStack_1b8 = (code *)0x0;
    local_1d0 = (int *)0x0;
    local_1c8 = (code *)0x0;
    FUN_0121778c(&local_1b0,&local_270);
    local_1d0 = (int *)&LAB_021df4fc;
    local_1c8 = FUN_021df5d4;
    local_1c0 = (code *)&LAB_021df6e4;
    pcStack_1b8 = (code *)&LAB_021df6f8;
    FUN_0121848c(plVar14,6,&local_120,&local_1d0);
    pcVar20 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar20)(&local_1b0);
    }
    pcVar20 = local_270;
    if (local_270 != (code *)0x0) {
      pcVar3 = local_270 + 0x18;
      do {
        sVar7 = *(short *)pcVar3;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar25) {
          *(short *)pcVar3 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        pcVar3 = local_270 + 0x1c;
        do {
          iVar12 = *(int *)pcVar3;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar25) {
            *(int *)pcVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_310 = *(undefined1 **)pcVar20;
          FUN_00c44438(lVar13 + 0x8040,&local_310);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    pcVar20 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar20)(&local_100);
    }
    local_120 = (long *)&LAB_021df70c;
    local_118 = FUN_02b66978;
    local_110 = &LAB_02b6697c;
    local_108 = (code *)&LAB_02b66980;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    FUN_01217ab0(&local_270,&local_90);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = (code *)0x0;
    pcStack_1b8 = (code *)0x0;
    local_1d0 = (int *)0x0;
    local_1c8 = (code *)0x0;
    FUN_0121778c(&local_1b0,&local_270);
    local_1d0 = (int *)&LAB_021df788;
    local_1c8 = FUN_021df9f0;
    local_1c0 = (code *)&LAB_021dfb00;
    pcStack_1b8 = (code *)&LAB_021dfb14;
    FUN_0121848c(plVar14,5,&local_120,&local_1d0);
    pcVar20 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (code *)0x0;
      pcStack_1b8 = (code *)0x0;
      local_1d0 = (int *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar20)(&local_1b0);
    }
    pcVar20 = local_270;
    if (local_270 != (code *)0x0) {
      pcVar3 = local_270 + 0x18;
      do {
        sVar7 = *(short *)pcVar3;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar25) {
          *(short *)pcVar3 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        pcVar3 = local_270 + 0x1c;
        do {
          iVar12 = *(int *)pcVar3;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar25) {
            *(int *)pcVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_310 = *(undefined1 **)pcVar20;
          FUN_00c44438(lVar13 + 0x8040,&local_310);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    pcVar20 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      (*pcVar20)(&local_100);
    }
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      local_120 = (long *)*param_2;
      local_1d0 = param_3;
      (**(code **)(param_1 + 0xa0))(param_1 + 0xc0,&local_120,&local_1d0);
    }
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    lVar13 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = lVar13;
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x48);
    puVar6 = (undefined8 *)0x0;
    if (lVar13 != 0) {
      puVar6 = (undefined8 *)(lVar13 + 0x38);
    }
    if (3 < (ulong)plVar14[0x16d]) {
LAB_012170d4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar14[plVar14[0x16d] + 0x169] = (long)puVar6;
    plVar14[0x16d] = plVar14[0x16d] + 1;
    (**(code **)*puVar6)(puVar6,plVar14);
    plVar23 = *(long **)(param_1 + 0x48);
    lVar13 = *param_2;
    if (plVar23 < *(long **)(param_1 + 0x50)) {
      uVar22 = *(undefined8 *)(param_1 + 0x58);
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar26 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar26 == 0) {
        *plVar23 = lVar13;
      }
      else {
        if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_012170d4;
        *(undefined8 *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = uVar22;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        *plVar23 = lVar13;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x48) = plVar23 + 1;
    }
    else {
      uVar21 = *(ulong *)(param_1 + 0x60);
      lVar26 = (long)plVar23 - *(long *)(param_1 + 0x40) >> 3;
      uVar17 = lVar26 + 1;
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar21 < uVar17) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = (long)*(long **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
      uVar19 = lVar18 >> 2;
      if (uVar17 <= uVar19) {
        uVar17 = uVar19;
      }
      if (uVar21 >> 1 <= (ulong)(lVar18 >> 3)) {
        uVar17 = uVar21;
      }
      if (uVar17 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
                           (*(long **)(param_1 + 0x58),uVar17 << 3,8);
        if (lVar18 == 0) {
          (**(code **)(**(long **)(param_1 + 0x58) + 0xe8))();
        }
      }
      uVar22 = *(undefined8 *)(param_1 + 0x58);
      plVar23 = (long *)(lVar18 + lVar26 * 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar26 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar26 == 0) {
        *plVar23 = lVar13;
      }
      else {
        if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_012170d4;
        *(undefined8 *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = uVar22;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        *plVar23 = lVar13;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
      }
      lVar13 = *(long *)(param_1 + 0x40);
      lVar26 = *(long *)(param_1 + 0x48);
      plVar24 = plVar23;
      if (lVar26 != lVar13) {
        do {
          uVar22 = *(undefined8 *)(param_1 + 0x58);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar15 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar15 == 0) {
            plVar24[-1] = *(long *)(lVar26 + -8);
          }
          else {
            if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_012170d4;
            *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar22;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            plVar24[-1] = *(long *)(lVar26 + -8);
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          }
          lVar26 = lVar26 + -8;
          plVar24 = plVar24 + -1;
        } while (lVar13 != lVar26);
        lVar13 = *(long *)(param_1 + 0x40);
      }
      *(long **)(param_1 + 0x40) = plVar24;
      *(long **)(param_1 + 0x48) = plVar23 + 1;
      lVar26 = *(long *)(param_1 + 0x50);
      *(ulong *)(param_1 + 0x50) = lVar18 + uVar17 * 8;
      if (lVar13 != 0) {
        plVar23 = *(long **)(param_1 + 0x58);
        lVar26 = lVar26 - lVar13;
        uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar17 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar13,lVar26,8);
        }
        else {
          FUN_00c48fe8(plVar23,lVar13,lVar26,8);
        }
      }
    }
    puVar6 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar7 = *psVar1;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar25) {
          *psVar1 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_120 = (long *)*puVar6;
          FUN_00c44438(lVar13 + 0x8040,&local_120);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    puVar6 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar7 = *psVar1;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar25) {
          *psVar1 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_90 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_120 = (long *)*puVar6;
          FUN_00c44438(lVar13 + 0x8040,&local_120);
        }
      }
      else if (sVar7 == 0) goto LAB_01215db0;
    }
    puVar6 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar7 = *psVar1;
        cVar9 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar25) {
          *psVar1 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar4 = (int *)((long)local_80 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar25) {
            *piVar4 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_120 = (long *)*puVar6;
          FUN_00c44438(lVar13 + 0x8040,&local_120);
        }
      }
      else if (sVar7 == 0) {
LAB_01215db0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
    return;
  }
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar27 == 0) {
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar25) {
      *plVar27 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_01214e14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
  do {
    if (*plVar27 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x89));
        while (*plVar27 == 0) {
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar25) {
            *plVar27 = lVar13;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_01214e14;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar25) {
      *plVar27 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_01214e14:
  bVar25 = false;
  goto LAB_01214e18;
}


