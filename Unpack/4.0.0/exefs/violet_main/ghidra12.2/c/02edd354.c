/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02edd354; name: FUN_02edd354
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02edd354(long *param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5,
                 long *param_6,float *param_7,byte param_8,long *param_9)

{
  long *plVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  char cVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 uVar24;
  byte bVar25;
  byte bVar38;
  byte bVar39;
  float fVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [12];
  byte bVar41;
  byte bVar44;
  byte bVar45;
  float fVar42;
  byte bVar47;
  byte bVar50;
  byte bVar51;
  float fVar48;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  undefined1 auVar30 [16];
  byte bVar40;
  int iVar43;
  byte bVar46;
  int iVar49;
  byte bVar52;
  int iVar54;
  byte bVar57;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [12];
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar78;
  float fVar79;
  undefined8 uVar81;
  undefined1 auVar82 [12];
  float fVar97;
  float fVar98;
  float fVar100;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  int iVar80;
  int iVar99;
  int iVar101;
  int iVar103;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  int iVar102;
  int iVar104;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar105;
  ulong uVar106;
  float fVar118;
  uint uVar119;
  float fVar120;
  uint uVar121;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  uint uVar122;
  float fVar123;
  ulong uVar124;
  float fVar131;
  float fVar132;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uVar133;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar134;
  undefined8 uVar135;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar144;
  undefined8 uVar145;
  float fVar151;
  float fVar152;
  float fVar153;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float fVar157;
  undefined1 auVar156 [16];
  float fVar158;
  undefined8 uVar159;
  float fVar163;
  float fVar164;
  float fVar165;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar172 [16];
  float fVar173;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  byte local_2d10;
  byte bStack_2d0f;
  byte bStack_2d0e;
  byte bStack_2d0d;
  byte bStack_2d0c;
  byte bStack_2d0b;
  byte bStack_2d0a;
  byte bStack_2d09;
  byte bStack_2d08;
  byte bStack_2d07;
  byte bStack_2d06;
  byte bStack_2d05;
  byte bStack_2d04;
  byte bStack_2d03;
  byte bStack_2d02;
  byte bStack_2d01;
  long *local_2bc0;
  long *local_2bb8;
  long local_2bb0;
  long *local_2ba8;
  undefined8 *local_2ba0;
  undefined2 local_2b98;
  undefined8 local_2b94;
  undefined4 local_2b8c;
  undefined8 local_2b88;
  undefined8 uStack_2b80;
  undefined8 local_2b78;
  undefined4 local_2b70;
  undefined8 local_2b68;
  uint local_2b60;
  int *local_2b58;
  long local_2b50;
  short local_2b40;
  short sStack_2b3e;
  short sStack_2b3c;
  short sStack_2b3a;
  short sStack_2b38;
  short sStack_2b36;
  short sStack_2b34;
  short sStack_2b32;
  short local_2b30;
  short sStack_2b2e;
  short sStack_2b2c;
  short sStack_2b2a;
  short sStack_2b28;
  short sStack_2b26;
  short sStack_2b24;
  short sStack_2b22;
  int local_2b20;
  int iStack_2b1c;
  int iStack_2b18;
  int iStack_2b14;
  float local_2b10;
  float fStack_2b0c;
  float fStack_2b08;
  float fStack_2b04;
  float local_2b00;
  float fStack_2afc;
  float fStack_2af8;
  float fStack_2af4;
  float local_2af0;
  float fStack_2aec;
  float fStack_2ae8;
  float fStack_2ae4;
  long local_2ae0;
  char local_2ad8;
  long *local_2ad0;
  uint *local_2ac8;
  long *local_2ac0;
  undefined8 local_2ab0;
  undefined8 uStack_2aa8;
  undefined8 uStack_2aa0;
  undefined8 uStack_2a98;
  undefined8 local_2a90;
  undefined8 uStack_2a88;
  undefined8 uStack_2a80;
  undefined8 uStack_2a78;
  undefined8 local_2a70;
  byte local_2a68;
  long *local_2a60;
  uint local_2a50 [2];
  float *local_2a48;
  undefined8 local_2a40;
  undefined8 local_2a38;
  undefined8 local_2a30;
  float local_2a10;
  float fStack_2a0c;
  float fStack_2a08;
  float fStack_2a04;
  float local_2a00;
  float fStack_29fc;
  float fStack_29f8;
  float fStack_29f4;
  undefined8 local_1e40;
  undefined8 uStack_1e38;
  undefined8 local_1e30;
  undefined8 uStack_1e28;
  undefined8 local_1e20;
  undefined8 uStack_1e18;
  undefined8 local_1e10;
  undefined8 uStack_1e08;
  undefined8 *local_1a40;
  ulong local_1640 [6];
  undefined1 auStack_1610 [2000];
  int local_e40 [2];
  undefined8 auStack_e38 [255];
  int local_640;
  float local_630;
  float fStack_62c;
  float fStack_628;
  float fStack_624;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined4 local_600;
  undefined4 local_5f8;
  undefined1 local_5f4;
  undefined2 local_5f0;
  undefined4 local_5ec;
  ulong uStack_5e8;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined4 local_5d0;
  undefined1 local_5cc;
  undefined2 local_5c8;
  undefined4 local_5c4;
  ulong uStack_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  float *local_230;
  float local_220;
  float fStack_21c;
  undefined8 *puStack_218;
  float local_210;
  float fStack_20c;
  undefined8 uStack_208;
  long local_200;
  long local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  long local_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  uint local_178 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float fStack_150;
  float local_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  float *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined2 local_c8;
  undefined4 local_c4;
  ulong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  
  puVar5 = PTR_DAT_047d19f0;
  lVar12 = param_2[7];
  auVar176 = NEON_fmov(0x3f800000,4);
  lVar21 = 0;
  if ((*(ushort *)(lVar12 + 0x1a) & 1) != 0) {
    lVar21 = lVar12;
  }
  fVar120 = auVar176._0_4_;
  fVar48 = auVar176._4_4_;
  fVar26 = auVar176._8_4_;
  if ((char)param_3[6] == '\0') {
    if ((char)param_6[6] == '\0') {
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 0x18))
                (lVar12,param_7,&local_2a10);
    }
    else {
      auVar109 = *(undefined1 (*) [16])(param_6 + 8);
      fVar100 = fVar120 / auVar109._0_4_;
      fVar42 = fVar48 / auVar109._4_4_;
      fVar58 = fVar26 / auVar109._8_4_;
      fVar59 = auVar176._12_4_ / auVar109._12_4_;
      fVar120 = ABS(fVar100);
      fVar48 = ABS(fVar42);
      fVar26 = ABS(fVar58);
      if ((lVar12 == 0) || ((*(ushort *)(lVar12 + 0x1a) & 1) == 0)) {
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 0x18))
                  (lVar12,param_7,&local_2a10);
        local_2a10 = fVar100 * local_2a10;
        fStack_2a0c = fVar42 * fStack_2a0c;
        fStack_2a08 = fVar58 * fStack_2a08;
        fStack_2a04 = fVar59 * fStack_2a04;
        fVar75 = fVar100 * local_2a00;
        fVar76 = fVar42 * fStack_29fc;
        fVar77 = fVar58 * fStack_29f8;
        fVar78 = fVar59 * fStack_29f4;
        local_2a00 = (float)((uint)fVar75 ^
                            ((uint)fVar75 ^ (uint)local_2a10) & -(uint)(fVar100 < 0.0));
        fStack_29fc = (float)((uint)fVar76 ^
                             ((uint)fVar76 ^ (uint)fStack_2a0c) & -(uint)(fVar42 < 0.0));
        fStack_29f8 = (float)((uint)fVar77 ^
                             ((uint)fVar77 ^ (uint)fStack_2a08) & -(uint)(fVar58 < 0.0));
        fStack_29f4 = (float)((uint)fVar78 ^
                             ((uint)fVar78 ^ (uint)fStack_2a04) & -(uint)(fVar59 < 0.0));
        local_2a10 = (float)((uint)local_2a10 ^
                            ((uint)local_2a10 ^ (uint)fVar75) & -(uint)(fVar100 < 0.0));
        fStack_2a0c = (float)((uint)fStack_2a0c ^
                             ((uint)fStack_2a0c ^ (uint)fVar76) & -(uint)(fVar42 < 0.0));
        fStack_2a08 = (float)((uint)fStack_2a08 ^
                             ((uint)fStack_2a08 ^ (uint)fVar77) & -(uint)(fVar58 < 0.0));
        fStack_2a04 = (float)((uint)fStack_2a04 ^
                             ((uint)fStack_2a04 ^ (uint)fVar78) & -(uint)(fVar59 < 0.0));
      }
      else {
        iVar11 = *(int *)(lVar12 + 0x40);
        puVar19 = (undefined8 *)0x0;
        if (iVar11 != 0) {
          puVar19 = (undefined8 *)((long)iVar11 + lVar12 + 0x40);
        }
        if (*(int *)(lVar12 + 0x44) == 0) {
          auVar176._8_4_ = 0xff7fffee;
          auVar176._0_8_ = 0xff7fffeeff7fffee;
          auVar176._12_4_ = 0xff7fffee;
          auVar109._8_4_ = 0x7f7fffee;
          auVar109._0_8_ = 0x7f7fffee7f7fffee;
          auVar109._12_4_ = 0x7f7fffee;
        }
        else {
          auVar109._8_4_ = 0x7f7fffee;
          auVar109._0_8_ = 0x7f7fffee7f7fffee;
          auVar109._12_4_ = 0x7f7fffee;
          auVar176._8_4_ = 0xff7fffee;
          auVar176._0_8_ = 0xff7fffeeff7fffee;
          auVar176._12_4_ = 0xff7fffee;
          puVar18 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar12 + 0x44) * 0xc);
          do {
            fVar75 = (float)*puVar19;
            fVar76 = (float)((ulong)*puVar19 >> 0x20);
            fVar77 = *(float *)(puVar19 + 1);
            puVar19 = (undefined8 *)((long)puVar19 + 0xc);
            auVar172._0_4_ = *param_7 * fVar75 + param_7[4] * fVar76 + param_7[8] * fVar77;
            auVar172._4_4_ = param_7[1] * fVar75 + param_7[5] * fVar76 + param_7[9] * fVar77;
            auVar172._8_4_ = param_7[2] * fVar75 + param_7[6] * fVar76 + param_7[10] * fVar77;
            auVar172._12_4_ = param_7[3] * fVar75 + param_7[7] * fVar76 + param_7[0xb] * fVar77;
            auVar109 = NEON_fmin(auVar109,auVar172,4);
            auVar176 = NEON_fmax(auVar176,auVar172,4);
          } while (puVar19 != puVar18);
        }
        fVar79 = fVar100 * (auVar109._0_4_ + param_7[0xc]);
        fVar98 = fVar42 * (auVar109._4_4_ + param_7[0xd]);
        fVar105 = fVar58 * (auVar109._8_4_ + param_7[0xe]);
        fVar118 = fVar59 * (auVar109._12_4_ + param_7[0xf]);
        fVar75 = fVar100 * (auVar176._0_4_ + param_7[0xc]);
        fVar76 = fVar42 * (auVar176._4_4_ + param_7[0xd]);
        fVar77 = fVar58 * (auVar176._8_4_ + param_7[0xe]);
        fVar78 = fVar59 * (auVar176._12_4_ + param_7[0xf]);
        fVar97 = *(float *)(lVar12 + 0x20);
        uVar81 = CONCAT44(fVar48 * fVar97,fVar120 * fVar97);
        uVar81 = NEON_fmaxp(uVar81,uVar81,4);
        uVar81 = NEON_fmax(CONCAT44(fVar26 * fVar97,fVar26 * fVar97),uVar81,4);
        fStack_2a08 = (float)uVar81;
        local_2a00 = (float)((uint)fVar75 ^ ((uint)fVar75 ^ (uint)fVar79) & -(uint)(fVar100 < 0.0))
                     + fStack_2a08;
        fStack_2a04 = (float)((ulong)uVar81 >> 0x20);
        fStack_29fc = (float)((uint)fVar76 ^ ((uint)fVar76 ^ (uint)fVar98) & -(uint)(fVar42 < 0.0))
                      + fStack_2a04;
        fStack_29f8 = (float)((uint)fVar77 ^ ((uint)fVar77 ^ (uint)fVar105) & -(uint)(fVar58 < 0.0))
                      + fStack_2a08;
        fStack_29f4 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)fVar118) & -(uint)(fVar59 < 0.0))
                      + fStack_2a04;
        local_2a10 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar75) & -(uint)(fVar100 < 0.0))
                     - fStack_2a08;
        fStack_2a0c = (float)((uint)fVar98 ^ ((uint)fVar98 ^ (uint)fVar76) & -(uint)(fVar42 < 0.0))
                      - fStack_2a04;
        fStack_2a08 = (float)((uint)fVar105 ^ ((uint)fVar105 ^ (uint)fVar77) & -(uint)(fVar58 < 0.0)
                             ) - fStack_2a08;
        fStack_2a04 = (float)((uint)fVar118 ^ ((uint)fVar118 ^ (uint)fVar78) & -(uint)(fVar59 < 0.0)
                             ) - fStack_2a04;
      }
    }
  }
  else {
    pfVar13 = (float *)param_3[4];
    fVar144 = fVar120 / *(float *)(param_6 + 8);
    fVar151 = fVar48 / *(float *)((long)param_6 + 0x44);
    fVar152 = fVar26 / *(float *)(param_6 + 9);
    fVar153 = auVar176._12_4_ / *(float *)((long)param_6 + 0x4c);
    pauVar14 = (undefined1 (*) [16])param_6[4];
    fVar100 = *(float *)(param_3 + 8);
    fVar120 = *(float *)((long)param_3 + 0x44);
    fVar48 = *(float *)(param_3 + 9);
    auVar176 = *pauVar14;
    pauVar23 = pauVar14 + 1;
    uVar17 = (undefined4)((ulong)*(undefined8 *)(pauVar14[1] + 8) >> 0x20);
    fVar166 = (float)*(undefined8 *)*pauVar23;
    fVar167 = (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20);
    fVar78 = *pfVar13 * fVar100;
    fVar97 = pfVar13[1] * fVar100;
    fVar100 = pfVar13[2] * fVar100;
    auVar174._12_4_ = uVar17;
    auVar174._0_12_ = *(undefined1 (*) [12])*pauVar23;
    auVar175._12_4_ = uVar17;
    auVar175._0_12_ = *(undefined1 (*) [12])*pauVar23;
    auVar174 = NEON_ext(auVar174,auVar175,8,1);
    fVar105 = pfVar13[4] * fVar120;
    fVar118 = pfVar13[5] * fVar120;
    fVar120 = pfVar13[6] * fVar120;
    auVar172 = NEON_ext(auVar176,auVar176,8,1);
    fVar26 = pfVar13[8] * fVar48;
    fVar42 = pfVar13[9] * fVar48;
    fVar48 = pfVar13[10] * fVar48;
    fVar58 = pfVar13[0xc] + *(float *)(param_3 + 10);
    fVar75 = pfVar13[0xd] + *(float *)((long)param_3 + 0x54);
    fVar77 = pfVar13[0xe] + *(float *)(param_3 + 0xb);
    auVar109 = pauVar14[2];
    auVar175 = NEON_ext(auVar109,auVar109,8,1);
    fVar157 = auVar109._4_4_;
    fVar123 = -*(float *)pauVar14[3];
    fVar131 = -*(float *)(pauVar14[3] + 4);
    fVar132 = -*(float *)(pauVar14[3] + 8);
    fVar173 = auVar175._4_4_;
    fVar158 = fVar144 * auVar176._4_4_;
    fVar163 = fVar151 * fVar167;
    fVar164 = fVar152 * fVar157;
    fVar165 = fVar153 * fVar173;
    fVar134 = auVar176._0_4_ * fVar144;
    fVar141 = fVar166 * fVar151;
    fVar142 = auVar109._0_4_ * fVar152;
    fVar143 = fVar157 * fVar153;
    fVar168 = auVar172._0_4_ * fVar144;
    fVar169 = auVar174._0_4_ * fVar151;
    fVar170 = auVar175._0_4_ * fVar152;
    fVar171 = fVar173 * fVar153;
    fVar59 = fVar168 * fVar48 + fVar134 * fVar26 + fVar158 * fVar42;
    fVar76 = fVar169 * fVar48 + fVar141 * fVar26 + fVar163 * fVar42;
    auVar61._0_8_ = CONCAT44(fVar76,fVar59);
    auVar61._8_4_ = fVar170 * fVar48 + fVar142 * fVar26 + fVar164 * fVar42;
    auVar61._12_4_ = fVar171 * fVar48 + fVar143 * fVar26 + fVar165 * fVar42;
    fVar79 = fVar168 * fVar120 + fVar134 * fVar105 + fVar158 * fVar118;
    fVar98 = fVar169 * fVar120 + fVar141 * fVar105 + fVar163 * fVar118;
    auVar83._0_8_ = CONCAT44(fVar98,fVar79);
    auVar83._8_4_ = fVar170 * fVar120 + fVar142 * fVar105 + fVar164 * fVar118;
    auVar83._12_4_ = fVar171 * fVar120 + fVar143 * fVar105 + fVar165 * fVar118;
    fVar120 = ABS(fVar144);
    fVar48 = ABS(fVar151);
    fVar26 = ABS(fVar152);
    fVar105 = fVar168 * fVar100 + fVar134 * fVar78 + fVar158 * fVar97;
    fVar118 = fVar169 * fVar100 + fVar141 * fVar78 + fVar163 * fVar97;
    auVar107._0_8_ = CONCAT44(fVar118,fVar105);
    auVar107._8_4_ = fVar170 * fVar100 + fVar142 * fVar78 + fVar164 * fVar97;
    auVar107._12_4_ = fVar171 * fVar100 + fVar143 * fVar78 + fVar165 * fVar97;
    uStack_1e28 = auVar83._8_8_;
    fVar100 = fVar168 * fVar77 + fVar134 * fVar58 + fVar158 * fVar75 +
              fVar144 * ((auVar172._0_4_ * fVar132 +
                         auVar176._0_4_ * fVar123 + auVar176._4_4_ * fVar131) -
                        *(float *)(param_6 + 10));
    fVar42 = fVar169 * fVar77 + fVar141 * fVar58 + fVar163 * fVar75 +
             fVar151 * ((auVar174._0_4_ * fVar132 + fVar166 * fVar123 + fVar167 * fVar131) -
                       *(float *)((long)param_6 + 0x54));
    auVar30._0_8_ = CONCAT44(fVar42,fVar100);
    auVar30._8_4_ =
         fVar170 * fVar77 + fVar142 * fVar58 + fVar164 * fVar75 +
         fVar152 * ((auVar175._0_4_ * fVar132 + auVar109._0_4_ * fVar123 + fVar157 * fVar131) -
                   *(float *)(param_6 + 0xb));
    auVar30._12_4_ =
         fVar171 * fVar77 + fVar143 * fVar58 + fVar165 * fVar75 +
         fVar153 * ((fVar173 * fVar132 + fVar157 * fVar123 + fVar173 * fVar131) -
                   *(float *)((long)param_6 + 0x5c));
    uStack_1e38 = auVar107._8_8_;
    uStack_1e18 = auVar61._8_8_;
    uStack_1e08 = auVar30._8_8_;
    local_1e40 = auVar107._0_8_;
    local_1e30 = auVar83._0_8_;
    local_1e20 = auVar61._0_8_;
    local_1e10 = auVar30._0_8_;
    if ((lVar12 == 0) || ((*(ushort *)(lVar12 + 0x1a) & 1) == 0)) {
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 0x18))
                (lVar12,&local_1e40,&local_2a10);
    }
    else {
      iVar11 = *(int *)(lVar12 + 0x40);
      puVar19 = (undefined8 *)0x0;
      if (iVar11 != 0) {
        puVar19 = (undefined8 *)((long)iVar11 + lVar12 + 0x40);
      }
      if (*(int *)(lVar12 + 0x44) == 0) {
        auVar125._8_4_ = 0xff7fffee;
        auVar125._0_8_ = 0xff7fffeeff7fffee;
        auVar125._12_4_ = 0xff7fffee;
        auVar136._8_4_ = 0x7f7fffee;
        auVar136._0_8_ = 0x7f7fffee7f7fffee;
        auVar136._12_4_ = 0x7f7fffee;
      }
      else {
        auVar136._8_4_ = 0x7f7fffee;
        auVar136._0_8_ = 0x7f7fffee7f7fffee;
        auVar136._12_4_ = 0x7f7fffee;
        auVar125._8_4_ = 0xff7fffee;
        auVar125._0_8_ = 0xff7fffeeff7fffee;
        auVar125._12_4_ = 0xff7fffee;
        puVar18 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar12 + 0x44) * 0xc);
        do {
          fVar58 = (float)*puVar19;
          fVar75 = (float)((ulong)*puVar19 >> 0x20);
          fVar77 = *(float *)(puVar19 + 1);
          puVar19 = (undefined8 *)((long)puVar19 + 0xc);
          auVar146._0_4_ = fVar105 * fVar58 + fVar79 * fVar75 + fVar59 * fVar77;
          auVar146._4_4_ = fVar118 * fVar58 + fVar98 * fVar75 + fVar76 * fVar77;
          auVar146._8_4_ = auVar107._8_4_ * fVar58 + auVar83._8_4_ * fVar75 + auVar61._8_4_ * fVar77
          ;
          auVar146._12_4_ =
               auVar107._12_4_ * fVar58 + auVar83._12_4_ * fVar75 + auVar61._12_4_ * fVar77;
          auVar136 = NEON_fmin(auVar136,auVar146,4);
          auVar125 = NEON_fmax(auVar125,auVar146,4);
        } while (puVar19 != puVar18);
      }
      fVar58 = *(float *)(param_3 + 7);
      uVar81 = CONCAT44(fVar48 * fVar58,fVar120 * fVar58);
      uVar81 = NEON_fmaxp(uVar81,uVar81,4);
      uVar81 = NEON_fmax(CONCAT44(fVar26 * fVar58,fVar26 * fVar58),uVar81,4);
      fStack_2a08 = (float)uVar81;
      local_2a00 = fVar100 + auVar125._0_4_ + fStack_2a08;
      fStack_2a04 = (float)((ulong)uVar81 >> 0x20);
      fStack_29fc = fVar42 + auVar125._4_4_ + fStack_2a04;
      fStack_29f8 = auVar30._8_4_ + auVar125._8_4_ + fStack_2a08;
      fStack_29f4 = auVar30._12_4_ + auVar125._12_4_ + fStack_2a04;
      local_2a10 = (fVar100 + auVar136._0_4_) - fStack_2a08;
      fStack_2a0c = (fVar42 + auVar136._4_4_) - fStack_2a04;
      fStack_2a08 = (auVar30._8_4_ + auVar136._8_4_) - fStack_2a08;
      fStack_2a04 = (auVar30._12_4_ + auVar136._12_4_) - fStack_2a04;
    }
  }
  fVar76 = fStack_29f8;
  fVar75 = fStack_29fc;
  fVar59 = local_2a00;
  fVar58 = fStack_2a08;
  fVar42 = fStack_2a0c;
  fVar100 = local_2a10;
  local_2a50[0] = 7;
  local_2a48 = (float *)0x0;
  local_2a40 = 0;
  local_2a38 = 0;
  local_2a30 = 0;
  uVar81 = NEON_fmaxp(CONCAT44(fVar48,fVar120),CONCAT44(fVar48,fVar120),4);
  uVar81 = NEON_fmax(CONCAT44(fVar26,fVar26),uVar81,4);
  iVar11 = (**(code **)(*(long *)puVar5 + (ulong)*(byte *)(lVar21 + 0x18) * 0x200 + 0xa8))
                     (lVar21,local_2a50,&local_2a10,&local_1e40);
  if ((-1 < iVar11) && ((char)param_3[6] != '\0')) {
    auVar34._0_8_ = local_2a40 & 0xffffffff;
    if (0 < (int)local_2a40) {
      fVar77 = *(float *)(param_3 + 8);
      fVar78 = *(float *)((long)param_3 + 0x44);
      fVar79 = *(float *)(param_3 + 9);
      fVar120 = *(float *)(param_3 + 10);
      fVar48 = *(float *)((long)param_3 + 0x54);
      fVar26 = *(float *)(param_3 + 0xb);
      pfVar13 = &fStack_2a08;
      pfVar20 = local_2a48 + 2;
      do {
        auVar34._0_8_ = auVar34._0_8_ - 1;
        fVar97 = *pfVar20;
        *(ulong *)(pfVar13 + -2) =
             CONCAT44(fVar48 + fVar78 * (float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20),
                      fVar120 + fVar77 * (float)*(undefined8 *)(pfVar20 + -2));
        *pfVar13 = fVar26 + fVar79 * fVar97;
        pfVar13 = pfVar13 + 3;
        pfVar20 = pfVar20 + 3;
      } while (auVar34._0_8_ != 0);
    }
    local_2a48 = &local_2a10;
    local_2a40 = CONCAT44((int)param_3[7],(int)local_2a40);
    local_2a38 = 0;
    local_2a30 = 0;
  }
  local_2ad8 = '\0';
  plVar1 = (long *)(param_4 + 0x78);
  local_2b98 = (undefined2)param_2[2];
  local_2b8c = *(undefined4 *)((long)param_2 + 0x1c);
  local_2b94 = *(undefined8 *)((long)param_2 + 0x14);
  local_2ae0 = param_4 + 0x50;
  local_2b88 = 0;
  uStack_2b80 = 0;
  local_2b78 = 0;
  local_2b70 = 0xffffffff;
  local_2b68 = 0;
  local_2ab0 = *(undefined8 *)param_7;
  uStack_2aa8 = *(undefined8 *)(param_7 + 2);
  uStack_2aa0 = *(undefined8 *)(param_7 + 4);
  uStack_2a98 = *(undefined8 *)(param_7 + 6);
  local_2a68 = param_8 & 1;
  local_2a90 = *(undefined8 *)(param_7 + 8);
  uStack_2a88 = *(undefined8 *)(param_7 + 10);
  uStack_2a80 = *(undefined8 *)(param_7 + 0xc);
  uStack_2a78 = *(undefined8 *)(param_7 + 0xe);
  local_2a60 = param_9;
  uVar28 = NEON_fmax(param_9[2],0,4);
  fVar120 = (float)uVar81 * (float)uVar28;
  fVar48 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
  auVar160._0_8_ = NEON_fmin(CONCAT44(fVar48 * fVar48,fVar120 * fVar120),0x7f7fffee7f7fffee,4);
  local_2d10 = (byte)_DAT_03cab270;
  bStack_2d0f = (byte)((ulong)_DAT_03cab270 >> 8);
  bStack_2d0e = (byte)((ulong)_DAT_03cab270 >> 0x10);
  bStack_2d0d = (byte)((ulong)_DAT_03cab270 >> 0x18);
  bStack_2d0c = (byte)((ulong)_DAT_03cab270 >> 0x20);
  bStack_2d0b = (byte)((ulong)_DAT_03cab270 >> 0x28);
  bStack_2d0a = (byte)((ulong)_DAT_03cab270 >> 0x30);
  bStack_2d09 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  bStack_2d08 = (byte)_UNK_03cab278;
  bStack_2d07 = (byte)((ulong)_UNK_03cab278 >> 8);
  bStack_2d06 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  bStack_2d05 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  bStack_2d04 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  bStack_2d03 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  bStack_2d02 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  bStack_2d01 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  local_2bc0 = param_2;
  local_2bb8 = param_1;
  local_2bb0 = param_4;
  local_2ba8 = param_6;
  local_2ba0 = param_5;
  local_2ad0 = param_2;
  local_2ac8 = local_2a50;
  local_2ac0 = param_3;
  local_2a70 = uVar81;
  if ((*(byte *)(param_9 + 1) & 0x41) != 0) {
    if ((char)param_9[3] == '\0') {
      auVar160._8_8_ = auVar160._0_8_;
      local_230 = (float *)((ulong)&local_630 | 4);
      _local_630 = CONCAT44(fStack_62c,1);
      do {
        pfVar20 = local_230 + -1;
        pfVar13 = (float *)((long)plVar1 + (long)(int)local_230[-1] * 0x80 + *plVar1);
        auVar108._0_4_ = fVar42 - pfVar13[0xc];
        auVar108._4_4_ = fVar42 - pfVar13[0xd];
        auVar108._8_4_ = fVar42 - pfVar13[0xe];
        auVar108._12_4_ = fVar42 - pfVar13[0xf];
        auVar137._0_4_ = fVar58 - pfVar13[0x14];
        auVar137._4_4_ = fVar58 - pfVar13[0x15];
        auVar137._8_4_ = fVar58 - pfVar13[0x16];
        auVar137._12_4_ = fVar58 - pfVar13[0x17];
        auVar84._0_4_ = fVar100 - pfVar13[4];
        auVar84._4_4_ = fVar100 - pfVar13[5];
        auVar84._8_4_ = fVar100 - pfVar13[6];
        auVar84._12_4_ = fVar100 - pfVar13[7];
        auVar154._0_4_ = fVar59 - *pfVar13;
        auVar154._4_4_ = fVar59 - pfVar13[1];
        auVar154._8_4_ = fVar59 - pfVar13[2];
        auVar154._12_4_ = fVar59 - pfVar13[3];
        auVar126._0_4_ = fVar75 - pfVar13[8];
        auVar126._4_4_ = fVar75 - pfVar13[9];
        auVar126._8_4_ = fVar75 - pfVar13[10];
        auVar126._12_4_ = fVar75 - pfVar13[0xb];
        iVar11 = -(uint)(*pfVar13 <= pfVar13[4]);
        iVar43 = -(uint)(pfVar13[1] <= pfVar13[5]);
        iVar49 = -(uint)(pfVar13[2] <= pfVar13[6]);
        iVar54 = -(uint)(pfVar13[3] <= pfVar13[7]);
        auVar147._0_4_ = fVar76 - pfVar13[0x10];
        auVar147._4_4_ = fVar76 - pfVar13[0x11];
        auVar147._8_4_ = fVar76 - pfVar13[0x12];
        auVar147._12_4_ = fVar76 - pfVar13[0x13];
        auVar176 = NEON_smax(auVar84,ZEXT816(0),4);
        auVar109 = NEON_smax(auVar108,ZEXT816(0),4);
        auVar176 = NEON_smin(auVar176,auVar154,4);
        auVar109 = NEON_smin(auVar109,auVar126,4);
        auVar172 = NEON_smax(auVar137,ZEXT816(0),4);
        auVar172 = NEON_smin(auVar172,auVar147,4);
        fVar120 = auVar160._0_4_;
        iVar80 = -(uint)(auVar176._0_4_ * auVar176._0_4_ + auVar109._0_4_ * auVar109._0_4_ +
                         auVar172._0_4_ * auVar172._0_4_ <= fVar120);
        iVar99 = -(uint)(auVar176._4_4_ * auVar176._4_4_ + auVar109._4_4_ * auVar109._4_4_ +
                         auVar172._4_4_ * auVar172._4_4_ <= auVar160._4_4_);
        iVar101 = -(uint)(auVar176._8_4_ * auVar176._8_4_ + auVar109._8_4_ * auVar109._8_4_ +
                          auVar172._8_4_ * auVar172._8_4_ <= auVar160._8_4_);
        iVar103 = -(uint)(auVar176._12_4_ * auVar176._12_4_ + auVar109._12_4_ * auVar109._12_4_ +
                          auVar172._12_4_ * auVar172._12_4_ <= auVar160._12_4_);
        bVar25 = (byte)iVar80 & (byte)iVar11;
        bVar38 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar11 >> 8);
        bVar39 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar11 >> 0x10);
        bVar40 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar11 >> 0x18);
        bVar41 = (byte)iVar99 & (byte)iVar43;
        bVar44 = (byte)((uint)iVar99 >> 8) & (byte)((uint)iVar43 >> 8);
        bVar45 = (byte)((uint)iVar99 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
        bVar46 = (byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar43 >> 0x18);
        bVar47 = (byte)iVar101 & (byte)iVar49;
        bVar50 = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar49 >> 8);
        bVar51 = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
        bVar52 = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar49 >> 0x18);
        bVar53 = (byte)iVar103 & (byte)iVar54;
        bVar55 = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar54 >> 8);
        bVar56 = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
        bVar57 = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
        if (CONCAT13(bVar46 | bVar40 | bVar52 | bVar57,
                     CONCAT12(bVar45 | bVar39 | bVar51 | bVar56,
                              CONCAT11(bVar44 | bVar38 | bVar50 | bVar55,
                                       bVar41 | bVar25 | bVar47 | bVar53))) != 0) {
          iVar11 = CONCAT13(bVar40 & bStack_2d0d,
                            CONCAT12(bVar39 & bStack_2d0e,
                                     CONCAT11(bVar38 & bStack_2d0f,bVar25 & local_2d10)));
          auVar29._0_8_ =
               CONCAT17(bVar46 & bStack_2d09,
                        CONCAT16(bVar45 & bStack_2d0a,
                                 CONCAT15(bVar44 & bStack_2d0b,CONCAT14(bVar41 & bStack_2d0c,iVar11)
                                         )));
          auVar29[8] = bVar47 & bStack_2d08;
          auVar29[9] = bVar50 & bStack_2d07;
          auVar29[10] = bVar51 & bStack_2d06;
          auVar29[0xb] = bVar52 & bStack_2d05;
          auVar31[0xc] = bVar53 & bStack_2d04;
          auVar31._0_12_ = auVar29;
          auVar31[0xd] = bVar55 & bStack_2d03;
          auVar31[0xe] = bVar56 & bStack_2d02;
          auVar31[0xf] = bVar57 & bStack_2d01;
          uVar27 = iVar11 + (int)((ulong)auVar29._0_8_ >> 0x20) + auVar29._8_4_ + auVar31._12_4_;
          iVar11 = *(int *)(PTR_DAT_047d1aa8 + (ulong)uVar27 * 4);
          auVar176 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar13 + 0x18),
                             *(undefined1 (*) [16])(PTR_DAT_047d1aa0 + (ulong)uVar27 * 0x10));
          if (*(char *)(pfVar13 + 0x1c) == '\0') {
            *(long *)(local_230 + 1) = auVar176._8_8_;
            *(long *)pfVar20 = auVar176._0_8_;
            pfVar20 = pfVar20 + iVar11;
          }
          else {
            auVar34._0_8_ = CONCAT44(fVar120,fVar120);
            auVar34._8_8_ = 0;
            local_230 = pfVar20;
            if (uVar27 != 0) {
              iVar43 = 0;
LAB_02edda58:
              switch(iVar43) {
              case 0:
                iVar49 = auVar176._0_4_;
                break;
              case 1:
                iVar49 = auVar176._4_4_;
                break;
              case 2:
                iVar49 = auVar176._8_4_;
                break;
              case 3:
                iVar49 = auVar176._12_4_;
                break;
              default:
                iVar49 = 0;
              }
              local_2b60 = iVar49 << 9;
              local_2b58 = (int *)(local_2bb0 + 0x90 +
                                  (long)iVar49 * 0x40 + (long)*(int *)(local_2bb0 + 0x90));
              local_2b50 = 0;
              if (*local_2b58 != 0) {
                local_2b50 = (long)local_2b58 + (long)*local_2b58;
              }
              local_2b40 = (short)local_2b58[0xe];
              if (local_2ad8 == '\0') {
                iVar49 = (int)local_2b40;
                auVar110._4_4_ = iVar49;
                auVar110._0_4_ = iVar49;
                auVar110._8_4_ = iVar49;
                auVar110._12_4_ = iVar49;
                sStack_2b36 = local_2b40 >> 0xf;
                sStack_2b24 = *(short *)((long)local_2b58 + 0x3a);
                auVar85._4_4_ = (int)sStack_2b24;
                auVar85._0_4_ = (int)sStack_2b24;
                auVar85._8_4_ = (int)sStack_2b24;
                auVar85._12_4_ = (int)sStack_2b24;
                sStack_2b26 = sStack_2b24 >> 0xf;
                sVar2 = (short)local_2b58[0xf];
                auVar62._4_4_ = (int)sVar2;
                auVar62._0_4_ = (int)sVar2;
                auVar62._8_4_ = (int)sVar2;
                auVar62._12_4_ = (int)sVar2;
                sStack_2b32 = sStack_2b36;
                sStack_2b22 = sStack_2b26;
              }
              else {
                auVar110._2_2_ = local_2b40;
                auVar110._0_2_ = local_2b40;
                auVar110._4_2_ = local_2b40;
                auVar110._6_2_ = local_2b40;
                auVar110._8_2_ = local_2b40;
                auVar110._10_2_ = local_2b40;
                auVar110._12_2_ = local_2b40;
                auVar110._14_2_ = local_2b40;
                sStack_2b24 = *(short *)((long)local_2b58 + 0x3a);
                auVar85._2_2_ = sStack_2b24;
                auVar85._0_2_ = sStack_2b24;
                auVar85._4_2_ = sStack_2b24;
                auVar85._6_2_ = sStack_2b24;
                auVar85._8_2_ = sStack_2b24;
                auVar85._10_2_ = sStack_2b24;
                auVar85._12_2_ = sStack_2b24;
                auVar85._14_2_ = sStack_2b24;
                uVar3 = (undefined2)local_2b58[0xf];
                auVar62._2_2_ = uVar3;
                auVar62._0_2_ = uVar3;
                auVar62._4_2_ = uVar3;
                auVar62._6_2_ = uVar3;
                auVar62._8_2_ = uVar3;
                auVar62._10_2_ = uVar3;
                auVar62._12_2_ = uVar3;
                auVar62._14_2_ = uVar3;
                sStack_2b32 = local_2b40;
                sStack_2b22 = sStack_2b24;
              }
              iStack_2b18 = auVar62._8_4_;
              iStack_2b14 = auVar62._12_4_;
              local_2b20 = auVar62._0_4_;
              iStack_2b1c = auVar62._4_4_;
              local_2b10 = (float)local_2b58[0xb];
              fVar77 = auVar34._0_4_;
              local_2b00 = (float)local_2b58[0xc];
              local_2af0 = (float)local_2b58[0xd];
              local_1e40 = local_1e40 & 0xffffffff00000000;
              fVar120 = fVar77;
              fVar48 = fVar77;
              fVar26 = fVar77;
              sStack_2b3e = sStack_2b32;
              sStack_2b3c = local_2b40;
              sStack_2b3a = sStack_2b32;
              sStack_2b38 = local_2b40;
              sStack_2b36 = sStack_2b32;
              sStack_2b34 = local_2b40;
              local_2b30 = sStack_2b24;
              sStack_2b2e = sStack_2b22;
              sStack_2b2c = sStack_2b24;
              sStack_2b2a = sStack_2b22;
              sStack_2b28 = sStack_2b24;
              sStack_2b26 = sStack_2b22;
              fStack_2b0c = local_2b10;
              fStack_2b08 = local_2b10;
              fStack_2b04 = local_2b10;
              fStack_2afc = local_2b00;
              fStack_2af8 = local_2b00;
              fStack_2af4 = local_2b00;
              fStack_2aec = local_2af0;
              fStack_2ae8 = local_2af0;
              fStack_2ae4 = local_2af0;
              local_1a40 = (undefined8 *)((ulong)&local_1e40 | 4);
              do {
                puVar19 = (undefined8 *)((long)local_1a40 + -4);
                puVar18 = (undefined8 *)
                          (local_2b50 + (ulong)*(uint *)((long)local_1a40 + -4) * 0x1c);
                uVar81 = *puVar18;
                uVar28 = *(undefined8 *)((long)puVar18 + 4);
                bVar25 = (byte)((ulong)uVar81 >> 8);
                bVar38 = (byte)((ulong)uVar28 >> 8);
                auVar155._0_4_ = auVar110._0_4_ + (CONCAT12(bVar25,(ushort)(byte)uVar81) & 0xffff);
                auVar155._4_4_ = auVar110._4_4_ + (uint)bVar25;
                auVar155._8_4_ = auVar110._8_4_ + (uint)(byte)((ulong)uVar81 >> 0x10);
                auVar155._12_4_ = auVar110._12_4_ + (uint)(byte)((ulong)uVar81 >> 0x18);
                auVar111._0_4_ = auVar110._0_4_ + (CONCAT12(bVar38,(ushort)(byte)uVar28) & 0xffff);
                auVar111._4_4_ = auVar110._4_4_ + (uint)bVar38;
                auVar111._8_4_ = auVar110._8_4_ + (uint)(byte)((ulong)uVar28 >> 0x10);
                auVar111._12_4_ = auVar110._12_4_ + (uint)(byte)((ulong)uVar28 >> 0x18);
                uVar28 = *(undefined8 *)((long)puVar18 + 0xc);
                auVar172 = NEON_scvtf(auVar155,4);
                bVar25 = (byte)((ulong)uVar28 >> 8);
                auVar109 = NEON_scvtf(auVar111,4);
                fVar105 = local_2b10 * auVar172._0_4_;
                fVar118 = fStack_2b0c * auVar172._4_4_;
                fVar123 = fStack_2b08 * auVar172._8_4_;
                fVar157 = fStack_2b04 * auVar172._12_4_;
                fVar78 = local_2b10 * auVar109._0_4_;
                fVar79 = fStack_2b0c * auVar109._4_4_;
                fVar97 = fStack_2b08 * auVar109._8_4_;
                fVar98 = fStack_2b04 * auVar109._12_4_;
                uVar81 = puVar18[1];
                bVar38 = (byte)((ulong)uVar81 >> 8);
                auVar148._0_4_ = auVar85._0_4_ + (CONCAT12(bVar38,(ushort)(byte)uVar81) & 0xffff);
                auVar148._4_4_ = auVar85._4_4_ + (uint)bVar38;
                auVar148._8_4_ = auVar85._8_4_ + (uint)(byte)((ulong)uVar81 >> 0x10);
                auVar148._12_4_ = auVar85._12_4_ + (uint)(byte)((ulong)uVar81 >> 0x18);
                auVar86._0_4_ = auVar85._0_4_ + (CONCAT12(bVar25,(ushort)(byte)uVar28) & 0xffff);
                auVar86._4_4_ = auVar85._4_4_ + (uint)bVar25;
                auVar86._8_4_ = auVar85._8_4_ + (uint)(byte)((ulong)uVar28 >> 0x10);
                auVar86._12_4_ = auVar85._12_4_ + (uint)(byte)((ulong)uVar28 >> 0x18);
                auVar175 = NEON_scvtf(auVar148,4);
                uVar28 = *(undefined8 *)((long)puVar18 + 0x14);
                auVar172 = NEON_scvtf(auVar86,4);
                bVar25 = (byte)((ulong)uVar28 >> 8);
                uVar81 = puVar18[2];
                bVar38 = (byte)((ulong)uVar81 >> 8);
                auVar138._0_4_ = auVar62._0_4_ + (CONCAT12(bVar38,(ushort)(byte)uVar81) & 0xffff);
                auVar138._4_4_ = auVar62._4_4_ + (uint)bVar38;
                auVar138._8_4_ = auVar62._8_4_ + (uint)(byte)((ulong)uVar81 >> 0x10);
                auVar138._12_4_ = auVar62._12_4_ + (uint)(byte)((ulong)uVar81 >> 0x18);
                auVar63._0_4_ = auVar62._0_4_ + (CONCAT12(bVar25,(ushort)(byte)uVar28) & 0xffff);
                auVar63._4_4_ = auVar62._4_4_ + (uint)bVar25;
                auVar63._8_4_ = auVar62._8_4_ + (uint)(byte)((ulong)uVar28 >> 0x10);
                auVar63._12_4_ = auVar62._12_4_ + (uint)(byte)((ulong)uVar28 >> 0x18);
                auVar174 = NEON_scvtf(auVar138,4);
                auVar109 = NEON_scvtf(auVar63,4);
                auVar127._0_4_ = fVar100 - fVar78;
                auVar127._4_4_ = fVar100 - fVar79;
                auVar127._8_4_ = fVar100 - fVar97;
                auVar127._12_4_ = fVar100 - fVar98;
                auVar87._0_4_ = fVar42 - local_2b00 * auVar172._0_4_;
                auVar87._4_4_ = fVar42 - fStack_2afc * auVar172._4_4_;
                auVar87._8_4_ = fVar42 - fStack_2af8 * auVar172._8_4_;
                auVar87._12_4_ = fVar42 - fStack_2af4 * auVar172._12_4_;
                auVar64._0_4_ = fVar58 - local_2af0 * auVar109._0_4_;
                auVar64._4_4_ = fVar58 - fStack_2aec * auVar109._4_4_;
                auVar64._8_4_ = fVar58 - fStack_2ae8 * auVar109._8_4_;
                auVar64._12_4_ = fVar58 - fStack_2ae4 * auVar109._12_4_;
                auVar161._0_4_ = fVar59 - fVar105;
                auVar161._4_4_ = fVar59 - fVar118;
                auVar161._8_4_ = fVar59 - fVar123;
                auVar161._12_4_ = fVar59 - fVar157;
                auVar149._0_4_ = fVar75 - local_2b00 * auVar175._0_4_;
                auVar149._4_4_ = fVar75 - fStack_2afc * auVar175._4_4_;
                auVar149._8_4_ = fVar75 - fStack_2af8 * auVar175._8_4_;
                auVar149._12_4_ = fVar75 - fStack_2af4 * auVar175._12_4_;
                auVar139._0_4_ = fVar76 - local_2af0 * auVar174._0_4_;
                auVar139._4_4_ = fVar76 - fStack_2aec * auVar174._4_4_;
                auVar139._8_4_ = fVar76 - fStack_2ae8 * auVar174._8_4_;
                auVar139._12_4_ = fVar76 - fStack_2ae4 * auVar174._12_4_;
                auVar172 = NEON_smax(auVar127,ZEXT816(0),4);
                auVar109 = NEON_smax(auVar87,ZEXT816(0),4);
                auVar174 = NEON_smin(auVar172,auVar161,4);
                auVar172 = NEON_smin(auVar109,auVar149,4);
                auVar109 = NEON_smax(auVar64,ZEXT816(0),4);
                auVar109 = NEON_smin(auVar109,auVar139,4);
                iVar101 = -(uint)(fVar105 <= fVar78);
                iVar103 = -(uint)(fVar118 <= fVar79);
                iVar102 = -(uint)(fVar123 <= fVar97);
                iVar104 = -(uint)(fVar157 <= fVar98);
                iVar49 = -(uint)(auVar174._0_4_ * auVar174._0_4_ + auVar172._0_4_ * auVar172._0_4_ +
                                 auVar109._0_4_ * auVar109._0_4_ <= fVar77);
                iVar54 = -(uint)(auVar174._4_4_ * auVar174._4_4_ + auVar172._4_4_ * auVar172._4_4_ +
                                 auVar109._4_4_ * auVar109._4_4_ <= fVar120);
                iVar80 = -(uint)(auVar174._8_4_ * auVar174._8_4_ + auVar172._8_4_ * auVar172._8_4_ +
                                 auVar109._8_4_ * auVar109._8_4_ <= fVar48);
                iVar99 = -(uint)(auVar174._12_4_ * auVar174._12_4_ +
                                 auVar172._12_4_ * auVar172._12_4_ +
                                 auVar109._12_4_ * auVar109._12_4_ <= fVar26);
                bVar25 = (byte)iVar49 & (byte)iVar101;
                bVar38 = (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar101 >> 8);
                bVar39 = (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar101 >> 0x10);
                bVar40 = (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar101 >> 0x18);
                bVar41 = (byte)iVar54 & (byte)iVar103;
                bVar44 = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar103 >> 8);
                bVar45 = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar103 >> 0x10);
                bVar46 = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar103 >> 0x18);
                bVar47 = (byte)iVar80 & (byte)iVar102;
                bVar50 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar102 >> 8);
                bVar51 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar102 >> 0x10);
                bVar52 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar102 >> 0x18);
                bVar53 = (byte)iVar99 & (byte)iVar104;
                bVar55 = (byte)((uint)iVar99 >> 8) & (byte)((uint)iVar104 >> 8);
                bVar56 = (byte)((uint)iVar99 >> 0x10) & (byte)((uint)iVar104 >> 0x10);
                bVar57 = (byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar104 >> 0x18);
                if (CONCAT13(bVar46 | bVar40 | bVar52 | bVar57,
                             CONCAT12(bVar45 | bVar39 | bVar51 | bVar56,
                                      CONCAT11(bVar44 | bVar38 | bVar50 | bVar55,
                                               bVar41 | bVar25 | bVar47 | bVar53))) != 0) {
                  iVar49 = CONCAT13(bVar40 & bStack_2d0d,
                                    CONCAT12(bVar39 & bStack_2d0e,
                                             CONCAT11(bVar38 & bStack_2d0f,bVar25 & local_2d10)));
                  auVar60._0_8_ =
                       CONCAT17(bVar46 & bStack_2d09,
                                CONCAT16(bVar45 & bStack_2d0a,
                                         CONCAT15(bVar44 & bStack_2d0b,
                                                  CONCAT14(bVar41 & bStack_2d0c,iVar49))));
                  auVar60[8] = bVar47 & bStack_2d08;
                  auVar60[9] = bVar50 & bStack_2d07;
                  auVar60[10] = bVar51 & bStack_2d06;
                  auVar60[0xb] = bVar52 & bStack_2d05;
                  auVar65[0xc] = bVar53 & bStack_2d04;
                  auVar65._0_12_ = auVar60;
                  auVar65[0xd] = bVar55 & bStack_2d03;
                  auVar65[0xe] = bVar56 & bStack_2d02;
                  auVar65[0xf] = bVar57 & bStack_2d01;
                  lVar21 = local_2b50 + (ulong)*(uint *)((long)local_1a40 + -4) * 0x1c;
                  uVar27 = iVar49 + (int)((ulong)auVar60._0_8_ >> 0x20) +
                           auVar60._8_4_ + auVar65._12_4_;
                  uVar81 = *(undefined8 *)(lVar21 + 0x18);
                  uVar24 = (undefined1)((ulong)uVar81 >> 8);
                  auVar88._6_2_ = 0;
                  auVar88._0_6_ =
                       (uint6)CONCAT14(uVar24,(uint)CONCAT12(uVar24,(ushort)(byte)uVar81)) &
                       0xffff0000ffff;
                  auVar88[8] = (char)((ulong)uVar81 >> 0x10);
                  auVar88._9_3_ = 0;
                  auVar88[0xc] = (char)((ulong)uVar81 >> 0x18);
                  auVar88._13_3_ = 0;
                  iVar49 = *(int *)(PTR_DAT_047d1aa8 + (ulong)uVar27 * 4);
                  auVar109 = a64_TBL(ZEXT816(0),auVar88,
                                     *(undefined1 (*) [16])(PTR_DAT_047d1aa0 + (ulong)uVar27 * 0x10)
                                    );
                  if (*(byte *)(lVar21 + 0x1b) < *(byte *)(lVar21 + 0x1a)) {
                    local_1a40 = puVar19;
                    if (uVar27 != 0) {
                      iVar54 = 0;
LAB_02eddce4:
                      switch(iVar54) {
                      case 0:
                        iVar80 = auVar109._0_4_;
                        break;
                      case 1:
                        iVar80 = auVar109._4_4_;
                        break;
                      case 2:
                        iVar80 = auVar109._8_4_;
                        break;
                      case 3:
                        iVar80 = auVar109._12_4_;
                        break;
                      default:
                        iVar80 = 0;
                      }
                      iVar99 = local_2b58[2];
                      lVar21 = 0;
                      if (iVar99 != 0) {
                        lVar21 = (long)iVar99 + (long)(local_2b58 + 2);
                      }
                      iVar99 = local_2b58[4];
                      iVar101 = local_2b58[8];
                      iVar103 = local_2b58[9];
                      iVar102 = local_2b58[10];
                      iVar104 = local_2b58[0xb];
                      uVar27 = *(uint *)(lVar21 + (long)iVar80 * 4);
                      lVar21 = 0;
                      if (iVar99 != 0) {
                        lVar21 = (long)iVar99 + (long)(local_2b58 + 4);
                      }
                      uVar81 = *(undefined8 *)(lVar21 + ((ulong)uVar27 & 0xff) * 6);
                      uVar28 = *(undefined8 *)(lVar21 + ((ulong)(uVar27 >> 8) & 0xff) * 6);
                      auVar32._0_4_ = iVar101 + (uint)(ushort)uVar81;
                      auVar32._4_4_ = iVar103 + (uint)(ushort)((ulong)uVar81 >> 0x10);
                      auVar32._8_4_ = iVar102 + (uint)(ushort)((ulong)uVar81 >> 0x20);
                      auVar32._12_4_ = iVar104 + (uint)(ushort)((ulong)uVar81 >> 0x30);
                      auVar66._0_4_ = iVar101 + (uint)(ushort)uVar28;
                      auVar66._4_4_ = iVar103 + (uint)(ushort)((ulong)uVar28 >> 0x10);
                      auVar66._8_4_ = iVar102 + (uint)(ushort)((ulong)uVar28 >> 0x20);
                      auVar66._12_4_ = iVar104 + (uint)(ushort)((ulong)uVar28 >> 0x30);
                      auVar172 = *(undefined1 (*) [16])(local_2ae0 + 0x10);
                      auVar174 = NEON_scvtf(auVar32,4);
                      uVar15 = (ulong)(uVar27 >> 0x10) & 0xff;
                      auVar175 = NEON_scvtf(auVar66,4);
                      fVar26 = auVar172._0_4_;
                      fVar78 = fVar26 * auVar174._0_4_;
                      fVar77 = auVar172._4_4_;
                      fVar79 = fVar77 * auVar174._4_4_;
                      local_160 = CONCAT44(fVar79,fVar78);
                      local_134 = auVar172._8_4_;
                      local_158 = local_134 * auVar174._8_4_;
                      local_154 = fVar26 * auVar175._0_4_;
                      fStack_150 = fVar77 * auVar175._4_4_;
                      local_14c = local_134 * auVar175._8_4_;
                      uVar81 = *(undefined8 *)(lVar21 + uVar15 * 6);
                      uVar119 = uVar27 >> 0x18;
                      uVar28 = *(undefined8 *)(lVar21 + (ulong)uVar119 * 6);
                      auVar67._0_4_ = iVar101 + (uint)(ushort)uVar81;
                      auVar67._4_4_ = iVar103 + (uint)(ushort)((ulong)uVar81 >> 0x10);
                      auVar67._8_4_ = iVar102 + (uint)(ushort)((ulong)uVar81 >> 0x20);
                      auVar67._12_4_ = iVar104 + (uint)(ushort)((ulong)uVar81 >> 0x30);
                      auVar89._0_4_ = iVar101 + (uint)(ushort)uVar28;
                      auVar89._4_4_ = iVar103 + (uint)(ushort)((ulong)uVar28 >> 0x10);
                      auVar89._8_4_ = iVar102 + (uint)(ushort)((ulong)uVar28 >> 0x20);
                      auVar89._12_4_ = iVar104 + (uint)(ushort)((ulong)uVar28 >> 0x30);
                      auVar172 = NEON_scvtf(auVar67,4);
                      bVar10 = (uint)uVar15 != uVar119;
                      auVar174 = NEON_scvtf(auVar89,4);
                      bVar9 = (uVar27 >> 8 & 0xff) <= uVar119;
                      fVar120 = fVar26 * auVar172._0_4_;
                      fVar48 = fVar77 * auVar172._4_4_;
                      local_148 = CONCAT44(fVar48,fVar120);
                      local_140 = local_134 * auVar172._8_4_;
                      fVar26 = fVar26 * auVar174._0_4_;
                      fVar77 = fVar77 * auVar174._4_4_;
                      local_13c = CONCAT44(fVar77,fVar26);
                      local_134 = local_134 * auVar174._8_4_;
                      uVar27 = 1;
                      if (bVar9 && bVar10) {
                        uVar27 = 2;
                      }
                      local_170 = *local_2ba0;
                      local_168 = local_2ba0[1];
                      if ((char)local_2ba8[6] != '\0') {
                        fVar97 = *(float *)(local_2ba8 + 8);
                        fVar98 = *(float *)((long)local_2ba8 + 0x44);
                        fVar105 = *(float *)(local_2ba8 + 9);
                        auVar172 = *(undefined1 (*) [16])(local_2ba8 + 10);
                        fVar118 = auVar172._0_4_;
                        fVar123 = auVar172._4_4_;
                        local_160 = CONCAT44(fVar123 + fVar79 * fVar98,fVar118 + fVar78 * fVar97);
                        fVar78 = auVar172._8_4_;
                        local_158 = fVar78 + local_158 * fVar105;
                        local_154 = fVar118 + local_154 * fVar97;
                        fStack_150 = fVar123 + fStack_150 * fVar98;
                        local_14c = fVar78 + local_14c * fVar105;
                        local_148 = CONCAT44(fVar123 + fVar48 * fVar98,fVar118 + fVar120 * fVar97);
                        local_140 = fVar78 + local_140 * fVar105;
                        local_13c = CONCAT44(fVar123 + fVar77 * fVar98,fVar118 + fVar26 * fVar97);
                        local_134 = fVar78 + local_134 * fVar105;
                      }
                      fVar120 = 4.2039e-45;
                      if (!bVar9 && bVar10) {
                        fVar120 = 5.60519e-45;
                      }
                      if (uVar27 < 2) {
                        uVar27 = 1;
                      }
                      uVar119 = 0;
                      do {
                        uVar121 = ((uVar119 | iVar80 << 1 | local_2b60) + 1 <<
                                  (ulong)(-((uint)*(byte *)(local_2bb0 + 0x1c) +
                                           *(int *)((long)local_2ba8 + 0x1c)) & 0x1f)) - 1 |
                                  *(uint *)(PTR_DAT_047d1a60 +
                                           (long)*(int *)((long)local_2ba8 + 0x1c) * 4) &
                                  *(uint *)(local_2ba8 + 3);
                        local_178[0] = uVar121;
                        if (((*local_2ad0 == 0) || (local_2ad0[1] == 0)) ||
                           (uVar15 = FUN_02ee0f20(&local_2bc0,iVar80,local_178,&local_170),
                           (uVar15 & 1) != 0)) {
                          plVar8 = local_2a60;
                          plVar7 = local_2ac0;
                          plVar6 = local_2ad0;
                          local_1e0 = *local_2ba8;
                          local_1d8 = (undefined8 *)local_2ba8[1];
                          local_1d0 = local_2ba8[2];
                          local_1c0 = (float *)local_2ba8[4];
                          local_1b8 = 0;
                          local_1b0 = (undefined1)local_2ba8[6];
                          local_1ac = *(undefined4 *)((long)local_2ba8 + 0x34);
                          local_1a0 = local_2ba8[8];
                          lStack_198 = local_2ba8[9];
                          uStack_188 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 10),8);
                          local_190 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 10),0);
                          local_1c8 = CONCAT44(0x20,uVar121);
                          fStack_20c = *(float *)(local_2bb0 + 0x20);
                          uStack_208 = 0;
                          local_200 = 0;
                          local_220 = 4.2039e-45;
                          puStack_218 = &local_160;
                          local_210 = fVar120;
                          local_1a8 = fStack_20c;
                          if ((*(byte *)(local_2a60 + 1) >> 1 & 1) == 0) {
                            local_90 = (float)local_2a60[2];
                            fStack_8c = (float)((ulong)local_2a60[2] >> 0x20);
                            uVar15 = (**(code **)(*local_2bb8 + (ulong)*local_2ac8 * 0x38 + 0x3cd0))
                                               (local_2ac8,&local_220,&local_2ab0,
                                                *(byte *)(local_2a60 + 1),&local_b0);
                            if ((uVar15 & 1) != 0) {
                              local_b8 = 5;
                              uStack_b4 = 0;
                              local_110 = (float *)CONCAT44(local_110._4_4_,local_90);
                              auVar172 = *(undefined1 (*) [16])(local_1c0 + 8);
                              auVar174 = *(undefined1 (*) [16])(local_1c0 + 0xc);
                              fVar48 = (float)local_98;
                              uStack_128 = CONCAT44(auVar174._12_4_ +
                                                    auVar172._12_4_ * fStack_a8 +
                                                    local_1c0[3] * (float)local_b0 +
                                                    local_1c0[7] * local_b0._4_4_,
                                                    auVar174._8_4_ +
                                                    auVar172._8_4_ * fStack_a8 +
                                                    local_1c0[2] * (float)local_b0 +
                                                    local_1c0[6] * local_b0._4_4_);
                              local_130 = CONCAT44(auVar174._4_4_ +
                                                   auVar172._4_4_ * fStack_a8 +
                                                   local_1c0[1] * (float)local_b0 +
                                                   local_1c0[5] * local_b0._4_4_,
                                                   auVar174._0_4_ +
                                                   auVar172._0_4_ * fStack_a8 +
                                                   *local_1c0 * (float)local_b0 +
                                                   local_1c0[4] * local_b0._4_4_);
                              auVar33._0_8_ =
                                   CONCAT44(auVar172._4_4_ * fVar48 +
                                            local_1c0[1] * fStack_a0 + local_1c0[5] * local_9c,
                                            auVar172._0_4_ * fVar48 +
                                            *local_1c0 * fStack_a0 + local_1c0[4] * local_9c);
                              auVar33._8_4_ =
                                   auVar172._8_4_ * fVar48 +
                                   local_1c0[2] * fStack_a0 + local_1c0[6] * local_9c;
                              auVar33._12_4_ =
                                   auVar172._12_4_ * fVar48 +
                                   local_1c0[3] * fStack_a0 + local_1c0[7] * local_9c;
                              uStack_118 = auVar33._8_8_;
                              lVar21 = *plVar7;
                              local_f8 = (undefined4)plVar7[3];
                              local_f0 = CONCAT62((int6)(local_f0 >> 0x10),(short)plVar6[2]) &
                                         0xffffffff;
                              uStack_e8 = *(ulong *)((long)plVar6 + 0x14) >> 0x20;
                              local_f4 = 0xf;
                              if (lVar21 == 0) {
                                local_100 = 0xffffff;
                                local_108 = 0xffffffffffffffff;
                              }
                              else {
                                local_108 = *(undefined8 *)(lVar21 + 0xb0);
                                local_100 = *(undefined4 *)(lVar21 + 0x50);
                              }
                              local_e0 = 0xffffffffffffffff;
                              if (local_1e0 == 0) {
                                uVar17 = 0xffffff;
                              }
                              else {
                                local_e0 = *(undefined8 *)(local_1e0 + 0xb0);
                                uVar17 = *(undefined4 *)(local_1e0 + 0x50);
                              }
                              local_d8 = CONCAT44(local_d8._4_4_,uVar17);
                              local_d0 = (undefined4)local_1c8;
                              local_c8 = (undefined2)local_170;
                              local_c4 = (undefined4)*(ulong *)((ulong)&local_170 | 4);
                              uStack_c0 = *(ulong *)((ulong)&local_170 | 4) >> 0x20;
                              local_cc = (undefined1)plVar6[4];
                              local_120 = auVar33._0_8_;
                              (**(code **)(*plVar8 + 0x28))(plVar8,&local_130);
                            }
                          }
                          else {
                            (**(code **)(*local_2a60 + 0x30))
                                      (local_2a60,*local_2bb8,local_2ad0,local_2ac8,local_2ad0 + 2,
                                       local_2ac0,&local_220,&local_170,&local_1e0,&local_2ab0);
                          }
                          if ((char)local_2a60[3] != '\0') goto LAB_02ede240;
                          local_14c = local_140;
                          local_154 = (float)local_148;
                          fStack_150 = (float)((ulong)local_148 >> 0x20);
                          local_148 = local_13c;
                          local_140 = local_134;
                        }
                        if (uVar27 - 1 == uVar119) goto LAB_02ede240;
                        uVar119 = uVar119 + 1;
                      } while( true );
                    }
                    cVar16 = (char)local_2a60[3];
