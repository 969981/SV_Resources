/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c9e04; name: FUN_030c9e04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030c9e04(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 *param_4,long param_5,long param_6)

{
  short *psVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 *local_410;
  uint local_3f4;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  long local_378;
  undefined8 local_370;
  undefined8 **ppuStack_368;
  undefined8 local_350;
  undefined6 uStack_348;
  undefined2 local_342;
  undefined4 uStack_340;
  undefined2 uStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined6 local_320;
  undefined2 uStack_31a;
  undefined6 uStack_318;
  undefined8 local_310;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *local_200;
  long local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  long local_1e0;
  int local_1d4;
  undefined8 auStack_1d0 [2];
  int local_1c0;
  float local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  int local_188;
  int local_184;
  long local_e0;
  uint local_d8;
  uint local_d4;
  int local_d0;
  long local_c0;
  long lStack_b8;
  uint local_b0;
  uint uStack_ac;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_68;
  
  uVar15 = *(undefined4 *)(param_5 + 0x38);
  *(undefined4 *)(param_6 + 0x50) = 0;
  if (*(int *)(param_5 + 0x50) == 0) {
LAB_030c9ed0:
    *(undefined4 *)(param_6 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_6 + 0x5c) = 5;
    return;
  }
  uVar8 = *(uint *)(param_5 + 0x40);
  if (uVar8 == 0xffffffff) goto LAB_030c9ed0;
  if (*(char *)(param_5 + 0x90) == '\0') {
    fVar26 = 3.40282e+38;
    iVar22 = -1;
    local_68 = 0;
    local_3f4 = 0;
    goto LAB_030ca110;
  }
  fVar26 = *(float *)(param_5 + 0x20);
  fVar38 = *(float *)(param_5 + 0x24);
  local_3b0 = *(undefined8 *)(param_5 + 0x20);
  fVar39 = *(float *)(param_5 + 0x28);
  fVar40 = *(float *)(param_5 + 0x2c);
  uStack_3a8 = *(undefined8 *)(param_5 + 0x28);
  pfVar16 = *(float **)(param_5 + 0x30);
  if (*(int *)(param_5 + 0x38) < 2) {
    iVar22 = 0;
  }
  else {
    auVar54._0_4_ = (fVar26 - *pfVar16) * (fVar26 - *pfVar16);
    auVar54._4_4_ = (fVar38 - pfVar16[1]) * (fVar38 - pfVar16[1]);
    auVar54._8_4_ = (fVar39 - pfVar16[2]) * (fVar39 - pfVar16[2]);
    auVar54._12_4_ = (fVar40 - pfVar16[3]) * (fVar40 - pfVar16[3]);
    auVar43 = NEON_ext(auVar54,auVar54,8,1);
    iVar22 = 0;
    lVar20 = 1;
    fVar41 = auVar54._0_4_ + auVar54._4_4_ + auVar43._0_4_;
    do {
      pfVar4 = pfVar16 + lVar20 * 4;
      auVar43._0_4_ = (fVar26 - *pfVar4) * (fVar26 - *pfVar4);
      auVar43._4_4_ = (fVar38 - pfVar4[1]) * (fVar38 - pfVar4[1]);
      auVar43._8_4_ = (fVar39 - pfVar4[2]) * (fVar39 - pfVar4[2]);
      auVar43._12_4_ = (fVar40 - pfVar4[3]) * (fVar40 - pfVar4[3]);
      auVar54 = NEON_ext(auVar43,auVar43,8,1);
      param_3._0_4_ = auVar43._0_4_ + auVar43._4_4_ + auVar54._0_4_;
      param_3._4_4_ = auVar43._0_4_ + auVar43._4_4_ + auVar54._4_4_;
      param_3._8_8_ = 0;
      fVar2 = param_3._0_4_;
      iVar24 = (int)lVar20;
      if (fVar41 <= param_3._0_4_) {
        fVar2 = fVar41;
        iVar24 = iVar22;
      }
      iVar22 = iVar24;
      lVar20 = lVar20 + 1;
      fVar41 = fVar2;
    } while (*(int *)(param_5 + 0x38) != (int)lVar20);
  }
  lVar20 = *(long *)(param_5 + 0x48);
  lVar21 = (long)iVar22;
  if (uVar8 == *(uint *)(lVar20 + (long)iVar22 * 4)) {
    auVar57._8_4_ = 0x7f7fffee;
    auVar57._0_8_ = 0x7f7fffee7f7fffee;
    auVar57._12_4_ = 0x7f7fffee;
    param_3._8_4_ = 0xff7fffee;
    param_3._0_8_ = 0xff7fffeeff7fffee;
    param_3._12_4_ = 0xff7fffee;
    uStack_330 = 0;
    local_328 = 0;
    local_320 = 0;
    uStack_31a = 0;
    uStack_2e8 = auVar57._8_8_;
    local_2f0 = 0x7f7fffee7f7fffee;
    uStack_2d8 = param_3._8_8_;
    uStack_2e0 = 0xff7fffeeff7fffee;
    lVar20 = *(long *)(*(long *)(param_4[7] + ((ulong)(uVar8 >> 0xe) & 0x3ff00) + 8) + 0x20);
    local_3c0 = (undefined8 *)CONCAT44(local_3c0._4_4_,uVar8);
    uStack_3b8 = *(long *)(lVar20 + 0x18) + ((ulong)uVar8 & 0x3fffff) * 0x18;
    local_380 = CONCAT44((int)((ulong)local_380 >> 0x20),uVar8);
    local_1f8 = param_5 + 0x60;
    local_378 = *(long *)(lVar20 + 0x18) + ((ulong)uVar8 & 0x3fffff) * 0x18;
    local_1f0 = &local_3c0;
    ppuStack_368 = SUB168(*(undefined1 (*) [16])(pfVar16 + lVar21 * 4),8);
    local_370 = SUB168(*(undefined1 (*) [16])(pfVar16 + lVar21 * 4),0);
    local_338 = 0;
    uStack_340 = 0xffffffff;
    local_1e8 = 0x52;
    plVar10 = *(long **)(param_5 + 0x88);
    local_200 = param_4;
    if ((plVar10 == (long *)0x0) ||
       (uVar11 = (**(code **)(*plVar10 + 0x28))(plVar10,&local_200), (uVar11 & 1) != 0)) {
      iVar24 = 1;
    }
    else {
      iVar24 = 0;
    }
    fVar26 = *(float *)(param_5 + 0x20);
    fVar38 = *(float *)(param_5 + 0x24);
    fVar39 = *(float *)(param_5 + 0x28);
    fVar40 = *(float *)(param_5 + 0x2c);
    pfVar16 = *(float **)(param_5 + 0x30);
    uVar8 = *(uint *)(param_5 + 0x40);
    lVar20 = *(long *)(param_5 + 0x48);
  }
  else {
    iVar24 = 0;
  }
  uStack_3b8 = CONCAT44(fVar40,fVar39);
  local_3c0 = (undefined8 *)CONCAT44(fVar38,fVar26);
  uStack_3a8 = SUB168(*(undefined1 (*) [16])(pfVar16 + lVar21 * 4),8);
  local_3b0 = SUB168(*(undefined1 (*) [16])(pfVar16 + lVar21 * 4),0);
  local_398 = *(undefined4 *)(param_5 + 0x58);
  local_3a0 = CONCAT44(*(undefined4 *)(lVar20 + lVar21 * 4),uVar8);
  uStack_388 = *(undefined8 *)(param_5 + 0x68);
  local_390 = *(undefined8 *)(param_5 + 0x60);
  local_378 = *(undefined8 *)(param_5 + 0x88);
  local_380 = *(undefined8 *)(param_5 + 0x80);
  uVar8 = FUN_030ce558(param_4,&local_3c0,param_6 + 0x18,0,(undefined4 *)(param_6 + 0x50),
                       param_6 + 0x58);
  local_3f4 = uVar8 & 1;
  bVar6 = (uVar8 & 1) == 0;
  bVar7 = true;
  uVar13 = 1;
  if (bVar6) {
    uVar13 = 2;
  }
  *(undefined1 *)(param_6 + 0x5c) = uVar13;
  fVar26 = *(float *)(param_6 + 0x58);
  if (bVar6) {
    fVar26 = 3.40282e+38;
  }
  if (*(char *)(param_5 + 0x90) == '\x02') {
LAB_030ca0d4:
    if ((((uint)(iVar24 == 0) & (uVar8 ^ 0xffffffff)) == 0) && (bVar7)) {
      FUN_030cad00(param_5,param_6,iVar22,iVar24);
      return;
    }
  }
  else if (*(char *)(param_5 + 0x90) == '\x01') {
    bVar7 = *(long *)(param_5 + 0x80) == 0;
    goto LAB_030ca0d4;
  }
  local_68 = CONCAT44(uVar8,iVar24);
LAB_030ca110:
  local_410 = (undefined4 *)(param_6 + 0x58);
  lVar20 = tpidr_el0;
  lVar21 = *(long *)(lVar20 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar21;
  }
  plVar10 = *(long **)(lVar21 + 0x3e0);
  if (plVar10 != (long *)0x0) {
    lVar21 = *plVar10;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))("FindVolumePath",0xe,*(undefined8 *)(lVar21 + 0x28));
      if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
        (**(code **)(lVar21 + 0x18))("init",4,*(undefined8 *)(lVar21 + 0x28));
      }
    }
    puVar14 = (undefined8 *)plVar10[2];
    uVar11 = (long)puVar14 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar10[3]) && (plVar10[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = "LtFindVolumePath";
      puVar14[2] = "Stinit";
      uVar12 = nn::os::GetSystemTick();
      puVar14[1] = uVar12;
    }
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar14 = (undefined8 *)plVar10[2];
      uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar10[3]) && (plVar10[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c4e575;
        puVar14[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
  }
  local_a8 = 0;
  local_a0 = 0x8000000000000000;
  local_98 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0x80000000;
  uVar8 = *(uint *)(param_5 + 0x9c);
  if ((int)uVar8 < 1) {
    uVar8 = 0x20000;
  }
  uVar25 = *(uint *)(param_5 + 0xa0);
  if ((int)*(uint *)(param_5 + 0xa0) < 1) {
    uVar25 = 0x90200;
  }
  local_88 = plVar10;
  if (*(long *)(param_5 + 0xb0) == 0) {
    FUN_030b4a20(&local_a8,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar8);
    if (((int)local_a0 < (int)uVar8) || ((int)uVar8 < (int)local_a0)) {
      local_a0 = CONCAT44(local_a0._4_4_,uVar8);
    }
  }
  else {
    local_a0 = (ulong)(uVar8 | 0x80000000) << 0x20;
    local_a8 = *(long *)(param_5 + 0xb0);
  }
  if (*(long *)(param_5 + 0xb8) == 0) {
    if ((int)(local_90._4_4_ & 0x7fffffff) < (int)uVar25) {
      FUN_030b4a20(&local_98,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar25);
    }
    if (((int)(uint)local_90 < (int)uVar25) || ((int)uVar25 < (int)(uint)local_90)) {
      local_90._0_4_ = uVar25;
    }
  }
  else {
    local_90._4_4_ = uVar25 | 0x80000000;
    local_90._0_4_ = 0;
    local_98 = *(long *)(param_5 + 0xb8);
  }
  local_c0 = local_a8;
  lStack_b8 = local_98;
  local_b0 = local_a0._4_4_ & 0x7fffffff;
  uStack_ac = local_90._4_4_ & 0x7fffffff;
  FUN_030cb7f4(&local_200,&local_c0);
  iVar24 = *(int *)PTR_DAT_047e4f38;
  lVar21 = *(long *)(lVar20 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar21;
  }
  if (*(long *)(lVar21 + (long)iVar24 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  local_350 = 0xffffffffffffffff;
  uStack_348 = 0;
  local_338 = 0;
  local_342 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  local_310 = 0;
  local_320 = 0;
  uStack_31a = 0;
  uStack_318 = 0;
  local_300 = 0xffffffff;
  local_2c0 = 0xffffffff;
  local_280 = 0xffffffff;
  local_2f8 = 0;
  auVar64._8_4_ = 0xff7fffee;
  auVar64._0_8_ = 0xff7fffeeff7fffee;
  auVar64._12_4_ = 0xff7fffee;
  local_2b8 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  uStack_228 = 0x7f7fffee;
  uStack_224 = 0x7f7fffee;
  local_230 = 0x7f7fffee7f7fffee;
  uStack_218 = auVar64._8_8_;
  uStack_220 = 0xff7fffeeff7fffee;
  uStack_3a8 = *(undefined8 *)(param_5 + 0x80);
  local_3a0 = *(undefined8 *)(param_5 + 0x88);
  uStack_3b8 = *(undefined8 *)(param_5 + 0x60);
  local_3b0 = *(undefined8 *)(param_5 + 0x68);
  local_3f0 = *(undefined8 *)(param_5 + 0x20);
  uStack_3e8 = *(undefined8 *)(param_5 + 0x28);
  local_3d8 = *(undefined4 *)(param_5 + 0x40);
  local_3e0 = *(undefined8 *)(param_5 + 0x30);
  local_3d0 = *(undefined8 *)(param_5 + 0x48);
  local_380 = CONCAT44(*(undefined4 *)(param_5 + 0x38),local_3d8);
  local_200 = &local_3c0;
  ppuStack_368 = &local_1f0;
  local_1b4 = *(undefined4 *)(param_5 + 0x94);
  local_1b8 = *(float *)(param_5 + 0x98);
  if (fVar26 <= *(float *)(param_5 + 0x98)) {
    local_1b8 = fVar26;
  }
  local_3c8 = uVar15;
  local_3c0 = param_4;
  local_390 = local_3f0;
  uStack_388 = uStack_3e8;
  local_378 = local_3e0;
  local_370 = local_3d0;
  FUN_030cba84(&local_200,&local_3c0,(undefined8 *)(param_5 + 0x60),&local_3f0);
  uVar8 = *(uint *)(param_5 + 0x58);
  lVar21 = *(long *)(lVar20 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar21;
  }
  plVar10 = *(long **)(lVar21 + 0x3e0);
  if (plVar10 != (long *)0x0) {
    lVar21 = *plVar10;
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
      puVar14 = (undefined8 *)plVar10[2];
      uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar10[3]) && (plVar10[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c4e575;
        puVar14[1] = *(undefined8 *)(plVar10[6] + 8);
      }
    }
    puVar14 = (undefined8 *)plVar10[2];
    uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar10[3]) && (plVar10[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = "StAStar";
      uVar12 = nn::os::GetSystemTick();
      puVar14[1] = uVar12;
    }
    if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
      (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
    }
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))("AStar",5,*(undefined8 *)(lVar21 + 0x28));
    }
  }
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  uVar25 = 0;
  uVar13 = 0;
  do {
    if (uVar8 == uVar25) {
      uVar9 = 3;
      uVar23 = 1;
      uVar25 = uVar8;
      break;
    }
    uVar9 = FUN_030cbfe4(&local_200);
    uVar23 = 2;
    if (local_188 < local_184) {
      uVar23 = 3;
    }
    if (uVar9 != 3) {
      uVar23 = uVar13;
    }
    iVar24 = *(int *)PTR_DAT_047e4f38;
    lVar21 = *(long *)(lVar20 + 0x1000b8);
    if (lVar21 == 0) {
      lVar21 = FUN_00e5d3b4();
      *(long *)(lVar20 + 0x1000b8) = lVar21;
    }
    uVar25 = uVar25 + 1;
    if (*(long *)(lVar21 + (long)iVar24 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar13 = uVar23;
  } while (uVar9 == 0);
  iVar24 = local_1d4;
  if (uVar9 == 1 || ((local_68._4_4_ ^ 0xffffffff) & 1) != 0) {
    *(char *)(param_6 + 0x5c) = (char)uVar9;
    *(undefined1 *)(param_6 + 0x5d) = uVar23;
    *(uint *)(param_6 + 0x50) = uVar25;
    *(undefined4 *)(param_6 + 0x54) = 0xffffffff;
    if ((uVar9 & 0xfffffffd) == 1) {
      if ((uVar9 == 1) && (local_1c0 = local_d0, 0 < (int)*(uint *)(param_5 + 0x50))) {
        uVar11 = 0;
        uVar15 = 0xffffffff;
        do {
          iVar22 = local_d0;
          if (*(int *)(*(long *)(param_5 + 0x48) + uVar11 * 4) == local_d0) {
            uVar15 = (undefined4)uVar11;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (*(uint *)(param_5 + 0x50) != uVar11);
      }
      else {
        uVar15 = 0xffffffff;
        iVar22 = local_1c0;
      }
      *(undefined4 *)(param_6 + 0x54) = uVar15;
      uVar11 = (ulong)((uint)(iVar22 * -0x61c8864f) >> 0x18);
      uVar3 = *(ushort *)(local_1e0 + uVar11 * 2);
      if (-1 < (short)uVar3) {
        do {
          if (*(int *)(local_1f0 + (ulong)uVar3 * 2 + 1) == iVar22) {
            puVar14 = local_1f0 + (ulong)uVar3 * 2;
            goto LAB_030ca6bc;
          }
          uVar3 = *(ushort *)(CONCAT71(uStack_1e7,local_1e8) + (ulong)uVar3 * 2);
        } while (-1 < (short)uVar3);
      }
      puVar14 = local_1f0 + (long)local_1d4 * 2;
      local_1d4 = local_1d4 + 1;
      *puVar14 = 0x7f7fffee7f7fffee;
      *(int *)(puVar14 + 1) = iVar22;
      *(undefined4 *)((long)puVar14 + 0xc) = 0xffff;
      *(undefined2 *)(CONCAT71(uStack_1e7,local_1e8) + (long)(short)iVar24 * 2) =
           *(undefined2 *)(local_1e0 + uVar11 * 2);
      *(short *)(local_1e0 + uVar11 * 2) = (short)iVar24;
LAB_030ca6bc:
      local_1b0 = ((int)puVar14 - (int)local_1f0) * 0x1000 >> 0x10;
      local_1a8 = puVar14;
      local_1a0 = puVar14;
      *local_410 = *(undefined4 *)puVar14;
      lVar21 = *(long *)(lVar20 + 0x1000b8);
      if (lVar21 == 0) {
        lVar21 = FUN_00e5d3b4();
        *(long *)(lVar20 + 0x1000b8) = lVar21;
      }
      plVar10 = *(long **)(lVar21 + 0x3e0);
      if (plVar10 != (long *)0x0) {
        lVar21 = *plVar10;
        if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
          puVar14 = (undefined8 *)plVar10[2];
          uVar18 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
          if ((uVar18 <= (ulong)plVar10[3]) && (plVar10[2] = uVar18, puVar14 != (undefined8 *)0x0))
          {
            *puVar14 = &DAT_03c4e575;
            puVar14[1] = *(undefined8 *)(plVar10[6] + 8);
          }
        }
        puVar14 = (undefined8 *)plVar10[2];
        uVar18 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= (ulong)plVar10[3]) && (plVar10[2] = uVar18, puVar14 != (undefined8 *)0x0)) {
          *puVar14 = "Stoutput";
          uVar12 = nn::os::GetSystemTick();
          puVar14[1] = uVar12;
        }
        if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
          (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
        }
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))("output",6,*(undefined8 *)(lVar21 + 0x28));
        }
      }
      uVar3 = *(ushort *)(local_1e0 + uVar11 * 2);
      if (-1 < (short)uVar3) {
        do {
          if (*(int *)(local_1f0 + (ulong)uVar3 * 2 + 1) == iVar22) {
            puVar14 = local_1f0 + (ulong)uVar3 * 2;
            goto LAB_030ca7e0;
          }
          uVar3 = *(ushort *)(CONCAT71(uStack_1e7,local_1e8) + (ulong)uVar3 * 2);
        } while (-1 < (short)uVar3);
      }
      puVar14 = auStack_1d0;
