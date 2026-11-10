/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d65ac; name: FUN_018d65ac
 */


void FUN_018d65ac(undefined8 *param_1,long *param_2,int param_3,undefined4 param_4)

{
  short *psVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  undefined1 uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long *local_90;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  FUN_00d1a240(param_1,0x800d8080);
  *param_1 = &PTR_LAB_04556ce0;
  plVar27 = (long *)param_1[1];
  param_1[4] = &PTR_LAB_04556e28;
  param_1[5] = &PTR_LAB_04556f50;
  param_1[6] = &PTR_LAB_04556fa8;
  param_1[7] = &PTR_LAB_04556fd0;
  param_1[0x24] = &PTR_LAB_04557008;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_018d7754;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar27;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x178,8);
  puVar9 = PTR_DAT_047d66f8;
  if (plVar12 == (long *)0x0) goto LAB_018d7758;
  plVar12[2] = 0;
  *(undefined4 *)(plVar12 + 3) = 0;
  *plVar12 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  puVar9 = PTR_DAT_047d8c78;
  if (lVar13 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar22 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  *plVar12 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar12[1] = lVar22;
  plVar12[4] = (long)(puVar9 + 0x88);
  plVar28 = plVar12 + 5;
  *plVar28 = (long)(puVar9 + 0xd8);
  plVar14 = plVar12 + 6;
  *plVar14 = 0;
  plVar12[7] = 0;
  FUN_00d1a3f4(plVar14,plVar28);
  *plVar12 = (long)&DAT_045572c8;
  plVar12[4] = (long)&PTR_LAB_04557340;
  *plVar28 = (long)&PTR_LAB_04557390;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  plVar12[0xd] = 0;
  plVar12[0xe] = 0;
  plVar12[0xf] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  lVar13 = tpidr_el0;
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x80) == 0)) ||
      (lVar22 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8), lVar22 == 0)) &&
     (lVar22 = *(long *)(lVar13 + 0x30), lVar22 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar22 = DAT_04859430;
    *(long *)(lVar13 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar12 + 0xf) = 0;
  plVar12[0xc] = lVar22;
  plVar12[0xd] = 0xfffffffffffffff;
  plVar12[0xe] = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x10] = 0;
  FUN_01f576d4();
  plVar12[0x19] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  FUN_01f56460(plVar12 + 0x19);
  plVar12[0x1e] = 0;
  FUN_013d34ec(plVar12 + 9,0);
  plVar12[0x1f] = 0;
  *(undefined4 *)((long)plVar12 + 0x10c) = 1;
  nn::os::InitializeLightEvent(plVar12 + 0x20,0,1);
  plVar12[0x22] = 0;
  *(undefined4 *)((long)plVar12 + 0x124) = 1;
  nn::os::InitializeLightEvent(plVar12 + 0x23,0,1);
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x25] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x80) == 0)) ||
      (lVar22 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8), lVar22 == 0)) &&
     (lVar22 = *(long *)(lVar13 + 0x30), lVar22 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar22 = DAT_04859430;
    *(long *)(lVar13 + 0x30) = DAT_04859430;
  }
  plVar12[0x29] = 0x1fffffffffffffff;
  plVar12[0x2a] = 0;
  plVar12[0x28] = lVar22;
  *(undefined4 *)(plVar12 + 0x2b) = 0;
  FUN_00ddaef8(plVar12 + 0x2c,param_2[1],0);
  *(undefined1 *)(plVar12 + 0x2d) = 0;
  plVar12[0x2e] = -1;
  if ((*PTR_DAT_047dab38 & 1) != 0) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar10 != 0)) {
      FUN_00100190(&LAB_00b592b8,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    lVar13 = *(long *)PTR_DAT_047dab48;
    *(long *)PTR_DAT_047dab50 = lVar13;
    plVar28 = *(long **)(lVar13 + 0x140);
    if (plVar28 != (long *)0x0) {
      plVar26 = plVar28 + 5;
      do {
        lVar13 = *plVar26;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *(int *)plVar26 = (int)lVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar13 == -1) {
        pcVar17 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_018d76a4;
      }
    }
    plVar26 = plVar28 + 6;
    lVar22 = *plVar26;
    local_90 = plVar12;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar22) {
      uVar29 = FUN_01f57bdc(plVar28,&local_90);
    }
    else {
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar26 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar28 + 7));
            while (*plVar26 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar8) {
                *plVar26 = lVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_018d68bc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = lVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_018d68bc:
      lVar13 = plVar28[0x33];
      if (lVar13 == 0) {
        local_68 = plVar28[1];
        FUN_017adf40(&local_88,local_68,&local_68);
        plVar26 = local_88;
        local_88 = (long *)0x0;
        lVar13 = plVar28[0x33];
        plVar28[0x33] = (long)plVar26;
        if (lVar13 == 0) {
          plVar28[0x35] = local_78;
          plVar28[0x36] = local_70;
          plVar28[0x34] = local_80;
          local_88 = (long *)0x0;
        }
        else {
          FUN_013d4b20(plVar28 + 0x34);
          plVar26 = local_88;
          plVar28[0x34] = local_80;
          plVar28[0x35] = local_78;
          plVar28[0x36] = local_70;
          local_88 = (long *)0x0;
          if (plVar26 != (long *)0x0) {
            FUN_013d4b20(&local_80);
          }
        }
        lVar13 = plVar28[0x33];
      }
      local_80 = FUN_0181a89c(lVar13 + 8,&local_90);
      local_88 = (long *)0x0;
      do {
        lVar13 = plVar28[0x2c] - plVar28[0x2b];
        if (lVar13 == 0) {
          uVar29 = plVar28[0x1e] - plVar28[0x1d] >> 4;
          FUN_0158ffa0(plVar28 + 0x1d,&local_88);
          goto LAB_018d6988;
        }
        uVar29 = *(ulong *)(plVar28[0x2c] + -8);
        plVar28[0x2c] = lVar13 + plVar28[0x2b] + -8;
        uVar25 = uVar29 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(plVar28[0x24] + uVar25) =
             *(ulong *)(plVar28[0x24] + uVar25) & (1L << (uVar29 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(plVar28[0x1e] - plVar28[0x1d] >> 4) <= uVar29);
      puVar4 = (undefined8 *)(plVar28[0x1d] + uVar29 * 0x10);
      *puVar4 = 0;
      puVar4[1] = local_80;
      if ((ulong)plVar28[0x32] <= uVar29) {
LAB_018d6988:
        plVar28[0x32] = uVar29 + 1;
      }
      plVar28[6] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar28 + 7));
    }
    plVar26 = plVar28 + 5;
    plVar12[0x2e] = uVar29;
    do {
      lVar13 = *plVar26;
      iVar10 = (int)lVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(int *)plVar26 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      goto LAB_018d69c8;
    }
    if ((int)lVar13 != 0) goto LAB_018d69c8;
