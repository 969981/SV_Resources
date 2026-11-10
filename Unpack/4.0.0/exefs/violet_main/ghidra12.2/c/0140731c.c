/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140731c; name: FUN_0140731c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140731c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 param_4,float *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  float fVar4;
  float fVar7;
  float fVar18;
  float fVar19;
  undefined1 auVar8 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar9 [16];
  float fVar20;
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar50;
  int iVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  float fVar70;
  float fVar86;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  float fVar102;
  float fVar104;
  undefined1 auVar103 [16];
  float fVar105;
  float local_140;
  float local_130;
  float fStack_12c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = &DAT_afc4d6c05abef19e;
  pcStack_78 = "default";
  local_70 = 7;
  uStack_68 = 0;
  uVar3 = FUN_01407a7c(*param_6,param_5 + 0x14,&local_80);
  local_80 = &DAT_afc4d6c05abef19e;
  pcStack_78 = "default";
  local_70 = 7;
  uStack_68 = 0;
  auVar8 = FUN_00e7c820(*param_6,uVar3,&local_80);
  puVar1 = param_7 + 4;
  local_130 = param_2._0_4_;
  fStack_12c = param_2._4_4_;
  (*(code *)*param_7)(puVar1);
  (*(code *)*param_7)(puVar1);
  (*(code *)*param_7)(puVar1);
  fVar4 = (float)(*(code *)*param_7)(puVar1);
  fVar4 = *param_5 + fVar4 * (param_5[4] - *param_5);
  fVar5 = (float)(*(code *)*param_7)(puVar1);
  fVar5 = param_5[1] + fVar5 * (param_5[5] - param_5[1]);
  fVar6 = (float)(*(code *)*param_7)(puVar1);
  fVar6 = param_5[2] + fVar6 * (param_5[6] - param_5[2]);
  auVar9 = NEON_fmov(0x3f800000,4);
  fVar32 = auVar9._0_4_;
  fVar33 = auVar9._4_4_;
  fVar70 = auVar9._8_4_;
  fVar86 = auVar9._12_4_;
  if (*(char *)(param_5 + 0x12) == '\0') {
    fStack_88 = (float)_UNK_03cabe58;
    fStack_84 = (float)((ulong)_UNK_03cabe58 >> 0x20);
    local_90 = (float)_DAT_03cabe50;
    fStack_8c = (float)((ulong)_DAT_03cabe50 >> 0x20);
  }
  else {
    local_140 = param_3._0_4_;
    fVar102 = auVar8._0_4_;
    fVar104 = param_3._8_4_;
    fVar7 = fVar32 + (float)_DAT_03cab3a0 * fVar102 + (float)_DAT_03cac210 * fStack_12c +
            (float)_DAT_03cabb00 * fVar104;
    fVar18 = fVar33 + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar102 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fStack_12c +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar104;
    fVar19 = fVar70 + (float)_UNK_03cab3a8 * fVar102 + (float)_UNK_03cac218 * fStack_12c +
             (float)_UNK_03cabb08 * fVar104;
    fVar20 = fVar86 + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar102 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fStack_12c +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar104;
    fVar105 = param_3._4_4_;
    auVar52 = NEON_ext(param_2,param_2,8,1);
    auVar55 = NEON_ext(auVar8,auVar8,8,1);
    auVar35 = NEON_fmov(0x40800000,4);
    auVar36._0_4_ = SQRT(fVar7) * 0.5 * auVar35._0_4_;
    auVar36._4_4_ = SQRT(fVar18) * 0.5 * auVar35._4_4_;
    auVar36._8_4_ = SQRT(fVar19) * 0.5 * auVar35._8_4_;
    auVar36._12_4_ = SQRT(fVar20) * 0.5 * auVar35._12_4_;
    auVar35 = NEON_frecpe(auVar36,4);
    fVar104 = auVar52._0_4_;
    auVar52 = NEON_frecps(auVar35,auVar36,4);
    auVar42._0_4_ = auVar35._0_4_ * auVar52._0_4_;
    auVar42._4_4_ = auVar35._4_4_ * auVar52._4_4_;
    auVar42._8_4_ = auVar35._8_4_ * auVar52._8_4_;
    auVar42._12_4_ = auVar35._12_4_ * auVar52._12_4_;
    auVar35 = NEON_frecps(auVar42,auVar36,4);
    fVar102 = auVar8._4_4_;
    fVar58 = auVar55._0_4_ + local_140;
    auVar2._8_4_ = fVar104 + -fVar105;
    auVar2._4_4_ = fVar58;
    auVar71._4_4_ = fVar18;
    auVar71._0_4_ = fVar18;
    auVar71._8_4_ = fVar18;
    auVar71._12_4_ = fVar18;
    fVar34 = auVar42._0_4_ * auVar35._0_4_;
    fVar39 = auVar42._4_4_ * auVar35._4_4_;
    fVar40 = auVar42._8_4_ * auVar35._8_4_;
    fVar41 = auVar42._12_4_ * auVar35._12_4_;
    auVar59._4_4_ = fVar7;
    auVar59._0_4_ = fVar7;
    auVar59._8_4_ = fVar7;
    auVar59._12_4_ = fVar7;
    iVar89 = -(uint)(fVar7 <= fVar18);
    uVar93 = (undefined1)((uint)iVar89 >> 8);
    uVar94 = (undefined1)((uint)iVar89 >> 0x10);
    uVar95 = (undefined1)((uint)iVar89 >> 0x18);
    iVar90 = -(uint)(fVar7 <= fVar18);
    uVar96 = (undefined1)((uint)iVar90 >> 8);
    uVar97 = (undefined1)((uint)iVar90 >> 0x10);
    uVar98 = (undefined1)((uint)iVar90 >> 0x18);
    iVar91 = -(uint)(fVar7 <= fVar18);
    uVar99 = (undefined1)((uint)iVar91 >> 8);
    uVar100 = (undefined1)((uint)iVar91 >> 0x10);
    uVar101 = (undefined1)((uint)iVar91 >> 0x18);
    auVar84[4] = (char)iVar89;
    auVar84._0_4_ = -(uint)(fVar7 <= fVar18);
    auVar84[5] = uVar93;
    auVar84[6] = uVar94;
    auVar84[7] = uVar95;
    auVar84[8] = (char)iVar90;
    auVar84[9] = uVar96;
    auVar84[10] = uVar97;
    auVar84[0xb] = uVar98;
    auVar84[0xc] = (char)iVar91;
    auVar84[0xd] = uVar99;
    auVar84[0xe] = uVar100;
    auVar84[0xf] = uVar101;
    auVar59 = auVar59 ^ (auVar59 ^ auVar71) & auVar84;
    auVar2._0_4_ = (local_130 + fVar102) * fVar34;
    auVar45._0_8_ = auVar2._0_8_ << 0x20;
    auVar45._8_4_ = fVar58 * fVar34;
    auVar45._12_4_ = (fVar104 + -fVar105) * fVar34;
    auVar46._4_12_ = auVar45._4_12_;
    auVar46._0_4_ = SQRT(fVar7) * 0.5;
    auVar72._0_4_ = (fVar102 + local_130) * fVar39;
    auVar72._4_4_ = fVar39 * 0.0;
    auVar72._8_4_ = (fVar104 + fVar105) * fVar39;
    auVar72._12_4_ = (local_140 + -auVar8._8_4_) * fVar39;
    auVar73._8_8_ = auVar72._8_8_;
    auVar73._4_4_ = SQRT(fVar18) * 0.5;
    auVar73._0_4_ = auVar72._0_4_;
    auVar87[4] = (char)iVar89;
    auVar87._0_4_ = -(uint)(fVar7 <= fVar18);
    auVar87[5] = uVar93;
    auVar87[6] = uVar94;
    auVar87[7] = uVar95;
    auVar87[8] = (char)iVar90;
    auVar87[9] = uVar96;
    auVar87[10] = uVar97;
    auVar87[0xb] = uVar98;
    auVar87[0xc] = (char)iVar91;
    auVar87[0xd] = uVar99;
    auVar87[0xe] = uVar100;
    auVar87[0xf] = uVar101;
    auVar46 = auVar46 ^ (auVar46 ^ auVar73) & auVar87;
    auVar74._4_4_ = fVar19;
    auVar74._0_4_ = fVar19;
    auVar74._8_4_ = fVar19;
    auVar74._12_4_ = fVar19;
    iVar89 = -(uint)(auVar59._0_4_ <= fVar19);
    iVar90 = -(uint)(auVar59._4_4_ <= fVar19);
    iVar91 = -(uint)(auVar59._8_4_ <= fVar19);
    iVar92 = -(uint)(auVar59._12_4_ <= fVar19);
    auVar35._4_4_ = iVar90;
    auVar35._0_4_ = iVar89;
    auVar35._8_4_ = iVar91;
    auVar35._12_4_ = iVar92;
    auVar59 = auVar59 ^ (auVar59 ^ auVar74) & auVar35;
    auVar10._0_8_ = CONCAT44(-(uint)(auVar59._4_4_ <= fVar20),-(uint)(auVar59._0_4_ <= fVar20));
    auVar10._8_4_ = -(uint)(auVar59._8_4_ <= fVar20);
    auVar10._12_4_ = -(uint)(auVar59._12_4_ <= fVar20);
    auVar103._8_8_ = auVar10._8_8_;
    auVar103._0_8_ = auVar10._0_8_;
    auVar56._0_4_ = (auVar55._0_4_ + local_140) * fVar40;
    auVar56._4_4_ = (fVar104 + fVar105) * fVar40;
    auVar56._12_4_ = (fVar102 - local_130) * fVar40;
    auVar37._0_4_ = (fVar104 - fVar105) * fVar41;
    auVar37._4_4_ = (local_140 - auVar8._8_4_) * fVar41;
    auVar37._8_4_ = (fVar102 - local_130) * fVar41;
    auVar75._4_4_ = fVar6;
    auVar75._0_4_ = fVar6;
    auVar75._8_4_ = fVar6;
    auVar75._12_4_ = fVar6;
    auVar56._8_4_ = SQRT(fVar19) * 0.5;
    auVar37._12_4_ = SQRT(fVar20) * 0.5;
    auVar76._4_12_ = auVar75._4_12_;
    auVar76._0_4_ = fVar4;
    auVar78._0_8_ = auVar76._0_8_;
    auVar78._8_4_ = fVar5;
    auVar78._12_4_ = fVar6;
    auVar77._8_8_ = auVar78._8_8_;
    auVar77._4_4_ = fVar6;
    auVar77._0_4_ = fVar4;
    auVar79._0_12_ = auVar77._0_12_;
    auVar79._12_4_ = fVar6;
    auVar87 = NEON_ext(auVar79,auVar79,8,1);
    fVar7 = auVar87._0_4_;
    auVar80._4_12_ = auVar79._4_12_;
    auVar80._0_4_ = fVar7;
    auVar82._0_8_ = auVar80._0_8_;
    auVar82._8_4_ = auVar87._8_4_;
    auVar82._12_4_ = fVar6;
    auVar81._8_8_ = auVar82._8_8_;
    auVar81._4_4_ = fVar4;
    auVar81._0_4_ = fVar7;
    auVar83._0_12_ = auVar81._0_12_;
    auVar83._12_4_ = fVar5;
    auVar8 = NEON_ext(auVar83,auVar87,8,1);
    auVar84 = NEON_ext(auVar8,auVar8,0xc,1);
    auVar8._4_4_ = iVar90;
    auVar8._0_4_ = iVar89;
    auVar8._8_4_ = iVar91;
    auVar8._12_4_ = iVar92;
    auVar46 = auVar46 ^ (auVar46 ^ auVar56) & auVar8;
    auVar46 = auVar46 ^ (auVar46 ^ auVar37) & auVar103;
    fVar40 = auVar46._12_4_;
    fVar39 = auVar46._8_4_;
    auVar47._4_4_ = fVar39;
    auVar47._0_4_ = fVar39;
    auVar47._8_4_ = fVar39;
    auVar47._12_4_ = fVar39;
    fVar20 = auVar46._0_4_;
    auVar8 = NEON_ext(auVar47,auVar46,0xc,1);
    fVar34 = auVar46._4_4_;
    auVar57._4_4_ = fVar34;
    auVar57._0_4_ = fVar34;
    auVar57._8_4_ = fVar34;
    auVar57._12_4_ = fVar34;
    auVar35 = NEON_ext(auVar57,auVar8,0xc,1);
    fVar18 = -fVar20;
    fVar19 = -fVar39;
    fVar102 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar104 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar5 = (fVar5 * fVar40 + fVar34 * fVar102 * 0.0 + auVar84._4_4_ * auVar35._4_4_ * fVar102) -
            auVar8._4_4_ * auVar87._4_4_;
    fVar6 = (fVar6 * fVar40 + fVar39 * (float)_UNK_03cab648 * 0.0 +
            auVar84._8_4_ * auVar35._8_4_ * (float)_UNK_03cab648) - auVar8._8_4_ * auVar87._8_4_;
    auVar21._4_4_ = fVar19;
    auVar21._0_4_ = fVar19;
    auVar21._8_4_ = fVar19;
    auVar21._12_4_ = fVar19;
    auVar38._4_4_ = fVar6;
    auVar38._0_4_ = fVar6;
    auVar38._8_4_ = fVar6;
    auVar38._12_4_ = fVar6;
    auVar52._4_4_ = fVar5;
    auVar52._0_4_ =
         (fVar4 * fVar40 + fVar20 * (float)_DAT_03cab640 * 0.0 +
         auVar84._0_4_ * auVar35._0_4_ * (float)_DAT_03cab640) - auVar8._0_4_ * fVar7;
    auVar52._8_4_ = fVar6;
    auVar52._12_4_ =
         (fVar40 * 0.0 + fVar4 * fVar20 * fVar104 + auVar84._12_4_ * auVar35._12_4_ * fVar104) -
         auVar8._12_4_ * auVar87._12_4_;
    auVar35 = NEON_ext(auVar38,auVar52,0xc,1);
    auVar53._4_4_ = fVar5;
    auVar53._0_4_ = fVar5;
    auVar53._8_4_ = fVar5;
    auVar53._12_4_ = fVar5;
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = fVar18;
    auVar24._0_8_ = auVar22._0_8_;
    auVar24._8_4_ = -fVar34;
    auVar24._12_4_ = fVar19;
    auVar23._8_8_ = auVar24._8_8_;
    auVar23._4_4_ = fVar19;
    auVar23._0_4_ = fVar18;
    auVar25._0_12_ = auVar23._0_12_;
    auVar25._12_4_ = fVar19;
    auVar8 = NEON_ext(auVar25,auVar25,8,1);
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ = auVar8._0_4_;
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._8_4_ = auVar8._8_4_;
    auVar28._12_4_ = fVar19;
    auVar27._8_8_ = auVar28._8_8_;
    auVar27._4_4_ = fVar18;
    auVar27._0_4_ = auVar8._0_4_;
    auVar29._0_12_ = auVar27._0_12_;
    auVar29._12_4_ = -fVar34;
    NEON_ext(auVar53,auVar35,0xc,1);
    auVar35 = NEON_ext(auVar29,auVar8,8,1);
    NEON_ext(auVar35,auVar35,0xc,1);
    auVar55._4_12_ = auVar8._4_12_;
    auVar55._0_4_ = fVar20;
    auVar12._0_8_ = auVar55._0_8_;
    auVar12._8_4_ = fVar34;
    auVar12._12_4_ = auVar8._12_4_;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = fVar39;
    auVar11._0_4_ = fVar20;
    auVar13._0_12_ = auVar11._0_12_;
    auVar13._12_4_ = fVar39;
    fVar5 = (float)((ulong)_DAT_03cab5c0 >> 0x20);
    fVar6 = (float)((ulong)_UNK_03cab5c8 >> 0x20);
    auVar35 = NEON_ext(auVar13,auVar13,8,1);
    fVar4 = auVar35._0_4_;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar4;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._8_4_ = auVar35._8_4_;
    auVar16._12_4_ = fVar39;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = fVar20;
    auVar15._0_4_ = fVar4;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = fVar34;
    auVar8 = NEON_ext(auVar17,auVar35,8,1);
    auVar8 = NEON_ext(auVar8,auVar8,0xc,1);
    local_90 = fVar20 + (float)_DAT_03cab5c0 * fVar40 + (float)_DAT_03cab5c0 * auVar8._0_4_ +
               fVar4 * -0.0;
    fStack_8c = fVar34 + fVar5 * fVar40 + fVar5 * auVar8._4_4_ + auVar35._4_4_ * -0.0;
    fStack_88 = fVar39 + (float)_UNK_03cab5c8 * fVar40 + (float)_UNK_03cab5c8 * auVar8._8_4_ +
                auVar35._8_4_ * -0.0;
    fStack_84 = fVar40 + fVar6 * fVar20 + fVar6 * auVar8._12_4_ + auVar35._12_4_ * -0.0;
  }
  fVar4 = 0.0;
  if (*(char *)((long)param_5 + 0x49) == '\0') {
    fVar4 = (float)(*(code *)*param_7)(puVar1);
    fVar4 = (fVar4 * 360.0 * 3.1415927) / 180.0;
  }
  fVar5 = 0.0;
  if (*(char *)((long)param_5 + 0x4a) == '\0') {
    fVar5 = (float)(*(code *)*param_7)(puVar1);
    fVar5 = (fVar5 * 360.0 * 3.1415927) / 180.0;
  }
  fVar6 = 0.0;
  if (*(char *)((long)param_5 + 0x4b) == '\0') {
    fVar6 = (float)(*(code *)*param_7)(puVar1);
    fVar6 = (fVar6 * 360.0 * 3.1415927) / 180.0;
  }
  fVar6 = fVar6 * 0.5;
  fVar4 = fVar4 * 0.5;
  fVar5 = fVar5 * 0.5;
  iVar89 = -(uint)(fVar6 == 0.0);
  iVar90 = -(uint)(fVar4 == 0.0);
  iVar91 = -(uint)(fVar5 == 0.0);
  iVar92 = -(uint)(ABS(fVar6) == INFINITY);
  iVar50 = -(uint)(ABS(fVar4) == INFINITY);
  iVar51 = -(uint)(ABS(fVar5) == INFINITY);
  auVar48[0] = ~(byte)iVar92;
  auVar48[1] = ~(byte)((uint)iVar92 >> 8);
  auVar48[2] = ~(byte)((uint)iVar92 >> 0x10);
  auVar48[3] = ~(byte)((uint)iVar92 >> 0x18);
  auVar48[4] = ~(byte)iVar50;
  auVar48[5] = ~(byte)((uint)iVar50 >> 8);
  auVar48[6] = ~(byte)((uint)iVar50 >> 0x10);
  auVar48[7] = ~(byte)((uint)iVar50 >> 0x18);
  auVar48[8] = ~(byte)iVar51;
  auVar48[9] = ~(byte)((uint)iVar51 >> 8);
  auVar48[10] = ~(byte)((uint)iVar51 >> 0x10);
  auVar48[0xb] = ~(byte)((uint)iVar51 >> 0x18);
  auVar48[0xc] = 0xff;
  auVar48[0xd] = 0xff;
  auVar48[0xe] = 0xff;
  auVar48[0xf] = 0xff;
  auVar60._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar6) & 0x80000000 ^ 0xbf000000) + fVar6 * 0.15915494);
  auVar60._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar4) & 0x80000000 ^ 0xbf000000) + fVar4 * 0.15915494);
  auVar60._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000) + fVar5 * 0.15915494);
  auVar60._12_4_ = 0;
  auVar8 = NEON_scvtf(auVar60,4);
  fVar102 = fVar6 + 1.5707964;
  fVar104 = fVar4 + 1.5707964;
  fVar7 = fVar5 + 1.5707964;
  fVar6 = fVar6 - auVar8._0_4_ * 6.2831855;
  fVar4 = fVar4 - auVar8._4_4_ * 6.2831855;
  fVar5 = fVar5 - auVar8._8_4_ * 6.2831855;
  fVar18 = 0.0 - auVar8._12_4_ * 6.2831855;
  fVar6 = (float)((uint)fVar6 ^
                 ((uint)fVar6 ^ (uint)(-3.1415927 - fVar6)) & -(uint)(fVar6 < -1.5707964));
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(-3.1415927 - fVar4)) & -(uint)(fVar4 < -1.5707964));
  fVar5 = (float)((uint)fVar5 ^
                 ((uint)fVar5 ^ (uint)(-3.1415927 - fVar5)) & -(uint)(fVar5 < -1.5707964));
  fVar18 = (float)((uint)fVar18 ^
                  ((uint)fVar18 ^ (uint)(-3.1415927 - fVar18)) & -(uint)(fVar18 < -1.5707964));
  fVar6 = (float)((uint)fVar6 ^
                 ((uint)fVar6 ^ (uint)(3.1415927 - fVar6)) & -(uint)(1.5707964 < fVar6));
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(3.1415927 - fVar4)) & -(uint)(1.5707964 < fVar4));
  fVar5 = (float)((uint)fVar5 ^
                 ((uint)fVar5 ^ (uint)(3.1415927 - fVar5)) & -(uint)(1.5707964 < fVar5));
  fVar18 = (float)((uint)fVar18 ^
                  ((uint)fVar18 ^ (uint)(3.1415927 - fVar18)) & -(uint)(1.5707964 < fVar18));
  fVar19 = fVar6 * fVar6;
  fVar20 = fVar4 * fVar4;
  fVar34 = fVar5 * fVar5;
  fVar39 = fVar18 * fVar18;
  auVar88._8_4_ = 0x7fc00000;
  auVar88._0_8_ = 0x7fc000007fc00000;
  auVar88._12_4_ = 0x7fc00000;
  auVar85._0_4_ =
       fVar6 * (fVar32 + fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar85._4_4_ =
       fVar4 * (fVar33 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar85._8_4_ =
       fVar5 * (fVar70 + fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar85._12_4_ =
       fVar18 * (fVar86 + fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  iVar92 = -(uint)(ABS(fVar102) == INFINITY);
  iVar50 = -(uint)(ABS(fVar104) == INFINITY);
  iVar51 = -(uint)(ABS(fVar7) == INFINITY);
  auVar43[0] = ~(byte)iVar92;
  auVar43[1] = ~(byte)((uint)iVar92 >> 8);
  auVar43[2] = ~(byte)((uint)iVar92 >> 0x10);
  auVar43[3] = ~(byte)((uint)iVar92 >> 0x18);
  auVar43[4] = ~(byte)iVar50;
  auVar43[5] = ~(byte)((uint)iVar50 >> 8);
  auVar43[6] = ~(byte)((uint)iVar50 >> 0x10);
  auVar43[7] = ~(byte)((uint)iVar50 >> 0x18);
  auVar43[8] = ~(byte)iVar51;
  auVar43[9] = ~(byte)((uint)iVar51 >> 8);
  auVar43[10] = ~(byte)((uint)iVar51 >> 0x10);
  auVar43[0xb] = ~(byte)((uint)iVar51 >> 0x18);
  auVar43[0xc] = 0xff;
  auVar43[0xd] = 0xff;
  auVar43[0xe] = 0xff;
  auVar43[0xf] = 0xff;
  auVar85 = auVar85 ^ (auVar85 ^ auVar88) & ~auVar48;
  auVar30._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar102) & 0x80000000 ^ 0x3f000000) + fVar102 * 0.15915494);
  auVar30._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar104) & 0x80000000 ^ 0x3f000000) + fVar104 * 0.15915494);
  auVar30._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar7) & 0x80000000 ^ 0x3f000000) + fVar7 * 0.15915494);
  auVar30._12_4_ = 0;
  auVar8 = NEON_scvtf(auVar30,4);
  fVar102 = fVar102 - auVar8._0_4_ * 6.2831855;
  fVar104 = fVar104 - auVar8._4_4_ * 6.2831855;
  fVar7 = fVar7 - auVar8._8_4_ * 6.2831855;
  fVar4 = 1.5707964 - auVar8._12_4_ * 6.2831855;
  fVar20 = auVar85._4_4_;
  fVar102 = (float)((uint)fVar102 ^
                   ((uint)fVar102 ^ (uint)(-3.1415927 - fVar102)) & -(uint)(fVar102 < -1.5707964));
  fVar104 = (float)((uint)fVar104 ^
                   ((uint)fVar104 ^ (uint)(-3.1415927 - fVar104)) & -(uint)(fVar104 < -1.5707964));
  fVar7 = (float)((uint)fVar7 ^
                 ((uint)fVar7 ^ (uint)(-3.1415927 - fVar7)) & -(uint)(fVar7 < -1.5707964));
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(-3.1415927 - fVar4)) & -(uint)(fVar4 < -1.5707964));
  fVar102 = (float)((uint)fVar102 ^
                   ((uint)fVar102 ^ (uint)(3.1415927 - fVar102)) & -(uint)(1.5707964 < fVar102));
  fVar104 = (float)((uint)fVar104 ^
                   ((uint)fVar104 ^ (uint)(3.1415927 - fVar104)) & -(uint)(1.5707964 < fVar104));
  fVar7 = (float)((uint)fVar7 ^
                 ((uint)fVar7 ^ (uint)(3.1415927 - fVar7)) & -(uint)(1.5707964 < fVar7));
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(3.1415927 - fVar4)) & -(uint)(1.5707964 < fVar4));
  fVar5 = fVar102 * fVar102;
  fVar6 = fVar104 * fVar104;
  fVar18 = fVar7 * fVar7;
  fVar19 = fVar4 * fVar4;
  auVar31._0_4_ =
       fVar102 * (fVar32 + fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar31._4_4_ =
       fVar104 * (fVar33 + fVar6 * (fVar6 * (fVar6 * (fVar6 * (fVar6 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar31._8_4_ =
       fVar7 * (fVar70 + fVar18 * (fVar18 * (fVar18 * (fVar18 * (fVar18 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  auVar31._12_4_ =
       fVar4 * (fVar86 + fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
  fVar70 = auVar85._0_4_;
  auVar31 = auVar31 ^ (auVar31 ^ auVar88) & ~auVar43;
  auVar44[0] = ~(byte)iVar89;
  auVar44[1] = ~(byte)((uint)iVar89 >> 8);
  auVar44[2] = ~(byte)((uint)iVar89 >> 0x10);
  auVar44[3] = ~(byte)((uint)iVar89 >> 0x18);
  auVar44[4] = ~(byte)iVar90;
  auVar44[5] = ~(byte)((uint)iVar90 >> 8);
  auVar44[6] = ~(byte)((uint)iVar90 >> 0x10);
  auVar44[7] = ~(byte)((uint)iVar90 >> 0x18);
  auVar44[8] = ~(byte)iVar91;
  auVar44[9] = ~(byte)((uint)iVar91 >> 8);
  auVar44[10] = ~(byte)((uint)iVar91 >> 0x10);
  auVar44[0xb] = ~(byte)((uint)iVar91 >> 0x18);
  auVar44._12_4_ = 0;
  auVar31 = auVar31 ^ (auVar31 ^ auVar9) & ~auVar44;
  auVar31 = auVar31 ^ (auVar31 ^ auVar88) & ~auVar48;
  fVar6 = auVar31._4_4_;
  fVar4 = auVar31._0_4_;
  fVar33 = auVar31._8_4_;
  fVar86 = auVar85._8_4_;
  auVar9._4_4_ = fStack_8c;
  auVar9._0_4_ = local_90;
  auVar9._8_4_ = fStack_88;
  auVar9._12_4_ = fStack_84;
  auVar49._4_4_ = fStack_88;
  auVar49._0_4_ = fStack_88;
  auVar49._8_4_ = fStack_88;
  auVar49._12_4_ = fStack_88;
  auVar8 = NEON_ext(auVar49,auVar9,0xc,1);
  auVar54._4_4_ = fStack_8c;
  auVar54._0_4_ = fStack_8c;
  auVar54._8_4_ = fStack_8c;
  auVar54._12_4_ = fStack_8c;
  NEON_ext(auVar54,auVar8,0xc,1);
  fVar5 = fVar33 * fVar4 * fVar20 + fVar86 * fVar6 * fVar70 * (float)_DAT_03cab3a0;
  fVar32 = fVar86 * fVar4 * fVar6 + fVar33 * fVar20 * fVar70 * (float)((ulong)_DAT_03cab3a0 >> 0x20)
  ;
  fVar4 = fVar33 * fVar70 * fVar6 + fVar86 * fVar20 * fVar4 * (float)_UNK_03cab3a8;
  auVar61._4_4_ = fVar4;
  auVar61._0_4_ = fVar4;
  auVar61._8_4_ = fVar4;
  auVar61._12_4_ = fVar4;
  auVar62._4_12_ = auVar61._4_12_;
  auVar62._0_4_ = fVar5;
  auVar64._0_8_ = auVar62._0_8_;
  auVar64._8_4_ = fVar32;
  auVar64._12_4_ = fVar4;
  auVar63._8_8_ = auVar64._8_8_;
  auVar63._4_4_ = fVar4;
  auVar63._0_4_ = fVar5;
  auVar65._0_12_ = auVar63._0_12_;
  auVar65._12_4_ = fVar4;
  auVar8 = NEON_ext(auVar65,auVar65,8,1);
  auVar66._4_12_ = auVar65._4_12_;
  auVar66._0_4_ = auVar8._0_4_;
  auVar68._0_8_ = auVar66._0_8_;
  auVar68._8_4_ = auVar8._8_4_;
  auVar68._12_4_ = fVar4;
  auVar67._8_8_ = auVar68._8_8_;
  auVar67._4_4_ = fVar5;
  auVar67._0_4_ = auVar8._0_4_;
  auVar69._0_12_ = auVar67._0_12_;
  auVar69._12_4_ = fVar32;
  auVar8 = NEON_ext(auVar69,auVar8,8,1);
  NEON_ext(auVar8,auVar8,0xc,1);
  return;
}


