/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fe83e4; name: FUN_02fe83e4
 */


/* WARNING: Removing unreachable block (ram,0x02fe878c) */
/* WARNING: Removing unreachable block (ram,0x02fe8794) */
/* WARNING: Removing unreachable block (ram,0x02fe8804) */
/* WARNING: Removing unreachable block (ram,0x02fe87a4) */
/* WARNING: Removing unreachable block (ram,0x02fe87d8) */
/* WARNING: Removing unreachable block (ram,0x02fe87f8) */
/* WARNING: Removing unreachable block (ram,0x02fe882c) */

void FUN_02fe83e4(long param_1,int *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  long ***ppplVar15;
  long ***ppplVar14;
  long *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined2 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  uint *puVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  int *piVar30;
  int *piVar31;
  long ****pppplVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long **pplVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined1 auVar42 [16];
  uint *local_e80;
  undefined2 local_e78;
  ushort uStack_e76;
  int iStack_e74;
  undefined8 local_e70;
  uint local_e68;
  int iStack_e64;
  uint *local_e60;
  undefined2 local_e58;
  ushort uStack_e56;
  int iStack_e54;
  undefined8 local_e50;
  uint local_e48;
  int iStack_e44;
  undefined4 *local_e40;
  undefined2 local_e38;
  undefined2 local_e36;
  int local_e34;
  undefined8 local_e30;
  long local_e18;
  undefined8 *local_e10;
  uint *local_e08;
  uint local_e00;
  uint local_dfc;
  long **local_df0;
  undefined8 local_de8;
  long *local_de0;
  undefined8 local_dd8;
  undefined *local_dd0;
  long lStack_dc8;
  undefined4 local_dc0;
  undefined4 uStack_dbc;
  uint local_d9c;
  char *local_d00;
  uint local_bfc;
  uint local_af8;
  uint local_aa8;
  uint local_a54;
  uint local_a34;
  uint local_910;
  uint local_8c0;
  uint local_854;
  uint local_730;
  uint local_6e0;
  uint local_6bc;
  uint local_6b8;
  long **local_6b0;
  undefined8 *local_6a8;
  uint *local_6a0;
  undefined8 local_698;
  long **local_688;
  undefined8 *local_680;
  uint *local_678;
  undefined8 local_670;
  long *local_660;
  long *local_658;
  long local_650;
  undefined8 *local_648;
  uint *local_640;
  uint local_638;
  uint local_634;
  int local_628;
  long local_620;
  undefined8 *local_618;
  uint *local_610;
  uint local_608;
  uint local_604;
  int local_5f8;
  uint *local_5f0;
  uint *local_5e8;
  undefined4 local_5e0;
  uint local_5dc;
  long local_5d8;
  uint *local_5d0;
  uint local_5c8;
  undefined8 *local_5c0;
  long local_5a0;
  uint *local_598;
  uint local_590;
  undefined8 *local_588;
  uint *local_580;
  uint *local_578;
  undefined4 local_570;
  uint local_56c;
  long local_568;
  uint *local_560;
  uint local_558;
  undefined8 *local_550;
  long local_530;
  uint *local_528;
  uint local_520;
  undefined8 *local_518;
  long local_510;
  long local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  long *local_4c0;
  undefined4 local_4b8;
  char local_4b4;
  long *local_4b0;
  uint local_4a8;
  uint local_4a4;
  long local_490 [26];
  long *local_3c0;
  undefined4 local_3b8;
  char local_3b4;
  long *local_3b0;
  uint local_3a8;
  uint local_3a4;
  long local_390 [26];
  long ****local_2c0;
  undefined8 *local_2b8;
  uint *local_2b0;
  undefined8 local_2a8;
  long **local_298;
  undefined8 *local_290;
  uint *local_288;
  undefined8 local_280;
  long ***local_270;
  undefined8 local_268;
  uint *local_260;
  uint local_258;
  uint local_254;
  long local_240 [26];
  long *local_170;
  undefined4 local_168;
  char local_164;
  long *local_160;
  uint local_158;
  uint local_154;
  long local_140 [28];
  
  lVar40 = *(long *)(param_2 + 2);
  lVar38 = *(long *)(lVar40 + 0x920);
  puVar11 = *(undefined4 **)(*(long *)(param_2 + 0x150) + (long)param_2[0x152] * 8 + -8);
  uVar2 = *puVar11;
  uVar3 = *puVar11;
  *(undefined4 **)(param_2 + 0x1d0) = puVar11;
  *(short *)(param_2 + 0x1d2) = (short)((uint)uVar2 >> 0x10);
  *(short *)((long)param_2 + 0x74a) = (short)uVar3;
  param_2[0x1d3] = -param_2[0x14e];
  lVar33 = tpidr_el0;
  lVar12 = *(long *)(lVar33 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar12;
  }
  plVar34 = *(long **)(lVar12 + 0x3e0);
  if (plVar34 != (long *)0x0) {
    lVar12 = *plVar34;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("Collide",7,*(undefined8 *)(lVar12 + 0x28));
      if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
        (**(code **)(lVar12 + 0x18))("BroadPhase",10,*(undefined8 *)(lVar12 + 0x28));
      }
    }
    puVar29 = (undefined8 *)plVar34[2];
    uVar13 = (long)puVar29 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = "LtCollide";
      puVar29[2] = "StBroadPhase";
      uVar9 = nn::os::GetSystemTick();
      puVar29[1] = uVar9;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c4e575;
        puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
  }
  puVar29 = *(undefined8 **)(param_2 + 0x138);
  local_de0 = (long *)&local_dc0;
  local_dd8 = 0x8000001800000000;
  local_df0 = (long **)*puVar29;
  local_de8 = (ulong)local_de8._5_3_ << 0x28;
  uVar10 = *(int *)(puVar29 + 0xb) - 1;
  if (*(int *)(puVar29 + 0xb) < 1) {
    lVar12 = puVar29[1];
    (*(code *)(*local_df0)[4])(local_df0,lVar12,6);
    *(undefined4 *)(puVar29 + 0xb) = 5;
    puVar29 = (undefined8 *)(lVar12 + 0x28);
  }
  else {
    *(uint *)(puVar29 + 0xb) = uVar10;
    puVar29 = (undefined8 *)(puVar29[1] + (ulong)uVar10 * 8);
  }
  puVar29 = (undefined8 *)*puVar29;
  puVar29[2] = 0;
  puVar29[3] = 0;
  *puVar29 = 0;
  puVar29[1] = 0;
  *(uint *)((long)puVar29 + 4) = (uint)local_dd8;
  lVar12 = (long)(int)(uint)local_dd8;
  if ((int)(local_dd8._4_4_ & 0x7fffffff) <= (int)(uint)local_dd8) {
    FUN_031c25b4(&local_de0,PTR_PTR_047d1a50,lVar12 + 1);
  }
  local_de0[(int)(uint)local_dd8] = (long)puVar29;
  local_dd8 = CONCAT44(local_dd8._4_4_,(int)(lVar12 + 1));
  local_d00 = "hknpSingleThreadedSimulation::newPairsStream";
  (**(code **)(**(long **)(lVar40 + 0x4c0) + 0x48))(*(long **)(lVar40 + 0x4c0),0xfb);
  local_268 = *(undefined8 **)(param_2 + 0x138);
  local_260 = (uint *)local_de0[(long)(int)(uint)local_dd8 + -1];
  local_258 = *local_260 >> 0x10;
  local_254 = *local_260 & 0xffff;
  local_de8 = CONCAT44(local_de8._4_4_,(uint)local_de8 - (*local_260 & 0xffff));
  local_270 = &local_df0;
  (**(code **)(**(long **)(lVar40 + 0x4c0) + 0x70))
            (*(long **)(lVar40 + 0x4c0),param_2,*(undefined8 *)(lVar40 + 0x80),&local_270);
  puVar29 = local_268;
  if (local_254 == 0) {
    ppplVar14 = local_270 + 3;
    iVar25 = *(int *)ppplVar14;
    if (iVar25 < 2) goto LAB_02fe86e8;
    iVar4 = *(int *)(local_268 + 0xb);
    plVar34 = local_270[2][iVar25 + -2];
    lVar12 = local_268[1];
    *(long **)(lVar12 + (long)iVar4 * 8) = local_270[2][iVar25 + -1];
    *(int *)(local_268 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_268 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_268 + 0x28))
                ((long *)*local_268,lVar12 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    plVar34[1] = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe86e8:
    ppplVar14 = local_270 + 1;
    local_260[2] = 0;
    local_260[3] = 0;
    *local_260 = *local_260 & 0xffff0000 | local_254 & 0xffff;
    *local_260 = *local_260 & 0xffff | local_258 << 0x10;
    uVar10 = local_254;
  }
  *(uint *)ppplVar14 = *(int *)ppplVar14 + uVar10;
  uVar10 = *(uint *)(lVar40 + 0xf0);
  if (0 < (int)uVar10) {
    lVar20 = *(long *)(lVar40 + 0x38);
    lVar12 = 0;
    lVar26 = *(long *)(lVar40 + 0x80);
    do {
      lVar27 = *(long *)(lVar40 + 0xe8) + lVar12;
      lVar12 = lVar12 + 0x10;
      uVar13 = (ulong)*(uint *)(lVar27 + 8) & 0xffffff;
      lVar27 = lVar20 + uVar13 * 0xc0;
      puVar29 = (undefined8 *)(lVar26 + uVar13 * 0x18);
      uVar9 = *(undefined8 *)(lVar27 + 0x68);
      uVar28 = *(undefined8 *)(lVar27 + 0x70);
      *puVar29 = *(undefined8 *)(lVar27 + 0x60);
      puVar29[1] = uVar9;
      puVar29[2] = uVar28;
    } while ((ulong)uVar10 * 0x10 != lVar12);
  }
  local_260 = (uint *)0x0;
  local_270 = (long ***)0x0;
  lVar12 = *(long *)(lVar40 + 0x500);
  if (*(long *)(lVar40 + 0x698) != 0) {
    lVar20 = *(long *)(lVar33 + 0x1000b8);
    if (lVar20 == 0) {
      lVar20 = FUN_00e5d3b4();
      *(long *)(lVar33 + 0x1000b8) = lVar20;
    }
    plVar34 = *(long **)(lVar20 + 0x3e0);
    if (plVar34 != (long *)0x0) {
      lVar20 = *plVar34;
      if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
        puVar29 = (undefined8 *)plVar34[2];
        uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
        if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
          *puVar29 = &DAT_03c4e575;
          puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
        }
      }
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = "StActivateIslands";
        uVar9 = nn::os::GetSystemTick();
        puVar29[1] = uVar9;
      }
      if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
        (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
      }
      if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
        (**(code **)(lVar20 + 0x18))("ActivateIslands",0xf,*(undefined8 *)(lVar20 + 0x28));
      }
    }
    uVar9 = *(undefined8 *)(lVar40 + 0x698);
    FUN_02f548bc(uVar9,param_2);
    FUN_02f569cc(uVar9);
    FUN_02f58200(uVar9,param_2,lVar12 + 0x540,&local_df0,0,0,0,0);
  }
  lVar20 = *(long *)(lVar33 + 0x1000b8);
  if (lVar20 == 0) {
    lVar20 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar20;
  }
  plVar34 = *(long **)(lVar20 + 0x3e0);
  if (plVar34 != (long *)0x0) {
    lVar20 = *plVar34;
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c4e575;
        puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
    puVar29 = (undefined8 *)plVar34[2];
    uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = "StAppendNewBodyPairs";
      uVar9 = nn::os::GetSystemTick();
      puVar29[1] = uVar9;
    }
    if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
      (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
    }
    if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
      (**(code **)(lVar20 + 0x18))("AppendNewBodyPairs",0x12,*(undefined8 *)(lVar20 + 0x28));
    }
  }
  if (*(int *)(lVar12 + 0x948) != 0) {
    FUN_02f61a20(lVar12,param_2,&local_df0);
  }
  if ((uint)local_de8 == 0) {
    uVar19 = 0;
    local_270 = (long ***)0x0;
  }
  else {
    local_270 = (long ***)*local_de0;
    uVar19 = (undefined2)*(undefined4 *)local_270;
  }
  local_268 = (undefined8 *)((ulong)CONCAT42((uint)local_de8,uVar19) << 0x10);
  FUN_02f618f0(lVar12,lVar40,*(undefined8 *)(param_2 + 0x138),&local_270,0);
  lVar12 = *(long *)(param_2 + 0x138);
  uVar10 = (uint)local_dd8;
  if (local_de8._4_1_ != '\0') {
    plVar34 = local_de0;
    if (0 < (int)(uint)local_dd8) {
      plVar16 = local_de0;
      plVar22 = local_de0;
      if ((uint)local_dd8 != 1) {
        iVar25 = -((uint)local_dd8 & 0xfffffffe);
        do {
          plVar34 = plVar16;
          if (*plVar22 != 0) {
            plVar34 = plVar16 + 1;
            *plVar16 = *plVar22;
          }
          plVar16 = plVar34;
          if (plVar22[1] != 0) {
            plVar16 = plVar34 + 1;
            *plVar34 = plVar22[1];
          }
          plVar22 = plVar22 + 2;
          iVar25 = iVar25 + 2;
        } while (iVar25 != 0);
      }
      plVar34 = plVar16;
      if (((local_dd8 & 1) != 0) && (*plVar22 != 0)) {
        plVar34 = plVar16 + 1;
        *plVar16 = *plVar22;
      }
    }
    uVar10 = (uint)((ulong)((long)plVar34 - (long)local_de0) >> 3);
    local_de8._0_5_ = (uint5)(uint)local_de8;
  }
  if (uVar10 != 0) {
    if (lVar12 == 0) {
      (*(code *)(*local_df0)[5])(local_df0,local_de0);
    }
    else {
      FUN_031c2998(lVar12,local_de0);
    }
  }
  uVar7 = local_dd8;
  uVar13 = local_de8;
  local_de8 = local_de8 & 0xffffffff00000000;
  uVar37 = local_de8;
  if (local_df0 != (long **)0x0) {
    local_de8._4_1_ = SUB81(uVar13,4);
    bVar8 = local_de8._4_1_ != '\0';
    local_de8 = uVar37;
    if (bVar8) {
      local_de8 = uVar13 & 0xffffff0000000000;
    }
  }
  uVar13 = (ulong)local_dd8._4_4_;
  local_dd8 = (ulong)local_dd8._4_4_ << 0x20;
  if ((-1 < (long)uVar7) && (local_de0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_de0,uVar13 << 3);
  }
  puVar6 = PTR_DAT_047d1a08;
  if (*(long *)(param_1 + 0x10) == 0) {
    local_df0 = (long **)&DAT_00000120;
    auVar42 = (**(code **)PTR_DAT_047d1a08)(0,&local_df0,0);
    uVar9 = auVar42._8_8_;
    plVar34 = auVar42._0_8_;
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar34,"hknpSingleThreadedSolverData");
      uVar9 = extraout_x1;
    }
    FUN_02fcc7f0(plVar34,uVar9,*(undefined8 *)(param_2 + 0x138),1,1,1);
    puVar6 = PTR_DAT_047e49b8;
    plVar34[0x22] = lVar38;
    *plVar34 = (long)(puVar6 + 0x10);
    *(long **)(param_1 + 0x10) = plVar34;
  }
  else {
    FUN_02fcd6fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x138),1);
    plVar34 = *(long **)(param_1 + 0x10);
  }
  lVar20 = plVar34[0x20];
  iVar25 = *param_2;
  lVar12 = *(long *)(lVar33 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar12;
  }
  plVar34 = *(long **)(lVar12 + 0x3e0);
  if (plVar34 != (long *)0x0) {
    lVar12 = *plVar34;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c4e575;
        puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
    puVar29 = (undefined8 *)plVar34[2];
    uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = "StNarrowPhase";
      uVar9 = nn::os::GetSystemTick();
      puVar29[1] = uVar9;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("NarrowPhase",0xb,*(undefined8 *)(lVar12 + 0x28));
    }
  }
  lVar26 = *(long *)(lVar40 + 0x500);
  lVar12 = lVar26 + 0x540;
  if (*(int *)(lVar26 + 0x548) != 0) {
    lVar27 = *(long *)(lVar33 + 0x1000b8);
    if (lVar27 == 0) {
      lVar27 = FUN_00e5d3b4();
      *(long *)(lVar33 + 0x1000b8) = lVar27;
    }
    plVar34 = *(long **)(lVar27 + 0x3e0);
    if (plVar34 != (long *)0x0) {
      lVar27 = *plVar34;
      if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
        (**(code **)(lVar27 + 0x18))("SortNewCaches",0xd,*(undefined8 *)(lVar27 + 0x28));
      }
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = "TtSortNewCaches";
        uVar9 = nn::os::GetSystemTick();
        puVar29[1] = uVar9;
      }
      if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
        puVar29 = (undefined8 *)plVar34[2];
        uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
        if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
          *puVar29 = &DAT_03c4e575;
          puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
        }
      }
    }
    FUN_02fecb8c(param_2,lVar12);
    lVar27 = *(long *)(lVar33 + 0x1000b8);
    if (lVar27 == 0) {
      lVar27 = FUN_00e5d3b4();
      *(long *)(lVar33 + 0x1000b8) = lVar27;
    }
    plVar34 = *(long **)(lVar27 + 0x3e0);
    if (plVar34 != (long *)0x0) {
      lVar27 = *plVar34;
      if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
        puVar29 = (undefined8 *)plVar34[2];
        uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
        if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
          *puVar29 = &DAT_03c4e575;
          puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
        }
      }
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c2d363;
        uVar9 = nn::os::GetSystemTick();
        puVar29[1] = uVar9;
      }
      if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
        (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
      }
    }
  }
  iStack_e54 = 0;
  local_e50 = 0;
  local_e48 = local_e48 & 0xffffff00;
  iStack_e44 = 0;
  iStack_e74 = 0;
  local_e70 = 0;
  local_e68 = local_e68 & 0xffffff00;
  iStack_e64 = 0;
  if ((*(int *)(lVar26 + 0x28) == 0) && (*(int *)(lVar26 + 0x548) == 0)) goto LAB_02fea880;
  local_260 = (uint *)local_240;
  lVar27 = *(long *)(param_2 + 2);
  lVar39 = lVar20 + (long)iVar25 * 0x500;
  local_160 = local_140;
  local_270 = (long ***)0x0;
  local_258 = 0;
  local_254 = 0x80000018;
  local_170 = (long *)0x0;
  local_158 = 0;
  local_154 = 0x80000018;
  FUN_02f5fee0(&local_270,*(undefined8 *)(param_2 + 0x138),
               "hknpSingleThreadedSimulation::updatedCacheStream");
  local_2b8 = *(undefined8 **)(param_2 + 0x138);
  local_2b0 = *(uint **)local_260;
  local_2a8 = 0;
  Hint_Prefetch(local_2b0,0,0,0);
  Hint_Prefetch(local_2b0 + 0x10,0,0,0);
  local_288 = (uint *)*local_160;
  local_4b0 = local_490;
  local_280 = 0;
  Hint_Prefetch(local_288,0,0,0);
  Hint_Prefetch(local_288 + 0x10,0,0,0);
  local_3b0 = local_390;
  local_4c0 = (long *)0x0;
  local_4a8 = 0;
  local_4a4 = 0x80000018;
  local_3c0 = (long *)0x0;
  local_3a8 = 0;
  local_3a4 = 0x80000018;
  local_2c0 = &local_270;
  local_298 = &local_170;
  local_290 = local_2b8;
  FUN_02f5fee0(&local_4c0,local_2b8,"hknpSingleThreadedSimulation::inactiveCacheStream");
  local_508 = lVar27 + 0x530;
  local_4f0 = *(undefined8 *)(lVar27 + 0x4b0);
  uStack_4d8 = *(undefined8 *)(lVar27 + 0x4e8);
  local_4e0 = *(undefined8 *)(lVar27 + 0x4e0);
  uStack_4c8 = *(undefined8 *)(lVar27 + 0x4f8);
  local_4d0 = *(undefined8 *)(lVar27 + 0x4f0);
  local_510 = 0;
  if (*(char *)(*(long *)(lVar27 + 0x500) + 0xaa0) != '\0') {
    local_510 = *(long *)(lVar27 + 0x500) + 0xab0;
  }
  local_500 = *(undefined8 *)(lVar27 + 0x38);
  local_4f8 = *(undefined8 *)(lVar27 + 0x150);
  lVar27 = *(long *)(lVar33 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar27;
  }
  lVar27 = *(long *)(lVar27 + 0x3e0);
  local_618 = *(undefined8 **)(param_2 + 0x138);
  local_558 = 0;
  local_568 = 0;
  local_560 = (uint *)0x0;
  local_520 = 0;
  local_528 = (uint *)0x0;
  if (*(int *)(lVar26 + 0x28) == 0) {
    local_578 = (uint *)0x0;
  }
  else {
    local_580 = (uint *)**(undefined8 **)(lVar26 + 0x30);
    local_578 = local_580 + 8;
    local_570 = 0x7fffffff;
    local_56c = *local_580 & 0xffff;
    if (local_56c == 0) {
      local_578 = (uint *)0x0;
    }
    local_568 = lVar26 + 0x20;
    local_560 = local_580;
    local_558 = local_56c;
  }
  local_530 = lVar26 + 0x120;
  local_5c8 = 0;
  local_5d8 = 0;
  local_5d0 = (uint *)0x0;
  local_590 = 0;
  local_598 = (uint *)0x0;
  if (*(int *)(lVar26 + 0x548) == 0) {
    local_5e8 = (uint *)0x0;
  }
  else {
    local_5f0 = (uint *)**(undefined8 **)(lVar26 + 0x550);
    local_5e8 = local_5f0 + 8;
    local_5e0 = 0x7fffffff;
    local_5dc = *local_5f0 & 0xffff;
    if (local_5dc == 0) {
      local_5e8 = (uint *)0x0;
    }
    local_5d8 = lVar12;
    local_5d0 = local_5f0;
    local_5c8 = local_5dc;
  }
  lVar20 = lVar20 + (long)iVar25 * 0x500;
  local_610 = *(uint **)(*(long *)(lVar20 + 0x110) + (long)*(int *)(lVar20 + 0x118) * 8 + -8);
  local_608 = *local_610 >> 0x10;
  local_604 = *local_610 & 0xffff;
  *(uint *)(lVar20 + 0x108) = *(int *)(lVar20 + 0x108) - (*local_610 & 0xffff);
  local_648 = *(undefined8 **)(param_2 + 0x138);
  local_640 = *(uint **)(*(long *)(lVar20 + 0x210) + (long)*(int *)(lVar20 + 0x218) * 8 + -8);
  local_638 = *local_640 >> 0x10;
  local_634 = *local_640 & 0xffff;
  *(uint *)(lVar20 + 0x208) = *(int *)(lVar20 + 0x208) - (*local_640 & 0xffff);
  local_660 = &local_620;
  local_658 = &local_650;
  local_650 = lVar39 + 0x200;
  local_620 = lVar39 + 0x100;
  local_5c0 = local_618;
  local_5a0 = lVar26 + 0x640;
  local_588 = local_618;
  local_550 = local_618;
  local_518 = local_618;
  (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x40))
            (*(long **)(*(long *)(param_2 + 2) + 0x658),param_2 + 0x13a,&local_660,2);
  puVar29 = *(undefined8 **)(param_2 + 0x138);
  local_6a0 = (uint *)*local_4b0;
  local_6b0 = &local_4c0;
  local_698 = 0;
  Hint_Prefetch(local_6a0,0,0,0);
  Hint_Prefetch(local_6a0 + 0x10,0,0,0);
  local_688 = &local_3c0;
  local_678 = (uint *)*local_3b0;
  local_670 = 0;
  Hint_Prefetch(local_678,0,0,0);
  Hint_Prefetch(local_678 + 0x10,0,0,0);
  uStack_e76 = (ushort)local_604;
  local_5f8 = 0;
  local_e80 = local_610;
  iStack_e74 = -(local_604 + *(int *)(local_620 + 8));
  local_e78 = (undefined2)local_608;
  local_e58 = (undefined2)local_638;
  local_e60 = local_640;
  uStack_e56 = (ushort)local_634;
  local_628 = 0;
  iStack_e54 = -(local_634 + *(int *)(local_650 + 8));
  uVar13 = *(ulong *)(lVar27 + 0x10);
  uVar37 = *(ulong *)(lVar27 + 0x20);
  local_6a8 = puVar29;
  local_680 = puVar29;
  if (uVar13 < uVar37) {
    memset(&local_df0,0,0x740);
    local_e10 = puVar29;
  }
  else {
    ppplVar14 = &local_df0;
    do {
      ppplVar15 = ppplVar14 + 2;
      ppplVar14[1] = (long **)0x100000001;
      *ppplVar14 = (long **)0x100000001;
      ppplVar14 = ppplVar15;
    } while (ppplVar15 < &local_6b0);
    local_e10 = *(undefined8 **)(param_2 + 0x138);
  }
  bVar8 = uVar13 < uVar37;
  local_d9c = (uint)bVar8;
  local_d00 = (char *)CONCAT44(local_d00._4_4_,local_d9c);
  local_bfc = (uint)bVar8;
  lVar1 = lVar26 + 0x9a0;
  local_a34 = (uint)bVar8;
  local_e08 = *(uint **)(*(long *)(lVar26 + 0x9b0) + (long)*(int *)(lVar26 + 0x9b8) * 8 + -8);
  local_e00 = *local_e08 >> 0x10;
  local_dfc = *local_e08 & 0xffff;
  *(uint *)(lVar26 + 0x9a8) = *(int *)(lVar26 + 0x9a8) - (*local_e08 & 0xffff);
  local_e18 = lVar1;
  local_af8 = local_bfc;
  local_aa8 = local_bfc;
  local_a54 = local_bfc;
  local_910 = local_a34;
  local_8c0 = local_a34;
  local_854 = local_a34;
  local_730 = local_a34;
  local_6e0 = local_a34;
  local_6bc = local_a34;
  local_6b8 = local_a34;
  FUN_02f69e3c(param_2,&local_510,0,&local_580,0xffffffff,&local_5f0,0,&local_2c0,&local_6b0,lVar39,
               *(undefined8 *)(param_2 + 0x13a),*(undefined8 *)(param_2 + 0x13c),&local_e18,
               &local_df0);
  puVar29 = local_e10;
  if (local_dfc == 0) {
    piVar30 = (int *)(local_e18 + 0x18);
    iVar25 = *piVar30;
    if (iVar25 < 2) goto LAB_02fe9404;
    iVar4 = *(int *)(local_e10 + 0xb);
    lVar35 = *(long *)(*(long *)(local_e18 + 0x10) + (long)(iVar25 + -2) * 8);
    lVar21 = local_e10[1];
    *(undefined8 *)(lVar21 + (long)iVar4 * 8) =
         *(undefined8 *)(*(long *)(local_e18 + 0x10) + (long)(iVar25 + -1) * 8);
    *(int *)(local_e10 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_e10 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_e10 + 0x28))
                ((long *)*local_e10,lVar21 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar35 + 8) = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9404:
    piVar30 = (int *)(local_e18 + 8);
    local_e08[2] = 0;
    local_e08[3] = 0;
    *local_e08 = *local_e08 & 0xffff0000 | local_dfc & 0xffff;
    *local_e08 = *local_e08 & 0xffff | local_e00 << 0x10;
    uVar10 = local_dfc;
  }
  puVar29 = local_618;
  *piVar30 = *piVar30 + uVar10;
  local_e18 = 0;
  local_e08 = (uint *)0x0;
  if (*(int *)(lVar26 + 0x9a8) != 0) {
    if (local_604 == 0) {
      piVar30 = (int *)(local_620 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fe94c4;
      iVar4 = *(int *)(local_618 + 0xb);
      lVar35 = *(long *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar21 = local_618[1];
      *(undefined8 *)(lVar21 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_618 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_618 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_618 + 0x28))
                  ((long *)*local_618,lVar21 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar35 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fe94c4:
      piVar30 = (int *)(local_620 + 8);
      local_610[2] = 0;
      local_610[3] = 0;
      *local_610 = *local_610 & 0xffff0000 | local_604 & 0xffff;
      *local_610 = *local_610 & 0xffff | local_608 << 0x10;
      uVar10 = local_604;
    }
    puVar29 = local_648;
    *piVar30 = *piVar30 + uVar10;
    local_620 = 0;
    local_610 = (uint *)0x0;
    if (local_634 == 0) {
      piVar30 = (int *)(local_650 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fe95a4;
      iVar4 = *(int *)(local_648 + 0xb);
      lVar35 = *(long *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar21 = local_648[1];
      *(undefined8 *)(lVar21 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_648 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_648 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_648 + 0x28))
                  ((long *)*local_648,lVar21 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar35 + 8) = 0;
      local_634 = 0xffffffff;
    }
    else {
LAB_02fe95a4:
      piVar30 = (int *)(local_650 + 8);
      local_640[2] = 0;
      local_640[3] = 0;
      *local_640 = *local_640 & 0xffff0000 | local_634 & 0xffff;
      *local_640 = *local_640 & 0xffff | local_638 << 0x10;
    }
    *piVar30 = *piVar30 + local_634;
    local_618 = *(undefined8 **)(param_2 + 0x138);
    local_610 = *(uint **)(*(long *)(lVar20 + 0x110) + (long)*(int *)(lVar20 + 0x118) * 8 + -8);
    local_608 = *local_610 >> 0x10;
    local_604 = *local_610 & 0xffff;
    *(int *)(lVar20 + 0x108) = *(int *)(lVar20 + 0x108) - (*local_610 & 0xffff);
    local_648 = *(undefined8 **)(param_2 + 0x138);
    local_640 = *(uint **)(*(long *)(lVar20 + 0x210) + (long)*(int *)(lVar20 + 0x218) * 8 + -8);
    local_638 = *local_640 >> 0x10;
    local_634 = *local_640 & 0xffff;
    *(int *)(lVar20 + 0x208) = *(int *)(lVar20 + 0x208) - (*local_640 & 0xffff);
    local_650 = lVar39 + 0x200;
    local_620 = lVar39 + 0x100;
    (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x40))
              (*(long **)(*(long *)(param_2 + 2) + 0x658),param_2 + 0x13a,&local_660,2);
    local_e30 = 0;
    local_e34 = *(int *)(lVar26 + 0x9a8);
    if (local_e34 == 0) {
      local_e36 = 0;
      local_e40 = (undefined4 *)0x0;
    }
    else {
      local_e40 = (undefined4 *)**(undefined8 **)(lVar26 + 0x9b0);
      local_e36 = (undefined2)*local_e40;
    }
    local_e38 = 0;
    FUN_02f6ca04(param_2,&local_510,1,lVar1,&local_e40,*(undefined8 *)(param_2 + 0x13c));
    FUN_031c2be4(lVar1,*(undefined8 *)(param_2 + 0x138));
  }
  FUN_02f70d9c(&local_df0,lVar27);
  puVar29 = local_550;
  if (local_558 != 0) {
    if (local_558 == (*local_560 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_568 + 0x10) + (long)(int)local_560[1] * 8) = 0;
      *(undefined1 *)(local_568 + 0xc) = 1;
      iVar25 = *(int *)(local_550 + 0xb);
      lVar20 = local_550[1];
      *(uint **)(lVar20 + (long)iVar25 * 8) = local_560;
      *(int *)(local_550 + 0xb) = iVar25 + 1;
      if (*(int *)((long)local_550 + 0x5c) <= iVar25 + 1) {
        (**(code **)(*(long *)*local_550 + 0x28))
                  ((long *)*local_550,lVar20 + (long)(iVar25 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar25 + -5;
      }
    }
    else {
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_560,0x10);
        if (bVar8) {
          *local_560 = *local_560 - local_558;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_558 = 0;
    *(undefined1 *)(local_568 + 0xc) = 1;
  }
  puVar29 = local_518;
  local_568 = 0;
  local_550 = (undefined8 *)0x0;
  if (local_520 != 0) {
    if (local_520 == (*local_528 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_530 + 0x10) + (long)(int)local_528[1] * 8) = 0;
      *(undefined1 *)(local_530 + 0xc) = 1;
      iVar25 = *(int *)(local_518 + 0xb);
      lVar20 = local_518[1];
      *(uint **)(lVar20 + (long)iVar25 * 8) = local_528;
      *(int *)(local_518 + 0xb) = iVar25 + 1;
      if (*(int *)((long)local_518 + 0x5c) <= iVar25 + 1) {
        (**(code **)(*(long *)*local_518 + 0x28))
                  ((long *)*local_518,lVar20 + (long)(iVar25 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar25 + -5;
      }
    }
    else {
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_528,0x10);
        if (bVar8) {
          *local_528 = *local_528 - local_520;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_520 = 0;
    *(undefined1 *)(local_530 + 0xc) = 1;
  }
  puVar29 = local_5c0;
  local_530 = 0;
  local_518 = (undefined8 *)0x0;
  if (local_5c8 != 0) {
    if (local_5c8 == (*local_5d0 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_5d8 + 0x10) + (long)(int)local_5d0[1] * 8) = 0;
      *(undefined1 *)(local_5d8 + 0xc) = 1;
      iVar25 = *(int *)(local_5c0 + 0xb);
      lVar20 = local_5c0[1];
      *(uint **)(lVar20 + (long)iVar25 * 8) = local_5d0;
      *(int *)(local_5c0 + 0xb) = iVar25 + 1;
      if (*(int *)((long)local_5c0 + 0x5c) <= iVar25 + 1) {
        (**(code **)(*(long *)*local_5c0 + 0x28))
                  ((long *)*local_5c0,lVar20 + (long)(iVar25 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar25 + -5;
      }
    }
    else {
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_5d0,0x10);
        if (bVar8) {
          *local_5d0 = *local_5d0 - local_5c8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_5c8 = 0;
    *(undefined1 *)(local_5d8 + 0xc) = 1;
  }
  puVar29 = local_588;
  local_5d8 = 0;
  local_5c0 = (undefined8 *)0x0;
  if (local_590 != 0) {
    if (local_590 == (*local_598 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_5a0 + 0x10) + (long)(int)local_598[1] * 8) = 0;
      *(undefined1 *)(local_5a0 + 0xc) = 1;
      iVar25 = *(int *)(local_588 + 0xb);
      lVar20 = local_588[1];
      *(uint **)(lVar20 + (long)iVar25 * 8) = local_598;
      *(int *)(local_588 + 0xb) = iVar25 + 1;
      if (*(int *)((long)local_588 + 0x5c) <= iVar25 + 1) {
        (**(code **)(*(long *)*local_588 + 0x28))
                  ((long *)*local_588,lVar20 + (long)(iVar25 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar25 + -5;
      }
    }
    else {
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_598,0x10);
        if (bVar8) {
          *local_598 = *local_598 - local_590;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_590 = 0;
    *(undefined1 *)(local_5a0 + 0xc) = 1;
  }
  puVar29 = local_6a8;
  local_5a0 = 0;
  local_588 = (undefined8 *)0x0;
  if (local_698._4_4_ == 0) {
    pplVar36 = local_6b0 + 3;
    iVar25 = *(int *)pplVar36;
    if (iVar25 < 2) goto LAB_02fe9a0c;
    iVar4 = *(int *)(local_6a8 + 0xb);
    lVar27 = local_6b0[2][iVar25 + -2];
    lVar20 = local_6a8[1];
    *(long *)(lVar20 + (long)iVar4 * 8) = local_6b0[2][iVar25 + -1];
    *(int *)(local_6a8 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_6a8 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_6a8 + 0x28))
                ((long *)*local_6a8,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9a0c:
    pplVar36 = local_6b0 + 1;
    local_6a0[2] = 0;
    local_6a0[3] = 0;
    *local_6a0 = *local_6a0 & 0xffff0000 | local_698._4_4_ & 0xffff;
    *local_6a0 = *local_6a0 & 0xffff | (int)local_698 << 0x10;
    uVar10 = local_698._4_4_;
  }
  puVar29 = local_680;
  *(uint *)pplVar36 = *(int *)pplVar36 + uVar10;
  local_6b0 = (long **)0x0;
  local_6a0 = (uint *)0x0;
  if (local_670._4_4_ == 0) {
    pplVar36 = local_688 + 3;
    iVar25 = *(int *)pplVar36;
    if (iVar25 < 2) goto LAB_02fe9ac8;
    iVar4 = *(int *)(local_680 + 0xb);
    lVar27 = local_688[2][iVar25 + -2];
    lVar20 = local_680[1];
    *(long *)(lVar20 + (long)iVar4 * 8) = local_688[2][iVar25 + -1];
    *(int *)(local_680 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_680 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_680 + 0x28))
                ((long *)*local_680,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9ac8:
    pplVar36 = local_688 + 1;
    local_678[2] = 0;
    local_678[3] = 0;
    *local_678 = *local_678 & 0xffff0000 | local_670._4_4_ & 0xffff;
    *local_678 = *local_678 & 0xffff | (int)local_670 << 0x10;
    uVar10 = local_670._4_4_;
  }
  puVar29 = local_618;
  *(uint *)pplVar36 = *(int *)pplVar36 + uVar10;
  local_688 = (long **)0x0;
  local_678 = (uint *)0x0;
  piVar30 = (int *)(local_620 + 8);
  iStack_e74 = local_604 + *piVar30 + iStack_e74;
  if (iStack_e74 != 0) {
    uVar10 = local_604;
    if (local_e80 == local_610) {
    }
    else {
      if ((uint)uStack_e76 == (*local_e80 & 0xffff)) {
        local_e80 = *(uint **)(local_e80 + 2);
        uStack_e76 = 0;
        local_e78 = 0;
      }
      if (local_e80 == local_610) {
        local_e80 = local_610;
      }
      else {
        uVar10 = *local_e80;
      }
    }
    uStack_e76 = (short)uVar10 - uStack_e76;
  }
  iStack_e64 = local_5f8;
  iStack_e54 = local_634 + *(int *)(local_650 + 8) + iStack_e54;
  if (iStack_e54 != 0) {
    uVar10 = local_634;
    if (local_e60 == local_640) {
    }
    else {
      if ((uint)uStack_e56 == (*local_e60 & 0xffff)) {
        local_e60 = *(uint **)(local_e60 + 2);
        uStack_e56 = 0;
        local_e58 = 0;
      }
      if (local_e60 == local_640) {
        local_e60 = local_640;
      }
      else {
        uVar10 = *local_e60;
      }
    }
    uStack_e56 = (short)uVar10 - uStack_e56;
  }
  iStack_e44 = local_628;
  if (local_604 == 0) {
    piVar31 = (int *)(local_620 + 0x18);
    iVar25 = *piVar31;
    if (iVar25 < 2) goto LAB_02fe9c80;
    iVar4 = *(int *)(local_618 + 0xb);
    lVar27 = *(long *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -2) * 8);
    lVar20 = local_618[1];
    *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
         *(undefined8 *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -1) * 8);
    *(int *)(local_618 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_618 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_618 + 0x28))
                ((long *)*local_618,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    piVar30 = piVar31;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9c80:
    local_610[2] = 0;
    local_610[3] = 0;
    *local_610 = *local_610 & 0xffff0000 | local_604 & 0xffff;
    *local_610 = *local_610 & 0xffff | local_608 << 0x10;
    uVar10 = local_604;
  }
  puVar29 = local_648;
  *piVar30 = *piVar30 + uVar10;
  local_620 = 0;
  local_610 = (uint *)0x0;
  if (local_634 == 0) {
    piVar30 = (int *)(local_650 + 0x18);
    iVar25 = *piVar30;
    if (iVar25 < 2) goto LAB_02fe9d3c;
    iVar4 = *(int *)(local_648 + 0xb);
    lVar27 = *(long *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -2) * 8);
    lVar20 = local_648[1];
    *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
         *(undefined8 *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -1) * 8);
    *(int *)(local_648 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_648 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_648 + 0x28))
                ((long *)*local_648,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9d3c:
    piVar30 = (int *)(local_650 + 8);
    local_640[2] = 0;
    local_640[3] = 0;
    *local_640 = *local_640 & 0xffff0000 | local_634 & 0xffff;
    *local_640 = *local_640 & 0xffff | local_638 << 0x10;
    uVar10 = local_634;
  }
  puVar29 = local_2b8;
  *piVar30 = *piVar30 + uVar10;
  local_650 = 0;
  local_640 = (uint *)0x0;
  if (local_2a8._4_4_ == 0) {
    pppplVar32 = local_2c0 + 3;
    iVar25 = *(int *)pppplVar32;
    if (iVar25 < 2) goto LAB_02fe9df8;
    iVar4 = *(int *)(local_2b8 + 0xb);
    pplVar36 = local_2c0[2][iVar25 + -2];
    lVar20 = local_2b8[1];
    *(long ***)(lVar20 + (long)iVar4 * 8) = local_2c0[2][iVar25 + -1];
    *(int *)(local_2b8 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_2b8 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_2b8 + 0x28))
                ((long *)*local_2b8,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    pplVar36[1] = (long *)0x0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9df8:
    pppplVar32 = local_2c0 + 1;
    local_2b0[2] = 0;
    local_2b0[3] = 0;
    *local_2b0 = *local_2b0 & 0xffff0000 | local_2a8._4_4_ & 0xffff;
    *local_2b0 = *local_2b0 & 0xffff | (int)local_2a8 << 0x10;
    uVar10 = local_2a8._4_4_;
  }
  puVar29 = local_290;
  *(uint *)pppplVar32 = *(int *)pppplVar32 + uVar10;
  local_2c0 = (long ****)0x0;
  local_2b0 = (uint *)0x0;
  if (local_280._4_4_ == 0) {
    pplVar36 = local_298 + 3;
    iVar25 = *(int *)pplVar36;
    if (iVar25 < 2) goto LAB_02fe9eb4;
    iVar4 = *(int *)(local_290 + 0xb);
    lVar27 = local_298[2][iVar25 + -2];
    lVar20 = local_290[1];
    *(long *)(lVar20 + (long)iVar4 * 8) = local_298[2][iVar25 + -1];
    *(int *)(local_290 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_290 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_290 + 0x28))
                ((long *)*local_290,lVar20 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar10 = 0xffffffff;
  }
  else {
LAB_02fe9eb4:
    pplVar36 = local_298 + 1;
    local_288[2] = 0;
    local_288[3] = 0;
    *local_288 = *local_288 & 0xffff0000 | local_280._4_4_ & 0xffff;
    *local_288 = *local_288 & 0xffff | (int)local_280 << 0x10;
    uVar10 = local_280._4_4_;
  }
  puVar29 = local_e10;
  *(uint *)pplVar36 = *(int *)pplVar36 + uVar10;
  local_298 = (long **)0x0;
  local_288 = (uint *)0x0;
  if (local_e18 != 0) {
    if (local_dfc == 0) {
      piVar30 = (int *)(local_e18 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fe9f74;
      iVar4 = *(int *)(local_e10 + 0xb);
      lVar27 = *(long *)(*(long *)(local_e18 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar20 = local_e10[1];
      *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_e18 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_e10 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_e10 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_e10 + 0x28))
                  ((long *)*local_e10,lVar20 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fe9f74:
      piVar30 = (int *)(local_e18 + 8);
      local_e08[2] = 0;
      local_e08[3] = 0;
      *local_e08 = *local_e08 & 0xffff0000 | local_dfc & 0xffff;
      *local_e08 = *local_e08 & 0xffff | local_e00 << 0x10;
      uVar10 = local_dfc;
    }
    *piVar30 = *piVar30 + uVar10;
    local_e18 = 0;
    local_e08 = (uint *)0x0;
  }
  puVar29 = local_680;
  if (local_688 != (long **)0x0) {
    if (local_670._4_4_ == 0) {
      piVar30 = (int *)((long)local_688 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fea034;
      iVar4 = *(int *)(local_680 + 0xb);
      lVar27 = *(long *)(*(long *)((long)local_688 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar20 = local_680[1];
      *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)((long)local_688 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_680 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_680 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_680 + 0x28))
                  ((long *)*local_680,lVar20 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea034:
      piVar30 = (int *)((long)local_688 + 8);
      local_678[2] = 0;
      local_678[3] = 0;
      *local_678 = *local_678 & 0xffff0000 | local_670._4_4_ & 0xffff;
      *local_678 = *local_678 & 0xffff | (int)local_670 << 0x10;
      uVar10 = local_670._4_4_;
    }
    *piVar30 = *piVar30 + uVar10;
    local_688 = (long **)0x0;
    local_678 = (uint *)0x0;
  }
  puVar29 = local_6a8;
  if (local_6b0 != (long **)0x0) {
    if (local_698._4_4_ == 0) {
      pplVar36 = local_6b0 + 3;
      iVar25 = *(int *)pplVar36;
      if (iVar25 < 2) goto LAB_02fea0f4;
      iVar4 = *(int *)(local_6a8 + 0xb);
      lVar27 = local_6b0[2][iVar25 + -2];
      lVar20 = local_6a8[1];
      *(long *)(lVar20 + (long)iVar4 * 8) = local_6b0[2][iVar25 + -1];
      *(int *)(local_6a8 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_6a8 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_6a8 + 0x28))
                  ((long *)*local_6a8,lVar20 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea0f4:
      pplVar36 = local_6b0 + 1;
      local_6a0[2] = 0;
      local_6a0[3] = 0;
      *local_6a0 = *local_6a0 & 0xffff0000 | local_698._4_4_ & 0xffff;
      *local_6a0 = *local_6a0 & 0xffff | (int)local_698 << 0x10;
      uVar10 = local_698._4_4_;
    }
    *(uint *)pplVar36 = *(int *)pplVar36 + uVar10;
    local_6b0 = (long **)0x0;
    local_6a0 = (uint *)0x0;
  }
  puVar29 = local_648;
  if (local_650 != 0) {
    if (local_634 == 0) {
      piVar30 = (int *)(local_650 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fea1b4;
      iVar4 = *(int *)(local_648 + 0xb);
      lVar27 = *(long *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar20 = local_648[1];
      *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_650 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_648 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_648 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_648 + 0x28))
                  ((long *)*local_648,lVar20 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea1b4:
      piVar30 = (int *)(local_650 + 8);
      local_640[2] = 0;
      local_640[3] = 0;
      *local_640 = *local_640 & 0xffff0000 | local_634 & 0xffff;
      *local_640 = *local_640 & 0xffff | local_638 << 0x10;
      uVar10 = local_634;
    }
    *piVar30 = *piVar30 + uVar10;
    local_650 = 0;
    local_640 = (uint *)0x0;
  }
  puVar29 = local_618;
  if (local_620 != 0) {
    if (local_604 == 0) {
      piVar30 = (int *)(local_620 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fea274;
      iVar4 = *(int *)(local_618 + 0xb);
      lVar27 = *(long *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar20 = local_618[1];
      *(undefined8 *)(lVar20 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_620 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_618 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_618 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_618 + 0x28))
                  ((long *)*local_618,lVar20 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea274:
      piVar30 = (int *)(local_620 + 8);
      local_610[2] = 0;
      local_610[3] = 0;
      *local_610 = *local_610 & 0xffff0000 | local_604 & 0xffff;
      *local_610 = *local_610 & 0xffff | local_608 << 0x10;
      uVar10 = local_604;
    }
    *piVar30 = *piVar30 + uVar10;
    local_620 = 0;
    local_610 = (uint *)0x0;
  }
  FUN_02f601e0(lVar26 + 0x20,*(undefined8 *)(param_2 + 0x138),&local_270);
  FUN_02f60060(&local_270,*(undefined8 *)(param_2 + 0x138));
  FUN_031c2be4(lVar12,*(undefined8 *)(param_2 + 0x138));
  FUN_031c2be4(lVar26 + 0x640,*(undefined8 *)(param_2 + 0x138));
  FUN_02f54adc(*(undefined8 *)(*(long *)(param_2 + 2) + 0x698),param_2,&local_4c0);
  FUN_02f60060(&local_4c0,*(undefined8 *)(param_2 + 0x138));
  if (local_3c0 != (long *)0x0) {
    uVar10 = local_3a8;
    if (local_3b4 != '\0') {
      plVar34 = local_3b0;
      if (0 < (int)local_3a8) {
        plVar16 = local_3b0;
        plVar22 = local_3b0;
        if (local_3a8 != 1) {
          iVar25 = -(local_3a8 & 0xfffffffe);
          do {
            plVar34 = plVar16;
            if (*plVar22 != 0) {
              plVar34 = plVar16 + 1;
              *plVar16 = *plVar22;
            }
            plVar16 = plVar34;
            if (plVar22[1] != 0) {
              plVar16 = plVar34 + 1;
              *plVar34 = plVar22[1];
            }
            plVar22 = plVar22 + 2;
            iVar25 = iVar25 + 2;
          } while (iVar25 != 0);
        }
        plVar34 = plVar16;
        if (((local_3a8 & 1) != 0) && (*plVar22 != 0)) {
          plVar34 = plVar16 + 1;
          *plVar16 = *plVar22;
        }
      }
      uVar10 = (uint)((ulong)((long)plVar34 - (long)local_3b0) >> 3);
      local_3b4 = '\0';
    }
    if (uVar10 != 0) {
      (**(code **)(*local_3c0 + 0x28))(local_3c0,local_3b0);
    }
    local_3b8 = 0;
  }
  local_3a8 = 0;
  if ((-1 < (int)local_3a4) && (local_3b0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_3b0,(ulong)local_3a4 << 3);
  }
  local_3a4 = 0x80000000;
  local_3b0 = (long *)0x0;
  if (local_4c0 != (long *)0x0) {
    uVar10 = local_4a8;
    if (local_4b4 != '\0') {
      plVar34 = local_4b0;
      if (0 < (int)local_4a8) {
        plVar16 = local_4b0;
        plVar22 = local_4b0;
        if (local_4a8 != 1) {
          iVar25 = -(local_4a8 & 0xfffffffe);
          do {
            plVar34 = plVar16;
            if (*plVar22 != 0) {
              plVar34 = plVar16 + 1;
              *plVar16 = *plVar22;
            }
            plVar16 = plVar34;
            if (plVar22[1] != 0) {
              plVar16 = plVar34 + 1;
              *plVar34 = plVar22[1];
            }
            plVar22 = plVar22 + 2;
            iVar25 = iVar25 + 2;
          } while (iVar25 != 0);
        }
        plVar34 = plVar16;
        if (((local_4a8 & 1) != 0) && (*plVar22 != 0)) {
          plVar34 = plVar16 + 1;
          *plVar16 = *plVar22;
        }
      }
      uVar10 = (uint)((ulong)((long)plVar34 - (long)local_4b0) >> 3);
      local_4b4 = '\0';
    }
    if (uVar10 != 0) {
      (**(code **)(*local_4c0 + 0x28))(local_4c0,local_4b0);
    }
    local_4b8 = 0;
  }
  local_4a8 = 0;
  if ((-1 < (int)local_4a4) && (local_4b0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_4b0,(ulong)local_4a4 << 3);
  }
  puVar29 = local_290;
  if (local_298 != (long **)0x0) {
    if (local_280._4_4_ == 0) {
      piVar30 = (int *)((long)local_298 + 0x18);
      iVar25 = *piVar30;
      if (iVar25 < 2) goto LAB_02fea534;
      iVar4 = *(int *)(local_290 + 0xb);
      lVar20 = *(long *)(*(long *)((long)local_298 + 0x10) + (long)(iVar25 + -2) * 8);
      lVar12 = local_290[1];
      *(undefined8 *)(lVar12 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)((long)local_298 + 0x10) + (long)(iVar25 + -1) * 8);
      *(int *)(local_290 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_290 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_290 + 0x28))
                  ((long *)*local_290,lVar12 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea534:
      piVar30 = (int *)((long)local_298 + 8);
      local_288[2] = 0;
      local_288[3] = 0;
      *local_288 = *local_288 & 0xffff0000 | local_280._4_4_ & 0xffff;
      *local_288 = *local_288 & 0xffff | (int)local_280 << 0x10;
      uVar10 = local_280._4_4_;
    }
    *piVar30 = *piVar30 + uVar10;
    local_298 = (long **)0x0;
    local_288 = (uint *)0x0;
  }
  puVar29 = local_2b8;
  if (local_2c0 != (long ****)0x0) {
    if (local_2a8._4_4_ == 0) {
      pppplVar32 = local_2c0 + 3;
      iVar25 = *(int *)pppplVar32;
      if (iVar25 < 2) goto LAB_02fea5f4;
      iVar4 = *(int *)(local_2b8 + 0xb);
      pplVar36 = local_2c0[2][iVar25 + -2];
      lVar12 = local_2b8[1];
      *(long ***)(lVar12 + (long)iVar4 * 8) = local_2c0[2][iVar25 + -1];
      *(int *)(local_2b8 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_2b8 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_2b8 + 0x28))
                  ((long *)*local_2b8,lVar12 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar4 + -5;
      }
      pplVar36[1] = (long *)0x0;
      uVar10 = 0xffffffff;
    }
    else {
LAB_02fea5f4:
      pppplVar32 = local_2c0 + 1;
      local_2b0[2] = 0;
      local_2b0[3] = 0;
      *local_2b0 = *local_2b0 & 0xffff0000 | local_2a8._4_4_ & 0xffff;
      *local_2b0 = *local_2b0 & 0xffff | (int)local_2a8 << 0x10;
      uVar10 = local_2a8._4_4_;
    }
    *(uint *)pppplVar32 = *(int *)pppplVar32 + uVar10;
    local_2c0 = (long ****)0x0;
    local_2b0 = (uint *)0x0;
  }
  if (local_170 != (long *)0x0) {
    uVar10 = local_158;
    if (local_164 != '\0') {
      plVar34 = local_160;
      if (0 < (int)local_158) {
        plVar16 = local_160;
        plVar22 = local_160;
        if (local_158 != 1) {
          iVar25 = -(local_158 & 0xfffffffe);
          do {
            plVar34 = plVar16;
            if (*plVar22 != 0) {
              plVar34 = plVar16 + 1;
              *plVar16 = *plVar22;
            }
            plVar16 = plVar34;
            if (plVar22[1] != 0) {
              plVar16 = plVar34 + 1;
              *plVar34 = plVar22[1];
            }
            plVar22 = plVar22 + 2;
            iVar25 = iVar25 + 2;
          } while (iVar25 != 0);
        }
        plVar34 = plVar16;
        if (((local_158 & 1) != 0) && (*plVar22 != 0)) {
          plVar34 = plVar16 + 1;
          *plVar16 = *plVar22;
        }
      }
      uVar10 = (uint)((ulong)((long)plVar34 - (long)local_160) >> 3);
      local_164 = '\0';
    }
    if (uVar10 != 0) {
      (**(code **)(*local_170 + 0x28))(local_170,local_160);
    }
    local_168 = 0;
  }
  local_158 = 0;
  if ((-1 < (int)local_154) && (local_160 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_160,(ulong)local_154 << 3);
  }
  local_154 = 0x80000000;
  local_160 = (long *)0x0;
  if (local_270 != (long ***)0x0) {
    uVar10 = local_258;
    if (local_268._4_1_ != '\0') {
      puVar24 = local_260;
      if (0 < (int)local_258) {
        puVar17 = local_260;
        puVar23 = local_260;
        if (local_258 != 1) {
          iVar25 = -(local_258 & 0xfffffffe);
          do {
            plVar34 = (long *)puVar17;
            if (*(long *)puVar23 != 0) {
              plVar34 = (long *)((long)puVar17 + 8);
              *(long *)puVar17 = *(long *)puVar23;
            }
            puVar17 = (uint *)plVar34;
            if (*(long *)((long)puVar23 + 8) != 0) {
              puVar17 = (uint *)(plVar34 + 1);
              *plVar34 = *(long *)((long)puVar23 + 8);
            }
            puVar23 = (uint *)((long)puVar23 + 0x10);
            iVar25 = iVar25 + 2;
          } while (iVar25 != 0);
        }
        puVar24 = puVar17;
        if (((local_258 & 1) != 0) && (*(long *)puVar23 != 0)) {
          puVar24 = (uint *)((long)puVar17 + 8);
          *(long *)puVar17 = *(long *)puVar23;
        }
      }
      uVar10 = (uint)((ulong)((long)puVar24 - (long)local_260) >> 3);
      local_268._0_5_ = (uint5)(uint)local_268;
    }
    if (uVar10 != 0) {
      (*(code *)(*local_270)[5])(local_270,local_260);
    }
    local_268 = (undefined8 *)((ulong)local_268 & 0xffffffff00000000);
  }
  local_258 = 0;
  if ((-1 < (int)local_254) && (local_260 != (uint *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_260,(ulong)local_254 << 3);
  }
  if (iStack_e54 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    puVar29 = *(undefined8 **)(lVar12 + 0x60);
    if (*(int *)((long)puVar29 + 0xc) == 0) {
      puVar29[1] = CONCAT44(iStack_e54,CONCAT22(uStack_e56,local_e58));
      puVar29[3] = CONCAT44(iStack_e44,local_e48);
      puVar29[2] = local_e50;
      *puVar29 = local_e60;
    }
    else {
      iStack_e44 = iStack_e44 + *(int *)(**(long **)(lVar12 + 0x70) + 0x1c);
      puVar29 = (undefined8 *)**(long **)(lVar12 + 0x70);
      if (*(int *)((long)puVar29 + 0xc) == 0) {
        puVar29[1] = CONCAT44(iStack_e54,CONCAT22(uStack_e56,local_e58));
        puVar29[3] = CONCAT44(iStack_e44,local_e48);
        puVar29[2] = local_e50;
        *puVar29 = local_e60;
      }
      else {
        local_e50 = puVar29[2];
        puVar29[2] = &local_e60;
      }
      **(long **)(lVar12 + 0x70) = (long)&local_e60;
    }
  }
LAB_02fea880:
  if (iStack_e74 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    puVar29 = *(undefined8 **)(lVar12 + 0x10);
    if (*(int *)((long)puVar29 + 0xc) == 0) {
      puVar29[1] = CONCAT44(iStack_e74,CONCAT22(uStack_e76,local_e78));
      puVar29[3] = CONCAT44(iStack_e64,local_e68);
      puVar29[2] = local_e70;
      *puVar29 = local_e80;
    }
    else {
      iStack_e64 = iStack_e64 + *(int *)(**(long **)(lVar12 + 0x20) + 0x1c);
      puVar29 = (undefined8 *)**(long **)(lVar12 + 0x20);
      if (*(int *)((long)puVar29 + 0xc) == 0) {
        puVar29[1] = CONCAT44(iStack_e74,CONCAT22(uStack_e76,local_e78));
        puVar29[3] = CONCAT44(iStack_e64,local_e68);
        puVar29[2] = local_e70;
        *puVar29 = local_e80;
      }
      else {
        local_e70 = puVar29[2];
        puVar29[2] = &local_e80;
      }
      **(long **)(lVar12 + 0x20) = (long)&local_e80;
    }
  }
  if (*(long *)(lVar40 + 0x698) != 0) {
    local_de8 = lVar40 + 0x530;
    local_df0 = (long **)0x0;
    if (*(char *)(*(long *)(lVar40 + 0x500) + 0xaa0) != '\0') {
      local_df0 = (long **)(*(long *)(lVar40 + 0x500) + 0xab0);
    }
    FUN_02f5cfa0(*(long *)(lVar40 + 0x698),param_2,&local_df0,lVar26 + 0x840);
  }
  if ((0.0 < *(float *)(lVar40 + 0x898)) || (*(int *)(*(long *)(lVar40 + 0x490) + 0xc60) != 0)) {
    local_de0 = (long *)0x1;
    local_df0 = (long **)(PTR_DAT_047e4978 + 0x10);
    local_de8 = 0xffffffff;
    local_dd0 = PTR_DAT_047e4978 + 0x50;
    local_dc0 = *(undefined4 *)(*(long *)(lVar40 + 0x4b0) + 0x1c);
    uStack_dbc = 0;
    lStack_dc8 = lVar38;
    FUN_02fbe63c(&local_df0,param_2);
  }
  lVar12 = *(long *)(lVar33 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar12;
  }
  plVar34 = *(long **)(lVar12 + 0x3e0);
  if (plVar34 != (long *)0x0) {
    lVar33 = *plVar34;
    if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar29 = (undefined8 *)plVar34[2];
      uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c4e575;
        puVar29[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
    puVar29 = (undefined8 *)plVar34[2];
    uVar13 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar34[3]) && (plVar34[2] = uVar13, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = &DAT_03c3697b;
      uVar9 = nn::os::GetSystemTick();
      puVar29[1] = uVar9;
    }
    if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
      (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
      if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
        (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
      }
    }
  }
  if (param_2[0x1d3] + param_2[0x14e] == 0) {
    param_2[0x1d3] = 0;
  }
  else {
    puVar24 = *(uint **)(param_2 + 0x1d0);
    if ((puVar24 != *(uint **)(*(long *)(param_2 + 0x150) + (long)param_2[0x152] * 8 + -8)) &&
       ((uint)*(ushort *)((long)param_2 + 0x74a) == (*puVar24 & 0xffff))) {
      puVar24 = *(uint **)(puVar24 + 2);
      param_2[0x1d2] = 0;
    }
    uVar10 = *puVar24;
    *(uint **)(param_2 + 0x1d0) = puVar24;
    param_2[0x1d3] = param_2[0x1d3] + param_2[0x14e];
    lVar33 = *(long *)(param_2 + 0x1cc);
    *(short *)((long)param_2 + 0x74a) = (short)uVar10 - *(short *)((long)param_2 + 0x74a);
    puVar6 = PTR_PTR_047d1a50;
    puVar29 = (undefined8 *)**(undefined8 **)(lVar33 + 0x10);
    if (*(int *)((long)puVar29 + 0xc) == 0) {
      puVar29[1] = *(undefined8 *)(param_2 + 0x1d2);
      uVar9 = *(undefined8 *)(param_2 + 0x1d0);
      puVar29[2] = *(undefined8 *)(param_2 + 0x1d4);
      *puVar29 = uVar9;
    }
    else {
      puVar24 = *(uint **)(*(long *)(param_2 + 0x150) + (long)param_2[0x152] * 8 + -8);
      puVar41 = *(undefined8 **)(param_2 + 0x138);
      uVar10 = *puVar24;
      if (0x1e < uVar10 >> 0x17) {
        puVar23 = puVar24;
        do {
          uVar10 = *(int *)(puVar41 + 0xb) - 1;
          if (*(int *)(puVar41 + 0xb) < 1) {
            lVar12 = puVar41[1];
            (**(code **)(*(long *)*puVar41 + 0x20))((long *)*puVar41,lVar12,6);
            puVar18 = (undefined8 *)(lVar12 + 0x28);
            *(undefined4 *)(puVar41 + 0xb) = 5;
          }
          else {
            *(uint *)(puVar41 + 0xb) = uVar10;
            puVar18 = (undefined8 *)(puVar41[1] + (ulong)uVar10 * 8);
          }
          puVar24 = (uint *)*puVar18;
          puVar24[4] = 0;
          puVar24[5] = 0;
          puVar24[6] = 0;
          puVar24[7] = 0;
          puVar24[0] = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          puVar24[1] = param_2[0x152];
          iVar25 = param_2[0x152];
          lVar12 = (long)iVar25;
          if ((int)(param_2[0x153] & 0x7fffffffU) <= iVar25) {
            FUN_031c25b4(param_2 + 0x150,puVar6,lVar12 + 1);
            iVar25 = param_2[0x152];
          }
          *(uint **)(*(long *)(param_2 + 0x150) + (long)iVar25 * 8) = puVar24;
          param_2[0x152] = (int)(lVar12 + 1);
          *(uint **)(puVar23 + 2) = puVar24;
          uVar10 = *puVar24;
          puVar23 = puVar24;
        } while (0x1e < uVar10 >> 0x17);
      }
      uVar10 = uVar10 >> 0x10;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar24,0x10);
        if (bVar8) {
          *puVar24 = *puVar24 + 0x200001;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      param_2[0x14e] = param_2[0x14e] + 1;
      uVar9 = *(undefined8 *)(param_2 + 0x1d2);
      uVar28 = *(undefined8 *)(param_2 + 0x1d4);
      puVar41 = (undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x20);
      *puVar41 = *(undefined8 *)(param_2 + 0x1d0);
      *(undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x28) = uVar9;
      *(undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x30) = uVar28;
      if (*(int *)((long)puVar29 + 0xc) == 0) {
        puVar29[1] = *(undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x28);
        uVar9 = *puVar41;
        puVar29[2] = *(undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x30);
        *puVar29 = uVar9;
      }
      else {
        *(undefined8 *)((long)puVar24 + (ulong)uVar10 + 0x30) = puVar29[2];
        puVar29[2] = puVar41;
      }
      **(long **)(lVar33 + 0x10) = (long)puVar41;
    }
  }
  puVar11 = *(undefined4 **)(*(long *)(param_2 + 0x150) + (long)param_2[0x152] * 8 + -8);
  uVar2 = *puVar11;
  uVar3 = *puVar11;
  *(undefined4 **)(param_2 + 0x1d0) = puVar11;
  *(short *)(param_2 + 0x1d2) = (short)((uint)uVar2 >> 0x10);
  *(short *)((long)param_2 + 0x74a) = (short)uVar3;
  param_2[0x1d3] = -param_2[0x14e];
  FUN_02f423f0(lVar40,param_2);
  return;
}


