/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01026eac; name: FUN_01026eac
 */


void FUN_01026eac(char *param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  char *pcVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  char cVar21;
  undefined1 *puVar22;
  int *piVar23;
  long *local_360;
  char *pcStack_358;
  undefined1 *local_350;
  long *local_348;
  long *local_340;
  undefined4 local_338;
  undefined2 local_330;
  undefined8 local_320;
  code *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [96];
  undefined8 local_2a0;
  undefined8 local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [96];
  undefined8 local_210;
  code *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [96];
  undefined8 local_190;
  long *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  long local_170;
  long *local_168;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long local_140;
  long *local_138;
  undefined1 *local_130;
  char *local_128;
  long local_120;
  long *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  long *local_70 [2];
  
  lVar15 = *param_3;
  lVar13 = *param_4;
  cVar2 = *param_1;
  local_360 = (long *)&DAT_8f4683b30904fb31;
  pcStack_358 = "isVisible";
  local_350 = (undefined1 *)0x9;
  local_348 = (long *)0x0;
  lVar8 = FUN_010ffad0(lVar15,param_5,&local_360);
  if (lVar8 != 0) {
    cVar21 = *(char *)(lVar8 + 0x10);
  }
  else {
    cVar21 = '\0';
  }
  if (local_348 != (long *)0x0) {
    (**(code **)(*local_348 + 0x20))();
  }
  if ((((*(long *)(param_1 + 8) == 0) || (**(char **)(*(long *)(param_1 + 8) + 0x38) == '\0')) ||
      (*(long *)(param_1 + 0x10) == 0)) || (**(char **)(*(long *)(param_1 + 0x10) + 0x38) == '\0'))
  {
    plVar14 = (long *)0x0;
  }
  else {
    FUN_0102f194(&local_360,*(undefined8 *)(param_1 + 0x18),lVar13 + 0x40);
    plVar14 = local_360;
  }
  local_340 = (long *)0x0;
  local_330 = 0x101;
  local_360 = (long *)0x0;
  pcStack_358 = &DAT_cbf29ce484222645;
  local_350 = &DAT_03c886bc;
  local_348 = (long *)0x0;
  local_338 = 0;
  local_2a0 = 0;
  local_180 = &DAT_cbf29ce484222645;
  local_178 = &DAT_03c886bc;
  local_170 = 0;
  local_168 = (long *)0x0;
  local_320 = 0;
  local_318 = (code *)0x0;
  local_310 = 0;
  uStack_308 = 0;
  local_290 = 0;
  local_288 = (code *)0x0;
  local_280 = 0;
  uStack_278 = 0;
  local_210 = 0;
  local_208 = (code *)0x0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_190 = 0;
  local_188 = (long *)0x0;
  FUN_011abe50(&local_158,param_1 + 0x20);
  plVar18 = local_360;
  local_360 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  local_360 = local_158;
  plVar18 = local_340;
  local_158 = (long *)0x0;
  pcStack_358 = local_150;
  local_350 = local_148;
  local_348 = (long *)local_140;
  local_340 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  local_340 = local_138;
  local_138 = (long *)0x0;
  local_338 = local_130._0_4_;
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 5;
    do {
      lVar13 = *plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)lVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar13 == -1) {
LAB_01027340:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar18 = plVar14;
  if (local_188 != (long *)0x0) {
    plVar9 = local_188 + 5;
    do {
      lVar13 = *plVar9;
      iVar6 = (int)lVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      lVar13 = *local_188;
      local_188 = plVar14;
      (**(code **)(lVar13 + 0x10))();
      plVar18 = local_188;
    }
    else {
      local_188 = plVar14;
      if ((int)lVar13 == 0) goto LAB_010272fc;
    }
  }
  local_188 = plVar18;
  plVar9 = (long *)PTR_PTR_047d4508;
  plVar19 = *(long **)(param_1 + 0x28);
  plVar18 = (long *)PTR_DAT_047d8b70;
  if (plVar19 != (long *)0x0) {
    plVar18 = plVar19 + 6;
  }
  puVar22 = (undefined1 *)*plVar18;
  plVar18 = (long *)PTR_PTR_047d4508;
  if (plVar19 != (long *)0x0) {
    plVar18 = plVar19 + 7;
  }
  puVar16 = (undefined1 *)*plVar18;
  if (plVar19 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = plVar19[8];
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  plVar18 = local_168;
  local_168 = (long *)0x0;
  local_180 = puVar22;
  local_178 = puVar16;
  local_170 = lVar13;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  piVar23 = *(int **)(param_1 + 0x30);
  uVar20 = *(undefined8 *)(param_1 + 0x18);
  local_158 = (long *)((ulong)local_158 & 0xffffffffffff0000);
  local_150 = &DAT_cbf29ce484222645;
  local_148 = &DAT_03c886bc;
  local_100 = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  local_130 = &DAT_cbf29ce484222645;
  local_128 = "";
  local_120 = 0;
  local_118 = (long *)0x0;
  local_f8 = &DAT_cbf29ce484222645;
  puStack_f0 = &DAT_03c886bc;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  local_d8 = &DAT_cbf29ce484222645;
  puStack_d0 = &DAT_03c886bc;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  local_98 = &DAT_cbf29ce484222645;
  puStack_90 = &DAT_03c886bc;
  local_88 = 0;
  local_80 = (long *)0x0;
  lVar13 = -(long)*piVar23;
  puVar12 = (ushort *)((long)piVar23 - (long)*piVar23);
  uVar3 = *puVar12;
  local_168 = plVar19;
  if (uVar3 < 0x29) {
    if (0xc < uVar3) goto LAB_010270e4;
  }
  else if (((ulong)puVar12[0x14] == 0) || (*(char *)((long)piVar23 + (ulong)puVar12[0x14]) == '\0'))
  {
LAB_010270e4:
    if (((ulong)puVar12[6] != 0) && (*(char *)((long)piVar23 + (ulong)puVar12[6]) != '\0')) {
      local_158 = (long *)CONCAT71(local_158._1_7_,3);
      if (uVar3 < 0xf) {
        local_110 = 0;
      }
      else {
        if ((ulong)puVar12[7] == 0) {
          local_110 = 0;
        }
        else {
          local_110 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[7]);
        }
        if (0x10 < uVar3) {
          local_108 = 0;
          local_10c = 0;
          if ((ulong)puVar12[8] != 0) {
            local_10c = *(undefined4 *)((long)piVar23 + (ulong)puVar12[8]);
          }
          if ((0x12 < uVar3) && ((ulong)puVar12[9] != 0)) {
            local_108 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[9]);
          }
          goto LAB_010270f4;
        }
      }
      local_10c = 0;
      local_108 = 0;
    }
  }
  else {
    if (uVar3 < 0x2b) {
      local_78 = 0;
    }
    else {
      local_78 = 0;
      if ((ulong)puVar12[0x15] != 0) {
        puVar1 = (uint *)((long)piVar23 + (ulong)puVar12[0x15]);
        local_78 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    FUN_00ea0a7c(local_70,&local_78);
    plVar19 = local_70[0];
    plVar18 = (long *)PTR_DAT_047d8b70;
    if (local_70[0] != (long *)0x0) {
      plVar18 = local_70[0] + 6;
    }
    puVar22 = (undefined1 *)*plVar18;
    plVar18 = plVar9;
    if (local_70[0] != (long *)0x0) {
      plVar18 = local_70[0] + 7;
    }
    puVar16 = (undefined1 *)*plVar18;
    if (local_70[0] == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_70[0][8];
      (**(code **)(*local_70[0] + 0x18))();
    }
    plVar18 = local_138;
    local_138 = (long *)0x0;
    local_150 = puVar22;
    local_148 = puVar16;
    local_140 = lVar13;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))();
    }
    local_138 = plVar19;
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
    if (*(ushort *)((long)piVar23 - (long)*piVar23) < 0x2d) {
      local_78 = 0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[0x16];
      local_78 = 0;
      if (uVar11 != 0) {
        puVar1 = (uint *)((long)piVar23 + uVar11);
        local_78 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    FUN_00ea0a7c(local_70,&local_78);
    plVar19 = local_70[0];
    plVar18 = (long *)PTR_DAT_047d8b70;
    if (local_70[0] != (long *)0x0) {
      plVar18 = local_70[0] + 6;
    }
    puVar22 = (undefined1 *)*plVar18;
    if (local_70[0] != (long *)0x0) {
      plVar9 = local_70[0] + 7;
    }
    pcVar17 = (char *)*plVar9;
    if (local_70[0] == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = local_70[0][8];
      (**(code **)(*local_70[0] + 0x18))();
    }
    plVar18 = local_118;
    local_118 = (long *)0x0;
    local_130 = puVar22;
    local_128 = pcVar17;
    local_120 = lVar13;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))();
    }
    local_118 = plVar19;
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
    uVar10 = 1;
    if (*local_128 != '\0') {
      uVar10 = 2;
    }
    local_158 = (long *)CONCAT71(local_158._1_7_,uVar10);
    lVar13 = -(long)*piVar23;
  }
