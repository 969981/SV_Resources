/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9e080; name: FUN_02e9e080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e9e080(long *param_1,void *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8,undefined8 param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_2d0 [8];
  long *local_2c8;
  undefined2 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined **local_298;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  int local_228;
  undefined4 local_224;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined **local_1a0;
  undefined **local_198;
  undefined **ppuStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_88;
  undefined **local_80;
  
  uVar8 = _UNK_03cabe68;
  uVar7 = _DAT_03cabe60;
  uVar6 = DAT_03cab628;
  uVar5 = DAT_03cab620;
  uVar4 = _UNK_03caa5b8;
  uVar3 = _DAT_03caa5b0;
  lVar12 = *(long *)(*(long *)((long)param_2 + 0x38) + 0x50);
  if (*(char *)(lVar12 + 0x15df) != '\0') {
    local_188 = 0x90;
    local_198 = (undefined **)0x0;
    ppuStack_190 = &local_180;
    local_1a0 = &PTR_LAB_0460db58;
    if (*(char *)((long)param_2 + 0x20) == '\x02') {
      local_168 = 0x110201;
      local_164 = 0;
      local_158 = 0;
      local_150 = 0;
      local_160 = 0;
      local_148 = 0;
      local_140 = 0x100000040;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = (short)((uint)(*(float *)PTR_DAT_047e3398 * 0.0 * 1.0039062) >> 0x10);
      local_118 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_170 = 1;
      local_178 = 0;
      local_198 = &local_180;
      local_180 = PTR_DAT_047e33a0 + 0x10;
    }
    ppuVar9 = local_198;
    uVar1 = *(uint *)(lVar12 + 0x15d4);
    if (uVar1 != 0) {
      uVar17 = 0;
      do {
        if (*(char *)(lVar12 + 0x1688) == '\0') {
          uVar16 = uVar17 & 0xffffffff;
        }
        else {
          uVar16 = (ulong)*(uint *)(*(long *)(lVar12 + 0x16a8) + uVar17 * 4);
        }
        puVar2 = (undefined8 *)
                 (*(long *)(lVar12 + 0x108) + (-(uVar16 >> 0x1f) & 0xffffffe000000000 | uVar16 << 5)
                 );
        uStack_1a8 = puVar2[1];
        local_1b0 = *puVar2;
        iVar15 = (int)uVar16;
        if (*(char *)(lVar12 + 0x15dc) == '\0') {
          uStack_1d8 = uVar6;
          local_1e0 = uVar5;
          uStack_1c8 = uVar8;
          uStack_1d0 = uVar7;
          uStack_1b8 = uVar4;
          local_1c0 = uVar3;
        }
        else {
          puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x118) + (long)iVar15 * 0x10);
          uVar22 = puVar2[1];
          uVar21 = *puVar2;
          fVar18 = (float)uVar21;
          fVar19 = (float)((ulong)uVar21 >> 0x20);
          fVar23 = fVar19 + fVar19;
          fVar37 = (float)uVar22;
          fVar24 = fVar37 + fVar37;
          fVar27 = (fVar18 + fVar18) * fVar18;
          fVar20 = (float)((ulong)uVar22 >> 0x20);
          fVar32 = (fVar18 + fVar18) * fVar20;
          fVar38 = 1.0 - fVar37 * fVar24;
          fVar37 = fVar24 * fVar18 + fVar23 * fVar20;
          local_1e0 = CONCAT44(fVar23 * fVar18 + fVar24 * fVar20,fVar38 - fVar23 * fVar19);
          uStack_1b8 = (ulong)(uint)((1.0 - fVar27) - fVar23 * fVar19);
          uStack_1d0 = CONCAT44(fVar38 - fVar27,fVar23 * fVar18 - fVar24 * fVar20);
          fVar27 = fVar24 * fVar19 - fVar32;
          local_1c0 = CONCAT44(fVar27,fVar37);
          uStack_1d8 = CONCAT44(fVar27,fVar24 * fVar18 - fVar23 * fVar20);
          uStack_1c8 = CONCAT44(fVar37,fVar24 * fVar19 + fVar32);
        }
        uVar21 = *param_3;
        uVar22 = param_3[1];
        local_210 = *(undefined1 *)(param_3 + 6);
        local_20c = *(undefined4 *)((long)param_3 + 0x34);
        uStack_1f8 = param_3[9];
        local_200 = param_3[8];
        uStack_1e8 = param_3[0xb];
        uStack_1f0 = param_3[10];
        local_208 = *(undefined4 *)(param_3 + 7);
        uVar14 = *(undefined8 *)((long)param_2 + 0x38);
        local_220 = &local_1e0;
        uStack_218 = 0;
        local_224 = 0x20;
        fVar19 = (float)((ulong)local_1b0 >> 0x20);
        fVar28 = (float)param_7[2];
        fVar29 = (float)((ulong)param_7[2] >> 0x20);
        fVar30 = (float)param_7[3];
        fVar31 = (float)((ulong)param_7[3] >> 0x20);
        fVar18 = (float)local_1b0;
        fVar32 = (float)*param_7;
        fVar38 = (float)((ulong)*param_7 >> 0x20);
        fVar25 = (float)param_7[1];
        fVar26 = (float)((ulong)param_7[1] >> 0x20);
        fVar23 = (float)local_1c0;
        fVar24 = (float)((ulong)local_1c0 >> 0x20);
        fVar37 = (float)uStack_1a8;
        fVar33 = (float)param_7[4];
        fVar34 = (float)((ulong)param_7[4] >> 0x20);
        fVar35 = (float)param_7[5];
        fVar36 = (float)((ulong)param_7[5] >> 0x20);
        fVar27 = (float)uStack_1b8;
        fVar20 = (float)uStack_1d0;
        local_260 = CONCAT44(fVar34 * fVar27 + fVar38 * fVar23 + fVar29 * fVar24,
                             fVar33 * fVar27 + fVar32 * fVar23 + fVar28 * fVar24);
        uStack_258 = CONCAT44(fVar36 * fVar27 + fVar26 * fVar23 + fVar31 * fVar24,
                              fVar35 * fVar27 + fVar25 * fVar23 + fVar30 * fVar24);
        fVar23 = (float)((ulong)uStack_1d0 >> 0x20);
        fVar24 = (float)uStack_1c8;
        uStack_270 = CONCAT44(fVar34 * fVar24 + fVar38 * fVar20 + fVar29 * fVar23,
                              fVar33 * fVar24 + fVar32 * fVar20 + fVar28 * fVar23);
        uStack_268 = CONCAT44(fVar36 * fVar24 + fVar26 * fVar20 + fVar31 * fVar23,
                              fVar35 * fVar24 + fVar25 * fVar20 + fVar30 * fVar23);
        fVar20 = (float)local_1e0;
        fVar23 = (float)((ulong)local_1e0 >> 0x20);
        fVar24 = (float)uStack_1d8;
        local_280 = CONCAT44(fVar34 * fVar24 + fVar38 * fVar20 + fVar29 * fVar23,
                             fVar33 * fVar24 + fVar32 * fVar20 + fVar28 * fVar23);
        uStack_278 = CONCAT44(fVar36 * fVar24 + fVar26 * fVar20 + fVar31 * fVar23,
                              fVar35 * fVar24 + fVar25 * fVar20 + fVar30 * fVar23);
        local_250 = CONCAT44(fVar34 * fVar37 + fVar38 * fVar18 + fVar29 * fVar19 +
                             (float)((ulong)param_7[6] >> 0x20),
                             fVar33 * fVar37 + fVar32 * fVar18 + fVar28 * fVar19 + (float)param_7[6]
                            );
        uStack_248 = CONCAT44(fVar36 * fVar37 + fVar26 * fVar18 + fVar31 * fVar19 +
                              (float)((ulong)param_7[7] >> 0x20),
                              fVar35 * fVar37 + fVar25 * fVar18 + fVar30 * fVar19 +
                              (float)param_7[7]);
        local_240 = uVar21;
        uStack_238 = uVar22;
        local_230 = uVar14;
        local_228 = iVar15;
        memcpy(auStack_2d0,param_2,0x50);
        if (*(char *)((long)param_2 + 0x20) == '\x02') {
          piVar11 = (int *)(lVar12 + 0x20);
          if (*(int *)(lVar12 + 0x30) != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0x28) +
                             (long)*(int *)(lVar12 + 0x34) * (long)iVar15);
          }
          *(int *)(ppuVar9 + 4) =
               (int)*(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x18) + (long)*piVar11 * 8) +
                     0x10);
          local_298 = ppuVar9;
        }
        else {
          piVar11 = (int *)(lVar12 + 0x20);
          if (*(int *)(lVar12 + 0x30) != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0x28) +
                             (long)*(int *)(lVar12 + 0x34) * (long)iVar15);
          }
          local_298 = *(undefined ***)
                       (*(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x18) + (long)*piVar11 * 8) +
                       0xa0);
        }
        lVar13 = *param_1;
        if (local_2c8 == (long *)0x0) {
LAB_02e9e4f4:
          (**(code **)(lVar13 + (ulong)*(byte *)(local_298 + 3) * 0xf8 +
                       (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                    (param_1,auStack_2d0,&local_240,param_4,param_5,param_6,&local_280,param_8 & 1,
                     param_9);
        }
        else {
          local_b0[0] = local_2c0;
          *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) = local_2b4;
          *(undefined8 *)((ulong)local_b0 | 4) = local_2bc;
          local_e8[0] = *param_5;
          uVar10 = *(undefined8 *)(param_5 + 2);
          *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
          *(undefined8 *)((ulong)local_e8 | 4) = uVar10;
          local_d8 = *param_6;
          uStack_d0 = param_6[1];
          local_c8 = param_6[2];
          local_c0 = *(undefined4 *)(param_6 + 3);
          local_b8 = param_4;
          local_a0 = uVar21;
          uStack_98 = uVar22;
          local_90 = uVar14;
          local_88 = iVar15;
          local_80 = local_298;
          uVar16 = (**(code **)(*local_2c8 + 0x40))(local_2c8,5,(param_8 ^ 1) & 1,local_b0,local_e8)
          ;
          if ((uVar16 & 1) != 0) goto LAB_02e9e4f4;
        }
        uVar17 = uVar17 + 1;
      } while (uVar1 != uVar17);
    }
    local_1a0 = (undefined **)(PTR_DAT_047d1b30 + 0x10);
    if (local_198 != (undefined **)0x0) {
      (**(code **)(*local_198 + 8))();
    }
  }
  return;
}