LAB_02ede284:
                    if (cVar16 != '\0') goto LAB_02ede2cc;
                    uVar81 = NEON_fmax(CONCAT44((float)((ulong)local_2a60[2] >> 0x20) *
                                                (float)((ulong)local_2a70 >> 0x20),
                                                (float)local_2a60[2] * (float)local_2a70),0,4);
                    fVar120 = (float)((ulong)uVar81 >> 0x20);
                    fVar77 = (float)uVar81 * (float)uVar81;
                    fVar120 = fVar120 * fVar120;
                    fVar48 = fVar77;
                    fVar26 = fVar120;
                    puVar19 = local_1a40;
                  }
                  else {
                    *(long *)((long)local_1a40 + 4) = auVar109._8_8_;
                    *puVar19 = auVar109._0_8_;
                    puVar19 = (undefined8 *)((long)puVar19 + (long)iVar49 * 4);
                  }
                }
                local_1a40 = puVar19;
                if (&local_1e40 == local_1a40) goto LAB_02ede2c4;
                auVar110._2_2_ = sStack_2b3e;
                auVar110._0_2_ = local_2b40;
                auVar110._4_2_ = sStack_2b3c;
                auVar110._6_2_ = sStack_2b3a;
                auVar110._8_2_ = sStack_2b38;
                auVar110._10_2_ = sStack_2b36;
                auVar110._12_2_ = sStack_2b34;
                auVar110._14_2_ = sStack_2b32;
                auVar85._2_2_ = sStack_2b2e;
                auVar85._0_2_ = local_2b30;
                auVar85._4_2_ = sStack_2b2c;
                auVar85._6_2_ = sStack_2b2a;
                auVar85._8_2_ = sStack_2b28;
                auVar85._10_2_ = sStack_2b26;
                auVar85._12_2_ = sStack_2b24;
                auVar85._14_2_ = sStack_2b22;
                auVar62._4_4_ = iStack_2b1c;
                auVar62._0_4_ = local_2b20;
                auVar62._8_4_ = iStack_2b18;
                auVar62._12_4_ = iStack_2b14;
              } while( true );
            }
            cVar16 = (char)local_2a60[3];