LAB_018d772c:
    pcVar17 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar18 = "DecrementReferenceInternal";
    pcVar19 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
    ;
    pcVar20 = "Reference counter underflows.";
    goto LAB_018d774c;
  }
LAB_018d69c8:
  plVar12[2] = (long)plVar12;
  *plVar12 = (long)&DAT_045571a8;
  plVar12[1] = (long)plVar27;
  plVar12[4] = (long)&PTR_LAB_04557220;
  plVar12[5] = (long)&PTR_LAB_04557270;
  *(undefined4 *)(plVar12 + 3) = 0x80178;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = plVar12[6];
  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_018d76ac;
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar5 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar5 != 0) {
    if (sVar5 != -1) goto LAB_018d6a30;
LAB_018d76cc:
    pcVar17 = "count != 0";
    pcVar18 = "AddReference";
    pcVar19 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar20 = "Reference counter overflows.";
LAB_018d774c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar17,pcVar18,pcVar19,0x58,pcVar20);
  }
  uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
  *(undefined8 *)(lVar11 + 8) = uVar16;
  *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
LAB_018d6a30:
  param_1[0x27] = plVar12;
  param_1[0x24] = &PTR_FUN_04557178;
  param_1[0x25] = &LAB_00b57b9c;
  *(undefined4 *)(param_1 + 0x26) = param_4;
  lVar11 = plVar12[6];
  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_018d76ac;
  psVar1 = (short *)(lVar11 + 0x1a);
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
    uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar16;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar5 == -1) goto LAB_018d76cc;
  param_1[0x28] = param_1 + 0x2a;
  lVar11 = *plVar14;
  psVar1 = (short *)(lVar11 + 0x1a);
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
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar12 + 0x50))(plVar12);
  }
  else if (sVar5 == 0) goto LAB_018d722c;
  *param_1 = &PTR_LAB_04556ce0;
  param_1[4] = &PTR_LAB_04556e28;
  param_1[5] = &PTR_LAB_04556f50;
  param_1[6] = &PTR_LAB_04556fa8;
  param_1[7] = &PTR_LAB_04556fd0;
  param_1[0x24] = &PTR_LAB_04557008;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_01f56460(param_1 + 0x2c);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  plVar27 = (long *)param_1[1];
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(int *)(param_1 + 0x29) = param_3;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_018d7754;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar27;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x218,8);
  puVar9 = PTR_DAT_047d66f8;
  if (plVar12 == (long *)0x0) goto LAB_018d7758;
  plVar12[2] = 0;
  *(undefined4 *)(plVar12 + 3) = 0;
  *plVar12 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar13 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar22 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  plVar12[1] = lVar22;
  plVar14 = plVar12 + 5;
  *(int *)plVar14 = 0;
  *plVar12 = (long)&PTR_LAB_045573e8;
  plVar12[4] = (long)&PTR_LAB_04557420;
  plVar12[6] = 0;
  plVar28 = param_1 + 0x31;
  *(undefined4 *)((long)plVar12 + 0x44) = 1;
  nn::os::InitializeLightEvent(plVar12 + 7,0,1);
  plVar12[9] = 0;
  *(undefined4 *)((long)plVar12 + 0x5c) = 1;
  nn::os::InitializeLightEvent(plVar12 + 10,0,1);
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0xf] = 0;
  plVar12[0x10] = 0;
  plVar12[0xc] = 0;
  plVar12[0xd] = 0;
  plVar12[0xe] = 0;
  FUN_01f59038();
  plVar12[0x13] = 0;
  *(undefined4 *)((long)plVar12 + 0xac) = 1;
  nn::os::InitializeLightEvent(plVar12 + 0x14,0,1);
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  FUN_01f56460();
  plVar12[0x22] = 0;
  plVar12[0x23] = 0;
  plVar12[0x20] = 0;
  plVar12[0x21] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  FUN_01f59170();
  plVar12[0x29] = 0;
  plVar12[0x2a] = 0;
  plVar12[0x24] = 0;
  plVar12[0x27] = 0;
  plVar12[0x28] = 0;
  plVar12[0x25] = 0;
  plVar12[0x26] = 0;
  FUN_01f576d4(plVar12 + 0x24);
  plVar12[0x30] = 0;
  plVar12[0x31] = 0;
  plVar12[0x2b] = 0;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  plVar12[0x2c] = 0;
  plVar12[0x2d] = 0;
  FUN_01f56460(plVar12 + 0x2d);
  memset(plVar12 + 0x32,0,0x88);
  *(undefined4 *)(plVar12 + 3) = 0x80218;
  plVar12[1] = (long)plVar27;
  plVar12[2] = (long)plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  do {
    lVar11 = *plVar14;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar8) {
      *(int *)plVar14 = (int)lVar11 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((int)lVar11 != -1) {
    plVar27 = (long *)*plVar28;
    *plVar28 = 0;
    if (plVar27 != (long *)0x0) {
      plVar14 = plVar27 + 5;
      do {
        lVar11 = *plVar14;
        iVar10 = (int)lVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *(int *)plVar14 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar27 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_018d772c;
    }
    plVar27 = (long *)param_1[0x27];
    param_1[0x31] = plVar12;
    if (plVar27 != (long *)0x0) {
      lVar11 = plVar27[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_018d76ac;
      psVar1 = (short *)(lVar11 + 0x1a);
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
        uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar16;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_018d76cc;
      plVar12 = (long *)*plVar28;
    }
    if (plVar12 == (long *)0x0) {
LAB_018d6d50:
      plVar14 = (long *)plVar27[8];
      plVar27[8] = (long)plVar12;
      if (plVar14 != (long *)0x0) {
        plVar26 = plVar14 + 5;
        do {
          lVar11 = *plVar26;
          iVar10 = (int)lVar11 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *(int *)plVar26 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_018d772c;
      }
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 5;
        do {
          lVar11 = *plVar14;
          iVar10 = (int)lVar11 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *(int *)plVar14 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        else if ((int)lVar11 == 0) goto LAB_018d772c;
      }
      lVar11 = plVar27[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar27 + 0x50))(plVar27);
      }
      else if (sVar5 == 0) goto LAB_018d722c;
      plVar27 = (long *)param_1[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_018d7754:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar27;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      plVar12 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x70,8);
      if (plVar12 == (long *)0x0) {
LAB_018d7758:
        (**(code **)(*plVar27 + 0xe8))(plVar27);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                   ,0x40);
      }
      lVar13 = *param_2;
      lVar6 = param_2[1];
      lVar22 = param_2[2];
      plVar14 = (long *)param_2[3];
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 != (long *)0x0) {
        plVar26 = plVar28 + 5;
        do {
          lVar15 = *plVar26;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *(int *)plVar26 = (int)lVar15 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((int)lVar15 == -1) goto LAB_018d7684;
      }
      puVar9 = PTR_DAT_047d66f8;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      *plVar12 = (long)(puVar9 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      puVar9 = PTR_DAT_047d8c78;
      if (lVar15 == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        if (*(long *)(lVar15 + 0x80) != 0) {
          lVar23 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
        }
      }
      puVar2 = PTR_DAT_047d8c78 + 0x88;
      *plVar12 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar12[1] = lVar23;
      plVar12[4] = (long)puVar2;
      plVar26 = plVar12 + 5;
      *plVar26 = (long)(puVar9 + 0xd8);
      plVar12[7] = 0;
      plVar12[6] = 0;
      FUN_00d1a3f4(plVar12 + 6,plVar26);
      *plVar12 = (long)&DAT_04557038;
      plVar12[4] = (long)&PTR_LAB_045570b8;
      *plVar26 = (long)&PTR_LAB_04557108;
      plVar12[0xc] = (long)plVar14;
      plVar12[8] = (long)&PTR_LAB_04557160;
      plVar12[9] = lVar13;
      plVar12[10] = lVar6;
      plVar12[0xb] = lVar22;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      plVar12[0xd] = (long)plVar28;
      if (plVar28 != (long *)0x0) {
        plVar26 = plVar28 + 5;
        do {
          lVar13 = *plVar26;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *(int *)plVar26 = (int)lVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((int)lVar13 == -1) goto LAB_018d7684;
        do {
          lVar13 = *plVar26;
          iVar10 = (int)lVar13 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *(int *)plVar26 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
        else if ((int)lVar13 == 0) goto LAB_018d772c;
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      *(undefined4 *)(plVar12 + 3) = 0x80070;
      plVar12[1] = (long)plVar27;
      plVar12[2] = (long)plVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
LAB_018d76ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
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
        uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar16;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_018d76cc;
      plVar27 = (long *)param_1[0x32];
      param_1[0x32] = 0;
      if (plVar27 != (long *)0x0) {
        lVar11 = plVar27[6];
        psVar1 = (short *)(lVar11 + 0x1a);
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
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar27 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_018d722c;
      }
      plVar27 = (long *)param_1[0x33];
      param_1[0x32] = plVar12;
      param_1[0x33] = 0;
      if (plVar27 != (long *)0x0) {
        lVar11 = plVar27[6];
        psVar1 = (short *)(lVar11 + 0x1a);
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
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar27 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_018d722c;
      }
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_0178f674(param_1 + 0x35,&local_88);
      plVar27 = local_88;
      if (local_88 != (long *)0x0) {
        plVar12 = local_88 + 3;
        do {
          sVar5 = (short)*plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *(short *)plVar12 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68 = *plVar27;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined2 *)((long)param_1 + 0x1c2) = 0;
      if (param_3 - 2U < 6) {
        uVar29 = (ulong)(param_3 - 2U) << 3;
        uVar24 = (undefined1)(0x323534333232 >> (uVar29 & 0x3f));
        uVar21 = (undefined1)(0x30000000201 >> (uVar29 & 0x3f));
      }
      else {
        plVar27 = (long *)param_1[0x32];
        param_1[0x32] = 0;
        if (plVar27 != (long *)0x0) {
          lVar11 = plVar27[6];
          psVar1 = (short *)(lVar11 + 0x1a);
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
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar27 + 0x50))();
          }
          else if (sVar5 == 0) {
LAB_018d722c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        uVar21 = 0;
        uVar24 = 0x7f;
      }
      *(undefined1 *)(param_1 + 0x34) = uVar24;
      *(undefined1 *)((long)param_1 + 0x1a1) = uVar21;
      return;
    }
    plVar14 = plVar12 + 5;
    do {
      lVar11 = *plVar14;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *(int *)plVar14 = (int)lVar11 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar11 != -1) {
      do {
        lVar11 = *plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *(int *)plVar14 = (int)lVar11 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar11 != -1) goto LAB_018d6d50;
    }
  }
LAB_018d7684:
  pcVar17 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
LAB_018d76a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",pcVar17,0x53,"Reference counter overflows.");
}


