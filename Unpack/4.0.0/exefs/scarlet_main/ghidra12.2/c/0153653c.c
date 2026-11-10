/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0153653c; name: FUN_0153653c
 */


long FUN_0153653c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_338;
  char *pcStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  long *local_318;
  undefined8 local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  long *local_2f0;
  undefined8 local_2e8;
  undefined *puStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  long *local_2c8;
  undefined8 local_2c0;
  char *pcStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long *local_2a0;
  undefined8 local_298;
  char *pcStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  long *local_278;
  long *local_270;
  char *pcStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  long *local_250;
  long *local_248;
  long lStack_240;
  long local_238;
  long *local_230;
  long local_228;
  long lStack_220;
  long local_218;
  long *local_210;
  long local_208;
  long lStack_200;
  long local_1f8;
  long *local_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long *local_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long *local_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long *local_190;
  undefined1 *local_188;
  byte *pbStack_180;
  size_t local_178;
  long *local_170;
  byte local_88 [40];
  
  lVar3 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),param_4);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar14 = &DAT_cbf29ce484222645;
    snprintf((char *)local_88,0x19,"%s_Copy%d",(char *)(lVar3 + 0xb0),param_5);
    lVar3 = *(long *)(param_1 + 0x30);
    local_178 = strlen((char *)local_88);
    if (local_88[0] != 0) {
      pbVar10 = (byte *)((ulong)local_88 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)local_88[0]) * 0x100000001b3);
        local_88[0] = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (local_88[0] != 0);
    }
    local_170 = (long *)0x0;
    local_188 = puVar14;
    pbStack_180 = local_88;
    uVar4 = FUN_010eb990(*(undefined8 *)(lVar3 + 0x170),param_4,&local_188);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    iVar2 = snprintf((char *)&local_188,0x100,"%s_Copy%d",*(char **)(param_3 + 8),param_5);
    uVar12 = *(undefined8 *)(param_1 + 8);
    if ((char)local_188 == '\0') {
      plVar9 = (long *)FUN_00d44228(iVar2);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar5 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar5;
      FUN_00cf9884(&local_248,uVar5,&local_188);
      plVar9 = local_248;
    }
    plVar7 = (long *)PTR_DAT_047d8b70;
    plVar1 = (long *)PTR_PTR_047d4508;
    local_248 = (long *)PTR_DAT_047d8b70;
    if (plVar9 != (long *)0x0) {
      local_248 = plVar9 + 6;
    }
    local_248 = (long *)*local_248;
    plVar11 = (long *)PTR_PTR_047d4508;
    if (plVar9 != (long *)0x0) {
      plVar11 = plVar9 + 7;
    }
    lStack_240 = *plVar11;
    if (plVar9 == (long *)0x0) {
      local_238 = 0;
    }
    else {
      local_238 = plVar9[8];
    }
    local_230 = (long *)0x0;
    plVar11 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      plVar11 = plVar9;
    }
    local_230 = plVar11;
    lVar3 = FUN_01536da8(param_2,uVar12,&local_248);
    if (local_230 != (long *)0x0) {
      (**(code **)(*local_230 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    lVar6 = FUN_00d36bcc(uVar4,0x14);
    lVar6 = *(long *)(*(long *)(lVar6 + 8) + 0x70);
    FUN_00faae34(&local_248,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18));
    plVar11 = local_248;
    plVar9 = plVar7;
    if (local_248 != (long *)0x0) {
      plVar9 = local_248 + 6;
    }
    lVar16 = *plVar9;
    plVar9 = plVar1;
    if (local_248 != (long *)0x0) {
      plVar9 = local_248 + 7;
    }
    lVar17 = *plVar9;
    if (local_248 == (long *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = local_248[8];
      (**(code **)(*local_248 + 0x18))(local_248);
    }
    FUN_00faae34(&local_270,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18));
    plVar9 = local_270;
    if (local_270 != (long *)0x0) {
      plVar7 = local_270 + 6;
    }
    lVar19 = *plVar7;
    if (local_270 != (long *)0x0) {
      plVar1 = local_270 + 7;
    }
    lVar13 = *plVar1;
    if (local_270 == (long *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = local_270[8];
      (**(code **)(*local_270 + 0x18))(local_270);
    }
    *(long *)(lVar3 + 0x88) = lVar16;
    *(long *)(lVar3 + 0x90) = lVar17;
    *(long *)(lVar3 + 0x98) = lVar18;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar7 = *(long **)(lVar3 + 0xa0);
    *(long **)(lVar3 + 0xa0) = plVar11;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(long *)(lVar3 + 0xa8) = lVar19;
    *(long *)(lVar3 + 0xb0) = lVar13;
    *(long *)(lVar3 + 0xb8) = lVar15;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar8 = *(long **)(lVar3 + 0xc0);
    *(long **)(lVar3 + 0xc0) = plVar9;
    plVar1 = (long *)PTR_DAT_047d8b70;
    plVar7 = (long *)PTR_PTR_047d4508;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (local_270 != (long *)0x0) {
      (**(code **)(*local_270 + 0x20))();
    }
    if (local_248 != (long *)0x0) {
      (**(code **)(*local_248 + 0x20))();
    }
    local_270 = (long *)0xcc3064c67bc74131;
    pcStack_268 = "key_select";
    local_260 = 10;
    uStack_258 = 0;
    FUN_0104b1dc(&local_250,lVar6,&local_270);
    plVar11 = local_250;
    plVar9 = plVar7;
    local_248 = plVar1;
    if (local_250 != (long *)0x0) {
      plVar9 = local_250 + 7;
      local_248 = local_250 + 6;
    }
    local_248 = (long *)*local_248;
    lStack_240 = *plVar9;
    if (local_250 == (long *)0x0) {
      local_238 = 0;
    }
    else {
      local_238 = local_250[8];
    }
    local_230 = (long *)0x0;
    if (local_250 != (long *)0x0) {
      (**(code **)(*local_250 + 0x18))(local_250);
    }
    local_230 = plVar11;
    local_298 = 0x9b9fd5c1d3870a2d;
    pcStack_290 = "select";
    local_288 = 6;
    uStack_280 = 0;
    FUN_0104b1dc(&local_278,lVar6,&local_298);
    plVar8 = local_278;
    plVar9 = plVar7;
    plVar11 = plVar1;
    if (local_278 != (long *)0x0) {
      plVar9 = local_278 + 7;
      plVar11 = local_278 + 6;
    }
    local_228 = *plVar11;
    lStack_220 = *plVar9;
    if (local_278 == (long *)0x0) {
      local_218 = 0;
    }
    else {
      local_218 = local_278[8];
    }
    local_210 = (long *)0x0;
    if (local_278 != (long *)0x0) {
      (**(code **)(*local_278 + 0x18))(local_278);
    }
    local_210 = plVar8;
    local_2c0 = 0x1a42cb434f6081a2;
    pcStack_2b8 = "unselect";
    local_2b0 = 8;
    uStack_2a8 = 0;
    FUN_0104b1dc(&local_2a0,lVar6,&local_2c0);
    plVar8 = local_2a0;
    plVar9 = plVar7;
    plVar11 = plVar1;
    if (local_2a0 != (long *)0x0) {
      plVar9 = local_2a0 + 7;
      plVar11 = local_2a0 + 6;
    }
    local_208 = *plVar11;
    lStack_200 = *plVar9;
    if (local_2a0 == (long *)0x0) {
      local_1f8 = 0;
    }
    else {
      local_1f8 = local_2a0[8];
    }
    local_1f0 = (long *)0x0;
    if (local_2a0 != (long *)0x0) {
      (**(code **)(*local_2a0 + 0x18))(local_2a0);
    }
    local_1f0 = plVar8;
    local_2e8 = 0x1dd494cdfcbdea68;
    puStack_2e0 = &DAT_03c049f3;
    local_2d8 = 4;
    uStack_2d0 = 0;
    FUN_0104b1dc(&local_2c8,lVar6,&local_2e8);
    plVar8 = local_2c8;
    plVar9 = plVar7;
    plVar11 = plVar1;
    if (local_2c8 != (long *)0x0) {
      plVar9 = local_2c8 + 7;
      plVar11 = local_2c8 + 6;
    }
    local_1e8 = *plVar11;
    lStack_1e0 = *plVar9;
    if (local_2c8 == (long *)0x0) {
      local_1d8 = 0;
    }
    else {
      local_1d8 = local_2c8[8];
    }
    local_1d0 = (long *)0x0;
    if (local_2c8 != (long *)0x0) {
      (**(code **)(*local_2c8 + 0x18))(local_2c8);
    }
    local_1d0 = plVar8;
    local_310 = 0xc2e20ce5bc3f5b9e;
    puStack_308 = &DAT_03c6df4b;
    local_300 = 4;
    uStack_2f8 = 0;
    FUN_012804b0(&local_2f0,lVar6,&local_310);
    plVar8 = local_2f0;
    plVar9 = plVar7;
    plVar11 = plVar1;
    if (local_2f0 != (long *)0x0) {
      plVar9 = local_2f0 + 7;
      plVar11 = local_2f0 + 6;
    }
    local_1c8 = *plVar11;
    lStack_1c0 = *plVar9;
    if (local_2f0 == (long *)0x0) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = local_2f0[8];
    }
    local_1b0 = (long *)0x0;
    if (local_2f0 != (long *)0x0) {
      (**(code **)(*local_2f0 + 0x18))(local_2f0);
    }
    local_1b0 = plVar8;
    local_338 = 0x48a4aeb5cb6a8ea3;
    pcStack_330 = "plate";
    local_328 = 5;
    uStack_320 = 0;
    FUN_012804b0(&local_318,lVar6,&local_338);
    plVar9 = local_318;
    if (local_318 != (long *)0x0) {
      plVar7 = local_318 + 7;
      plVar1 = local_318 + 6;
    }
    local_1a8 = *plVar1;
    lStack_1a0 = *plVar7;
    if (local_318 == (long *)0x0) {
      local_198 = 0;
    }
    else {
      local_198 = local_318[8];
    }
    local_190 = (long *)0x0;
    if (local_318 == (long *)0x0) {
      local_190 = local_318;
    }
    else {
      (**(code **)(*local_318 + 0x18))(local_318);
      local_190 = plVar9;
      if (local_318 != (long *)0x0) {
        (**(code **)(*local_318 + 0x20))();
      }
    }
    if (local_2f0 != (long *)0x0) {
      (**(code **)(*local_2f0 + 0x20))();
    }
    if (local_2c8 != (long *)0x0) {
      (**(code **)(*local_2c8 + 0x20))();
    }
    if (local_2a0 != (long *)0x0) {
      (**(code **)(*local_2a0 + 0x20))();
    }
    if (local_278 != (long *)0x0) {
      (**(code **)(*local_278 + 0x20))();
    }
    if (local_250 != (long *)0x0) {
      (**(code **)(*local_250 + 0x20))();
    }
    FUN_0153713c(lVar3,&local_248);
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x20))();
    }
    if (local_1b0 != (long *)0x0) {
      (**(code **)(*local_1b0 + 0x20))();
    }
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x20))();
    }
    if (local_1f0 != (long *)0x0) {
      (**(code **)(*local_1f0 + 0x20))();
    }
    if (local_210 != (long *)0x0) {
      (**(code **)(*local_210 + 0x20))();
    }
    if (local_230 != (long *)0x0) {
      (**(code **)(*local_230 + 0x20))();
    }
  }
  return lVar3;
}


