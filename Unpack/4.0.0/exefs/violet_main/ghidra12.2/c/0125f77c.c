/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125f77c; name: FUN_0125f77c
 */


undefined8 FUN_0125f77c(long *param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  bool bVar24;
  long lVar25;
  long *plVar26;
  long *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  long local_2b8;
  long *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  long *local_290;
  undefined4 local_288;
  undefined2 local_280;
  undefined8 local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [96];
  undefined8 local_1f0;
  undefined8 local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  long *local_b8;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  long *local_70 [2];
  
  lVar20 = (long)*param_2;
  lVar25 = *param_1;
  lVar18 = *(long *)(lVar25 + 0x520);
  local_a0 = *(long **)(lVar18 + lVar20 * 0x60);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  lVar15 = lVar18 + lVar20 * 0x60;
  local_98 = *(undefined8 *)(lVar15 + 8);
  local_90 = *(undefined8 *)(lVar15 + 0x10);
  local_88 = *(undefined8 *)(lVar15 + 0x18);
  local_80 = *(long **)(lVar15 + 0x20);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  local_78 = *(undefined4 *)(lVar18 + lVar20 * 0x60 + 0x28);
  lVar18 = *(long *)(lVar25 + 0x520);
  plVar19 = *(long **)(lVar18 + lVar20 * 0x60 + 0x30);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  lVar15 = lVar18 + lVar20 * 0x60;
  uVar17 = *(undefined8 *)(lVar15 + 0x38);
  uVar16 = *(undefined8 *)(lVar15 + 0x40);
  uVar23 = *(undefined8 *)(lVar15 + 0x48);
  plVar4 = *(long **)(lVar15 + 0x50);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_2f8 = *(long **)(*(long *)(*(long *)(lVar25 + 0xe8) + 0x48) + 0x460);
  uVar5 = *(undefined4 *)(lVar18 + lVar20 * 0x60 + 0x58);
  local_2b0 = *(long **)(lVar25 + 8);
  (**(code **)(lVar25 + 0x270))(&local_a8,lVar25 + 0x290,&local_a0,&local_2b0,&local_2f8);
  plVar21 = local_a0;
  local_2b0 = (long *)0x0;
  local_2a8 = &DAT_cbf29ce484222645;
  local_2a0 = &DAT_03c886bc;
  local_298 = 0;
  local_290 = (long *)0x0;
  local_288 = 0;
  local_280 = 0x101;
  local_1f0 = 0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_d0 = &DAT_cbf29ce484222645;
  local_c8 = &DAT_03c886bc;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_270 = 0;
  local_268 = (code *)0x0;
  local_260 = 0;
  uStack_258 = 0;
  local_1e0 = 0;
  local_1d8 = (code *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_a0 == (long *)0x0) {
    local_2b0 = local_a0;
  }
  else {
    (**(code **)(*local_a0 + 0x18))(local_a0);
    plVar22 = local_2b0;
    local_2b0 = plVar21;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))();
    }
  }
  plVar21 = local_80;
  local_2a8 = (undefined1 *)local_98;
  local_2a0 = (undefined1 *)local_90;
  local_298 = local_88;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))(local_80);
  }
  plVar22 = local_290;
  local_290 = plVar21;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
  pcVar7 = local_1d8;
  local_288 = local_78;
  local_280 = CONCAT11(local_280._1_1_,1);
  local_1f0 = *(undefined8 *)(lVar25 + 0x2f0);
  if (local_1d8 != (code *)0x0) {
    local_1d0 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  if (*(code **)(lVar25 + 0x310) != (code *)0x0) {
    (**(code **)(lVar25 + 0x310))(lVar25 + 800,auStack_1c0);
    local_1c8 = *(undefined8 *)(lVar25 + 0x318);
    local_1d8 = *(code **)(lVar25 + 0x308);
    local_1e0 = *(undefined8 *)(lVar25 + 0x300);
    local_1d0 = *(undefined8 *)(lVar25 + 0x310);
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  if (*(code **)(lVar25 + 0x390) != (code *)0x0) {
    (**(code **)(lVar25 + 0x390))(lVar25 + 0x3a0,auStack_140);
    local_148 = *(undefined8 *)(lVar25 + 0x398);
    local_158 = *(code **)(lVar25 + 0x388);
    local_160 = *(undefined8 *)(lVar25 + 0x380);
    local_150 = *(undefined8 *)(lVar25 + 0x390);
  }
  plVar21 = (long *)PTR_PTR_047d4508;
  local_e0 = *(undefined8 *)(lVar25 + 0x510);
  lVar18 = *(long *)(*(long *)(*(long *)(lVar25 + 0x130) + 0x38) + 0x40);
  puVar3 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar18 != 0) {
    puVar3 = (undefined8 *)(lVar18 + 0x38);
  }
  pcVar9 = strrchr((char *)*puVar3,0x2f);
  pcVar12 = (char *)0x0;
  if (pcVar9 != (char *)0x0) {
    pcVar12 = pcVar9 + 1;
  }
  if (*pcVar12 == '\0') {
    plVar22 = (long *)FUN_00d44228();
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar10;
    FUN_00cf9884(&local_2f8,uVar10,pcVar12);
    plVar22 = local_2f8;
  }
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (plVar22 != (long *)0x0) {
    plVar11 = plVar22 + 6;
  }
  lVar18 = *plVar11;
  if (plVar22 != (long *)0x0) {
    plVar21 = plVar22 + 7;
  }
  lVar20 = *plVar21;
  if (plVar22 == (long *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = plVar22[8];
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  plVar21 = local_b8;
  local_b8 = (long *)0x0;
  local_d0 = (undefined1 *)lVar18;
  local_c8 = (undefined1 *)lVar20;
  local_c0 = lVar15;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  local_b8 = plVar22;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  local_2b8 = FUN_010278b0(local_a8,*(undefined8 *)(lVar25 + 8),&local_2b0);
  *(undefined1 *)(local_2b8 + 0x334) = 1;
  if (*(long *)(local_2b8 + 0x120) != 0) {
    *(undefined1 *)(*(long *)(local_2b8 + 0x120) + 0x212) = 1;
    if (*(long *)(local_2b8 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(local_2b8 + 0x120) + 0x210) = *(undefined1 *)(lVar25 + 0x57d);
    }
  }
  local_2f8 = (long *)0x0;
  local_2f0 = &DAT_cbf29ce484222645;
  local_2d8 = (long *)0x0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2e8 = &DAT_03c886bc;
  local_2e0 = 0;
  plVar21 = plVar19;
  if ((plVar19 != (long *)0x0) &&
     ((**(code **)(*plVar19 + 0x18))(plVar19), local_2f8 != (long *)0x0)) {
    lVar18 = *local_2f8;
    local_2f8 = plVar19;
    (**(code **)(lVar18 + 0x20))();
    plVar21 = local_2f8;
  }
  local_2f8 = plVar21;
  local_2f0 = (undefined1 *)uVar17;
  local_2e8 = (undefined1 *)uVar16;
  local_2e0 = uVar23;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar21 = plVar4;
  if (local_2d8 != (long *)0x0) {
    lVar18 = *local_2d8;
    local_2d8 = plVar4;
    (**(code **)(lVar18 + 0x20))();
    plVar21 = local_2d8;
  }
  local_2d8 = plVar21;
  plVar21 = local_a8;
  local_2c8 = *(undefined8 *)(lVar25 + 0x510);
  local_2c0 = 1;
  plVar22 = *(long **)(lVar25 + 8);
  local_2d0 = uVar5;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar18 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_012603d8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar22;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x180,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xe8))(plVar22);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0126046c(plVar11,&local_2f8);
  *(undefined4 *)(plVar11 + 3) = 0x80180;
  plVar11[1] = (long)plVar22;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  lVar18 = plVar11[0x13];
  if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar18 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar6 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar24) {
      *psVar1 = sVar2 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar2 == 0) {
    uVar23 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
    *(undefined8 *)(lVar18 + 8) = uVar23;
    *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
    pcVar12 = "count != 0";
    pcVar9 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
    goto LAB_01260464;
  }
  plVar22 = plVar11 + 4;
  (**(code **)(*plVar22 + 0xe8))(plVar22,plVar21);
  (**(code **)(*plVar22 + 0x68))(plVar22);
  local_70[0] = plVar11;
  FUN_00df8c30(plVar21 + 0x21,local_70);
  if (local_70[0] != (long *)0x0) {
    lVar18 = local_70[0][0x13];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar24) {
        *psVar1 = sVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_70[0] + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar21 + 0x100))(plVar21,plVar22);
  plVar26 = plVar21 + 0x88;
  lVar20 = *plVar26;
  lVar18 = nn::os::GetCurrentThread();
  if (lVar18 != lVar20) {
    lVar18 = nn::os::GetCurrentThread();
LAB_0125fc7c:
    if (*plVar26 == 0) goto code_r0x0125fc84;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x89));
    do {
      if (*plVar26 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x89));
          while (*plVar26 == 0) {
            cVar6 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar24) {
              *plVar26 = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0125fcf0;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *plVar26 = lVar18;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0125fcf0:
    bVar24 = false;
    goto LAB_0125fcf4;
  }
  plVar26 = (long *)0x0;
  bVar24 = true;
