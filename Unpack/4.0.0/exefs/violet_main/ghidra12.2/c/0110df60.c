/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0110df60; name: FUN_0110df60
 */


void FUN_0110df60(undefined8 *param_1,long *param_2,uint *param_3)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  short sVar8;
  undefined2 uVar9;
  char cVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long local_218;
  long *local_210 [4];
  long *local_1f0;
  long *local_1e0 [4];
  long *local_1c0;
  long *local_1b0 [4];
  long *local_190;
  undefined4 local_188;
  long *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  long *local_e0;
  undefined1 local_d8;
  long *local_d0 [4];
  long *local_b0;
  long *local_a0 [4];
  long *local_80;
  long *local_70 [2];
  
  FUN_00d1a240(param_1,0x80018080);
  *param_1 = &DAT_045e8260;
  param_1[4] = &PTR_LAB_045e83b0;
  param_1[5] = &DAT_045e84d8;
  param_1[6] = &PTR_LAB_045e8530;
  plVar22 = param_1 + 7;
  *plVar22 = (long)&PTR_LAB_045e8558;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar13 = PTR_DAT_047d8e88;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0x3c] = 0;
  param_1[0x27] = puVar1;
  param_1[0x28] = 0;
  param_1[0x2f] = puVar1;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
     (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) {
    lVar24 = tpidr_el0;
    lVar16 = *(long *)(lVar24 + 0x30);
    if (lVar16 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04859438), iVar15 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar16 = DAT_04859430;
      *(long *)(lVar24 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x3d] = lVar16;
  param_1[0x3e] = 0x1745d1745d1745d;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(char *)(param_1 + 0xb) != -0x7e) || (*(char *)((long)param_1 + 0x59) != -0x7e)) {
    uVar9 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar22);
    }
    (**(code **)(*plVar22 + 0x20))(plVar22,uVar9);
  }
  uVar17 = FUN_00dc5c18(param_1 + 0x2f,1,param_2,0,param_1[1]);
  if (((uVar17 & 1) != 0) && (plVar22 = (long *)param_1[0x33], plVar22 != (long *)0x0)) {
    lVar16 = plVar22[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0110eb10;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar8 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar19;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar8 == -1) goto LAB_0110eb30;
    lVar16 = plVar22[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar22 + 0x50))(plVar22);
    }
    else if (sVar8 == 0) goto LAB_0110e868;
  }
  plVar22 = (long *)PTR_PTR_047d4508;
  puVar6 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar6 = (undefined8 *)(*param_2 + 0x38);
  }
  local_180 = (long *)*puVar6;
  FUN_0110f548(local_a0,&local_180,&DAT_03c202d3,(int)param_2[5]);
  uVar17 = FUN_00dc5c18(param_1 + 0x27,1,local_a0,0,param_1[1]);
  if (((uVar17 & 1) != 0) && (plVar23 = (long *)param_1[0x2b], plVar23 != (long *)0x0)) {
    lVar16 = plVar23[6];
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_0110eb10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar8 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar19;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar8 == -1) {
LAB_0110eb30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar16 = plVar23[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))(plVar23);
    }
    else if (sVar8 == 0) {
LAB_0110e868:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  local_180 = plVar22;
  if (*param_2 != 0) {
    local_180 = (long *)(*param_2 + 0x38);
  }
  local_180 = (long *)*local_180;
  FUN_0110eb84(local_d0,&local_180,&DAT_03c886bc,(int)param_2[5]);
  plVar23 = plVar22;
  if (local_d0[0] != (long *)0x0) {
    plVar23 = local_d0[0] + 7;
  }
  pcVar18 = strrchr((char *)*plVar23,0x2f);
  puVar12 = PTR_DAT_047d4250;
  puVar1 = PTR_DAT_047d4248;
  pcVar7 = (char *)0x0;
  if (pcVar18 != (char *)0x0) {
    pcVar7 = pcVar18 + 1;
  }
  if (*pcVar7 == '\0') {
    plVar23 = (long *)FUN_00d44228();
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar19 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar12 = uVar19;
    FUN_00cf9884(&local_180,uVar19,pcVar7);
    plVar23 = local_180;
  }
  plVar20 = (long *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
  }
  param_1[0x38] = plVar23;
  local_180 = (long *)&LAB_028bae8c;
  local_178 = FUN_02c7eaf8;
  local_170 = &LAB_02c7eafc;
  puVar6 = param_1 + 0x3a;
  local_168 = &LAB_02c7eb08;
  local_160 = param_1 + 0x24;
  FUN_0110efd0(param_1 + 0x27,&local_180);
  pcVar14 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    (*pcVar14)(&local_160);
  }
  FUN_0110f994(puVar6,param_1 + 0x24);
  if ((param_3 != (uint *)0x0) && (*param_3 != 0)) {
    uVar17 = 0;
    do {
      local_160 = (undefined8 *)0x0;
      local_138 = 0;
      uStack_130 = 0;
      puVar5 = param_3 + uVar17 + 1;
      local_148 = (long *)0x0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_120 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (long *)0x0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_e8 = (long *)0x0;
      local_e0 = (long *)0x0;
      local_d8 = 1;
      piVar3 = (int *)((long)puVar5 + (ulong)*puVar5);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar21 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar21 == 0)) {
        local_1e0[0] = (long *)0x0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar21);
        local_1e0[0] = (long *)((long)puVar4 + (ulong)*puVar4);
      }
      local_168 = puVar13 + 0x10;
      local_128 = puVar13 + 0x10;
      FUN_00cf95c4(local_1b0,local_1e0);
      uVar21 = FUN_00dc5c18(&local_128,1,local_1b0,0,param_1[1]);
      plVar23 = local_108;
      if (((uVar21 & 1) != 0) && (local_108 != (long *)0x0)) {
        lVar16 = local_108[6];
        if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0110eb10;
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar8 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar8 == 0) {
          uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          *(undefined8 *)(lVar16 + 8) = uVar19;
          *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_0110eb30;
        lVar16 = plVar23[6];
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar8 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          plVar22 = (long *)PTR_PTR_047d4508;
        } while (cVar10 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*plVar23 + 0x50))(plVar23);
        }
        else if (sVar8 == 0) goto LAB_0110e868;
      }
      local_210[0] = plVar22;
      if (local_1b0[0] != (long *)0x0) {
        local_210[0] = local_1b0[0] + 7;
      }
      local_210[0] = (long *)*local_210[0];
      FUN_0110eb84(local_1e0,local_210,&DAT_03c886bc,local_188);
      plVar23 = plVar22;
      if (local_1e0[0] != (long *)0x0) {
        plVar23 = local_1e0[0] + 7;
      }
      pcVar18 = strrchr((char *)*plVar23,0x2f);
      pcVar7 = (char *)0x0;
      if (pcVar18 != (char *)0x0) {
        pcVar7 = pcVar18 + 1;
      }
      if (*pcVar7 == '\0') {
        plVar23 = (long *)FUN_00d44228();
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar19 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar19;
        FUN_00cf9884(local_210,uVar19,pcVar7);
        plVar23 = local_210[0];
      }
      plVar20 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      local_70[0] = plVar22;
      if (local_1b0[0] != (long *)0x0) {
        local_70[0] = local_1b0[0] + 7;
      }
      local_70[0] = (long *)*local_70[0];
      local_e0 = plVar23;
      FUN_0110f548(local_210,local_70,&DAT_03c202d3,local_188);
      uVar21 = FUN_00dc5c18(&local_168,1,local_210,0,param_1[1]);
      plVar23 = local_148;
      if (((uVar21 & 1) != 0) && (local_148 != (long *)0x0)) {
        lVar16 = local_148[6];
        if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0110eb10;
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar8 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar8 == 0) {
          uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          *(undefined8 *)(lVar16 + 8) = uVar19;
          *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) goto LAB_0110eb30;
        lVar16 = plVar23[6];
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar8 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          plVar22 = (long *)PTR_PTR_047d4508;
        } while (cVar10 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*plVar23 + 0x50))(plVar23);
        }
        else if (sVar8 == 0) goto LAB_0110e868;
      }
      piVar3 = (int *)((long)puVar5 + (ulong)*puVar5);
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
        local_218 = 0;
      }
      else {
        uVar21 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        if (uVar21 == 0) {
          local_218 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar3 + uVar21);
          local_218 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      FUN_00ea0a7c(local_70,&local_218);
      plVar23 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))();
      }
      local_e8 = local_70[0];
      FUN_0110f994(puVar6,&local_180);
      if (local_1f0 != (long *)0x0) {
        (**(code **)(*local_1f0 + 0x20))();
      }
      if (local_210[0] != (long *)0x0) {
        (**(code **)(*local_210[0] + 0x20))();
      }
      if (local_1c0 != (long *)0x0) {
        (**(code **)(*local_1c0 + 0x20))();
      }
      if (local_1e0[0] != (long *)0x0) {
        (**(code **)(*local_1e0[0] + 0x20))();
      }
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 0x20))();
      }
      if (local_1b0[0] != (long *)0x0) {
        (**(code **)(*local_1b0[0] + 0x20))();
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      FUN_00db239c(&local_128);
      FUN_00db239c(&local_168);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *param_3);
  }
  if (param_1[0x3b] != param_1[0x3a]) {
    *(undefined1 *)(param_1[0x3a] + 0xa8) = 0;
    local_160 = (undefined8 *)*puVar6;
    local_180 = (long *)&LAB_028bae8c;
    local_178 = FUN_02c7eaf8;
    local_170 = &LAB_02c7eafc;
    local_168 = &LAB_02c7eb08;
    FUN_0110efd0(local_160 + 3,&local_180);
    pcVar14 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (undefined1 *)0x0;
      local_168 = (undefined1 *)0x0;
      local_180 = (long *)0x0;
      local_178 = (code *)0x0;
      (*pcVar14)(&local_160);
    }
    lVar16 = param_1[0x3a];
    if (1 < (ulong)((param_1[0x3b] - lVar16 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
      uVar17 = 1;
      lVar24 = 200;
      do {
        local_160 = (undefined8 *)(lVar16 + lVar24 + -0x18);
        local_180 = (long *)&LAB_028bae8c;
        local_178 = FUN_02c7eaf8;
        local_170 = &LAB_02c7eafc;
        local_168 = &LAB_02c7eb08;
        FUN_0110efd0(lVar16 + lVar24,&local_180);
        pcVar14 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = (undefined1 *)0x0;
          local_168 = (undefined1 *)0x0;
          local_180 = (long *)0x0;
          local_178 = (code *)0x0;
          (*pcVar14)(&local_160);
        }
        lVar16 = param_1[0x3a];
        uVar17 = uVar17 + 1;
        lVar24 = lVar24 + 0xb0;
      } while (uVar17 < (ulong)((param_1[0x3b] - lVar16 >> 4) * 0x2e8ba2e8ba2e8ba3));
    }
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0[0] != (long *)0x0) {
    (**(code **)(*local_d0[0] + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  return;
}


