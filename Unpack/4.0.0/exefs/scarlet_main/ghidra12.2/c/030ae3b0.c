/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ae3b0; name: FUN_030ae3b0
 */


ulong FUN_030ae3b0(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_350;
  uint local_348;
  undefined **local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  long local_320;
  long lStack_318;
  undefined8 local_310;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  long lStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  long local_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  long local_280;
  long lStack_278;
  long *local_268;
  undefined *local_260;
  long lStack_258;
  undefined **local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar8 = tpidr_el0;
  lVar3 = *(long *)(lVar8 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar3;
  }
  plVar11 = *(long **)(lVar3 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("getFaceForPath",0xe,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar5 = (undefined8 *)plVar11[2];
    uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar11[3]) && (plVar11[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TtgetFaceForPath";
      uVar2 = nn::os::GetSystemTick();
      puVar5[1] = uVar2;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar5 = (undefined8 *)plVar11[2];
      uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar11[3]) && (plVar11[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x40);
  local_268 = plVar11;
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
LAB_030ae8d0:
    uVar10 = 0xffffffff;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x38);
    uVar10 = 0xffffffff;
    plVar9 = plVar6;
    uVar7 = uVar4;
    do {
      if (*plVar9 != 0) {
        fVar12 = *(float *)((long)param_4 + 0x14);
        plVar9 = *(long **)(param_1 + 0xe0);
        local_230 = *(float *)((long)param_4 + 0x2c);
        goto LAB_030ae4e4;
      }
      uVar7 = uVar7 - 1;
      plVar9 = plVar9 + 0x20;
    } while (uVar7 != 0);
  }
  goto LAB_030ae8d4;
  while( true ) {
    uVar4 = uVar4 - 1;
    plVar6 = plVar6 + 0x20;
    if (uVar4 == 0) break;
LAB_030ae4e4:
    if ((*plVar6 != 0) &&
       (lVar8 = *(long *)(*plVar6 + 0x20), *(float *)(lVar8 + 0x180) == local_230)) {
      if (*(char *)(param_4 + 2) == '\0') goto LAB_030ae6ac;
      fVar14 = fVar12 - *(float *)(*(long *)(lVar8 + 0x68) + 0xb0);
      fVar13 = 0.0;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (*(float *)(param_4 + 3) * fVar14 <= 0.0) goto LAB_030ae6ac;
      lVar8 = param_4[7];
      if (-1 < lVar8) {
        fVar15 = *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                                     (long)(int)lVar8 * 0x18) + (lVar8 >> 0x20) * 0x18 + 8);
        fVar16 = *(float *)(param_1 + ((lVar8 << 0x20) >> 0x1e) + 0x60);
        if (fVar16 + 0.001 < fVar15) {
          fVar13 = (float)((int)((fVar15 - fVar16) / 254.0) + 1);
        }
      }
      lStack_258 = param_2[1];
      local_260 = (undefined *)*param_2;
      local_248 = CONCAT44(3,fVar12 + fVar12);
      local_250 = (undefined **)CONCAT44((int)*param_4,*(float *)(param_4 + 3) * fVar14 + fVar13);
      uStack_238 = param_3[1];
      local_240 = *param_3;
      uStack_218 = param_4[6];
      uStack_210 = param_4[10];
      lVar8 = param_4[7];
      fStack_224 = *(float *)(param_4 + 8);
      fStack_22c = (float)lVar8;
      fStack_228 = (float)((ulong)lVar8 >> 0x20);
      local_220 = param_4[9];
      iVar1 = FUN_0309a3dc(param_1,&local_260,param_5,&local_350);
      if (iVar1 == 0) {
        lVar8 = *param_2;
        param_5[1] = param_2[1];
        *param_5 = lVar8;
        goto LAB_030ae8d0;
      }
      uVar10 = (ulong)local_350 & 0xffffffff;
      goto LAB_030ae8d4;
    }
  }
  local_90 = 1;
  local_88 = 0;
  local_80 = &local_260;
  local_a0 = PTR_DAT_047e34b8 + 0x10;
  local_98 = 0xffffffff;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0x1bf;
  memset(&local_260,0,0x1c0);
  FUN_0322bd4c(&local_a0,"Layer not found",0xf);
  iVar1 = FUN_03226f50(0x4ed2fce5,&local_260,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Character/Utilities/hkaiCharacterUtil.cpp"
                       ,0x11d);
  if (iVar1 != 0) {
    CallSupervisor(0x26);
  }