LAB_010270f4:
  puVar12 = (ushort *)((long)piVar23 + lVar13);
  uVar3 = *puVar12;
  if (uVar3 < 0x2f) {
    local_158._0_2_ = (ushort)(byte)local_158;
    if (0x14 < uVar3) goto LAB_01027114;
  }
  else {
    uVar10 = 0;
    if ((ulong)puVar12[0x17] != 0) {
      uVar10 = *(undefined1 *)((long)piVar23 + (ulong)puVar12[0x17]);
    }
    local_158._0_2_ = CONCAT11(uVar10,(byte)local_158);
LAB_01027114:
    if (((ulong)puVar12[10] != 0) && (*(char *)((long)piVar23 + (ulong)puVar12[10]) != '\0')) {
      if (uVar3 < 0x17) {
        local_b8 = 0;
LAB_01027810:
        local_b4 = 0;
LAB_01027814:
        local_b0 = 0;
LAB_01027818:
        local_ac = 0;
LAB_0102781c:
        local_a8 = 0;
LAB_01027820:
        local_a4 = 0;
      }
      else {
        if ((ulong)puVar12[0xb] == 0) {
          local_b8 = 0;
        }
        else {
          local_b8 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0xb]);
        }
        if (uVar3 < 0x19) goto LAB_01027810;
        local_b4 = 0;
        if ((ulong)puVar12[0xc] != 0) {
          local_b4 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0xc]);
        }
        if (uVar3 < 0x1b) goto LAB_01027814;
        if ((ulong)puVar12[0xd] == 0) {
          local_b0 = 0;
        }
        else {
          local_b0 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0xd]);
        }
        if (uVar3 < 0x1d) goto LAB_01027818;
        local_ac = 0;
        if ((ulong)puVar12[0xe] != 0) {
          local_ac = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0xe]);
        }
        if (uVar3 < 0x1f) goto LAB_0102781c;
        if ((ulong)puVar12[0xf] == 0) {
          local_a8 = 0;
        }
        else {
          local_a8 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0xf]);
        }
        if (uVar3 < 0x21) goto LAB_01027820;
        local_a4 = 0;
        if ((ulong)puVar12[0x10] != 0) {
          local_a4 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0x10]);
        }
        if (0x22 < uVar3) {
          if ((ulong)puVar12[0x11] == 0) {
            local_a0 = 0;
          }
          else {
            local_a0 = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0x11]);
          }
          if (uVar3 < 0x25) {
            local_9c = 0;
          }
          else {
            local_9c = 0;
            if ((ulong)puVar12[0x12] != 0) {
              local_9c = *(undefined4 *)((long)piVar23 + (ulong)puVar12[0x12]);
            }
          }
          goto LAB_01027124;
        }
      }
      local_9c = 0;
      local_a0 = 0;
    }
  }
