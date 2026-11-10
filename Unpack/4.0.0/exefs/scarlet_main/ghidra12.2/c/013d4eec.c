/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013d4eec; name: FUN_013d4eec
 */


void FUN_013d4eec(long param_1,long *param_2,char *param_3,byte *param_4)

{
  short *psVar1;
  undefined *puVar2;
  int *piVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *pcVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  bool bVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *local_278;
  undefined8 uStack_270;
  long *local_268;
  undefined8 local_260;
  long *local_258;
  undefined8 *local_250;
  long lStack_248;
  long *local_240;
  long *local_238;
  long local_230;
  long lStack_228;
  long local_220;
  long *local_218;
  undefined8 local_210;
  char *pcStack_208;
  undefined8 local_200;
  long *plStack_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  long *local_198;
  undefined1 *local_190;
  undefined1 local_188;
  long *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long *local_160;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  undefined2 local_d0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  char *local_78;
  long *local_70 [2];
  
  plVar11 = (long *)*param_2;
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar21 = *(long **)(param_1 + 8);
  local_88 = 0;
  local_80 = (long *)0x0;
  local_90 = (undefined8 *)0x0;
  local_78 = param_3;
  (**(code **)(*plVar11 + 0x18))(&local_250);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  if ((long *)local_250[2] == plVar11 + 5) {
    FUN_00cbc6dc(&local_b8,&local_250);
  }
  puVar26 = local_250;
  puVar7 = PTR_DAT_047d3918;
  puVar2 = PTR_DAT_047d3910;
  if (local_250 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_250 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_250 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)puVar2;
        *(long *)puVar7 = lVar20;
        local_268 = (long *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_268);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  FUN_011453dc(&local_90,&local_b8);
  puVar26 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)puVar2;
        *(long *)puVar7 = lVar20;
        local_250 = (undefined8 *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_250);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  if (((*PTR_DAT_047daf88 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047daf88), iVar10 != 0)) {
    FUN_00100190(&LAB_02a44fe0,PTR_DAT_047daf90,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf88);
  }
  plVar11 = local_80;
  lVar20 = *(long *)PTR_DAT_047daf90;
  *(long *)PTR_DAT_047daf98 = lVar20;
  plVar24 = *(long **)(lVar20 + 0x50);
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 5;
    do {
      lVar20 = *plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(int *)plVar25 = (int)lVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar20 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_80 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar25 = plVar11 + 5;
    do {
      lVar20 = *plVar25;
      iVar10 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(int *)plVar25 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_013d4fe8;
    }
    if ((int)lVar20 != 0) goto LAB_013d4fe8;
LAB_013d597c:
    pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar17 = "DecrementReferenceInternal";
    pcVar18 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
    ;
    pcVar19 = "Reference counter underflows.";
LAB_013d59f0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar15,pcVar17,pcVar18,0x58,pcVar19);
  }
LAB_013d4fe8:
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  plVar25 = (long *)*param_2;
  local_80 = plVar24;
  (**(code **)(*plVar25 + 0x18))(&local_250,plVar25);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  plVar11 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    plVar11 = plVar25 + 5;
  }
  if ((long *)local_250[2] == plVar11) {
    FUN_00cbc6dc(&local_b8,&local_250);
  }
  puVar26 = local_250;
  if (local_250 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_250 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_250 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)puVar2;
        *(long *)puVar7 = lVar20;
        local_268 = (long *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_268);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  FUN_00ca1ea4(&local_a0,&local_b8);
  puVar26 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)puVar2;
        *(long *)puVar7 = lVar20;
        local_250 = (undefined8 *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_250);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar20 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_013d6ca4;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  lVar12 = (**(code **)(*plVar21 + 0x10))(plVar21,0x278,8);
  if (lVar12 == 0) goto LAB_013d6ca8;
  FUN_013d97e4(lVar12,&local_90,&local_a0);
  *(undefined4 *)(lVar12 + 0x18) = 0x80278;
  *(long **)(lVar12 + 8) = plVar21;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  lVar20 = *(long *)(lVar12 + 0x30);
  if (*(long *)(lVar20 + 0x10) == 0) goto LAB_013d6c84;
  psVar1 = (short *)(lVar20 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 != 0) {
    if (sVar4 != -1) goto LAB_013d5104;
LAB_013d59d0:
    pcVar15 = "count != 0";
    pcVar17 = "AddReference";
    pcVar18 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar19 = "Reference counter overflows.";
    goto LAB_013d59f0;
  }
  uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
  *(undefined8 *)(lVar20 + 8) = uVar13;
  *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