LAB_02ede310:
            if (cVar16 != '\0') {
              return;
            }
            auVar160._8_8_ = auVar34._0_8_;
            auVar160._0_8_ = auVar34._0_8_;
            pfVar20 = local_230;
          }
        }
        local_230 = pfVar20;
      } while (&local_630 != local_230);
    }
    return;
  }
  local_1640[0]._0_4_ = 0;
  local_e40[0] = -1;
  lVar21 = 0;
  if (*plVar1 != 0) {
    lVar21 = *plVar1 + (long)plVar1;
  }
  local_1e40 = CONCAT44(local_1e40._4_4_,2);
  uVar17 = (undefined4)auVar160._0_8_;
  auVar37._4_4_ = uVar17;
  auVar37._0_4_ = uVar17;
  auVar37._8_4_ = uVar17;
  auVar37._12_4_ = uVar17;
  iVar11 = -1;
  local_640 = 1;
LAB_02ede408:
  while( true ) {
    lVar12 = (long)local_640;
    *(long *)((long)local_1640 + lVar12 * 4 + 8) = auVar37._8_8_;
    *(ulong *)((long)local_1640 + lVar12 * 4) = auVar37._0_8_;
    uVar27 = local_640 + 3;
    uVar119 = uVar27 & 0xfffffffc;
    if ((int)uVar119 < 0x81) {
      auVar34._0_8_ = CONCAT44(uVar27,uVar27) & 0xfffffffcfffffffc;
      uVar15 = auVar37._0_8_ & 0xffffff00ffffff00;
      uVar121 = (uint)auVar37._8_4_ & 0xffffff00;
      uVar122 = (uint)auVar37._12_4_ & 0xffffff00;
      auVar68[0] = (undefined1)auVar34._0_8_;
      auVar68[1] = (byte)(auVar34._0_8_ >> 8) | (byte)(uVar15 >> 8);
      auVar68[2] = (byte)(auVar34._0_8_ >> 0x10) | (byte)(uVar15 >> 0x10);
      auVar68[3] = (byte)(auVar34._0_8_ >> 0x18) | (byte)(uVar15 >> 0x18);
      auVar68[4] = (undefined1)(auVar34._0_8_ >> 0x20);
      auVar68[5] = (byte)(auVar34._0_8_ >> 0x28) | (byte)(uVar15 >> 0x28);
      auVar68[6] = (byte)(auVar34._0_8_ >> 0x30) | (byte)(uVar15 >> 0x30);
      auVar68[7] = (byte)(auVar34._0_8_ >> 0x38) | (byte)(uVar15 >> 0x38);
      auVar68[8] = (undefined1)uVar119;
      bVar25 = (byte)(uVar119 >> 8);
      auVar68[9] = bVar25 | (byte)(uVar121 >> 8);
      bVar38 = (byte)(uVar119 >> 0x10);
      auVar68[10] = bVar38 | (byte)(uVar121 >> 0x10);
      bVar39 = (byte)(uVar119 >> 0x18);
      auVar68[0xb] = bVar39 | (byte)(uVar121 >> 0x18);
      auVar68[0xc] = auVar68[8];
      auVar68[0xd] = bVar25 | (byte)(uVar122 >> 8);
      auVar68[0xe] = bVar38 | (byte)(uVar122 >> 0x10);
      auVar68[0xf] = bVar39 | (byte)(uVar122 >> 0x18);
      if (3 < (int)uVar119) {
        uVar27 = (int)uVar27 >> 2;
        if ((int)uVar27 < 2) {
          uVar27 = 1;
        }
        uVar15 = (ulong)uVar27;
        auVar34._0_8_ = uVar15 & 3;
        if (uVar15 - 1 < 3) {
          auVar90._8_8_ = _UNK_03cab988;
          auVar90._0_8_ = _DAT_03cab980;
          uVar22 = 0;
        }
        else {
          auVar90._8_8_ = _UNK_03cab988;
          auVar90._0_8_ = _DAT_03cab980;
          uVar22 = 0;
          pauVar23 = (undefined1 (*) [16])auStack_1610;
          do {
            auVar176 = pauVar23[-3];
            auVar109 = pauVar23[-2];
            uVar124 = auVar109._0_8_ & 0xffffff00ffffff00;
            uVar122 = auVar109._8_4_ & 0xffffff00;
            uVar133 = auVar109._12_4_ & 0xffffff00;
            uVar106 = auVar176._0_8_ & 0xffffff00ffffff00;
            uVar119 = auVar176._8_4_ & 0xffffff00;
            uVar121 = auVar176._12_4_ & 0xffffff00;
            auVar112[1] = (byte)(uVar106 >> 8) | auVar90[1];
            auVar112[0] = auVar90[0];
            auVar112[2] = (byte)(uVar106 >> 0x10) | auVar90[2];
            auVar112[3] = (byte)(uVar106 >> 0x18) | auVar90[3];
            auVar112[4] = auVar90[4];
            auVar112[5] = (byte)(uVar106 >> 0x28) | auVar90[5];
            auVar112[6] = (byte)(uVar106 >> 0x30) | auVar90[6];
            auVar112[7] = (byte)(uVar106 >> 0x38) | auVar90[7];
            auVar112[8] = auVar90[8];
            auVar112[9] = (byte)(uVar119 >> 8) | auVar90[9];
            auVar112[10] = (byte)(uVar119 >> 0x10) | auVar90[10];
            auVar112[0xb] = (byte)(uVar119 >> 0x18) | auVar90[0xb];
            auVar112[0xc] = auVar90[0xc];
            auVar112[0xd] = (byte)(uVar121 >> 8) | auVar90[0xd];
            auVar112[0xe] = (byte)(uVar121 >> 0x10) | auVar90[0xe];
            auVar112[0xf] = (byte)(uVar121 >> 0x18) | auVar90[0xf];
            auVar109 = NEON_smin(auVar112,auVar68,4);
            iVar43 = auVar90._0_4_;
            iVar99 = iVar43 + 4;
            iVar49 = auVar90._4_4_;
            iVar101 = iVar49 + 4;
            iVar54 = auVar90._8_4_;
            iVar103 = iVar54 + 4;
            iVar80 = auVar90._12_4_;
            iVar102 = iVar80 + 4;
            auVar113[0] = (undefined1)iVar99;
            auVar113[1] = (byte)(uVar124 >> 8) | (byte)((uint)iVar99 >> 8);
            auVar113[2] = (byte)(uVar124 >> 0x10) | (byte)((uint)iVar99 >> 0x10);
            auVar113[3] = (byte)(uVar124 >> 0x18) | (byte)((uint)iVar99 >> 0x18);
            auVar113[4] = (undefined1)iVar101;
            auVar113[5] = (byte)(uVar124 >> 0x28) | (byte)((uint)iVar101 >> 8);
            auVar113[6] = (byte)(uVar124 >> 0x30) | (byte)((uint)iVar101 >> 0x10);
            auVar113[7] = (byte)(uVar124 >> 0x38) | (byte)((uint)iVar101 >> 0x18);
            auVar113[8] = (undefined1)iVar103;
            auVar113[9] = (byte)(uVar122 >> 8) | (byte)((uint)iVar103 >> 8);
            auVar113[10] = (byte)(uVar122 >> 0x10) | (byte)((uint)iVar103 >> 0x10);
            auVar113[0xb] = (byte)(uVar122 >> 0x18) | (byte)((uint)iVar103 >> 0x18);
            auVar113[0xc] = (undefined1)iVar102;
            auVar113[0xd] = (byte)(uVar133 >> 8) | (byte)((uint)iVar102 >> 8);
            auVar113[0xe] = (byte)(uVar133 >> 0x10) | (byte)((uint)iVar102 >> 0x10);
            auVar113[0xf] = (byte)(uVar133 >> 0x18) | (byte)((uint)iVar102 >> 0x18);
            auVar176 = pauVar23[-1];
            auVar109 = NEON_smin(auVar113,auVar109,4);
            iVar99 = iVar43 + 8;
            iVar101 = iVar49 + 8;
            iVar103 = iVar54 + 8;
            iVar102 = iVar80 + 8;
            uVar106 = auVar176._0_8_ & 0xffffff00ffffff00;
            uVar119 = auVar176._8_4_ & 0xffffff00;
            uVar121 = auVar176._12_4_ & 0xffffff00;
            auVar114[0] = (undefined1)iVar99;
            auVar114[1] = (byte)(uVar106 >> 8) | (byte)((uint)iVar99 >> 8);
            auVar114[2] = (byte)(uVar106 >> 0x10) | (byte)((uint)iVar99 >> 0x10);
            auVar114[3] = (byte)(uVar106 >> 0x18) | (byte)((uint)iVar99 >> 0x18);
            auVar114[4] = (undefined1)iVar101;
            auVar114[5] = (byte)(uVar106 >> 0x28) | (byte)((uint)iVar101 >> 8);
            auVar114[6] = (byte)(uVar106 >> 0x30) | (byte)((uint)iVar101 >> 0x10);
            auVar114[7] = (byte)(uVar106 >> 0x38) | (byte)((uint)iVar101 >> 0x18);
            auVar114[8] = (undefined1)iVar103;
            auVar114[9] = (byte)(uVar119 >> 8) | (byte)((uint)iVar103 >> 8);
            auVar114[10] = (byte)(uVar119 >> 0x10) | (byte)((uint)iVar103 >> 0x10);
            auVar114[0xb] = (byte)(uVar119 >> 0x18) | (byte)((uint)iVar103 >> 0x18);
            auVar114[0xc] = (undefined1)iVar102;
            auVar114[0xd] = (byte)(uVar121 >> 8) | (byte)((uint)iVar102 >> 8);
            auVar114[0xe] = (byte)(uVar121 >> 0x10) | (byte)((uint)iVar102 >> 0x10);
            auVar114[0xf] = (byte)(uVar121 >> 0x18) | (byte)((uint)iVar102 >> 0x18);
            auVar109 = NEON_smin(auVar114,auVar109,4);
            auVar176 = *pauVar23;
            iVar99 = iVar43 + 0xc;
            iVar101 = iVar49 + 0xc;
            iVar103 = iVar54 + 0xc;
            iVar102 = iVar80 + 0xc;
            uVar106 = auVar176._0_8_ & 0xffffff00ffffff00;
            uVar119 = auVar176._8_4_ & 0xffffff00;
            uVar121 = auVar176._12_4_ & 0xffffff00;
            auVar115[0] = (undefined1)iVar99;
            auVar115[1] = (byte)(uVar106 >> 8) | (byte)((uint)iVar99 >> 8);
            auVar115[2] = (byte)(uVar106 >> 0x10) | (byte)((uint)iVar99 >> 0x10);
            auVar115[3] = (byte)(uVar106 >> 0x18) | (byte)((uint)iVar99 >> 0x18);
            auVar115[4] = (undefined1)iVar101;
            auVar115[5] = (byte)(uVar106 >> 0x28) | (byte)((uint)iVar101 >> 8);
            auVar115[6] = (byte)(uVar106 >> 0x30) | (byte)((uint)iVar101 >> 0x10);
            auVar115[7] = (byte)(uVar106 >> 0x38) | (byte)((uint)iVar101 >> 0x18);
            auVar115[8] = (undefined1)iVar103;
            auVar115[9] = (byte)(uVar119 >> 8) | (byte)((uint)iVar103 >> 8);
            auVar115[10] = (byte)(uVar119 >> 0x10) | (byte)((uint)iVar103 >> 0x10);
            auVar115[0xb] = (byte)(uVar119 >> 0x18) | (byte)((uint)iVar103 >> 0x18);
            auVar115[0xc] = (undefined1)iVar102;
            auVar115[0xd] = (byte)(uVar121 >> 8) | (byte)((uint)iVar102 >> 8);
            auVar115[0xe] = (byte)(uVar121 >> 0x10) | (byte)((uint)iVar102 >> 0x10);
            auVar115[0xf] = (byte)(uVar121 >> 0x18) | (byte)((uint)iVar102 >> 0x18);
            auVar68 = NEON_smin(auVar115,auVar109,4);
            auVar90._0_4_ = iVar43 + 0x10;
            auVar90._4_4_ = iVar49 + 0x10;
            auVar90._8_4_ = iVar54 + 0x10;
            auVar90._12_4_ = iVar80 + 0x10;
            uVar22 = uVar22 + 4;
            pauVar23 = pauVar23 + 4;
          } while ((uVar15 & 0x7ffffffc) != uVar22);
        }
        if ((uVar27 & 3) != 0) {
          pauVar23 = (undefined1 (*) [16])(local_1640 + uVar22 * 2);
          do {
            auVar176 = *pauVar23;
            uVar15 = auVar176._0_8_ & 0xffffff00ffffff00;
            uVar27 = auVar176._8_4_ & 0xffffff00;
            uVar119 = auVar176._12_4_ & 0xffffff00;
            auVar116[1] = (byte)(uVar15 >> 8) | auVar90[1];
            auVar116[0] = auVar90[0];
            auVar116[2] = (byte)(uVar15 >> 0x10) | auVar90[2];
            auVar116[3] = (byte)(uVar15 >> 0x18) | auVar90[3];
            auVar116[4] = auVar90[4];
            auVar116[5] = (byte)(uVar15 >> 0x28) | auVar90[5];
            auVar116[6] = (byte)(uVar15 >> 0x30) | auVar90[6];
            auVar116[7] = (byte)(uVar15 >> 0x38) | auVar90[7];
            auVar116[8] = auVar90[8];
            auVar116[9] = (byte)(uVar27 >> 8) | auVar90[9];
            auVar116[10] = (byte)(uVar27 >> 0x10) | auVar90[10];
            auVar116[0xb] = (byte)(uVar27 >> 0x18) | auVar90[0xb];
            auVar116[0xc] = auVar90[0xc];
            auVar116[0xd] = (byte)(uVar119 >> 8) | auVar90[0xd];
            auVar116[0xe] = (byte)(uVar119 >> 0x10) | auVar90[0xe];
            auVar116[0xf] = (byte)(uVar119 >> 0x18) | auVar90[0xf];
            auVar91._0_4_ = auVar90._0_4_ + 4;
            auVar91._4_4_ = auVar90._4_4_ + 4;
            auVar91._8_4_ = auVar90._8_4_ + 4;
            auVar91._12_4_ = auVar90._12_4_ + 4;
            auVar68 = NEON_smin(auVar116,auVar68,4);
            auVar34._0_8_ = auVar34._0_8_ - 1;
            pauVar23 = pauVar23 + 1;
            auVar90 = auVar91;
          } while (auVar34._0_8_ != 0);
        }
      }
      uVar27 = NEON_sminv(auVar68,4);
      uVar27 = uVar27 & 0xff;
      if (local_640 <= (int)uVar27) {
        return;
      }
    }
    else {
      uVar27 = local_640 - 1;
    }
    local_640 = local_640 + -1;
    uVar119 = *(uint *)((long)&local_1e40 + (ulong)uVar27 * 4);
    iVar43 = local_e40[uVar27];
    *(undefined4 *)((long)local_1640 + (ulong)uVar27 * 4) =
         *(undefined4 *)((long)local_1640 + (long)local_640 * 4);
    *(undefined4 *)((long)&local_1e40 + (ulong)uVar27 * 4) =
         *(undefined4 *)((long)&local_1e40 + (long)local_640 * 4);
    local_e40[uVar27] = local_e40[local_640];
    if (iVar43 != -1 && iVar11 != iVar43) {
      local_2b60 = iVar43 << 9;
      local_2b58 = (int *)(local_2bb0 + 0x90 +
                          (long)iVar43 * 0x40 + (long)*(int *)(local_2bb0 + 0x90));
      local_2b50 = 0;
      if (*local_2b58 != 0) {
        local_2b50 = (long)local_2b58 + (long)*local_2b58;
      }
      local_2b40 = (short)local_2b58[0xe];
      if (local_2ad8 == '\0') {
        sStack_2b36 = local_2b40 >> 0xf;
        sStack_2b24 = *(short *)((long)local_2b58 + 0x3a);
        sStack_2b26 = sStack_2b24 >> 0xf;
        sVar2 = (short)local_2b58[0xf];
        auVar69._4_4_ = (int)sVar2;
        auVar69._0_4_ = (int)sVar2;
        auVar69._8_4_ = (int)sVar2;
        auVar69._12_4_ = (int)sVar2;
        sStack_2b32 = sStack_2b36;
        sStack_2b22 = sStack_2b26;
      }
      else {
        sStack_2b24 = *(short *)((long)local_2b58 + 0x3a);
        uVar3 = (undefined2)local_2b58[0xf];
        auVar69._2_2_ = uVar3;
        auVar69._0_2_ = uVar3;
        auVar69._4_2_ = uVar3;
        auVar69._6_2_ = uVar3;
        auVar69._8_2_ = uVar3;
        auVar69._10_2_ = uVar3;
        auVar69._12_2_ = uVar3;
        auVar69._14_2_ = uVar3;
        sStack_2b32 = local_2b40;
        sStack_2b22 = sStack_2b24;
      }
      iStack_2b18 = auVar69._8_4_;
      iStack_2b14 = auVar69._12_4_;
      local_2b20 = auVar69._0_4_;
      iStack_2b1c = auVar69._4_4_;
      local_2b10 = (float)local_2b58[0xb];
      local_2b00 = (float)local_2b58[0xc];
      local_2af0 = (float)local_2b58[0xd];
      iVar11 = iVar43;
      sStack_2b3e = sStack_2b32;
      sStack_2b3c = local_2b40;
      sStack_2b3a = sStack_2b32;
      sStack_2b38 = local_2b40;
      sStack_2b36 = sStack_2b32;
      sStack_2b34 = local_2b40;
      local_2b30 = sStack_2b24;
      sStack_2b2e = sStack_2b22;
      sStack_2b2c = sStack_2b24;
      sStack_2b2a = sStack_2b22;
      sStack_2b28 = sStack_2b24;
      sStack_2b26 = sStack_2b22;
      fStack_2b0c = local_2b10;
      fStack_2b08 = local_2b10;
      fStack_2b04 = local_2b10;
      fStack_2afc = local_2b00;
      fStack_2af8 = local_2b00;
      fStack_2af4 = local_2b00;
      fStack_2aec = local_2af0;
      fStack_2ae8 = local_2af0;
      fStack_2ae4 = local_2af0;
    }
    auVar34._0_8_ = (ulong)(uVar119 >> 1);
    if ((uVar119 & 1) != 0) {
      iVar43 = local_2b58[2];
      lVar12 = 0;
      if (iVar43 != 0) {
        lVar12 = (long)iVar43 + (long)(local_2b58 + 2);
      }
      iVar43 = local_2b58[4];
      uVar27 = *(uint *)(lVar12 + auVar34._0_8_ * 4);
      iVar49 = local_2b58[8];
      iVar54 = local_2b58[9];
      iVar80 = local_2b58[10];
      iVar99 = local_2b58[0xb];
      lVar12 = 0;
      if (iVar43 != 0) {
        lVar12 = (long)iVar43 + (long)(local_2b58 + 4);
      }
      uVar81 = *(undefined8 *)(lVar12 + ((ulong)uVar27 & 0xff) * 6);
      uVar28 = *(undefined8 *)(lVar12 + ((ulong)(uVar27 >> 8) & 0xff) * 6);
      auVar35._0_4_ = iVar49 + (uint)(ushort)uVar81;
      auVar35._4_4_ = iVar54 + (uint)(ushort)((ulong)uVar81 >> 0x10);
      auVar35._8_4_ = iVar80 + (uint)(ushort)((ulong)uVar81 >> 0x20);
      auVar35._12_4_ = iVar99 + (uint)(ushort)((ulong)uVar81 >> 0x30);
      auVar73._0_4_ = iVar49 + (uint)(ushort)uVar28;
      auVar73._4_4_ = iVar54 + (uint)(ushort)((ulong)uVar28 >> 0x10);
      auVar73._8_4_ = iVar80 + (uint)(ushort)((ulong)uVar28 >> 0x20);
      auVar73._12_4_ = iVar99 + (uint)(ushort)((ulong)uVar28 >> 0x30);
      auVar109 = NEON_scvtf(auVar35,4);
      auVar176 = *(undefined1 (*) [16])(local_2ae0 + 0x10);
      auVar172 = NEON_scvtf(auVar73,4);
      uVar15 = (ulong)(uVar27 >> 0x10) & 0xff;
      fStack_8c = auVar176._0_4_;
      fVar26 = fStack_8c * auVar109._0_4_;
      fStack_88 = auVar176._4_4_;
      fVar77 = fStack_88 * auVar109._4_4_;
      local_b0 = CONCAT44(fVar77,fVar26);
      local_84 = auVar176._8_4_;
      fStack_a8 = local_84 * auVar109._8_4_;
      fStack_a4 = fStack_8c * auVar172._0_4_;
      fStack_a0 = fStack_88 * auVar172._4_4_;
      local_9c = local_84 * auVar172._8_4_;
      uVar81 = *(undefined8 *)(lVar12 + uVar15 * 6);
      uVar121 = uVar27 >> 0x18;
      uVar28 = *(undefined8 *)(lVar12 + (ulong)uVar121 * 6);
      auVar74._0_4_ = iVar49 + (uint)(ushort)uVar81;
      auVar74._4_4_ = iVar54 + (uint)(ushort)((ulong)uVar81 >> 0x10);
      auVar74._8_4_ = iVar80 + (uint)(ushort)((ulong)uVar81 >> 0x20);
      auVar74._12_4_ = iVar99 + (uint)(ushort)((ulong)uVar81 >> 0x30);
      auVar176 = NEON_scvtf(auVar74,4);
      auVar94._0_4_ = iVar49 + (uint)(ushort)uVar28;
      auVar94._4_4_ = iVar54 + (uint)(ushort)((ulong)uVar28 >> 0x10);
      auVar94._8_4_ = iVar80 + (uint)(ushort)((ulong)uVar28 >> 0x20);
      auVar94._12_4_ = iVar99 + (uint)(ushort)((ulong)uVar28 >> 0x30);
      auVar109 = NEON_scvtf(auVar94,4);
      bVar10 = (uint)uVar15 != uVar121;
      bVar9 = (uVar27 >> 8 & 0xff) <= uVar121;
      fVar120 = fStack_8c * auVar176._0_4_;
      fVar48 = fStack_88 * auVar176._4_4_;
      local_98 = CONCAT44(fVar48,fVar120);
      local_90 = local_84 * auVar176._8_4_;
      fStack_8c = fStack_8c * auVar109._0_4_;
      fStack_88 = fStack_88 * auVar109._4_4_;
      local_84 = local_84 * auVar109._8_4_;
      uVar27 = 1;
      if (bVar9 && bVar10) {
        uVar27 = 2;
      }
      local_160 = *local_2ba0;
      local_158 = (float)local_2ba0[1];
      local_154 = (float)((ulong)local_2ba0[1] >> 0x20);
      if ((char)local_2ba8[6] != '\0') {
        fVar78 = *(float *)(local_2ba8 + 8);
        fVar79 = *(float *)((long)local_2ba8 + 0x44);
        fVar97 = *(float *)(local_2ba8 + 9);
        auVar176 = *(undefined1 (*) [16])(local_2ba8 + 10);
        fVar98 = auVar176._0_4_;
        fVar105 = auVar176._4_4_;
        local_b0 = CONCAT44(fVar105 + fVar77 * fVar79,fVar98 + fVar26 * fVar78);
        fVar26 = auVar176._8_4_;
        fStack_a8 = fVar26 + fStack_a8 * fVar97;
        fStack_a4 = fVar98 + fStack_a4 * fVar78;
        fStack_a0 = fVar105 + fStack_a0 * fVar79;
        local_9c = fVar26 + local_9c * fVar97;
        local_98 = CONCAT44(fVar105 + fVar48 * fVar79,fVar98 + fVar120 * fVar78);
        local_90 = fVar26 + local_90 * fVar97;
        fStack_8c = fVar98 + fStack_8c * fVar78;
        fStack_88 = fVar105 + fStack_88 * fVar79;
        local_84 = fVar26 + local_84 * fVar97;
      }
      uVar17 = 3;
      if (!bVar9 && bVar10) {
        uVar17 = 4;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      uVar121 = 0;
      do {
        uVar122 = ((uVar121 | uVar119 & 0xfffffffe | local_2b60) + 1 <<
                  (ulong)(-((uint)*(byte *)(local_2bb0 + 0x1c) + *(int *)((long)local_2ba8 + 0x1c))
                         & 0x1f)) - 1 |
                  *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)local_2ba8 + 0x1c) * 4) &
                  *(uint *)(local_2ba8 + 3);
        local_170 = CONCAT44(local_170._4_4_,uVar122);
        if (((*local_2ad0 == 0) || (local_2ad0[1] == 0)) ||
           (uVar15 = FUN_02ee0f20(&local_2bc0,auVar34._0_8_,&local_170,&local_160),
           (uVar15 & 1) != 0)) {
          plVar7 = local_2a60;
          plVar6 = local_2ac0;
          plVar1 = local_2ad0;
          local_130 = *local_2ba8;
          uStack_128 = local_2ba8[1];
          local_120 = local_2ba8[2];
          local_110 = (float *)local_2ba8[4];
          local_108 = 0;
          local_100 = CONCAT31((int3)((uint)local_100 >> 8),(char)local_2ba8[6]);
          local_fc = *(undefined4 *)((long)local_2ba8 + 0x34);
          uStack_e8 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 8),8);
          local_f0 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 8),0);
          local_d8 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 10),8);
          local_e0 = SUB168(*(undefined1 (*) [16])(local_2ba8 + 10),0);
          uStack_118 = CONCAT44(0x20,uVar122);
          local_f8 = *(undefined4 *)(local_2bb0 + 0x20);
          local_1c8 = 0;
          local_1c0 = (float *)0x0;
          local_1e0 = CONCAT44(local_1e0._4_4_,3);
          local_1d8 = &local_b0;
          local_1d0 = CONCAT44(local_f8,uVar17);
          if ((*(byte *)(local_2a60 + 1) >> 1 & 1) == 0) {
            local_200 = local_2a60[2];
            uVar15 = (**(code **)(*local_2bb8 + (ulong)*local_2ac8 * 0x38 + 0x3cd0))
                               (local_2ac8,&local_1e0,&local_2ab0,*(byte *)(local_2a60 + 1),
                                &local_220);
            if ((uVar15 & 1) != 0) {
              local_5b8 = 5;
              local_5b4 = 0;
              local_610 = (undefined4)local_200;
              auVar176 = *(undefined1 (*) [16])(local_110 + 8);
              auVar109 = *(undefined1 (*) [16])(local_110 + 0xc);
              fVar120 = (float)uStack_208;
              _fStack_628 = CONCAT44(auVar109._12_4_ +
                                     auVar176._12_4_ * puStack_218._0_4_ +
                                     local_110[3] * local_220 + local_110[7] * fStack_21c,
                                     auVar109._8_4_ +
                                     auVar176._8_4_ * puStack_218._0_4_ +
                                     local_110[2] * local_220 + local_110[6] * fStack_21c);
              _local_630 = CONCAT44(auVar109._4_4_ +
                                    auVar176._4_4_ * puStack_218._0_4_ +
                                    local_110[1] * local_220 + local_110[5] * fStack_21c,
                                    auVar109._0_4_ +
                                    auVar176._0_4_ * puStack_218._0_4_ +
                                    *local_110 * local_220 + local_110[4] * fStack_21c);
              auVar36._0_8_ =
                   CONCAT44(auVar176._4_4_ * fVar120 +
                            local_110[1] * local_210 + local_110[5] * fStack_20c,
                            auVar176._0_4_ * fVar120 +
                            *local_110 * local_210 + local_110[4] * fStack_20c);
              auVar36._8_4_ =
                   auVar176._8_4_ * fVar120 + local_110[2] * local_210 + local_110[6] * fStack_20c;
              auVar36._12_4_ =
                   auVar176._12_4_ * fVar120 + local_110[3] * local_210 + local_110[7] * fStack_20c;
              uStack_618 = auVar36._8_8_;
              lVar12 = *plVar6;
              local_5f8 = (undefined4)plVar6[3];
              local_5f0 = (undefined2)plVar1[2];
              local_5ec = (undefined4)*(ulong *)((long)plVar1 + 0x14);
              uStack_5e8 = *(ulong *)((long)plVar1 + 0x14) >> 0x20;
              local_5f4 = 0xf;
              if (lVar12 == 0) {
                local_600 = 0xffffff;
                local_608 = 0xffffffffffffffff;
              }
              else {
                local_608 = *(undefined8 *)(lVar12 + 0xb0);
                local_600 = *(undefined4 *)(lVar12 + 0x50);
              }
              if (local_130 == 0) {
                local_5d8 = 0xffffff;
                local_5e0 = 0xffffffffffffffff;
              }
              else {
                local_5e0 = *(undefined8 *)(local_130 + 0xb0);
                local_5d8 = *(undefined4 *)(local_130 + 0x50);
              }
              local_5d0 = (undefined4)uStack_118;
              local_5c8 = (undefined2)local_160;
              local_5c4 = (undefined4)*(ulong *)((ulong)&local_160 | 4);
              uStack_5c0 = *(ulong *)((ulong)&local_160 | 4) >> 0x20;
              local_5cc = (undefined1)plVar1[4];
              local_620 = auVar36._0_8_;
              (**(code **)(*plVar7 + 0x28))(plVar7,&local_630);
            }
          }
          else {
            (**(code **)(*local_2a60 + 0x30))
                      (local_2a60,*local_2bb8,local_2ad0,local_2ac8,local_2ad0 + 2,local_2ac0,
                       &local_1e0,&local_160,&local_130,&local_2ab0);
          }
          if ((char)local_2a60[3] != '\0') goto LAB_02edebe8;
          local_9c = local_90;
          fStack_a4 = (float)local_98;
          fStack_a0 = (float)((ulong)local_98 >> 0x20);
          local_90 = local_84;
          local_98 = CONCAT44(fStack_88,fStack_8c);
        }
        if (uVar27 - 1 == uVar121) goto LAB_02edebe8;
        uVar121 = uVar121 + 1;
      } while( true );
    }
    if (iVar43 == -1) {
      pfVar13 = (float *)(lVar21 + auVar34._0_8_ * 0x80);
      fVar152 = pfVar13[0x14];
      fVar153 = pfVar13[0x15];
      fVar158 = pfVar13[0x16];
      fVar163 = pfVar13[0x17];
      auVar72 = *(undefined1 (*) [16])(pfVar13 + 0x18);
      fVar78 = *pfVar13;
      fVar79 = pfVar13[1];
      fVar97 = pfVar13[2];
      fVar98 = pfVar13[3];
      fVar120 = pfVar13[4];
      fVar48 = pfVar13[5];
      fVar26 = pfVar13[6];
      fVar77 = pfVar13[7];
      fVar105 = pfVar13[8];
      fVar118 = pfVar13[9];
      fVar123 = pfVar13[10];
      fVar157 = pfVar13[0xb];
      fVar142 = pfVar13[0xc];
      fVar143 = pfVar13[0xd];
      fVar144 = pfVar13[0xe];
      fVar151 = pfVar13[0xf];
      bVar9 = *(char *)(pfVar13 + 0x1c) != '\0';
      fVar131 = pfVar13[0x10];
      fVar132 = pfVar13[0x11];
      fVar134 = pfVar13[0x12];
      fVar141 = pfVar13[0x13];
    }
    else {
      puVar19 = (undefined8 *)(local_2b50 + auVar34._0_8_ * 0x1c);
      uVar81 = *puVar19;
      uVar135 = puVar19[1];
      uVar28 = *(undefined8 *)((long)puVar19 + 4);
      uVar145 = *(undefined8 *)((long)puVar19 + 0xc);
      uVar159 = puVar19[2];
      bVar25 = (byte)((ulong)uVar81 >> 8);
      bVar38 = (byte)((ulong)uVar28 >> 8);
      bVar39 = (byte)((ulong)uVar135 >> 8);
      bVar40 = (byte)((ulong)uVar145 >> 8);
      auVar117._0_4_ =
           CONCAT22(sStack_2b3e,local_2b40) + (CONCAT12(bVar25,(ushort)(byte)uVar81) & 0xffff);
      auVar117._4_4_ = CONCAT22(sStack_2b3a,sStack_2b3c) + (uint)bVar25;
      auVar117._8_4_ = CONCAT22(sStack_2b36,sStack_2b38) + (uint)(byte)((ulong)uVar81 >> 0x10);
      auVar117._12_4_ = CONCAT22(sStack_2b32,sStack_2b34) + (uint)(byte)((ulong)uVar81 >> 0x18);
      auVar70._0_4_ =
           CONCAT22(sStack_2b3e,local_2b40) + (CONCAT12(bVar38,(ushort)(byte)uVar28) & 0xffff);
      auVar70._4_4_ = CONCAT22(sStack_2b3a,sStack_2b3c) + (uint)bVar38;
      auVar70._8_4_ = CONCAT22(sStack_2b36,sStack_2b38) + (uint)(byte)((ulong)uVar28 >> 0x10);
      auVar70._12_4_ = CONCAT22(sStack_2b32,sStack_2b34) + (uint)(byte)((ulong)uVar28 >> 0x18);
      bVar25 = (byte)((ulong)uVar159 >> 8);
      auVar128._0_4_ =
           CONCAT22(sStack_2b2e,local_2b30) + (CONCAT12(bVar39,(ushort)(byte)uVar135) & 0xffff);
      auVar128._4_4_ = CONCAT22(sStack_2b2a,sStack_2b2c) + (uint)bVar39;
      auVar128._8_4_ = CONCAT22(sStack_2b26,sStack_2b28) + (uint)(byte)((ulong)uVar135 >> 0x10);
      auVar128._12_4_ = CONCAT22(sStack_2b22,sStack_2b24) + (uint)(byte)((ulong)uVar135 >> 0x18);
      auVar92._0_4_ =
           CONCAT22(sStack_2b2e,local_2b30) + (CONCAT12(bVar40,(ushort)(byte)uVar145) & 0xffff);
      auVar92._4_4_ = CONCAT22(sStack_2b2a,sStack_2b2c) + (uint)bVar40;
      auVar92._8_4_ = CONCAT22(sStack_2b26,sStack_2b28) + (uint)(byte)((ulong)uVar145 >> 0x10);
      auVar92._12_4_ = CONCAT22(sStack_2b22,sStack_2b24) + (uint)(byte)((ulong)uVar145 >> 0x18);
      auVar109 = NEON_scvtf(auVar117,4);
      auVar176 = NEON_scvtf(auVar70,4);
      auVar174 = NEON_scvtf(auVar92,4);
      auVar93._0_4_ = local_2b20 + (CONCAT12(bVar25,(ushort)(byte)uVar159) & 0xffff);
      auVar93._4_4_ = iStack_2b1c + (uint)bVar25;
      auVar93._8_4_ = iStack_2b18 + (uint)(byte)((ulong)uVar159 >> 0x10);
      auVar93._12_4_ = iStack_2b14 + (uint)(byte)((ulong)uVar159 >> 0x18);
      auVar172 = NEON_scvtf(auVar128,4);
      auVar175 = NEON_scvtf(auVar93,4);
      fVar78 = local_2b10 * auVar109._0_4_;
      fVar79 = fStack_2b0c * auVar109._4_4_;
      fVar97 = fStack_2b08 * auVar109._8_4_;
      fVar98 = fStack_2b04 * auVar109._12_4_;
      fVar120 = local_2b10 * auVar176._0_4_;
      fVar48 = fStack_2b0c * auVar176._4_4_;
      fVar26 = fStack_2b08 * auVar176._8_4_;
      fVar77 = fStack_2b04 * auVar176._12_4_;
      fVar105 = local_2b00 * auVar172._0_4_;
      fVar118 = fStack_2afc * auVar172._4_4_;
      fVar123 = fStack_2af8 * auVar172._8_4_;
      fVar157 = fStack_2af4 * auVar172._12_4_;
      fVar142 = local_2b00 * auVar174._0_4_;
      fVar143 = fStack_2afc * auVar174._4_4_;
      fVar144 = fStack_2af8 * auVar174._8_4_;
      fVar151 = fStack_2af4 * auVar174._12_4_;
      uVar81 = *(undefined8 *)((long)puVar19 + 0x14);
      fVar131 = local_2af0 * auVar175._0_4_;
      fVar132 = fStack_2aec * auVar175._4_4_;
      fVar134 = fStack_2ae8 * auVar175._8_4_;
      fVar141 = fStack_2ae4 * auVar175._12_4_;
      bVar25 = (byte)((ulong)uVar81 >> 8);
      auVar71._0_4_ = local_2b20 + (CONCAT12(bVar25,(ushort)(byte)uVar81) & 0xffff);
      auVar71._4_4_ = iStack_2b1c + (uint)bVar25;
      auVar71._8_4_ = iStack_2b18 + (uint)(byte)((ulong)uVar81 >> 0x10);
      auVar71._12_4_ = iStack_2b14 + (uint)(byte)((ulong)uVar81 >> 0x18);
      auVar176 = NEON_scvtf(auVar71,4);
      fVar152 = local_2af0 * auVar176._0_4_;
      fVar153 = fStack_2aec * auVar176._4_4_;
      fVar158 = fStack_2ae8 * auVar176._8_4_;
      fVar163 = fStack_2ae4 * auVar176._12_4_;
      uVar81 = puVar19[3];
      uVar24 = (undefined1)((ulong)uVar81 >> 8);
      auVar72._6_2_ = 0;
      auVar72._0_6_ =
           (uint6)CONCAT14(uVar24,(uint)CONCAT12(uVar24,(ushort)(byte)uVar81)) & 0xffff0000ffff;
      auVar72[8] = (char)((ulong)uVar81 >> 0x10);
      auVar72._9_3_ = 0;
      auVar72[0xc] = (char)((ulong)uVar81 >> 0x18);
      auVar72._13_3_ = 0;
      bVar9 = *(byte *)((long)puVar19 + 0x1b) < *(byte *)((long)puVar19 + 0x1a);
    }
    auVar162._0_4_ = fVar100 - fVar120;
    auVar162._4_4_ = fVar100 - fVar48;
    auVar162._8_4_ = fVar100 - fVar26;
    auVar162._12_4_ = fVar100 - fVar77;
    auVar150._0_4_ = fVar42 - fVar142;
    auVar150._4_4_ = fVar42 - fVar143;
    auVar150._8_4_ = fVar42 - fVar144;
    auVar150._12_4_ = fVar42 - fVar151;
    iVar49 = -(uint)(fVar78 <= fVar120);
    iVar54 = -(uint)(fVar79 <= fVar48);
    iVar80 = -(uint)(fVar97 <= fVar26);
    iVar99 = -(uint)(fVar98 <= fVar77);
    auVar156._0_4_ = fVar58 - fVar152;
    auVar156._4_4_ = fVar58 - fVar153;
    auVar156._8_4_ = fVar58 - fVar158;
    auVar156._12_4_ = fVar58 - fVar163;
    auVar129._0_4_ = fVar75 - fVar105;
    auVar129._4_4_ = fVar75 - fVar118;
    auVar129._8_4_ = fVar75 - fVar123;
    auVar129._12_4_ = fVar75 - fVar157;
    auVar140._0_4_ = fVar76 - fVar131;
    auVar140._4_4_ = fVar76 - fVar132;
    auVar140._8_4_ = fVar76 - fVar134;
    auVar140._12_4_ = fVar76 - fVar141;
    auVar109 = NEON_smax(auVar162,ZEXT816(0),4);
    auVar176 = NEON_smax(auVar150,ZEXT816(0),4);
    auVar4._4_4_ = fVar59 - fVar79;
    auVar4._0_4_ = fVar59 - fVar78;
    auVar4._8_4_ = fVar59 - fVar97;
    auVar4._12_4_ = fVar59 - fVar98;
    auVar172 = NEON_smin(auVar109,auVar4,4);
    auVar176 = NEON_smin(auVar176,auVar129,4);
    auVar109 = NEON_smax(auVar156,ZEXT816(0),4);
    auVar109 = NEON_smin(auVar109,auVar140,4);
    auVar130._0_4_ =
         auVar172._0_4_ * auVar172._0_4_ + auVar176._0_4_ * auVar176._0_4_ +
         auVar109._0_4_ * auVar109._0_4_;
    auVar130._4_4_ =
         auVar172._4_4_ * auVar172._4_4_ + auVar176._4_4_ * auVar176._4_4_ +
         auVar109._4_4_ * auVar109._4_4_;
    auVar130._8_4_ =
         auVar172._8_4_ * auVar172._8_4_ + auVar176._8_4_ * auVar176._8_4_ +
         auVar109._8_4_ * auVar109._8_4_;
    auVar130._12_4_ =
         auVar172._12_4_ * auVar172._12_4_ + auVar176._12_4_ * auVar176._12_4_ +
         auVar109._12_4_ * auVar109._12_4_;
    iVar101 = -(uint)(auVar130._0_4_ <= auVar37._0_4_);
    iVar103 = -(uint)(auVar130._4_4_ <= auVar37._4_4_);
    iVar102 = -(uint)(auVar130._8_4_ <= auVar37._8_4_);
    iVar104 = -(uint)(auVar130._12_4_ <= auVar37._12_4_);
    bVar25 = (byte)iVar101 & (byte)iVar49;
    bVar38 = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar49 >> 8);
    bVar39 = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
    bVar40 = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar49 >> 0x18);
    bVar41 = (byte)iVar103 & (byte)iVar54;
    bVar44 = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar54 >> 8);
    bVar45 = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
    bVar46 = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
    bVar47 = (byte)iVar102 & (byte)iVar80;
    bVar50 = (byte)((uint)iVar102 >> 8) & (byte)((uint)iVar80 >> 8);
    bVar51 = (byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
    bVar52 = (byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar80 >> 0x18);
    bVar53 = (byte)iVar104 & (byte)iVar99;
    bVar55 = (byte)((uint)iVar104 >> 8) & (byte)((uint)iVar99 >> 8);
    bVar56 = (byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar99 >> 0x10);
    bVar57 = (byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar99 >> 0x18);
    if (CONCAT13(bVar46 | bVar40 | bVar52 | bVar57,
                 CONCAT12(bVar45 | bVar39 | bVar51 | bVar56,
                          CONCAT11(bVar44 | bVar38 | bVar50 | bVar55,
                                   bVar41 | bVar25 | bVar47 | bVar53))) == 0) break;
    iVar49 = CONCAT13(bVar40 & bStack_2d0d,
                      CONCAT12(bVar39 & bStack_2d0e,
                               CONCAT11(bVar38 & bStack_2d0f,bVar25 & local_2d10)));
    auVar82._0_8_ =
         CONCAT17(bVar46 & bStack_2d09,
                  CONCAT16(bVar45 & bStack_2d0a,
                           CONCAT15(bVar44 & bStack_2d0b,CONCAT14(bVar41 & bStack_2d0c,iVar49))));
    auVar82[8] = bVar47 & bStack_2d08;
    auVar82[9] = bVar50 & bStack_2d07;
    auVar82[10] = bVar51 & bStack_2d06;
    auVar82[0xb] = bVar52 & bStack_2d05;
    auVar95[0xc] = bVar53 & bStack_2d04;
    auVar95._0_12_ = auVar82;
    auVar95[0xd] = bVar55 & bStack_2d03;
    auVar95[0xe] = bVar56 & bStack_2d02;
    auVar95[0xf] = bVar57 & bStack_2d01;
    auVar34._0_8_ =
         (ulong)(uint)(iVar49 + (int)((ulong)auVar82._0_8_ >> 0x20) + auVar82._8_4_ + auVar95._12_4_
                      );
    iVar49 = *(int *)(PTR_DAT_047d1aa8 + auVar34._0_8_ * 4);
    auVar109 = a64_TBL(ZEXT816(0),auVar72,
                       *(undefined1 (*) [16])(PTR_DAT_047d1aa0 + auVar34._0_8_ * 0x10));
    auVar176 = a64_TBL(ZEXT816(0),auVar130,
                       *(undefined1 (*) [16])(PTR_DAT_047d1aa0 + auVar34._0_8_ * 0x10));
    auVar96._4_4_ = iVar43;
    auVar96._0_4_ = iVar43;
    auVar96._8_4_ = iVar43;
    auVar96._12_4_ = iVar43;
    if (bVar9) {
      if (iVar43 == -1) {
        uVar27 = 0;
        uVar119 = 0;
        uVar121 = 0;
        uVar122 = 0;
        auVar96 = auVar109;
      }
      else {
        uVar27 = auVar109._0_4_ << 1 | 1;
        uVar119 = auVar109._4_4_ << 1 | 1;
        uVar121 = auVar109._8_4_ << 1 | 1;
        uVar122 = auVar109._12_4_ << 1 | 1;
      }
    }
    else {
      uVar27 = auVar109._0_4_ << 1;
      uVar119 = auVar109._4_4_ << 1;
      uVar121 = auVar109._8_4_ << 1;
      uVar122 = auVar109._12_4_ << 1;
    }
    lVar12 = (long)local_640 * 4;
    *(uint *)((long)&uStack_1e38 + lVar12) = uVar121;
    *(uint *)((long)&uStack_1e38 + lVar12 + 4) = uVar122;
    *(uint *)((long)&local_1e40 + lVar12) = uVar27;
    *(uint *)((long)&local_1e40 + lVar12 + 4) = uVar119;
    lVar12 = (long)local_640;
    *(long *)((long)local_1640 + lVar12 * 4 + 8) = auVar176._8_8_;
    *(long *)((long)local_1640 + lVar12 * 4) = auVar176._0_8_;
    lVar12 = (long)local_640;
    *(long *)((long)auStack_e38 + lVar12 * 4) = auVar96._8_8_;
    *(long *)(local_e40 + lVar12) = auVar96._0_8_;
    local_640 = local_640 + iVar49;
    if (local_640 == 0) {
      return;
    }
  }
  goto LAB_02eded00;