LAB_030ca7e0:
      uVar3 = *(ushort *)((long)puVar14 + 0xe);
      plVar10 = (long *)(param_6 + 0x18);
      if ((uVar3 >> 2 & 1) == 0) {
        uVar11 = (ulong)(uVar3 >> 3) & 1;
        puVar17 = puVar14;
        uVar8 = (uVar3 >> 3 & 1) - 1;
        do {
          uVar25 = uVar8;
          psVar1 = (short *)((long)puVar17 + 0xc);
          puVar17 = (undefined8 *)0x0;
          if (*psVar1 != -1) {
            puVar17 = local_1f0 + (long)*psVar1 * 2;
          }
          uVar8 = uVar25 + 1;
          uVar11 = uVar11 + 1;
        } while ((*(byte *)((long)puVar17 + 0xe) >> 2 & 1) == 0);
        if ((*(uint *)(param_6 + 0x24) & 0x7fffffff) <= uVar8) {
          FUN_030cb588(plVar10,PTR_PTR_047d1a50,uVar11);
        }
        if ((*(int *)(param_6 + 0x20) <= (int)uVar8) || ((int)uVar11 < *(int *)(param_6 + 0x20))) {
          *(int *)(param_6 + 0x20) = (int)uVar11;
        }
        uVar3 = *(ushort *)((long)puVar14 + 0xe);
        if ((uVar3 >> 3 & 1) != 0) {
          *(undefined4 *)(*plVar10 + uVar11 * 4 + -4) = *(undefined4 *)(puVar14 + 1);
          uVar3 = *(ushort *)((long)puVar14 + 0xe);
          uVar8 = uVar25;
        }
        if ((uVar3 >> 2 & 1) == 0) {
          lVar21 = (long)(int)uVar8;
          do {
            psVar1 = (short *)((long)puVar14 + 0xc);
            puVar14 = (undefined8 *)0x0;
            if (*psVar1 != -1) {
              puVar14 = local_1f0 + (long)*psVar1 * 2;
            }
            if (lVar21 < (long)uVar11) {
              *(undefined4 *)(*plVar10 + lVar21 * 4) = *(undefined4 *)(puVar14 + 1);
            }
            lVar21 = lVar21 + -1;
          } while ((*(byte *)((long)puVar14 + 0xe) >> 2 & 1) == 0);
        }
      }
      else {
        if ((*(uint *)(param_6 + 0x24) & 0x7fffffff) == 0) {
          FUN_030cb588(plVar10,PTR_PTR_047d1a50,1);
        }
        if (*(int *)(param_6 + 0x20) != 1) {
          *(undefined4 *)(param_6 + 0x20) = 1;
        }
        *(int *)*plVar10 = iVar22;
      }
      FUN_030cd0d0(&local_200,plVar10,param_6 + 0x28);
      puVar14 = *(undefined8 **)(param_5 + 0x30);
      uStack_3e8 = puVar14[1];
      local_3f0 = *puVar14;
      if (uVar9 == 1) {
        uStack_3e8 = SUB168(*(undefined1 (*) [16])(puVar14 + (long)*(int *)(param_6 + 0x54) * 2),8);
        local_3f0 = SUB168(*(undefined1 (*) [16])(puVar14 + (long)*(int *)(param_6 + 0x54) * 2),0);
        iVar22 = *(int *)(param_6 + 0x20);
      }
      else {
        iVar22 = *(int *)(param_6 + 0x20);
        if (iVar22 != 0) {
          uVar8 = *(uint *)(*plVar10 + (long)(iVar22 + -1) * 4);
          lVar21 = *(long *)(param_4[7] + ((ulong)(uVar8 >> 0xe) & 0x3ff00) + 8);
          auVar54 = *(undefined1 (*) [16])
                     (*(long *)(*(long *)(lVar21 + 0x20) + 0x18) + ((ulong)uVar8 & 0x3fffff) * 0x18)
          ;
          lVar19 = *(long *)(*(long *)(lVar21 + 0x20) + 0x38);
          auVar44._2_14_ = param_3._2_14_;
          auVar44._0_2_ = auVar54._0_2_;
          auVar46._6_10_ = param_3._6_10_;
          auVar46._0_4_ = auVar44._0_4_;
          auVar46._4_2_ = auVar54._2_2_;
          auVar48._10_6_ = param_3._10_6_;
          auVar48._0_8_ = auVar46._0_8_;
          auVar48._8_2_ = auVar54._4_2_;
          auVar50._14_2_ = param_3._14_2_;
          auVar50._0_12_ = auVar48._0_12_;
          auVar50._12_2_ = auVar54._6_2_;
          auVar45._4_12_ = auVar50._4_12_;
          auVar45._0_4_ = auVar46._0_4_ & 0xffff;
          auVar47._8_8_ = auVar50._8_8_;
          auVar47._0_6_ = auVar45._0_6_;
          auVar47._6_2_ = 0;
          auVar49._12_4_ = auVar50._12_4_;
          auVar49._0_10_ = auVar47._0_10_;
          auVar49._10_2_ = 0;
          auVar51._0_14_ = auVar49._0_14_;
          auVar51._14_2_ = 0;
          auVar27._2_14_ = auVar54._2_14_;
          auVar27._0_2_ = auVar54._8_2_;
          auVar29._6_10_ = auVar54._6_10_;
          auVar29._0_4_ = auVar27._0_4_;
          auVar29._4_2_ = auVar54._10_2_;
          auVar31._10_6_ = auVar54._10_6_;
          auVar31._0_8_ = auVar29._0_8_;
          auVar31._8_2_ = auVar54._12_2_;
          auVar33._0_12_ = auVar31._0_12_;
          auVar33._12_2_ = auVar54._14_2_;
          auVar33._14_2_ = auVar54._14_2_;
          auVar28._4_12_ = auVar33._4_12_;
          auVar28._0_4_ = auVar29._0_4_ & 0xffff;
          auVar30._8_8_ = auVar33._8_8_;
          auVar30._0_6_ = auVar28._0_6_;
          auVar30._6_2_ = 0;
          auVar32._12_4_ = auVar33._12_4_;
          auVar32._0_10_ = auVar30._0_10_;
          auVar32._10_2_ = 0;
          auVar34._0_14_ = auVar32._0_14_;
          auVar34._14_2_ = 0;
          auVar43 = NEON_ucvtf(auVar51,4);
          auVar54 = NEON_ucvtf(auVar34,4);
          bVar59 = *(byte *)(lVar21 + 0x40);
          auVar42._0_4_ = *(float *)(lVar19 + 0xa0) + *(float *)(lVar19 + 0x90) * auVar43._0_4_;
          auVar42._4_4_ = *(float *)(lVar19 + 0xa4) + *(float *)(lVar19 + 0x94) * auVar43._4_4_;
          auVar42._8_4_ = *(float *)(lVar19 + 0xa8) + *(float *)(lVar19 + 0x98) * auVar43._8_4_;
          auVar42._12_4_ = *(float *)(lVar19 + 0xac) + *(float *)(lVar19 + 0x9c) * auVar43._12_4_;
          auVar35._0_4_ = *(float *)(lVar19 + 0xa0) + *(float *)(lVar19 + 0x90) * auVar54._0_4_;
          auVar35._4_4_ = *(float *)(lVar19 + 0xa4) + *(float *)(lVar19 + 0x94) * auVar54._4_4_;
          auVar35._8_4_ = *(float *)(lVar19 + 0xa8) + *(float *)(lVar19 + 0x98) * auVar54._8_4_;
          auVar35._12_4_ = *(float *)(lVar19 + 0xac) + *(float *)(lVar19 + 0x9c) * auVar54._12_4_;
          if (CONCAT31(0,bVar59) != 0) {
            auVar63[4] = bVar59;
            auVar63._0_4_ = CONCAT31(0,bVar59);
            auVar63._5_3_ = 0;
            auVar63[8] = bVar59;
            auVar63._9_3_ = 0;
            auVar63[0xc] = bVar59;
            auVar63._13_3_ = 0;
            auVar52._8_8_ = _UNK_03cabbd8;
            auVar52._0_8_ = _DAT_03cabbd0;
            iVar24 = -(uint)bVar59;
            auVar56._8_8_ = _UNK_03cabbc8;
            auVar56._0_8_ = _DAT_03cabbc0;
            auVar66._8_8_ = _UNK_03cab238;
            auVar66._0_8_ = _DAT_03cab230;
            auVar43 = NEON_ushl(auVar66,auVar63,4);
            auVar5._8_4_ = (int)_UNK_03cac2d8;
            auVar5._0_8_ = _DAT_03cac2d0;
            auVar5._12_4_ = (int)((ulong)_UNK_03cac2d8 >> 0x20);
            auVar64 = NEON_ushl(auVar5,auVar63,4);
            auVar54 = a64_TBL(ZEXT816(0),auVar42,auVar52);
            auVar67._0_4_ = -(uint)(-1 < auVar43._0_4_);
            auVar67._4_4_ = -(uint)(-1 < auVar43._4_4_);
            auVar67._8_4_ = -(uint)(-1 < auVar43._8_4_);
            auVar67._12_4_ = -(uint)(-1 < auVar43._8_8_);
            auVar57 = a64_TBL(ZEXT816(0),auVar42,auVar56);
            auVar43 = a64_TBL(ZEXT816(0),auVar35,auVar56);
            auVar42 = auVar42 ^ (auVar42 ^ auVar54) & ~auVar67;
            auVar55._0_4_ = -(uint)(-1 < auVar64._0_4_);
            auVar55._4_4_ = -(uint)(-1 < auVar64._4_4_);
            auVar55._8_4_ = -(uint)(-1 < auVar64._8_4_);
            auVar55._12_4_ = -(uint)(-1 < auVar64._12_4_);
            auVar54 = a64_TBL(ZEXT816(0),auVar35,auVar52);
            auVar35 = auVar35 ^ (auVar35 ^ auVar54) & ~auVar67;
            auVar42 = auVar42 ^ (auVar42 ^ auVar57) & ~auVar55;
            auVar58._4_4_ = iVar24;
            auVar58._0_4_ = iVar24;
            auVar58._8_4_ = iVar24;
            auVar58._12_4_ = iVar24;
            auVar35 = auVar35 ^ (auVar35 ^ auVar43) & ~auVar55;
            auVar65._8_8_ = _UNK_03cabec8;
            auVar65._0_8_ = _DAT_03cabec0;
            auVar54 = NEON_ushl(auVar65,auVar58,4);
            auVar53._0_3_ = auVar42._0_3_;
            bVar59 = (byte)((uint)(auVar54._0_4_ << 0x1f) >> 0x18);
            auVar53[3] = bVar59 ^ auVar42[3];
            auVar53[4] = auVar42[4];
            auVar53[5] = auVar42[5];
            auVar53[6] = auVar42[6];
            bVar60 = (byte)((uint)(auVar54._4_4_ << 0x1f) >> 0x18);
            auVar53[7] = bVar60 ^ auVar42[7];
            auVar53[8] = auVar42[8];
            auVar53[9] = auVar42[9];
            auVar53[10] = auVar42[10];
            bVar61 = (byte)((uint)(auVar54._8_4_ << 0x1f) >> 0x18);
            auVar53[0xb] = bVar61 ^ auVar42[0xb];
            auVar53[0xc] = auVar42[0xc];
            auVar53[0xd] = auVar42[0xd];
            auVar53[0xe] = auVar42[0xe];
            bVar62 = (byte)((uint)(auVar54._12_4_ << 0x1f) >> 0x18);
            auVar53[0xf] = bVar62 ^ auVar42[0xf];
            auVar36._0_3_ = auVar35._0_3_;
            auVar36[3] = auVar35[3] ^ bVar59;
            auVar36[4] = auVar35[4];
            auVar36[5] = auVar35[5];
            auVar36[6] = auVar35[6];
            auVar36[7] = auVar35[7] ^ bVar60;
            auVar36[8] = auVar35[8];
            auVar36[9] = auVar35[9];
            auVar36[10] = auVar35[10];
            auVar36[0xb] = auVar35[0xb] ^ bVar61;
            auVar36[0xc] = auVar35[0xc];
            auVar36[0xd] = auVar35[0xd];
            auVar36[0xe] = auVar35[0xe];
            auVar36[0xf] = auVar35[0xf] ^ bVar62;
            auVar42 = NEON_fmin(auVar53,auVar36,4);
            auVar35 = NEON_fmax(auVar53,auVar36,4);
          }
          auVar37._0_8_ =
               CONCAT44((auVar42._4_4_ + *(float *)(lVar21 + 0x54) +
                        auVar35._4_4_ + *(float *)(lVar21 + 0x54)) * 0.5,
                        (auVar42._0_4_ + *(float *)(lVar21 + 0x50) +
                        auVar35._0_4_ + *(float *)(lVar21 + 0x50)) * 0.5);
          auVar37._8_4_ =
               (auVar42._8_4_ + *(float *)(lVar21 + 0x58) +
               auVar35._8_4_ + *(float *)(lVar21 + 0x58)) * 0.5;
          auVar37._12_4_ =
               (auVar42._12_4_ + *(float *)(lVar21 + 0x5c) +
               auVar35._12_4_ + *(float *)(lVar21 + 0x5c)) * 0.5;
          uStack_3e8 = auVar37._8_8_;
          local_3f0 = auVar37._0_8_;
        }
      }
      if ((int)(*(uint *)(param_6 + 0x44) & 0x7fffffff) <= iVar22) {
        FUN_0308eb60(param_6 + 0x38,PTR_PTR_047d1a50,(long)(iVar22 + 1));
      }
      iVar22 = *(int *)PTR_DAT_047e4f38;
      lVar21 = *(long *)(lVar20 + 0x1000b8);
      if (lVar21 == 0) {
        lVar21 = FUN_00e5d3b4();
        *(long *)(lVar20 + 0x1000b8) = lVar21;
      }
      if (*(long *)(lVar21 + (long)iVar22 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      FUN_030cd4bc(param_4,plVar10,param_6 + 0x28,*(undefined4 *)(param_5 + 0x40),
                   (undefined8 *)(param_5 + 0x20),&local_3f0,param_6 + 0x38,0,0);
    }
  }
  else {
    FUN_030cad00(param_5,param_6,iVar22,local_68 & 0xffffffff,local_3f4);
  }
  if (0 < (int)local_d4) {
    lVar21 = 0;
    lVar20 = (ulong)local_d4 + 1;
    do {
      if (*(int *)(local_e0 + lVar21) != -1) {
        *(undefined4 *)(local_e0 + lVar21) = 0xffffffff;
      }
      lVar20 = lVar20 + -1;
      lVar21 = lVar21 + 8;
    } while (lVar20 != 0);
  }
  uVar8 = local_d8 & 0x80000000;
  bVar7 = -1 < (int)local_d8;
  local_d8 = uVar8;
  if ((bVar7) && (local_e0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_e0,(long)(int)local_d4 * 8 + 8);
  }
  uVar8 = local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (int)uVar8) && (local_98 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar11 = local_a0;
  local_98 = 0;
  local_90 = CONCAT44(0x80000000,(uint)local_90);
  local_a0 = local_a0 & 0xffffffff00000000;
  if ((-1 < (long)uVar11) && (local_a8 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  if (local_88 == (long *)0x0) {
    return;
  }
  lVar20 = *local_88;
  if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (local_88[6] != 0)) {
    puVar14 = (undefined8 *)local_88[2];
    uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)local_88[3]) && (local_88[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = &DAT_03c4e575;
      puVar14[1] = *(undefined8 *)(local_88[6] + 8);
    }
  }
  puVar14 = (undefined8 *)local_88[2];
  uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
  if ((uVar11 <= (ulong)local_88[3]) && (local_88[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
    *puVar14 = &DAT_03c3697b;
    uVar12 = nn::os::GetSystemTick();
    puVar14[1] = uVar12;
  }
  if (*(code **)(lVar20 + 0x20) == (code *)0x0) {
    return;
  }
  (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
  if (*(code **)(lVar20 + 0x20) == (code *)0x0) {
    return;
  }
  (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
  return;
}