LAB_030ae6ac:
  lStack_278 = param_2[1];
  local_280 = *param_2;
  local_2a0 = 0xffffffff;
  lStack_2b8 = 0x7f7fffee7f7fffee;
  local_2c0 = 0x7f7fffee7f7fffee;
  uStack_2a8 = 0x7f7fffee7f7fffee;
  uStack_2b0 = 0x7f7fffee7f7fffee;
  local_298 = 0x3a83126f3a83126f;
  local_290 = 0x3dcccccd3dcccccd;
  if (*(char *)((long)param_4 + 0x1c) != '\0') {
    local_298 = param_4[4];
    local_2a0 = *(undefined4 *)(param_4 + 5);
    uStack_2a8 = param_3[1];
    uStack_2b0 = *param_3;
    lStack_2b8 = param_2[1];
    local_2c0 = *param_2;
  }
  local_300 = &DAT_0464d7a0;
  uStack_2f8 = 0xffffffff;
  local_2f0 = 1;
  if (*(int *)((long)param_4 + 0x3c) < 0) {
    puVar5 = param_4 + 9;
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) + (long)(int)param_4[7] * 0x18)
             + ((long)param_4[7] >> 0x20) * 0x18);
  }
  local_2e0 = *puVar5;
  uStack_2d8 = param_4[6];
  local_2d0 = param_4[10];
  local_2c8 = *(undefined4 *)((long)param_4 + 0x14);
  local_260 = PTR_DAT_047e50d0 + 0x10;
  local_248 = 0;
  local_240 = 0;
  lStack_258 = CONCAT44(lStack_258._4_4_,1 << (ulong)(*(uint *)((long)param_4 + 0x2c) & 0x1f));
  local_250 = &local_300;
  fStack_228 = (float)param_2[1];
  fStack_224 = (float)((ulong)param_2[1] >> 0x20);
  local_230 = (float)*param_2;
  fStack_22c = (float)((ulong)*param_2 >> 0x20);
  uVar2 = *param_4;
  fVar12 = (float)((ulong)uVar2 >> 0x20);
  local_348 = 0xffffffff;
  local_220 = CONCAT44(fStack_22c + fVar12 * (float)((ulong)*param_3 >> 0x20),
                       local_230 + (float)uVar2 * (float)*param_3);
  uStack_218 = CONCAT44(fStack_224 + fVar12 * (float)((ulong)param_3[1] >> 0x20),
                        fStack_228 + (float)uVar2 * (float)param_3[1]);
  local_350 = (undefined *)NEON_fmov(0x3f800000,4);
  lStack_2e8 = param_1;
  if (*(char *)((long)param_4 + 0x1c) == '\0') {
    uVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,&local_260,&local_350);
    if ((uVar4 & 1) != 0) goto LAB_030ae810;
LAB_030ae838:
    local_330 = 0;
    local_350 = PTR_DAT_047d9308 + 0x10;
    lStack_318 = param_2[1];
    local_320 = *param_2;
    local_348 = 1 << (ulong)(*(uint *)((long)param_4 + 0x2c) & 0x1f);
    local_340 = &local_300;
    local_310 = param_4[1];
    uStack_338 = 0;
    if (*(char *)((long)param_4 + 0x1c) == '\0') {
      uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_350,&local_280);
    }
    else {
      local_290 = param_4[4];
      uVar10 = FUN_0305e430(plVar9,param_1,&local_350,&local_2c0,&local_280);
    }
  }
  else {
    local_290 = uVar2;
    uVar4 = FUN_0305ee74(plVar9,param_1,&local_260,&local_2c0,&local_350);
    if ((uVar4 & 1) == 0) goto LAB_030ae838;
LAB_030ae810:
    uVar10 = (ulong)local_348;
    fVar12 = (float)((ulong)local_350 >> 0x20);
    local_280 = CONCAT44(fStack_22c + ((float)((ulong)local_220 >> 0x20) - fStack_22c) * fVar12,
                         local_230 + ((float)local_220 - local_230) * SUB84(local_350,0));
    lStack_278 = CONCAT44(fStack_224 + ((float)((ulong)uStack_218 >> 0x20) - fStack_224) * fVar12,
                          fStack_228 + ((float)uStack_218 - fStack_228) * SUB84(local_350,0));
    if (local_348 == 0xffffffff) goto LAB_030ae838;
  }
  param_5[1] = lStack_278;
  *param_5 = local_280;
LAB_030ae8d4:
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar5 = (undefined8 *)plVar11[2];
      uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar11[3]) && (plVar11[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar11[2];
    uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar11[3]) && (plVar11[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar5[1] = uVar2;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  return uVar10 & 0xffffffff;
}