LAB_02ede240:
  iVar54 = iVar54 + 1;
  cVar16 = (char)local_2a60[3];
  if ((iVar49 <= iVar54) || (cVar16 != '\0')) goto LAB_02ede284;
  goto LAB_02eddce4;
LAB_02ede2c4:
  auVar34._4_4_ = fVar77;
  auVar34._0_4_ = fVar77;
  auVar34._8_8_ = 0;
LAB_02ede2cc:
  iVar43 = iVar43 + 1;
  cVar16 = (char)local_2a60[3];
  if ((iVar11 <= iVar43) || (cVar16 != '\0')) goto LAB_02ede310;
  goto LAB_02edda58;
LAB_02edebe8:
  uVar81 = NEON_fmax(CONCAT44((float)((ulong)local_2a60[2] >> 0x20) *
                              (float)((ulong)local_2a70 >> 0x20),
                              (float)local_2a60[2] * (float)local_2a70),0,4);
  fVar120 = (float)((ulong)uVar81 >> 0x20);
  auVar37._0_8_ = CONCAT44(fVar120 * fVar120,(float)uVar81 * (float)uVar81);
  auVar37._8_8_ = auVar37._0_8_;
LAB_02eded00:
  if (local_640 == 0) {
    return;
  }
  goto LAB_02ede408;
}


