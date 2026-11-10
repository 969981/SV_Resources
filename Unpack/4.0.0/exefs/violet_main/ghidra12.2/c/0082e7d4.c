/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082e7d4; name: FUN_0082e7d4
 */


void FUN_0082e7d4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined1 (*param_7) [12],byte param_8,long param_9)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  byte bVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar26;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar25 [16];
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined *local_3230 [2];
  undefined8 local_3220;
  undefined8 uStack_3218;
  undefined8 uStack_3210;
  undefined8 local_3208;
  undefined8 uStack_3200;
  undefined8 local_31f8;
  undefined8 uStack_31f0;
  undefined8 local_31e8;
  long lStack_31e0;
  undefined1 local_31d8;
  undefined8 local_31d0;
  undefined8 uStack_31c8;
  undefined8 local_31c0;
  undefined8 uStack_31b8;
  undefined8 local_31b0;
  undefined8 uStack_31a8;
  undefined4 local_31a0;
  undefined8 local_319c;
  undefined8 local_3190;
  undefined8 uStack_3188;
  undefined8 local_3180;
  undefined8 uStack_3178;
  undefined8 local_3170;
  undefined8 uStack_3168;
  undefined8 local_3160;
  undefined8 uStack_3158;
  long local_3150;
  undefined1 local_3148;
  undefined8 local_3140;
  undefined8 uStack_3138;
  undefined8 local_3130;
  undefined8 uStack_3128;
  undefined8 local_3120;
  undefined8 local_3118;
  undefined4 local_3110;
  undefined8 local_310c;
  int local_3100;
  int local_30fc;
  undefined8 local_30f8;
  long lStack_30f0;
  long local_30e8;
  long lStack_30e0;
  long local_30d8;
  long lStack_30d0;
  undefined8 local_30c8;
  undefined8 local_30c0;
  undefined8 uStack_30b8;
  undefined8 uStack_30b0;
  undefined8 uStack_30a8;
  undefined8 local_30a0;
  undefined8 uStack_3098;
  undefined8 uStack_3090;
  undefined8 uStack_3088;
  undefined8 local_3080;
  undefined8 uStack_3078;
  undefined8 uStack_3070;
  undefined8 uStack_3068;
  undefined8 local_3060;
  undefined8 uStack_3058;
  undefined8 local_3050;
  undefined8 uStack_3048;
  byte local_3040;
  long local_3038;
  undefined1 *local_3030;
  undefined4 local_3028;
  uint local_3024;
  undefined1 auStack_3020 [12288];
  
  local_3030 = auStack_3020;
  local_30e8 = *(long *)(param_2 + 0x38);
  lVar9 = *(long *)(local_30e8 + 0x48);
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = lVar9 + local_30e8 + 0x48;
  }
  lVar10 = *(long *)(param_4 + 0x48);
  bVar3 = *(byte *)(param_9 + 8);
  uStack_30b8 = *(undefined8 *)(*param_7 + 8);
  uVar20 = (undefined4)((ulong)uStack_30b8 >> 0x20);
  local_30c0 = *(undefined8 *)*param_7;
  fVar18 = (float)local_30c0;
  fVar19 = (float)((ulong)local_30c0 >> 0x20);
  pauVar4 = (undefined1 (*) [12])(param_7[1] + 4);
  uStack_30a8 = *(undefined8 *)param_7[2];
  uVar17 = (undefined4)((ulong)uStack_30a8 >> 0x20);
  uStack_30b0 = *(undefined8 *)*pauVar4;
  fVar15 = (float)uStack_30b0;
  fVar16 = (float)((ulong)uStack_30b0 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_7[2] + 8);
  uStack_3098 = *(undefined8 *)(param_7[3] + 4);
  uVar30 = (undefined4)((ulong)uStack_3098 >> 0x20);
  local_30a0 = *(undefined8 *)*pauVar1;
  fVar29 = (float)((ulong)local_30a0 >> 0x20);
  uStack_3088 = *(undefined8 *)(param_7[4] + 8);
  uStack_3090 = *(undefined8 *)param_7[4];
  auVar13._12_4_ = uVar17;
  auVar13._0_12_ = *pauVar4;
  auVar23._12_4_ = uVar17;
  auVar23._0_12_ = *pauVar4;
  auVar23 = NEON_ext(auVar13,auVar23,8,1);
  auVar5._12_4_ = uVar20;
  auVar5._0_12_ = *param_7;
  auVar6._12_4_ = uVar20;
  auVar6._0_12_ = *param_7;
  auVar13 = NEON_ext(auVar5,auVar6,8,1);
  fVar11 = auVar13._0_4_;
  fVar12 = auVar23._0_4_;
  local_3060 = CONCAT44(fVar12,fVar11);
  auVar7._12_4_ = uVar30;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar30;
  auVar8._0_12_ = *pauVar1;
  auVar13 = NEON_ext(auVar7,auVar8,8,1);
  uStack_3058 = auVar13._0_8_;
  auVar24._4_12_ = auVar13._4_12_;
  auVar24._0_4_ = fVar29;
  uStack_3068 = auVar24._0_8_;
  fVar21 = -(float)uStack_3090;
  fVar26 = -(float)((ulong)uStack_3090 >> 0x20);
  fVar28 = -(float)uStack_3088;
  fVar31 = auVar13._4_4_;
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar9 = lVar10 + param_4 + 0x48;
  }
  fVar22 = fVar11 * fVar28 + fVar18 * fVar21 + fVar19 * fVar26;
  fVar27 = fVar12 * fVar28 + fVar15 * fVar21 + fVar16 * fVar26;
  auVar25._0_8_ = CONCAT44(fVar27,fVar22);
  auVar25._8_4_ = auVar13._0_4_ * fVar28 + (float)local_30a0 * fVar21 + fVar29 * fVar26;
  auVar25._12_4_ = fVar31 * fVar28 + fVar29 * fVar21 + fVar31 * fVar26;
  local_3040 = param_8 & 1;
  lStack_31e0 = lVar2 + 0x20;
  local_3150 = lVar9 + 0x20;
  local_30f8 = param_1;
  lStack_30f0 = param_2;
  lStack_30e0 = param_3;
  local_30d8 = param_4;
  lStack_30d0 = param_6;
  local_30c8 = param_5;
  if ((*(char *)(param_3 + 0x30) == '\0') && (*(char *)(param_6 + 0x30) == '\0')) {
    local_31f8 = 0;
    uStack_31f0 = 0;
    uStack_3200 = 0;
    local_3170 = 0;
    uStack_3168 = 0;
    local_3230[0] = PTR_DAT_047d1a88 + 0x10;
    local_3160 = 0;
    uStack_3158 = 0;
    local_31e8 = 0;
    if ((bVar3 >> 2 & 1) == 0) {
      local_31d8 = *(undefined1 *)(lVar2 + 0x5c);
    }
    else {
      local_31d8 = 0;
    }
    local_3148 = 0;
    local_31d0 = 0;
    uStack_31c8 = 0;
    local_31a0 = 0;
    local_31c0 = 0;
    uStack_31b8 = 0;
    local_31b0 = 0;
    uStack_31a8 = 0;
    local_319c = 0xffffffffffffffff;
    uStack_3218 = *(undefined8 *)(lVar2 + 0x38);
    local_3220 = *(undefined8 *)(lVar2 + 0x30);
    fVar11 = (float)*(undefined8 *)PTR_DAT_047d1a48;
    fVar12 = (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20);
    uStack_3210 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) -
                           (float)((ulong)local_3220 >> 0x20)) * fVar12,
                           ((float)*(undefined8 *)(lVar2 + 0x40) - (float)local_3220) * fVar11);
    fVar21 = (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8);
    fVar26 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20);
    local_3208 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) -
                          (float)((ulong)uStack_3218 >> 0x20)) * fVar26,
                          ((float)*(undefined8 *)(lVar2 + 0x48) - (float)uStack_3218) * fVar21);
    if ((bVar3 >> 2 & 1) == 0) {
      local_3148 = *(undefined1 *)(lVar9 + 0x5c);
    }
    local_3140 = 0;
    uStack_3138 = 0;
    local_3120 = 0;
    local_3110 = 0;
    local_3130 = 0;
    uStack_3128 = 0;
    local_3118 = 0;
    local_310c = 0xffffffffffffffff;
    local_3180 = CONCAT44(fVar12 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20) -
                                   (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20)),
                          fVar11 * ((float)*(undefined8 *)(lVar9 + 0x40) -
                                   (float)*(undefined8 *)(lVar9 + 0x30)));
    uStack_3178 = CONCAT44(fVar26 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) -
                                    (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20)),
                           fVar21 * ((float)*(undefined8 *)(lVar9 + 0x48) -
                                    (float)*(undefined8 *)(lVar9 + 0x38)));
    uStack_3188 = *(undefined8 *)(lVar9 + 0x38);
    local_3190 = *(undefined8 *)(lVar9 + 0x30);
    local_3100 = 0x20 - *(int *)(lVar2 + 0x54);
    local_3038 = param_9;
    local_30fc = 0x20 - *(int *)(lVar9 + 0x54);
    local_3028 = 0;
    local_3024 = 0x80000080;
    local_3080 = CONCAT44(fVar15,fVar18);
    uStack_3070 = CONCAT44(fVar16,fVar19);
    uStack_3048 = auVar25._8_8_;
    uStack_3078 = local_30a0;
    local_3050 = auVar25._0_8_;
    FUN_00836510(0,lStack_31e0,local_3150,&local_3030,local_3230,0,0);
  }
  else {
    local_31f8 = 0;
    uStack_31f0 = 0;
    uStack_3200 = 0;
    local_3170 = 0;
    uStack_3168 = 0;
    local_3230[0] = PTR_DAT_047d1a80 + 0x10;
    local_3160 = 0;
    uStack_3158 = 0;
    local_31e8 = 0;
    if ((bVar3 >> 2 & 1) == 0) {
      local_31d8 = *(undefined1 *)(lVar2 + 0x5c);
    }
    else {
      local_31d8 = 0;
    }
    local_3148 = 0;
    local_31d0 = 0;
    uStack_31c8 = 0;
    local_31a0 = 0;
    local_31c0 = 0;
    uStack_31b8 = 0;
    local_31b0 = 0;
    uStack_31a8 = 0;
    local_319c = 0xffffffffffffffff;
    uStack_3218 = *(undefined8 *)(lVar2 + 0x38);
    local_3220 = *(undefined8 *)(lVar2 + 0x30);
    fVar21 = (float)*(undefined8 *)PTR_DAT_047d1a48;
    fVar26 = (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20);
    uStack_3210 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) -
                           (float)((ulong)local_3220 >> 0x20)) * fVar26,
                           ((float)*(undefined8 *)(lVar2 + 0x40) - (float)local_3220) * fVar21);
    fVar28 = (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8);
    fVar32 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20);
    local_3208 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) -
                          (float)((ulong)uStack_3218 >> 0x20)) * fVar32,
                          ((float)*(undefined8 *)(lVar2 + 0x48) - (float)uStack_3218) * fVar28);
    if ((bVar3 >> 2 & 1) == 0) {
      local_3148 = *(undefined1 *)(lVar9 + 0x5c);
    }
    local_3140 = 0;
    uStack_3138 = 0;
    local_3120 = 0;
    local_3110 = 0;
    local_3130 = 0;
    uStack_3128 = 0;
    local_3118 = 0;
    local_310c = 0xffffffffffffffff;
    local_3180 = CONCAT44(fVar26 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20) -
                                   (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20)),
                          fVar21 * ((float)*(undefined8 *)(lVar9 + 0x40) -
                                   (float)*(undefined8 *)(lVar9 + 0x30)));
    uStack_3178 = CONCAT44(fVar32 * ((float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) -
                                    (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20)),
                           fVar28 * ((float)*(undefined8 *)(lVar9 + 0x48) -
                                    (float)*(undefined8 *)(lVar9 + 0x38)));
    uStack_3188 = *(undefined8 *)(lVar9 + 0x38);
    local_3190 = *(undefined8 *)(lVar9 + 0x30);
    local_3100 = 0x20 - *(int *)(lVar2 + 0x54);
    local_30fc = 0x20 - *(int *)(lVar9 + 0x54);
    fVar28 = (float)*(undefined8 *)(param_6 + 0x48);
    fVar21 = (float)*(undefined8 *)(param_6 + 0x40);
    fVar26 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
    uStack_3078 = CONCAT44(fVar29 * fVar21,(float)local_30a0 * fVar21);
    local_3080 = CONCAT44(fVar15 * fVar21,fVar18 * fVar21);
    uStack_3068 = CONCAT44(fVar31 * fVar26,fVar29 * fVar26);
    uStack_3070 = CONCAT44(fVar16 * fVar26,fVar19 * fVar26);
    uStack_3058 = CONCAT44(fVar31 * fVar28,auVar13._0_4_ * fVar28);
    local_3060 = CONCAT44(fVar12 * fVar28,fVar11 * fVar28);
    local_3038 = param_9;
    local_3028 = 0;
    auVar14._0_8_ =
         CONCAT44(fVar27 + *(float *)(param_6 + 0x54),fVar22 + *(float *)(param_6 + 0x50));
    auVar14._8_4_ = auVar25._8_4_ + *(float *)(param_6 + 0x58);
    auVar14._12_4_ = auVar25._12_4_ + *(float *)(param_6 + 0x5c);
    local_3024 = 0x80000080;
    uStack_3048 = auVar14._8_8_;
    local_3050 = auVar14._0_8_;
    local_3030 = auStack_3020;
    FUN_0083a864(0,lStack_31e0,local_3150,&local_3030,local_3230,0,0);
  }
  if (-1 < (int)local_3024) {
    local_3028 = 0;
    if (local_3030 != (undefined1 *)0x0) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_3030,(ulong)local_3024 * 0x60);
    }
  }
  return;
}