LAB_013d5104:
  plVar11 = *(long **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (plVar11 != (long *)0x0) {
    lVar20 = plVar11[6];
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_013d5cec;
  }
  *(long *)(param_1 + 0x218) = lVar12;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  plVar11 = (long *)FUN_013d70b4(*param_2 + 0x108,&local_250);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(&local_250);
    local_240 = plVar11;
    FUN_00c96b7c(&local_b8,&local_250);
    puVar26 = local_250;
    local_a8 = local_240;
    if (local_250 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_250 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_250 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)puVar2;
          *(long *)puVar7 = lVar20;
          local_268 = (long *)*puVar26;
          FUN_00c44438(lVar20 + 0x8040,&local_268);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
  }
  puVar2 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar7 = PTR_DAT_047d3e30;
  local_250 = *(undefined8 **)PTR_DAT_047d3e30;
  lStack_248 = *(long *)(PTR_DAT_047d3e30 + 8);
  local_240 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  local_238 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x18))();
  }
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_230 = *(long *)puVar7;
  lStack_228 = *(long *)(puVar7 + 8);
  local_220 = *(long *)(puVar7 + 0x10);
  local_218 = *(long **)(puVar7 + 0x18);
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x18))();
  }
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_210 = *(undefined8 *)puVar7;
  pcStack_208 = *(char **)(puVar7 + 8);
  local_200 = *(undefined8 *)(puVar7 + 0x10);
  plStack_1f8 = *(long **)(puVar7 + 0x18);
  if (plStack_1f8 != (long *)0x0) {
    (**(code **)(*plStack_1f8 + 0x18))();
  }
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_1f0 = *(undefined8 *)puVar7;
  local_1e8 = *(char **)(puVar7 + 8);
  local_1e0 = *(undefined8 *)(puVar7 + 0x10);
  plStack_1d8 = *(long **)(puVar7 + 0x18);
  if (plStack_1d8 != (long *)0x0) {
    (**(code **)(*plStack_1d8 + 0x18))();
  }
  local_188 = 1;
  local_138 = (undefined1 *)0x0;
  local_1e8 = "ai_behavior/blackboard";
  local_1e0 = 0x16;
  local_d0 = 0;
  local_150 = (undefined1 *)0x0;
  local_160 = (long *)0x0;
  local_210 = 0x84997ed2e343078e;
  pcStack_208 = "ai_behavior/behavior_tree";
  local_200 = 0x19;
  local_190 = &DAT_cbf29ce484222645;
  local_1a0 = (long *)0x0;
  local_198 = (long *)0x0;
  local_1f0 = 0x980c8397c930ba1e;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_148 = (code *)0x0;
  local_140 = (undefined1 *)0x0;
  local_180 = (long *)0x0;
  local_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  FUN_013d6d3c(&local_268,&local_78,&local_78);
  plVar16 = local_268;
  plVar24 = (long *)PTR_DAT_047d8b70;
  plVar25 = (long *)PTR_PTR_047d4508;
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (local_268 != (long *)0x0) {
    plVar11 = local_268 + 6;
  }
  puVar26 = (undefined8 *)*plVar11;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (local_268 != (long *)0x0) {
    plVar11 = local_268 + 7;
  }
  lVar20 = *plVar11;
  if (local_268 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)local_268[8];
    (**(code **)(*local_268 + 0x18))(local_268);
  }
  plVar27 = local_238;
  local_238 = (long *)0x0;
  local_250 = puVar26;
  lStack_248 = lVar20;
  local_240 = plVar11;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))();
  }
  plVar27 = (long *)PTR_DAT_047d3918;
  plVar11 = (long *)PTR_DAT_047d3910;
  local_238 = plVar16;
  if (local_268 != (long *)0x0) {
    (**(code **)(*local_268 + 0x20))();
  }
  pcVar15 = local_78;
  if (*local_78 == '\0') {
    plVar16 = (long *)FUN_00d44228();
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar13 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar13;
    FUN_00cf9884(&local_268,uVar13,pcVar15);
    plVar16 = local_268;
  }
  if (plVar16 != (long *)0x0) {
    plVar24 = plVar16 + 6;
  }
  lVar20 = *plVar24;
  if (plVar16 != (long *)0x0) {
    plVar25 = plVar16 + 7;
  }
  lVar12 = *plVar25;
  if (plVar16 == (long *)0x0) {
    lVar22 = 0;
  }
  else {
    lVar22 = plVar16[8];
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar24 = local_218;
  local_218 = (long *)0x0;
  local_230 = lVar20;
  lStack_228 = lVar12;
  local_220 = lVar22;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))();
  }
  puVar7 = PTR_DAT_047daf98;
  puVar2 = PTR_DAT_047daf88;
  local_218 = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  puVar8 = PTR_DAT_047daf90;
  bVar5 = *param_4;
  local_190 = &DAT_cbf29ce484222645;
  while (bVar5 != 0) {
    param_4 = param_4 + 1;
    local_190 = (undefined1 *)(((ulong)local_190 ^ (ulong)bVar5) * 0x100000001b3);
    bVar5 = *param_4;
  }
  plVar24 = *(long **)(param_1 + 0x218);
  if (plVar24 != (long *)0x0) {
    lVar20 = plVar24[6];
    if (*(long *)(lVar20 + 0x10) == 0) goto LAB_013d6c84;
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      *(undefined8 *)(lVar20 + 8) = uVar13;
      *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_013d59d0;
  }
  if (local_1a0 != (long *)0x0) {
    lVar20 = local_1a0[6];
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      lVar20 = *local_1a0;
      local_1a0 = plVar24;
      (**(code **)(lVar20 + 0x50))();
      plVar24 = local_1a0;
    }
    else {
      local_1a0 = plVar24;
      if (sVar4 == 0) goto LAB_013d5cec;
    }
  }
  local_1a0 = plVar24;
  FUN_013d6dd4(&local_268);
  plVar24 = local_198;
  local_198 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    lVar20 = plVar24[6];
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*plVar24 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_013d5cec;
  }
  local_198 = local_268;
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047daf88), iVar10 != 0)) {
    FUN_00100190(&LAB_02a44fe0,PTR_DAT_047daf90,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf88);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar7 = lVar20;
  FUN_013d8878(&local_268,*(undefined8 *)(lVar20 + 0x28));
  FUN_013d7b3c(&local_1d0,&local_268);
  plVar24 = local_268;
  if (local_268 != (long *)0x0) {
    plVar25 = local_268 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_268 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047daf88), iVar10 != 0)) {
    FUN_00100190(&LAB_02a44fe0,PTR_DAT_047daf90,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf88);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar7 = lVar20;
  FUN_013d8d9c(&local_268,*(undefined8 *)(lVar20 + 0x30));
  FUN_013d7e60(&local_1b0,&local_268);
  plVar24 = local_268;
  if (local_268 != (long *)0x0) {
    plVar25 = local_268 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_268 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047daf88), iVar10 != 0)) {
    FUN_00100190(&LAB_02a44fe0,PTR_DAT_047daf90,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf88);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar7 = lVar20;
  FUN_013d92c0(&local_268,*(undefined8 *)(lVar20 + 0x38));
  FUN_013d8184(&local_1c0,&local_268);
  plVar24 = local_268;
  if (local_268 != (long *)0x0) {
    plVar25 = local_268 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_268 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  local_188 = 0;
  FUN_013d6efc(&local_268);
  do {
    uVar13 = local_260;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(&local_260,0x10);
    if (bVar23) {
      local_260 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar14 = *plVar11;
  *plVar27 = uVar14;
  FUN_00c44204(local_70,uVar14,uVar13);
  plVar24 = local_268;
  local_268 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)plVar24 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  plVar24 = local_180;
  local_180 = (long *)0x0;
  if (local_70[0] == (long *)0x0) {
    if (plVar24 != (long *)0x0) {
      plVar25 = plVar24 + 3;
      do {
        sVar4 = (short)*plVar25;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar23) {
          *(short *)plVar25 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)plVar24 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == -1) {
          plVar11 = (long *)PTR_DAT_047d3910;
          plVar27 = (long *)PTR_DAT_047d3918;
        }
        else {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          plVar27 = (long *)PTR_DAT_047d3918;
          plVar11 = (long *)PTR_DAT_047d3910;
          lVar20 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar20;
          local_278 = (undefined8 *)*plVar24;
          FUN_00c44438(lVar20 + 0x8040,&local_278);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
    uVar13 = 0;
  }
  else {
    if (plVar24 != (long *)0x0) {
      plVar25 = plVar24 + 3;
      do {
        sVar4 = (short)*plVar25;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar23) {
          *(short *)plVar25 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)plVar24 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *plVar11;
          *plVar27 = lVar20;
          local_278 = (undefined8 *)*plVar24;
          FUN_00c44438(lVar20 + 0x8040,&local_278);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
    local_180 = local_70[0];
    local_70[0] = (long *)0x0;
  }
  plVar24 = local_70[0];
  local_178 = uVar13;
  if (local_70[0] != (long *)0x0) {
    plVar25 = local_70[0] + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_70[0] + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  plVar24 = local_268;
  if (local_268 != (long *)0x0) {
    plVar25 = local_268 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_268 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  FUN_00c43ef0(&local_170,&local_b8);
  local_268 = (long *)0x0;
  local_260 = 0;
  local_160 = (long *)0x0;
  if (local_a8 != (long *)0x0) {
    local_160 = local_a8 + 0x24;
  }
  FUN_00c43ef0(&local_268,&local_b8);
  pcVar9 = local_148;
  local_258 = local_a8;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar9)(&local_130);
  }
  local_130 = 0;
  uStack_128 = 0;
  FUN_00c96b7c(&local_130,&local_268);
  plVar24 = local_268;
  local_120 = local_258;
  local_150 = &LAB_01fa33a8;
  local_148 = (code *)&LAB_01fa4070;
  local_140 = &LAB_01fa4180;
  local_138 = &LAB_01fa41b8;
  if (local_268 != (long *)0x0) {
    plVar25 = local_268 + 3;
    do {
      sVar4 = (short)*plVar25;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar23) {
        *(short *)plVar25 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_268 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_278 = (undefined8 *)*plVar24;
        FUN_00c44438(lVar20 + 0x8040,&local_278);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  local_d0 = 0x101;
  param_2 = (long *)*param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar20 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_013d6ca4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x300,0x10);
  if (plVar24 == (long *)0x0) {
LAB_013d6ca8:
    (**(code **)(*plVar21 + 0xe8))(plVar21);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar24,0x80028080);
  puVar7 = PTR_DAT_047dafa0;
  puVar2 = PTR_DAT_047dafa0 + 0x160;
  *plVar24 = (long)(PTR_DAT_047dafa0 + 0x10);
  plVar25 = plVar24 + 4;
  *plVar25 = (long)puVar2;
  plVar24[5] = (long)(puVar7 + 0x288);
  plVar24[6] = (long)(puVar7 + 0x2e0);
  plVar24[7] = (long)(puVar7 + 0x308);
  *(undefined1 *)((long)plVar24 + 0x11e) = 0;
  FUN_013d72fc(plVar24 + 0x24,&local_250);
  memset(plVar24 + 0x56,0,0x48);
  *(undefined *)(plVar24 + 0x5f) = *PTR_DAT_047dafa8;
  *(undefined1 *)((long)plVar24 + 0x2f9) = 0;
  *(undefined4 *)((long)plVar24 + 0x2fc) = 0;
  *(undefined4 *)(plVar24 + 3) = 0x100300;
  plVar24[1] = (long)plVar21;
  plVar24[2] = (long)plVar24;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  lVar20 = plVar24[0x13];
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_013d6c84:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar20 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar6 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
    *(undefined8 *)(lVar20 + 8) = uVar13;
    *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) goto LAB_013d59d0;
  (**(code **)(plVar24[4] + 0xe8))(plVar25,param_2);
  (**(code **)(plVar24[4] + 0x68))(plVar25);
  local_268 = plVar24;
  FUN_00df8c30(param_2 + 0x21,&local_268);
  if (local_268 != (long *)0x0) {
    lVar20 = local_268[0x13];
    psVar1 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*local_268 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_013d5cec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_2 + 0x100))(param_2,plVar25);
  plVar21 = param_2 + 0x88;
  lVar12 = *plVar21;
  lVar20 = nn::os::GetCurrentThread();
  if (lVar20 != lVar12) {
    lVar20 = nn::os::GetCurrentThread();
LAB_013d5808:
    if (*plVar21 == 0) goto code_r0x013d5810;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x89));
    do {
      if (*plVar21 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x89));
          while (*plVar21 == 0) {
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar23) {
              *plVar21 = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_013d5818;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *plVar21 = lVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_013d5818:
    bVar23 = false;
    goto LAB_013d581c;
  }
  plVar21 = (long *)0x0;
  bVar23 = true;
LAB_013d581c:
  if ((*(byte *)(param_2 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(param_2,0,0);
  }
  else {
    (**(code **)(*plVar25 + 0xf8))(plVar25);
  }
  if (!bVar23) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  lVar20 = *(long *)(param_1 + 0x200);
  if (lVar20 != 0) {
    local_268 = (long *)0x0;
    local_260 = 0;
    FUN_00c43ef0(&local_268,plVar24 + 0x13);
    local_278 = (undefined8 *)0x0;
    uStack_270 = 0;
    if ((long *)local_268[2] == plVar24 + 5) {
      FUN_00e04b04(&local_278,&local_268);
    }
    plVar21 = local_268;
    if (local_268 != (long *)0x0) {
      plVar24 = local_268 + 3;
      do {
        sVar4 = (short)*plVar24;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *(short *)plVar24 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_268 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *plVar11;
          *plVar27 = lVar12;
          local_70[0] = (long *)*plVar21;
          FUN_00c44438(lVar12 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
    local_268 = (long *)0x0;
    local_260 = 0;
    FUN_00e04ed4(&local_268,&local_278);
    FUN_00e03f38(*(long *)(lVar20 + 0x78) + 0x100,&local_268);
    plVar21 = local_268;
    if (local_268 != (long *)0x0) {
      plVar24 = local_268 + 3;
      do {
        sVar4 = (short)*plVar24;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *(short *)plVar24 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_268 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *plVar11;
          *plVar27 = lVar20;
          local_70[0] = (long *)*plVar21;
          FUN_00c44438(lVar20 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
    puVar26 = local_278;
    if (local_278 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_278 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_278 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *plVar11;
          *plVar27 = lVar20;
          local_70[0] = (long *)*puVar26;
          FUN_00c44438(lVar20 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_013d5ca0;
    }
  }
  FUN_013d75b8(&local_250);
  puVar26 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_250 = (undefined8 *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_250);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  puVar26 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_250 = (undefined8 *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_250);
      }
    }
    else if (sVar4 == 0) goto LAB_013d5ca0;
  }
  if (local_80 != (long *)0x0) {
    plVar21 = local_80 + 5;
    do {
      lVar20 = *plVar21;
      iVar10 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar23) {
        *(int *)plVar21 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_013d597c;
  }
  puVar26 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar23) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *plVar11;
        *plVar27 = lVar20;
        local_250 = (undefined8 *)*puVar26;
        FUN_00c44438(lVar20 + 0x8040,&local_250);
      }
    }
    else if (sVar4 == 0) {
LAB_013d5ca0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x013d5810:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar23) {
    *plVar21 = lVar20;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_013d5818;
  goto LAB_013d5808;
}