LAB_0125fcf4:
  if ((*(byte *)(plVar21 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(plVar21,0,0);
  }
  else {
    (**(code **)(*plVar22 + 0xf8))(plVar22);
  }
  if (!bVar24) {
    *plVar26 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar26 + 1));
  }
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_70[0] = plVar11;
  if (*(char *)((long)local_a8 + 0xf4) == '\0') {
    *(undefined1 *)((long)local_a8 + 0xf4) = 1;
    (**(code **)(*local_a8 + 0x78))();
  }
  if (*(char *)(lVar25 + 0x57a) == '\0') {
    FUN_00c6ed58(local_a8,1);
  }
  puVar3 = *(undefined8 **)(lVar25 + 0x1b8);
  if (puVar3 == *(undefined8 **)(lVar25 + 0x1c0)) {
    FUN_012623c4(lVar25 + 0x1b0,&local_a8);
  }
  else {
    uVar23 = *(undefined8 *)(lVar25 + 0x1c8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar18 != 0) {
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_012603d8;
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar23;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    }
    *puVar3 = local_a8;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x58))();
    }
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    }
    *(undefined8 **)(lVar25 + 0x1b8) = puVar3 + 1;
  }
  plVar21 = *(long **)(lVar25 + 0x1f0);
  if (plVar21 == *(long **)(lVar25 + 0x1f8)) {
    FUN_01261f14(lVar25 + 0x1e8,&local_2b8);
  }
  else {
    uVar23 = *(undefined8 *)(lVar25 + 0x200);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar18 == 0) {
      *plVar21 = local_2b8;
    }
    else {
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_012603d8;
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar23;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      *plVar21 = local_2b8;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    }
    *(long **)(lVar25 + 0x1f0) = plVar21 + 1;
  }
  plVar21 = *(long **)(lVar25 + 0x228);
  if (plVar21 == *(long **)(lVar25 + 0x230)) {
    FUN_0126216c(lVar25 + 0x220,local_70);
  }
  else {
    uVar23 = *(undefined8 *)(lVar25 + 0x238);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar18 == 0) {
      *plVar21 = (long)local_70[0];
    }
    else {
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_012603d8;
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar23;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      *plVar21 = (long)local_70[0];
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    }
    *(long **)(lVar25 + 0x228) = plVar21 + 1;
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    plVar21 = local_d8 + 5;
    do {
      lVar18 = *plVar21;
      iVar8 = (int)lVar18 + -1;
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar24) {
        *(int *)plVar21 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    else if ((int)lVar18 == 0) {
      pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar9 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
LAB_01260464:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar9,pcVar13,0x58,pcVar14);
    }
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  pcVar7 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  pcVar7 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = 0;
    uStack_258 = 0;
    local_270 = 0;
    local_268 = (code *)0x0;
    (*pcVar7)(auStack_250);
  }
  if (local_290 != (long *)0x0) {
    (**(code **)(*local_290 + 0x20))();
  }
  if (local_2b0 != (long *)0x0) {
    (**(code **)(*local_2b0 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x60))();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return 1;
code_r0x0125fc84:
  cVar6 = '\x01';
  bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
  if (bVar24) {
    *plVar26 = lVar18;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0125fcf0;
  goto LAB_0125fc7c;
}