LAB_01027124:
  FUN_0102e1b0(&local_360,uVar20,&local_158);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  lVar13 = FUN_010278b0(lVar15,*(undefined8 *)(lVar15 + 8),&local_360);
  *(undefined8 *)(lVar13 + 0xf0) = *param_5;
  *(undefined8 *)(lVar13 + 0xf8) = param_5[1];
  *(undefined8 *)(lVar13 + 0x100) = param_5[2];
  plVar18 = (long *)param_5[3];
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar9 = *(long **)(lVar13 + 0x108);
  *(long **)(lVar13 + 0x108) = plVar18;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  if (*(long *)(lVar13 + 0x120) == 0) {
    *(char *)(lVar13 + 0x334) = param_1[0x38];
  }
  else {
    *(bool *)(*(long *)(lVar13 + 0x120) + 0x210) = cVar2 != '\0' && (lVar8 == 0 || cVar21 != '\0');
    cVar2 = param_1[0x38];
    *(char *)(lVar13 + 0x334) = cVar2;
    if (*(long *)(lVar13 + 0x120) != 0) {
      *(char *)(*(long *)(lVar13 + 0x120) + 0x212) = cVar2;
    }
  }
  if ((plVar14 != (long *)0x0) && (plVar18 = (long *)plVar14[0x24], plVar18 != (long *)0x0)) {
LAB_010274f0:
    if (*(long *)(plVar18[6] + 0x58) == 0) goto LAB_010277d0;
    uVar20 = FUN_0118aa4c(lVar15,*(undefined8 *)(lVar15 + 8));
    plVar18 = plVar14 + 5;
    do {
      lVar8 = *plVar18;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_158 = plVar14;
    if ((int)lVar8 == -1) goto LAB_01027340;
    FUN_0102f200(uVar20,&local_158,1);
    if (local_158 != (long *)0x0) {
      plVar18 = local_158 + 5;
      do {
        lVar8 = *plVar18;
        iVar6 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_158 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_010272fc;
    }
  }
LAB_010271d8:
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    plVar18 = local_188 + 5;
    do {
      lVar8 = *plVar18;
      iVar6 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_188 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010272fc;
  }
  pcVar7 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    local_208 = (code *)0x0;
    (*pcVar7)(auStack_1f0);
  }
  pcVar7 = local_288;
  if (local_288 != (code *)0x0) {
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    local_288 = (code *)0x0;
    (*pcVar7)(auStack_270);
  }
  pcVar7 = local_318;
  if (local_318 != (code *)0x0) {
    local_310 = 0;
    uStack_308 = 0;
    local_320 = 0;
    local_318 = (code *)0x0;
    (*pcVar7)(auStack_300);
  }
  if (local_340 != (long *)0x0) {
    (**(code **)(*local_340 + 0x20))();
  }
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 5;
    do {
      lVar8 = *plVar18;
      iVar6 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar8 == 0) {
LAB_010272fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_010277d0:
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) goto LAB_010271d8;
  goto LAB_010274f0;
}


