/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e29f74; name: FUN_01e29f74
 */


void FUN_01e29f74(long param_1,byte param_2,byte param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  undefined1 *local_2a0;
  code *local_298;
  undefined1 *local_290;
  undefined1 *puStack_288;
  byte *local_280;
  undefined8 ***pppuStack_278;
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [96];
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 **local_190;
  undefined8 local_188;
  undefined8 local_180;
  code *local_178;
  long *local_170;
  undefined8 local_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  long *local_80;
  long *local_78;
  byte local_6c [4];
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  local_6c[0] = param_2 & 1;
  *(byte *)(param_1 + 0x238) = param_3;
  *(byte *)(param_1 + 0x239) = local_6c[0];
  FUN_00c9e664(&local_80,param_1 + 0xe8);
  plVar12 = *(long **)(local_78[9] + 0x380);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (local_78 == (long *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = local_78[9];
  }
  plVar9 = (long *)(lVar15 + 0x110);
  lVar13 = *plVar9;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    bVar14 = true;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
          while (*plVar9 == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar14) {
              *plVar9 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01e2a00c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01e2a00c:
    bVar14 = false;
  }
  plVar9 = (long *)FUN_00cbbec0(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130));
  if ((*(long **)(lVar15 + 0x130) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_00cbbec0(*(undefined8 *)(lVar15 + 0x160),*(undefined8 *)(lVar15 + 0x168));
    if (*(long **)(lVar15 + 0x168) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar14) {
    *(undefined8 *)(lVar15 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
  }
  if (lVar8 == 0) goto LAB_01e2a328;
  if ((local_6c[0] != 0) && (*(char *)(param_1 + 0x140) == '\0')) {
    local_178 = (code *)0x0;
    local_170 = (long *)0x0;
    local_168 = 0;
    local_180 = 0;
    local_190 = (undefined8 **)0x0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (local_78 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)local_78[9];
    }
    (**(code **)(*plVar9 + 0x18))(local_68,plVar9);
    local_1a0 = (undefined8 *)0x0;
    uStack_198 = 0;
    plVar10 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 5;
    }
    if ((long *)local_68[0][2] == plVar10) {
      FUN_00c9ea00(&local_1a0,local_68);
    }
    puVar6 = local_68[0];
    if (local_68[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_68[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_58 = *puVar6;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) goto LAB_01e2a554;
    }
    FUN_01fa41f0(&local_100,&local_1a0);
    puVar6 = local_1a0;
    if (local_1a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_1a0 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_1a0 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_68[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar15 + 0x8040,local_68);
        }
      }
      else if (sVar3 == 0) {
LAB_01e2a554:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_0102825c(lVar8,&local_190);
    local_220 = &LAB_0189a210;
    local_218 = FUN_02a2f20c;
    local_210 = &LAB_02a2f210;
    puStack_208 = &LAB_02a2f214;
    FUN_014911dc(lVar8,&local_220);
    pcVar5 = local_218;
    if (local_218 != (code *)0x0) {
      local_210 = (undefined1 *)0x0;
      puStack_208 = (undefined1 *)0x0;
      local_220 = (undefined1 *)0x0;
      local_218 = (code *)0x0;
      (*pcVar5)(auStack_200);
    }
    lVar15 = 0;
    if (local_78 != (long *)0x0) {
      lVar15 = local_78[9];
    }
    FUN_01704d0c(lVar15 + 0x108,local_68);
    pcVar5 = local_f8;
    *(undefined1 *)(param_1 + 0x140) = 1;
    if (local_f8 != (code *)0x0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar5)(auStack_e0);
    }
    pcVar5 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = (long *)0x0;
      local_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar5)(auStack_160);
    }
  }
  local_68[0] = (undefined8 *)CONCAT71(local_68[0]._1_7_,param_3);
  plVar9 = (long *)(DAT_0483aec0 + 0x80);
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
LAB_01e2a264:
    local_68[0] = (undefined8 *)((ulong)local_68[0]._1_7_ << 8);
  }
  else {
    plVar11 = plVar9;
    do {
      if (*(byte *)(plVar10 + 4) >= param_3) {
        plVar11 = plVar10;
      }
      plVar10 = (long *)plVar10[*(byte *)(plVar10 + 4) < param_3];
    } while (plVar10 != (long *)0x0);
    if ((plVar11 == plVar9) || (param_3 < *(byte *)(plVar11 + 4))) goto LAB_01e2a264;
  }
  local_190 = local_68;
  lVar15 = FUN_01fa4870(DAT_0483aec0 + 0x78,local_68,&local_190);
  local_190 = (undefined8 **)((ulong)local_190 & 0xffffffffffffff00);
  if (*(char *)(lVar15 + 0x28) != '\0') {
    local_188 = *(undefined8 *)(lVar15 + 0x30);
    local_180 = *(undefined8 *)(lVar15 + 0x38);
    local_178 = *(code **)(lVar15 + 0x40);
    local_170 = *(long **)(lVar15 + 0x48);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x18))();
    }
    local_190 = (undefined8 **)CONCAT71(local_190._1_7_,1);
  }
  local_280 = local_6c;
  local_2a0 = &LAB_0152c0dc;
  local_298 = FUN_02a2f218;
  local_290 = &LAB_02a2f21c;
  puStack_288 = &LAB_02a2f228;
  pppuStack_278 = &local_190;
  FUN_014911dc(lVar8,&local_2a0);
  pcVar5 = local_298;
  if (local_298 != (code *)0x0) {
    local_290 = (undefined1 *)0x0;
    puStack_288 = (undefined1 *)0x0;
    local_2a0 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    (*pcVar5)(&local_280);
  }
  if ((char)local_190 != '\0') {
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_190 = (undefined8 **)((ulong)local_190 & 0xffffffffffffff00);
  }
LAB_01e2a328:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_78 != (long *)0x0) {
    plVar12 = local_78 + 5;
    do {
      lVar15 = *plVar12;
      iVar7 = (int)lVar15 + -1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *(int *)plVar12 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x60))();
  }
  return;
}


