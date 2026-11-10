/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00826144; name: FUN_00826144
 */


/* WARNING: Removing unreachable block (ram,0x00826668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00826144(long param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5,
                long param_6,uint *param_7)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined *puVar23;
  undefined1 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  byte bVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  byte bVar34;
  uint uVar35;
  ulong uVar36;
  uint *puVar37;
  ulong uVar38;
  byte *pbVar39;
  float *pfVar40;
  uint uVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  undefined *puVar45;
  long lVar46;
  float fVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar58;
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar52 [16];
  float fVar60;
  float fVar64;
  float fVar65;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar66;
  undefined8 uVar67;
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  uint uVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar77;
  float fVar79;
  int iVar80;
  float fVar81;
  int iVar82;
  undefined1 auVar78 [16];
  int iVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  float fVar99;
  float fVar100;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar104 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar113 [16];
  float fVar119;
  undefined1 auVar118 [16];
  float fVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  undefined1 auVar126 [16];
  undefined4 uVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar135;
  float local_8c0;
  float fStack_8bc;
  float local_870;
  float fStack_86c;
  float fStack_868;
  float local_860;
  float fStack_85c;
  float fStack_858;
  float local_800;
  float fStack_7fc;
  undefined8 local_7a0;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long local_730;
  uint *puStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float local_6b0 [2];
  undefined8 uStack_6a8;
  undefined1 local_4b0 [16];
  undefined8 local_4a0;
  undefined8 uStack_498;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long local_88;
  undefined1 auStack_80 [8];
  long local_78;
  uint local_70;
  
  local_88 = param_3[0xe];
  local_70 = (uint)(*(int *)(local_88 + 0x98) != 0);
  if (*(int *)(local_88 + 0x98) != 0) {
    FUN_031d39b4(auStack_80);
  }
  lVar28 = param_5[5];
  lVar46 = param_4[5];
  *param_7 = 0;
  *(undefined1 *)((long)param_7 + 0x92) = 0;
  *(undefined2 *)((long)param_7 + 0x95) = 0;
  puVar23 = PTR_DAT_047d19f0;
  lVar42 = *param_4;
  lVar44 = *param_5;
  iVar77 = *(int *)(lVar28 + 0x40);
  puVar43 = (undefined8 *)0x0;
  if (iVar77 != 0) {
    puVar43 = (undefined8 *)((long)iVar77 + lVar28 + 0x40);
  }
  auVar52 = *(undefined1 (*) [16])(param_3 + 4);
  auVar97 = *(undefined1 (*) [16])(param_3 + 6);
  auVar104 = NEON_ext(auVar97,auVar97,8,1);
  auVar94 = NEON_ext(auVar52,auVar52,8,1);
  fVar103 = auVar94._0_4_;
  fVar108 = auVar104._0_4_;
  auVar94 = *(undefined1 (*) [16])(param_3 + 8);
  auVar104 = *(undefined1 (*) [16])(param_3 + 10);
  auVar95 = NEON_ext(auVar94,auVar94,8,1);
  fVar135 = auVar94._4_4_;
  fVar47 = auVar52._0_4_;
  fVar109 = auVar97._0_4_;
  fVar106 = auVar52._4_4_;
  fVar81 = auVar97._4_4_;
  fVar110 = auVar104._0_4_;
  fVar49 = (float)*puVar43 - fVar110;
  fVar114 = auVar104._4_4_;
  fVar58 = (float)((ulong)*puVar43 >> 0x20) - fVar114;
  fVar116 = auVar104._8_4_;
  fVar61 = *(float *)(puVar43 + 1) - fVar116;
  fVar119 = auVar94._0_4_;
  fVar120 = auVar95._4_4_;
  fVar107 = auVar95._0_4_;
  fVar84 = fVar103 * fVar61 + fVar47 * fVar49 + fVar106 * fVar58;
  fVar90 = fVar108 * fVar61 + fVar109 * fVar49 + fVar81 * fVar58;
  fVar91 = fVar107 * fVar61 + fVar119 * fVar49 + fVar135 * fVar58;
  fVar92 = fVar120 * fVar61 + fVar135 * fVar49 + fVar120 * fVar58;
  fVar49 = (float)*(undefined8 *)((long)puVar43 + 0xc) - fVar110;
  fVar58 = (float)((ulong)*(undefined8 *)((long)puVar43 + 0xc) >> 0x20) - fVar114;
  fVar61 = *(float *)((long)puVar43 + 0x14) - fVar116;
  fVar93 = fVar103 * fVar61 + fVar47 * fVar49 + fVar106 * fVar58;
  fVar99 = fVar108 * fVar61 + fVar109 * fVar49 + fVar81 * fVar58;
  fVar100 = fVar107 * fVar61 + fVar119 * fVar49 + fVar135 * fVar58;
  fVar101 = fVar120 * fVar61 + fVar135 * fVar49 + fVar120 * fVar58;
  fVar49 = (float)puVar43[3] - fVar110;
  fVar61 = (float)((ulong)puVar43[3] >> 0x20) - fVar114;
  fVar62 = *(float *)(puVar43 + 4) - fVar116;
  fVar102 = fVar93 - fVar84;
  fVar105 = fVar99 - fVar90;
  auVar95._0_8_ = CONCAT44(fVar105,fVar102);
  auVar95._8_4_ = fVar100 - fVar91;
  auVar95._12_4_ = fVar101 - fVar92;
  fVar58 = fVar103 * fVar62 + fVar47 * fVar49 + fVar106 * fVar61;
  fVar59 = fVar108 * fVar62 + fVar109 * fVar49 + fVar81 * fVar61;
  fVar63 = fVar107 * fVar62 + fVar119 * fVar49 + fVar135 * fVar61;
  fVar61 = fVar120 * fVar62 + fVar135 * fVar49 + fVar120 * fVar61;
  fVar49 = *(float *)((long)puVar43 + 0x2c);
  fVar62 = fVar58 - fVar93;
  fVar79 = fVar59 - fVar99;
  auVar104._0_8_ = CONCAT44(fVar79,fVar62);
  auVar104._8_4_ = fVar63 - fVar100;
  auVar104._12_4_ = fVar61 - fVar101;
  auVar52 = NEON_ext(auVar95,auVar95,4,1);
  auVar94 = NEON_ext(auVar104,auVar104,4,1);
  auVar97._0_4_ = fVar102 * auVar94._0_4_ - fVar62 * auVar52._0_4_;
  auVar97._4_4_ = fVar105 * auVar94._4_4_ - fVar79 * auVar52._4_4_;
  auVar97._8_4_ = auVar95._8_4_ * fVar62 - auVar104._8_4_ * fVar102;
  auVar97._12_4_ = auVar95._12_4_ * fVar79 - auVar104._12_4_ * fVar105;
  auVar52 = NEON_ext(auVar97,auVar97,4,1);
  fVar62 = auVar52._0_4_;
  fStack_9c = auVar52._4_4_;
  uVar67 = *(undefined8 *)((long)puVar43 + 0x24);
  fStack_98 = fVar62 * fVar62 + fStack_9c * fStack_9c + auVar97._0_4_ * auVar97._0_4_;
  if (fStack_98 == 0.0) {
    local_a0 = 0.0;
    fStack_9c = 0.0;
    fStack_98 = 0.0;
  }
  else {
    fStack_98 = SQRT(fStack_98);
    local_a0 = fVar62 / fStack_98;
    fStack_9c = fStack_9c /
                SQRT(fVar62 * fVar62 + fStack_9c * fStack_9c + auVar97._0_4_ * auVar97._0_4_);
    fStack_98 = auVar97._0_4_ / fStack_98;
  }
  fStack_94 = -(fVar84 * local_a0 + fVar90 * fStack_9c + fVar91 * fStack_98);
  uVar122 = *(undefined8 *)(param_4[1] + 0x60);
  uVar7 = *(undefined8 *)(param_4[1] + 0x68);
  uVar8 = *(undefined8 *)(param_5[1] + 0x60);
  uVar9 = *(undefined8 *)(param_5[1] + 0x68);
  pauVar29 = (undefined1 (*) [16])param_4[6];
  auVar75 = *pauVar29;
  auVar96 = pauVar29[1];
  auVar5 = pauVar29[2];
  uVar51 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
  fVar62 = (float)param_3[3] + (float)param_3[2];
  auVar94 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x50);
  if (*(byte *)(param_6 + 9) < 3) {
    *(undefined1 *)(param_6 + 9) = 10;
    *(undefined8 *)(param_6 + 0x30) = 0;
    *(undefined8 *)(param_6 + 0x38) = 0;
    uVar41 = 0xffffffff;
    *(undefined2 *)(param_6 + 0x36) = 0x5f7f;
    *(undefined4 *)(param_6 + 0x18) = 0xa7f7f7f;
    *(undefined4 *)(param_6 + 0x1c) = 0xaaa00;
    *(undefined8 *)(param_6 + 0xd0) = 0;
    *(undefined8 *)(param_6 + 0xd8) = 0;
    *(undefined8 *)(param_6 + 0xc0) = 0;
    *(undefined8 *)(param_6 + 200) = 0;
    *(undefined8 *)(param_6 + 0xb0) = 0;
    *(undefined8 *)(param_6 + 0xb8) = 0;
    *(undefined8 *)(param_6 + 0xa0) = 0;
    *(undefined8 *)(param_6 + 0xa8) = 0;
    *(undefined8 *)(param_6 + 0x90) = 0;
    *(undefined8 *)(param_6 + 0x98) = 0;
    *(undefined1 *)(param_6 + 0x97) = 0xff;
    *(undefined8 *)(param_6 + 0x80) = 0;
    *(undefined8 *)(param_6 + 0x88) = 0;
    *(undefined8 *)(param_6 + 0x70) = 0;
    *(undefined8 *)(param_6 + 0x78) = 0;
    *(undefined8 *)(param_6 + 0x60) = 0;
    *(undefined8 *)(param_6 + 0x68) = 0;
    *(undefined8 *)(param_6 + 0x50) = 0;
    *(undefined8 *)(param_6 + 0x58) = 0;
    *(undefined8 *)(param_6 + 0x40) = 0;
    *(undefined8 *)(param_6 + 0x48) = 0;
    *(undefined8 *)(param_6 + 0x20) = 0;
    *(undefined8 *)(param_6 + 0x28) = 0;
    *(undefined1 *)(param_6 + 0x2a) = 0xff;
LAB_00826458:
    puVar45 = PTR_DAT_047d19b0;
    auVar129._0_4_ = -local_a0;
    auVar129._4_4_ = -fStack_9c;
    auVar129._8_4_ = -fStack_98;
    auVar129._12_4_ = -fStack_94;
    uStack_6a8 = auVar129._8_8_;
    local_6b0[0] = auVar129._0_4_;
    local_6b0[1] = auVar129._4_4_;
    (**(code **)(*(long *)puVar23 + (ulong)*(byte *)(lVar46 + 0x18) * 0x200 + 0x68))
              (lVar46,&local_a0,&local_6f0);
    (**(code **)(*(long *)puVar23 + (ulong)*(byte *)(lVar46 + 0x18) * 0x200 + 0x68))
              (lVar46,local_6b0,&local_730);
    fVar50 = (float)local_730;
    auVar126._0_4_ = fVar50 * local_a0;
    fVar60 = (float)((ulong)local_730 >> 0x20);
    auVar126._4_4_ = fVar60 * fStack_9c;
    fVar64 = SUB84(puStack_728,0);
    auVar126._8_4_ = fVar64 * fStack_98;
    fVar65 = (float)((ulong)puStack_728 >> 0x20);
    auVar126._12_4_ = fVar65 * fStack_94;
    auVar129 = NEON_ext(auVar126,auVar126,8,1);
    fVar102 = auVar129._0_4_ + fStack_94;
    auVar131._0_4_ = local_a0 * local_6f0;
    auVar131._4_4_ = fStack_9c * fStack_6ec;
    auVar131._8_4_ = fStack_98 * fStack_6e8;
    auVar131._12_4_ = fStack_94 * fStack_6e4;
    auVar129 = NEON_ext(auVar131,auVar131,8,1);
    fVar79 = auVar126._0_4_ + auVar126._4_4_ + fVar102;
    fVar102 = auVar126._0_4_ + auVar126._4_4_ + fVar102;
    local_7a0 = CONCAT44(fVar102,fVar79);
    fVar105 = auVar129._0_4_ + fStack_94;
    fVar85 = auVar131._0_4_ + auVar131._4_4_ + fVar105 +
             fVar79 * (float)*(undefined8 *)(puVar45 + 0x70);
    if ((fVar79 <= fVar62) && (0.0 <= fVar85)) {
      *(undefined2 *)(param_6 + 0xc) = 0;
      pfVar40 = (float *)param_4[6];
      uVar121 = NEON_fmin(local_7a0,auVar94._0_8_,4);
      fVar105 = *pfVar40;
      fVar85 = pfVar40[1];
      fVar127 = pfVar40[2];
      fVar10 = pfVar40[3];
      fVar11 = pfVar40[4];
      fVar12 = pfVar40[5];
      fVar13 = pfVar40[6];
      fVar14 = pfVar40[7];
      fVar111 = fVar79 - (float)param_3[1];
      fVar112 = fVar50 - local_a0 * fVar111;
      fVar115 = fVar60 - fStack_9c * (fVar102 - (float)((ulong)param_3[1] >> 0x20));
      fVar117 = fVar64 - fStack_98 * fVar111;
      fVar102 = pfVar40[8];
      fVar111 = pfVar40[9];
      fVar15 = pfVar40[10];
      fVar16 = pfVar40[0xb];
      auVar87._0_8_ =
           CONCAT44(pfVar40[0xd] +
                    pfVar40[0x11] + fVar111 * fVar117 + fVar85 * fVar112 + fVar12 * fVar115,
                    pfVar40[0xc] +
                    pfVar40[0x10] + fVar102 * fVar117 + fVar105 * fVar112 + fVar11 * fVar115);
      auVar87._8_4_ =
           pfVar40[0xe] + pfVar40[0x12] + fVar15 * fVar117 + fVar127 * fVar112 + fVar13 * fVar115;
      fVar112 = (0.001 - (float)uVar121) + (float)*param_3;
      fVar115 = (0.001 - (float)((ulong)uVar121 >> 0x20)) + (float)((ulong)*param_3 >> 0x20);
      auVar87._12_4_ = fVar79;
      *(long *)(param_7 + 0x22) = auVar87._8_8_;
      *(undefined8 *)(param_7 + 0x20) = auVar87._0_8_;
      auVar94._0_8_ = CONCAT44(fVar60 - fStack_9c * fVar115,fVar50 - local_a0 * fVar112);
      auVar94._8_4_ = fVar64 - fStack_98 * fVar112;
      auVar94._12_4_ = fVar65 - fStack_94 * fVar115;
      auVar68._0_8_ =
           CONCAT44(fVar111 * fStack_98 + fVar85 * local_a0 + fVar12 * fStack_9c,
                    fVar102 * fStack_98 + fVar105 * local_a0 + fVar11 * fStack_9c);
      auVar68._8_4_ = fVar15 * fStack_98 + fVar127 * local_a0 + fVar13 * fStack_9c;
      auVar70._12_4_ = fVar16 * fStack_98 + fVar10 * local_a0 + fVar14 * fStack_9c;
      auVar70._0_12_ = auVar68;
      uStack_498 = auVar94._8_8_;
      local_4a0 = auVar94._0_8_;
      if ((*(byte *)(lVar46 + 0x1a) >> 1 & 1) == 0) {
        uVar25 = 0;
        *(undefined2 *)(param_6 + 0x94) = 0x400;
      }
      else {
        iVar77 = *(int *)(lVar46 + 0x48);
        lVar28 = 0;
        if (iVar77 != 0) {
          lVar28 = (long)iVar77 + lVar46 + 0x48;
        }
        uVar25 = FUN_02eecaf0(lVar28,*(undefined4 *)(lVar46 + 0x4c),&local_4a0);
        local_6f0 = (float)((uint)local_6f0 & 0xffff0000);
        (**(code **)(*(long *)puVar23 + (ulong)*(byte *)(lVar46 + 0x18) * 0x200 + 0x80))
                  (lVar46,uVar25,local_6b0,&local_6f0);
        auVar21._8_8_ = uStack_6a8;
        auVar21._0_8_ = CONCAT44(local_6b0[1],local_6b0[0]);
        auVar94 = NEON_ext(auVar21,auVar21,8,1);
        auVar22._8_4_ = fStack_98;
        auVar22._0_8_ = CONCAT44(fStack_9c,local_a0);
        auVar22._12_4_ = fStack_94;
        auVar129 = NEON_ext(auVar22,auVar22,8,1);
        uVar86 = NEON_ext(CONCAT44(fStack_9c,local_a0),auVar129._0_8_,4,1);
        uVar121 = NEON_ext(CONCAT44(local_6b0[1],local_6b0[0]),auVar94._0_8_,4,1);
        auVar53._0_4_ = local_6b0[0] * (float)uVar86 - local_a0 * (float)uVar121;
        auVar53._4_4_ =
             local_6b0[1] * (float)((ulong)uVar86 >> 0x20) -
             fStack_9c * (float)((ulong)uVar121 >> 0x20);
        auVar53._8_4_ = (float)uStack_6a8 * local_a0 - fStack_98 * local_6b0[0];
        auVar53._12_4_ = (float)((ulong)uStack_6a8 >> 0x20) * fStack_9c - fStack_94 * local_6b0[1];
        auVar94 = NEON_ext(auVar53,auVar53,4,1);
        auVar17._8_8_ = auVar70._8_8_;
        auVar17._0_8_ = auVar68._0_8_;
        auVar68 = auVar17._0_12_;
        uVar27 = ((uint)local_6f0 & 0xffff) -
                 (int)(*(float *)(puVar45 + 0x150) +
                      (float)(((int)(auVar94._0_4_ * auVar94._0_4_ + auVar94._4_4_ * auVar94._4_4_ +
                                    auVar53._0_4_ * auVar53._0_4_) >> 1) + 0x1fbb4000) * 42972.5);
        uVar6 = (ushort)local_6f0 >> 2;
        uVar26 = (uint)uVar6;
        if ((int)(uint)uVar6 <= (int)uVar27) {
          uVar26 = uVar27;
        }
        *(ushort *)(param_6 + 0x94) = (short)uVar26 + uVar6;
        *(uint *)(param_6 + 0x88) = uVar25 & 0xffff;
      }
      fVar79 = *(float *)(puVar45 + 0x344);
      fVar102 = *(float *)(puVar45 + 0x348);
      iVar77 = *(int *)(PTR_DAT_047d19e8 + 4);
      iVar80 = *(int *)(PTR_DAT_047d19e8 + 8);
      *(short *)(param_6 + 0x80) =
           (short)((uint)(*(int *)PTR_DAT_047d19e8 +
                         (int)(auVar68._0_4_ * *(float *)(puVar45 + 0x340))) >> 0x10);
      *(short *)(param_6 + 0x82) = (short)((uint)(iVar77 + (int)(auVar68._4_4_ * fVar79)) >> 0x10);
      *(short *)(param_6 + 0x84) = (short)((uint)(iVar80 + (int)(auVar68._8_4_ * fVar102)) >> 0x10);
      goto LAB_00826790;
    }
    pfVar40 = (float *)param_4[6];
    uVar67 = NEON_fmax(CONCAT44(fVar102 - (float)((ulong)param_3[2] >> 0x20),
                                fVar79 - (float)param_3[2]),
                       CONCAT44(-(auVar131._0_4_ + auVar131._4_4_ + fVar105 +
                                 fVar102 * (float)((ulong)*(undefined8 *)(puVar45 + 0x70) >> 0x20)),
                                -fVar85),4);
    auVar96._0_8_ =
         CONCAT26((short)(int)(*(float *)(PTR_DAT_047d19f8 + 0xc) *
                              (pfVar40[0xb] * fStack_98 +
                              pfVar40[3] * local_a0 + pfVar40[7] * fStack_9c)) + 0x7f,
                  CONCAT24((short)(int)(*(float *)(PTR_DAT_047d19f8 + 8) *
                                       (pfVar40[10] * fStack_98 +
                                       pfVar40[2] * local_a0 + pfVar40[6] * fStack_9c)) + 0x7f,
                           CONCAT22((short)(int)(*(float *)(PTR_DAT_047d19f8 + 4) *
                                                (pfVar40[9] * fStack_98 +
                                                pfVar40[1] * local_a0 + pfVar40[5] * fStack_9c)) +
                                    0x7f,(short)(int)(*(float *)PTR_DAT_047d19f8 *
                                                     (pfVar40[8] * fStack_98 +
                                                     *pfVar40 * local_a0 + pfVar40[4] * fStack_9c))
                                         + 0x7f)));
    auVar96._8_8_ = auVar96._0_8_;
    uVar122 = NEON_sqxtun(auVar96._0_8_,auVar96,2);
    *(int *)(param_6 + 0x18) = (int)uVar122;
    *(undefined1 *)(param_6 + 0x1b) = *(undefined1 *)(param_6 + 0x1b);
    uVar122 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
    auVar52._0_8_ =
         CONCAT44((int)((float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar122 >> 0x20)),
                  (int)((float)uVar67 * (float)uVar122));
    auVar52._8_8_ = auVar52._0_8_;
    uVar67 = NEON_sqxtun(auVar52._0_8_,auVar52,4);
    *(short *)(param_6 + 0xc) = (short)uVar67;
    iVar77 = *(int *)(param_6 + 0x1c);
    local_4a0 = local_730;
    uStack_498 = puStack_728;
joined_r0x00826528:
    iVar82 = 0;
    iVar80 = 0;
  }
  else {
    uVar41 = *(uint *)(param_6 + 0x88);
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar46 + 0x18) * 0x200 + 0x80))
              (lVar46,uVar41,&local_4a0,local_6b0);
    iVar77 = ((uint)*(ushort *)(param_6 + 0x94) - (uint)*(ushort *)(lVar42 + 0x5a)) -
             (uint)*(ushort *)(lVar44 + 0x5a);
    if (iVar77 < 1) goto LAB_00826458;
    *(short *)(param_6 + 0x94) = (short)iVar77;
    puVar45 = PTR_DAT_047d19b0;
    uVar25 = uVar41;
    local_7a0 = auVar94._0_8_;
LAB_00826790:
    uVar26 = (**(code **)(*(long *)puVar23 + (ulong)*(byte *)(lVar46 + 0x18) * 0x200 + 0x88))
                       (lVar46,uVar25,local_4b0,&local_4a0);
    fVar50 = fStack_94;
    fVar105 = fStack_98;
    fVar102 = fStack_9c;
    fVar79 = local_a0;
    auVar55 = *(undefined1 (*) [16])(puVar45 + 0x240);
    local_6f0 = -NAN;
    uVar36 = auVar55._0_8_;
    if ((int)uVar26 < 1) {
      uVar31 = 0;
      uVar27 = 0;
      uVar35 = 0xffffffff;
      auVar75._0_8_ = auVar55._0_8_;
      if (SUB164(*(undefined1 (*) [16])(puVar45 + 0x260),0) <= auVar55._0_4_) goto LAB_00826aa0;
    }
    else {
      auVar19._8_8_ = auVar95._8_8_;
      auVar19._0_8_ = auVar95._0_8_;
      uVar32 = 0;
      local_8c0 = (float)uVar67;
      fStack_8bc = (float)((ulong)uVar67 >> 0x20);
      auVar18._8_4_ = auVar97._0_4_;
      auVar18._0_8_ = auVar52._0_8_;
      auVar18._12_4_ = 0;
      uVar27 = 0;
      uVar31 = 0;
      uVar38 = 1;
      auVar78._8_8_ = _UNK_03cabbd8;
      auVar78._0_8_ = _DAT_03cabbd0;
      auVar52 = a64_TBL(ZEXT816(0),auVar19,auVar78);
      auVar71._8_8_ = _UNK_03cabbc8;
      auVar71._0_8_ = _DAT_03cabbc0;
      uVar35 = 0xffffffff;
      auVar20._8_8_ = auVar104._8_8_;
      auVar20._0_8_ = auVar104._0_8_;
      auVar97 = a64_TBL(ZEXT816(0),auVar19,auVar71);
      local_8c0 = local_8c0 - fVar110;
      fStack_8bc = fStack_8bc - fVar114;
      fVar49 = fVar49 - fVar116;
      auVar94 = a64_TBL(ZEXT816(0),auVar18,auVar71);
      auVar104 = a64_TBL(ZEXT816(0),auVar20,auVar78);
      auVar95 = a64_TBL(ZEXT816(0),auVar18,auVar78);
      auVar129 = a64_TBL(ZEXT816(0),auVar20,auVar71);
      fVar110 = auVar94._0_4_;
      fVar114 = auVar94._4_4_;
      fVar116 = auVar94._8_4_;
      fVar60 = auVar94._12_4_;
      fVar64 = auVar95._0_4_;
      fVar65 = auVar95._4_4_;
      fVar85 = auVar95._8_4_;
      fVar127 = auVar95._12_4_;
      auVar88._0_4_ = fVar110 * auVar52._0_4_ - fVar64 * auVar97._0_4_;
      auVar88._4_4_ = fVar114 * auVar52._4_4_ - fVar65 * auVar97._4_4_;
      auVar88._8_4_ = fVar116 * auVar52._8_4_ - fVar85 * auVar97._8_4_;
      auVar88._12_4_ = fVar60 * auVar52._12_4_ - fVar127 * auVar97._12_4_;
      auVar98._0_4_ = fVar110 * auVar104._0_4_ - fVar64 * auVar129._0_4_;
      auVar98._4_4_ = fVar114 * auVar104._4_4_ - fVar65 * auVar129._4_4_;
      auVar98._8_4_ = fVar116 * auVar104._8_4_ - fVar85 * auVar129._8_4_;
      auVar98._12_4_ = fVar60 * auVar104._12_4_ - fVar127 * auVar129._12_4_;
      fVar103 = fVar103 * fVar49 + fVar47 * local_8c0 + fVar106 * fStack_8bc;
      fVar106 = fVar108 * fVar49 + fVar109 * local_8c0 + fVar81 * fStack_8bc;
      fVar108 = fVar107 * fVar49 + fVar119 * local_8c0 + fVar135 * fStack_8bc;
      fVar109 = fVar120 * fVar49 + fVar135 * local_8c0 + fVar120 * fStack_8bc;
      auVar123._0_4_ = fVar84 * auVar88._0_4_;
      auVar123._4_4_ = fVar90 * auVar88._4_4_;
      auVar123._8_4_ = fVar91 * auVar88._8_4_;
      auVar123._12_4_ = fVar92 * auVar88._12_4_;
      auVar52 = NEON_ext(auVar88,auVar88,8,1);
      auVar130._0_4_ = fVar93 * auVar98._0_4_;
      auVar130._4_4_ = fVar99 * auVar98._4_4_;
      auVar130._8_4_ = fVar100 * auVar98._8_4_;
      auVar130._12_4_ = fVar101 * auVar98._12_4_;
      auVar97 = NEON_ext(auVar98,auVar98,8,1);
      fVar49 = auVar52._0_4_;
      fVar47 = auVar97._0_4_;
      auVar133._0_4_ = fVar103 - fVar58;
      auVar133._4_4_ = fVar106 - fVar59;
      auVar133._8_4_ = fVar108 - fVar63;
      auVar133._12_4_ = fVar109 - fVar61;
      auVar89._0_4_ = fVar84 - fVar103;
      auVar89._4_4_ = fVar90 - fVar106;
      auVar89._8_4_ = fVar91 - fVar108;
      auVar89._12_4_ = fVar92 - fVar109;
      auVar95 = a64_TBL(ZEXT816(0),auVar133,auVar78);
      auVar97 = a64_TBL(ZEXT816(0),auVar89,auVar78);
      auVar104 = a64_TBL(ZEXT816(0),auVar133,auVar71);
      auVar52 = a64_TBL(ZEXT816(0),auVar89,auVar71);
      auVar131 = NEON_ext(auVar130,auVar130,8,1);
      auVar94 = NEON_ext(auVar123,auVar123,8,1);
      auVar124._0_4_ = fVar110 * auVar95._0_4_ - fVar64 * auVar104._0_4_;
      auVar124._4_4_ = fVar114 * auVar95._4_4_ - fVar65 * auVar104._4_4_;
      auVar124._8_4_ = fVar116 * auVar95._8_4_ - fVar85 * auVar104._8_4_;
      auVar124._12_4_ = fVar60 * auVar95._12_4_ - fVar127 * auVar104._12_4_;
      auVar72._0_4_ = fVar110 * auVar97._0_4_ - fVar64 * auVar52._0_4_;
      auVar72._4_4_ = fVar114 * auVar97._4_4_ - fVar65 * auVar52._4_4_;
      auVar72._8_4_ = fVar116 * auVar97._8_4_ - fVar85 * auVar52._8_4_;
      auVar72._12_4_ = fVar60 * auVar97._12_4_ - fVar127 * auVar52._12_4_;
      auVar52 = NEON_ext(auVar124,auVar124,8,1);
      auVar97 = NEON_ext(auVar72,auVar72,8,1);
      auVar73._0_4_ = fVar103 * auVar72._0_4_;
      auVar73._4_4_ = fVar106 * auVar72._4_4_;
      auVar73._8_4_ = fVar108 * auVar72._8_4_;
      auVar73._12_4_ = fVar109 * auVar72._12_4_;
      fVar103 = auVar52._0_4_;
      fVar106 = auVar97._0_4_;
      auVar125._0_4_ = fVar58 * auVar124._0_4_;
      auVar125._4_4_ = fVar59 * auVar124._4_4_;
      auVar125._8_4_ = fVar63 * auVar124._8_4_;
      auVar125._12_4_ = fVar61 * auVar124._12_4_;
      auVar129 = NEON_ext(auVar125,auVar125,8,1);
      fVar108 = fVar49 * fVar49 + auVar88._0_4_ * auVar88._0_4_ + auVar88._4_4_ * auVar88._4_4_;
      fVar109 = fVar47 * fVar47 + auVar98._0_4_ * auVar98._0_4_ + auVar98._4_4_ * auVar98._4_4_;
      fVar81 = fVar103 * fVar103 + auVar124._0_4_ * auVar124._0_4_ + auVar124._4_4_ * auVar124._4_4_
      ;
      fVar58 = fVar106 * fVar106 + auVar72._0_4_ * auVar72._0_4_ + auVar72._4_4_ * auVar72._4_4_;
      auVar97 = NEON_ext(auVar73,auVar73,8,1);
      local_870 = (float)uVar8;
      fStack_86c = (float)((ulong)uVar8 >> 0x20);
      fStack_868 = (float)uVar9;
      local_860 = (float)uVar122;
      fStack_85c = (float)((ulong)uVar122 >> 0x20);
      fStack_858 = (float)uVar7;
      local_860 = local_860 - local_870;
      fStack_85c = fStack_85c - fStack_86c;
      fStack_858 = fStack_858 - fStack_868;
      auVar126 = NEON_ext(auVar75,auVar75,8,1);
      iVar77 = -(uint)(fVar108 <= 0.0);
      iVar80 = -(uint)(fVar109 <= 0.0);
      iVar82 = -(uint)(fVar81 <= 0.0);
      iVar83 = -(uint)(fVar58 <= 0.0);
      fVar108 = *(float *)(puVar45 + 0x60) / SQRT(fVar108);
      fVar109 = *(float *)(puVar45 + 100) / SQRT(fVar109);
      fVar81 = *(float *)(puVar45 + 0x68) / SQRT(fVar81);
      fVar58 = *(float *)(puVar45 + 0x6c) / SQRT(fVar58);
      auVar104 = NEON_ext(auVar96,auVar96,8,1);
      fVar108 = (float)CONCAT13((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                                CONCAT12((byte)((uint)fVar108 >> 0x10) &
                                         ~(byte)((uint)iVar77 >> 0x10),
                                         CONCAT11((byte)((uint)fVar108 >> 8) &
                                                  ~(byte)((uint)iVar77 >> 8),
                                                  SUB41(fVar108,0) & ~(byte)iVar77)));
      auVar69._0_8_ =
           CONCAT17((byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                    CONCAT16((byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                             CONCAT15((byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar80 >> 8),
                                      CONCAT14(SUB41(fVar109,0) & ~(byte)iVar80,fVar108))));
      auVar69[8] = SUB41(fVar81,0) & ~(byte)iVar82;
      auVar69[9] = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar82 >> 8);
      auVar69[10] = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
      auVar69[0xb] = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
      auVar74[0xc] = SUB41(fVar58,0) & ~(byte)iVar83;
      auVar74._0_12_ = auVar69;
      auVar74[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar83 >> 8);
      auVar74[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
      auVar74[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
      fVar109 = (float)((ulong)auVar69._0_8_ >> 0x20);
      fVar81 = auVar69._8_4_;
      fVar58 = auVar74._12_4_;
      auVar95 = NEON_ext(auVar5,auVar5,8,1);
      uVar67 = *(undefined8 *)(puVar45 + 0x170);
      auVar52 = *(undefined1 (*) [16])(puVar45 + 0x260);
      local_800 = (float)uVar51;
      fStack_7fc = (float)((ulong)uVar51 >> 0x20);
      fVar61 = local_800 *
               (auVar126._0_4_ * fStack_858 + auVar75._0_4_ * local_860 + auVar75._4_4_ * fStack_85c
               );
      fStack_7fc = fStack_7fc *
                   (auVar104._0_4_ * fStack_858 +
                   auVar96._0_4_ * local_860 + auVar96._4_4_ * fStack_85c);
      local_800 = local_800 *
                  (auVar95._0_4_ * fStack_858 + auVar5._0_4_ * local_860 + auVar5._4_4_ * fStack_85c
                  );
      auVar75 = auVar55;
      do {
        while( true ) {
          lVar28 = uVar32 * 0x10;
          fVar59 = *(float *)(local_4b0 + lVar28 + 0x10);
          fVar63 = *(float *)(local_4b0 + lVar28 + 0x14);
          fVar135 = *(float *)(&uStack_498 + uVar32 * 2);
          auVar132._0_4_ = fVar59 * fVar79;
          auVar132._4_4_ = fVar63 * fVar102;
          auVar132._8_4_ = fVar135 * fVar105;
          auVar132._12_4_ = *(float *)((long)&uStack_498 + lVar28 + 4) * fVar50;
          auVar104 = NEON_ext(auVar132,auVar132,8,1);
          fVar90 = auVar104._0_4_ + fVar50;
          fVar84 = auVar132._0_4_ + auVar132._4_4_ + fVar90;
          fVar90 = auVar132._0_4_ + auVar132._4_4_ + fVar90;
          uVar48 = CONCAT44(fVar90,fVar84);
          auVar134._0_4_ =
               (fVar49 * fVar108 * fVar135 +
               auVar88._0_4_ * fVar108 * fVar59 + auVar88._4_4_ * fVar108 * fVar63) -
               (auVar94._0_4_ + auVar123._0_4_ + auVar123._4_4_) * fVar108;
          auVar134._4_4_ =
               (fVar47 * fVar109 * fVar135 +
               auVar98._0_4_ * fVar109 * fVar59 + auVar98._4_4_ * fVar109 * fVar63) -
               (auVar131._0_4_ + auVar130._0_4_ + auVar130._4_4_) * fVar109;
          auVar134._8_4_ =
               (fVar103 * fVar81 * fVar135 +
               auVar124._0_4_ * fVar81 * fVar59 + auVar124._4_4_ * fVar81 * fVar63) -
               (auVar129._0_4_ + auVar125._0_4_ + auVar125._4_4_) * fVar81;
          auVar134._12_4_ =
               (fVar106 * fVar58 * fVar135 +
               auVar72._0_4_ * fVar58 * fVar59 + auVar72._4_4_ * fVar58 * fVar63) -
               (auVar97._0_4_ + auVar73._0_4_ + auVar73._4_4_) * fVar58;
          fVar59 = auVar52._0_4_;
          fVar63 = ABS(fVar84) * (float)uVar67 + fVar59;
          fVar135 = ABS(fVar90) * (float)((ulong)uVar67 >> 0x20) + auVar52._4_4_;
          auVar5._4_4_ = fVar47 * fVar109 * local_800 +
                         auVar98._0_4_ * fVar109 * fVar61 + auVar98._4_4_ * fVar109 * fStack_7fc +
                         auVar134._4_4_;
          auVar5._0_4_ = fVar49 * fVar108 * local_800 +
                         auVar88._0_4_ * fVar108 * fVar61 + auVar88._4_4_ * fVar108 * fStack_7fc +
                         auVar134._0_4_;
          auVar5._8_4_ = fVar103 * fVar81 * local_800 +
                         auVar124._0_4_ * fVar81 * fVar61 + auVar124._4_4_ * fVar81 * fStack_7fc +
                         auVar134._8_4_;
          auVar5._12_4_ =
               fVar106 * fVar58 * local_800 +
               auVar72._0_4_ * fVar58 * fVar61 + auVar72._4_4_ * fVar58 * fStack_7fc +
               auVar134._12_4_;
          auVar104 = NEON_fmin(auVar134,auVar5,4);
          *(ulong *)(local_6b0 + uVar32 * 2) = uVar48;
          if (fVar135 <= auVar104._12_4_ ||
              (fVar63 <= auVar104._8_4_ || (fVar135 <= auVar104._4_4_ || fVar63 <= auVar104._0_4_)))
          break;
          *(char *)((long)&local_6f0 + (long)(int)uVar27) = (char)uVar32;
          if (fVar84 < (float)uVar36) {
            uVar35 = uVar27;
            uVar36 = uVar48;
          }
          uVar31 = uVar38 | uVar31;
          uVar27 = uVar27 + 1;
          uVar32 = uVar32 + 1;
          uVar38 = uVar38 << 1;
          if (uVar26 == uVar32) goto LAB_00826a90;
        }
        uVar128 = NEON_fmaxnmv(auVar104,4);
        auVar75._0_8_ = NEON_fmin(auVar75._0_8_,CONCAT44(uVar128,uVar128),4);
        uVar32 = uVar32 + 1;
        uVar38 = uVar38 << 1;
      } while (uVar26 != uVar32);
LAB_00826a90:
      if (fVar59 <= (float)uVar36) {
LAB_00826aa0:
        fVar49 = (float)(auVar75._0_8_ >> 0x20);
        if ((int)uVar27 < 5) {
          bVar30 = *(byte *)((long)&local_6f0 + (long)(int)uVar35);
          *(undefined1 *)(param_6 + 0x96) = 0x33;
          if (uVar27 == 4) goto LAB_00826d48;
          *(undefined1 *)(param_6 + 0x97) = 0xff;
          if (uVar27 != 0) goto LAB_00826d50;
          fVar103 = *(float *)(*param_4 + 0x3c) + *(float *)(*param_5 + 0x3c);
          uVar67 = NEON_fmax(*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),
                             CONCAT44(fVar103,fVar103),4);
          uVar122 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
          fVar103 = ((float)auVar75._0_8_ + (float)uVar67) * (float)uVar122;
          fVar49 = (fVar49 + (float)((ulong)uVar67 >> 0x20)) * (float)((ulong)uVar122 >> 0x20);
        }
        else {
          bVar3 = *(byte *)((long)&local_6f0 + (long)(int)uVar35);
          bVar30 = *(byte *)(param_6 + 0x97);
          uVar67 = *(undefined8 *)(local_6b0 + (ulong)bVar3 * 2);
          fVar103 = (float)*(undefined8 *)(*(long *)(param_2 + 8) + 0x60);
          if ((((ulong)bVar30 == 0xff) ||
              (uVar26 = *(uint *)(param_6 + 0x90),
              uVar32 = 1L << ((ulong)(uVar26 >> 0x18) & 0x3f) | 1L << ((ulong)uVar26 & 0x3f) |
                       1L << ((ulong)(uVar26 >> 8) & 0x3f) | 1L << ((ulong)(uVar26 >> 0x10) & 0x3f),
              (uVar32 & uVar31) != uVar32)) ||
             ((float)uVar67 + fVar103 < (float)*(undefined8 *)(local_6b0 + (ulong)bVar30 * 2))) {
            uVar24 = (undefined1)local_6f0;
            local_6f0 = (float)CONCAT31(local_6f0._1_3_,bVar3);
            *(undefined1 *)((long)&local_6f0 + (long)(int)uVar35) = uVar24;
            auVar52 = *(undefined1 (*) [16])(local_4b0 + (ulong)bVar3 * 0x10 + 0x10);
            uVar38 = *(ulong *)(PTR_DAT_047d19b0 + 0x290);
            iVar77 = -1;
            uVar32 = 1;
            uVar31 = uVar38;
            do {
              lVar28 = (ulong)*(byte *)((long)&local_6f0 + uVar32) * 0x10;
              fVar47 = auVar52._0_4_;
              fVar106 = auVar52._4_4_;
              fVar108 = auVar52._8_4_;
              fVar109 = (*(float *)(local_4b0 + lVar28 + 0x10) - fVar47) *
                        (*(float *)(local_4b0 + lVar28 + 0x10) - fVar47) +
                        (*(float *)(local_4b0 + lVar28 + 0x14) - fVar106) *
                        (*(float *)(local_4b0 + lVar28 + 0x14) - fVar106) +
                        (*(float *)(&uStack_498 + (ulong)*(byte *)((long)&local_6f0 + uVar32) * 2) -
                        fVar108) *
                        (*(float *)(&uStack_498 + (ulong)*(byte *)((long)&local_6f0 + uVar32) * 2) -
                        fVar108);
              if ((float)uVar31 < fVar109) {
                iVar77 = (int)uVar32;
                uVar31 = (ulong)(uint)fVar109;
              }
              uVar32 = uVar32 + 1;
            } while (uVar27 != uVar32);
            uVar24 = local_6f0._1_1_;
            local_6f0._0_2_ =
                 CONCAT11(*(undefined1 *)((long)&local_6f0 + (long)iVar77),(undefined1)local_6f0);
            *(undefined1 *)((long)&local_6f0 + (long)iVar77) = uVar24;
            if ((int)uVar27 < 3) {
              bVar34 = 0xff;
              bVar30 = 0xff;
            }
            else {
              lVar28 = (ulong)uVar27 - 2;
              lVar42 = (ulong)local_6f0._1_1_ * 0x10;
              auVar97 = NEON_ext(local_4b0,local_4b0,8,1);
              uVar122 = NEON_ext(local_4b0._0_8_,auVar97._0_8_,4,1);
              auVar113._0_4_ = *(float *)(local_4b0 + lVar42 + 0x10) - fVar47;
              auVar113._4_4_ = *(float *)(local_4b0 + lVar42 + 0x14) - fVar106;
              auVar113._8_4_ = *(float *)(&uStack_498 + (ulong)local_6f0._1_1_ * 2) - fVar108;
              auVar113._12_4_ = *(float *)((long)&uStack_498 + lVar42 + 4) - auVar52._12_4_;
              auVar52 = NEON_ext(auVar113,auVar113,4,1);
              bVar30 = 0xff;
              auVar118._0_4_ = auVar113._0_4_ * (float)uVar122 - local_4b0._0_4_ * auVar52._0_4_;
              auVar118._4_4_ =
                   auVar113._4_4_ * (float)((ulong)uVar122 >> 0x20) -
                   local_4b0._4_4_ * auVar52._4_4_;
              auVar118._8_4_ = auVar113._8_4_ * local_4b0._0_4_ - local_4b0._8_4_ * auVar113._0_4_;
              auVar118._12_4_ =
                   auVar113._12_4_ * local_4b0._4_4_ - local_4b0._12_4_ * auVar113._4_4_;
              auVar52 = NEON_ext(auVar118,auVar118,4,1);
              bVar34 = 0xff;
              uVar31 = auVar55._0_8_;
              pbVar39 = (byte *)((ulong)&local_6f0 | 2);
              do {
                bVar2 = *pbVar39;
                uVar32 = (ulong)bVar2;
                fVar109 = (auVar52._0_4_ * (*(float *)(local_4b0 + uVar32 * 0x10 + 0x10) - fVar47) +
                           auVar52._4_4_ * (*(float *)(local_4b0 + uVar32 * 0x10 + 0x14) - fVar106)
                          + auVar118._0_4_ * (*(float *)(&uStack_498 + uVar32 * 2) - fVar108)) /
                          (fVar103 +
                          ((float)*(undefined8 *)(local_6b0 + uVar32 * 2) - (float)uVar67));
                if (fVar109 < (float)uVar31) {
                  uVar31 = (ulong)(uint)fVar109;
                  bVar34 = bVar2;
                }
                if ((float)uVar38 < fVar109) {
                  uVar38 = (ulong)(uint)fVar109;
                  bVar30 = bVar2;
                }
                lVar28 = lVar28 + -1;
                pbVar39 = pbVar39 + 1;
              } while (lVar28 != 0);
            }
            local_6f0 = (float)CONCAT13(bVar30,CONCAT12(bVar34,(ushort)local_6f0));
            bVar30 = bVar3;
          }
          else {
            local_6f0 = (float)(uVar26 & 0xff000000 | (uVar26 >> 0x10 & 0xff) << 0x10 |
                               uVar26 & 0xff | (uVar26 >> 8 & 0xff) << 8);
          }
          *(undefined1 *)(param_6 + 0x96) = 5;
LAB_00826d48:
          uVar27 = 4;
          *(byte *)(param_6 + 0x97) = bVar30;
LAB_00826d50:
          if ((float)uVar36 <= fVar62) {
            fVar49 = *(float *)(param_6 + 0x90);
            *param_7 = uVar27;
            if ((int)uVar27 < 1) {
              uVar67 = param_3[2];
              uVar26 = 0;
              uVar35 = 0;
              uVar76 = 0;
            }
            else {
              uVar26 = 0;
              uVar35 = 0;
              uVar76 = 0;
              uVar122 = param_3[1];
              uVar67 = param_3[2];
              pfVar40 = (float *)param_4[6];
              uVar36 = 0;
              do {
                auVar75._0_8_ = (ulong)*(byte *)((long)&local_6f0 + uVar36);
                fVar103 = pfVar40[0xb];
                fVar47 = pfVar40[0xf];
                fVar58 = (float)*(undefined8 *)(local_6b0 + auVar75._0_8_ * 2);
                fVar108 = fVar58 - (float)uVar122;
                fVar106 = (float)((ulong)*(undefined8 *)(local_6b0 + auVar75._0_8_ * 2) >> 0x20);
                fVar58 = fVar58 - (float)uVar67;
                fVar61 = fVar106 - (float)((ulong)uVar67 >> 0x20);
                fVar59 = *(float *)(local_4b0 + auVar75._0_8_ * 0x10 + 0x10) - local_a0 * fVar108;
                fVar63 = *(float *)(local_4b0 + auVar75._0_8_ * 0x10 + 0x14) -
                         fStack_9c * (fVar106 - (float)((ulong)uVar122 >> 0x20));
                fVar79 = *(float *)(&uStack_498 + auVar75._0_8_ * 2) - fStack_98 * fVar108;
                fVar106 = pfVar40[3];
                fVar108 = pfVar40[7];
                fVar109 = pfVar40[0x13];
                uVar66 = -(uint)(fVar58 < auVar55._0_4_);
                fVar81 = auVar55._4_4_;
                fVar62 = pfVar40[0xc] +
                         pfVar40[0x10] +
                         pfVar40[8] * fVar79 + *pfVar40 * fVar59 + pfVar40[4] * fVar63;
                fVar135 = pfVar40[0xd] +
                          pfVar40[0x11] +
                          pfVar40[9] * fVar79 + pfVar40[1] * fVar59 + pfVar40[5] * fVar63;
                fVar84 = pfVar40[0xe] +
                         pfVar40[0x12] +
                         pfVar40[10] * fVar79 + pfVar40[2] * fVar59 + pfVar40[6] * fVar63;
                auVar55._0_8_ = NEON_fmin(CONCAT44(fVar61,fVar58),auVar55._0_8_,4);
                pfVar4 = (float *)(param_7 + uVar36 * 4 + 0x10);
                pfVar4[2] = fVar84;
                pfVar4[3] = fVar47 + fVar109 + fVar103 * fVar79 +
                                               fVar106 * fVar59 + fVar108 * fVar63;
                *pfVar4 = fVar62;
                pfVar4[1] = fVar135;
                auVar75._0_8_ = uVar36 + 1;
                param_7[uVar36 + 0xc] = (uint)fVar58;
                uVar26 = uVar26 ^ (uVar26 ^ (uint)fVar62) & uVar66;
                uVar35 = uVar35 ^ (uVar35 ^ (uint)fVar135) & -(uint)(fVar61 < fVar81);
                uVar76 = uVar76 ^ (uVar76 ^ (uint)fVar84) & uVar66;
                uVar36 = auVar75._0_8_;
              } while (uVar27 != auVar75._0_8_);
            }
            param_7[1] = (uint)(float)auVar55._0_8_;
            uVar66 = uVar27 + 3 & 0xfffffffc;
            param_7[0x22] = uVar76;
            param_7[0x23] = (uint)((float)auVar55._0_8_ + (float)uVar67);
            param_7[0x20] = uVar26;
            param_7[0x21] = uVar35;
            if ((int)uVar27 < (int)uVar66) {
              uVar36 = (ulong)(int)uVar27;
              auVar55._0_8_ = ~uVar36;
              if ((uVar36 & 1) != 0) {
                puVar33 = param_7 + 0x10;
                uVar67 = *(undefined8 *)puVar33;
                *(undefined8 *)(puVar33 + uVar36 * 4 + 2) = *(undefined8 *)(param_7 + 0x12);
                *(undefined8 *)(puVar33 + uVar36 * 4) = uVar67;
                (param_7 + 0xc)[uVar36] = param_7[0xc];
                uVar36 = uVar36 + 1;
              }
              if (auVar55._0_8_ + (long)(int)uVar66 != 0) {
                lVar28 = (long)(int)uVar66 - uVar36;
                puVar33 = param_7 + uVar36 + 0xd;
                puVar37 = param_7 + uVar36 * 4 + 0x14;
                do {
                  uVar67 = *(undefined8 *)(param_7 + 0x10);
                  *(undefined8 *)(puVar37 + -2) = *(undefined8 *)(param_7 + 0x12);
                  *(undefined8 *)(puVar37 + -4) = uVar67;
                  puVar33[-1] = param_7[0xc];
                  uVar67 = *(undefined8 *)(param_7 + 0x10);
                  *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(param_7 + 0x12);
                  *(undefined8 *)puVar37 = uVar67;
                  lVar28 = lVar28 + -2;
                  *puVar33 = param_7[0xc];
                  puVar33 = puVar33 + 2;
                  puVar37 = puVar37 + 8;
                } while (lVar28 != 0);
              }
            }
            pfVar40 = (float *)param_4[6];
            auVar52 = *(undefined1 (*) [16])(pfVar40 + 8);
            fVar103 = *pfVar40;
            fVar47 = pfVar40[1];
            fVar106 = pfVar40[2];
            fVar108 = pfVar40[3];
            fVar109 = pfVar40[4];
            fVar81 = pfVar40[5];
            fVar58 = pfVar40[6];
            fVar61 = pfVar40[7];
            *(undefined1 *)(param_7 + 0x25) = 0;
            uVar36 = (ulong)(uint)local_6f0;
            auVar56._0_8_ =
                 CONCAT44(auVar52._4_4_ * fStack_98 + fVar47 * local_a0 + fVar81 * fStack_9c,
                          auVar52._0_4_ * fStack_98 + fVar103 * local_a0 + fVar109 * fStack_9c);
            auVar56._8_4_ = auVar52._8_4_ * fStack_98 + fVar106 * local_a0 + fVar58 * fStack_9c;
            auVar56._12_4_ = auVar52._12_4_ * fStack_98 + fVar108 * local_a0 + fVar61 * fStack_9c;
            *(long *)(param_7 + 6) = auVar56._8_8_;
            *(undefined8 *)(param_7 + 4) = auVar56._0_8_;
            *(long *)(param_7 + 10) = auVar56._8_8_;
            *(undefined8 *)(param_7 + 8) = auVar56._0_8_;
            if (uVar41 == uVar25) {
              if (local_6f0 != fVar49) {
                *(float *)(param_6 + 0x90) = local_6f0;
                local_700 = 0xffffffffffffffff;
                uStack_6f8 = 0xffffffffffffffff;
                local_710 = 0xffffffffffffffff;
                uStack_708 = 0xffffffffffffffff;
                local_720 = 0xffffffffffffffff;
                uStack_718 = 0xffffffffffffffff;
                local_730 = -1;
                puStack_728 = (uint *)0xffffffffffffffff;
                if ((((~(uint)fVar49 & 0xff) != 0) &&
                    (*(undefined1 *)((long)&local_730 + ((ulong)(uint)fVar49 & 0xff)) = 0,
                    (((uint)fVar49 >> 8 ^ 0xffffffff) & 0xff) != 0)) &&
                   (*(undefined1 *)((long)&local_730 + ((ulong)((uint)fVar49 >> 8) & 0xff)) = 1,
                   (((uint)fVar49 >> 0x10 ^ 0xffffffff) & 0xff) != 0)) {
                  *(undefined1 *)((long)&local_730 + ((ulong)((uint)fVar49 >> 0x10) & 0xff)) = 2;
                  if ((uint)fVar49 >> 0x18 != 0xff) {
                    *(undefined1 *)((long)&local_730 + (ulong)((uint)fVar49 >> 0x18)) = 3;
                  }
                }
                uStack_748 = SUB168(*(undefined1 (*) [16])(param_6 + 0x50),8);
                local_750 = SUB168(*(undefined1 (*) [16])(param_6 + 0x50),0);
                uStack_738 = *(undefined8 *)(param_6 + 0x48);
                uStack_740 = *(undefined8 *)(param_6 + 0x40);
                pauVar29 = (undefined1 (*) [16])(param_6 + 0x60);
                *(undefined8 *)(param_6 + 0x50) = 0;
                *(undefined8 *)(param_6 + 0x40) = 0;
                *(undefined8 *)(param_6 + 0x58) = 0;
                *(undefined8 *)*pauVar29 = 0;
                *(undefined8 *)(param_6 + 0x68) = 0;
                *(undefined8 *)(param_6 + 0x48) = 0;
                *(char *)(param_6 + 0x2b) = (char)uVar27;
                uStack_758 = SUB168(*pauVar29,8);
                local_760 = SUB168(*pauVar29,0);
                if (0 < (int)uVar27) {
                  auVar55._0_8_ = (ulong)uVar27;
                  bVar30 = *(byte *)((long)&local_730 + (uVar36 & 0xff));
                  pbVar39 = (byte *)((ulong)&local_6f0 | 1);
                  while( true ) {
                    auVar55._0_8_ = auVar55._0_8_ - 1;
                    if ((ulong)bVar30 != 0xff) {
                      lVar28 = (ulong)bVar30 * 4;
                      uVar128 = *(undefined4 *)((long)&local_750 + lVar28);
                      *(undefined4 *)pauVar29[-2] = *(undefined4 *)((long)&uStack_740 + lVar28);
                      uVar1 = *(undefined4 *)((long)&local_760 + lVar28);
                      *(undefined4 *)pauVar29[-1] = uVar128;
                      *(undefined4 *)*pauVar29 = uVar1;
                    }
                    if (auVar55._0_8_ == 0) break;
                    pauVar29 = (undefined1 (*) [16])(*pauVar29 + 4);
                    bVar30 = *(byte *)((long)&local_730 + (ulong)*pbVar39);
                    pbVar39 = pbVar39 + 1;
                  }
                }
              }
            }
            else {
              bVar30 = *(byte *)(param_6 + 0x2b);
              *(float *)(param_6 + 0x90) = local_6f0;
              puVar23 = PTR_DAT_047d19e0;
              auVar52 = *(undefined1 (*) [16])(param_6 + 0x40);
              *(undefined8 *)(param_6 + 0x50) = 0;
              *(undefined8 *)(param_6 + 0x58) = 0;
              *(undefined8 *)(param_6 + 0x60) = 0;
              *(undefined8 *)(param_6 + 0x68) = 0;
              *(char *)(param_6 + 0x2b) = (char)uVar27;
              pbVar39 = puVar23 + (ulong)(0xf >> (ulong)(4 - bVar30 & 0x1f)) * 0x10;
              auVar57._0_8_ =
                   CONCAT17(auVar52[7] & pbVar39[7],
                            CONCAT16(auVar52[6] & pbVar39[6],
                                     CONCAT15(auVar52[5] & pbVar39[5],
                                              CONCAT14(auVar52[4] & pbVar39[4],
                                                       CONCAT13(auVar52[3] & pbVar39[3],
                                                                CONCAT12(auVar52[2] & pbVar39[2],
                                                                         CONCAT11(auVar52[1] &
                                                                                  pbVar39[1],
                                                                                  auVar52[0] &
                                                                                  *pbVar39)))))));
              auVar57[8] = auVar52[8] & pbVar39[8];
              auVar57[9] = auVar52[9] & pbVar39[9];
              auVar57[10] = auVar52[10] & pbVar39[10];
              auVar57[0xb] = auVar52[0xb] & pbVar39[0xb];
              auVar57[0xc] = auVar52[0xc] & pbVar39[0xc];
              auVar57[0xd] = auVar52[0xd] & pbVar39[0xd];
              auVar57[0xe] = auVar52[0xe] & pbVar39[0xe];
              auVar57[0xf] = auVar52[0xf] & pbVar39[0xf];
              *(undefined1 *)((long)param_7 + 0x92) = 1;
              *(long *)(param_6 + 0x48) = auVar57._8_8_;
              *(undefined8 *)(param_6 + 0x40) = auVar57._0_8_;
            }
            *(long *)(param_7 + 0x26) = param_6;
            lVar28 = param_4[2];
            lVar42 = param_5[2];
            *(long *)(param_7 + 0x2a) = lVar28;
            *(long *)(param_7 + 0x2c) = lVar42;
            param_7[0x28] = *(uint *)(param_4 + 3);
            param_7[0x29] = *(uint *)(param_5 + 3);
            *(byte *)((long)param_7 + 0x91) = *(byte *)(param_6 + 10) >> 6 & 1;
            *(undefined1 *)(param_7 + 0x24) = 0;
            *(undefined1 *)((long)param_7 + 0x95) = 0;
            *(undefined1 *)((long)param_7 + 0x93) = 0;
            uVar41 = *(uint *)(lVar42 + 0x14) | *(uint *)(lVar28 + 0x14);
            iVar77 = *(int *)(param_6 + 0x1c);
            param_7[0x2f] = uVar41;
            if (iVar77 == 0xaaa00) {
              uVar41 = uVar41 | *(uint *)(*param_4 + 0x54) | *(uint *)(*param_5 + 0x54);
              bVar30 = *(byte *)(param_6 + 0xe) & 3;
              uVar26 = *(uint *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(ushort *)(param_4[1] + 0x58) * 0x70 + 4);
              uVar27 = *(uint *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(ushort *)(param_5[1] + 0x58) * 0x70 + 4);
              if (bVar30 == 1) {
                uVar41 = uVar41 & 0xffffff7f;
              }
              else if (bVar30 == 2) {
                uVar41 = uVar41 | 0x80;
              }
              if (*(long *)(param_1 + 8) != 0) {
                uVar41 = *(uint *)(*(long *)(param_1 + 8) + 0x81c) | uVar41;
              }
              *(undefined2 *)((long)param_7 + 0x92) = 0x101;
              *(undefined4 *)(param_6 + 0x1c) = 0;
              *(uint *)(param_6 + 0x2c) = uVar27 | uVar26 | uVar41 | *(uint *)(param_6 + 0x2c);
              FUN_02f526d4(param_6,lVar28,lVar42,param_4[5],param_5[5]);
              lVar28 = *(long *)(param_1 + 0x40);
              uVar41 = *(uint *)(param_6 + 0x2c);
              if ((*(uint *)(lVar28 + 0x108) & uVar41) != 0) {
                lVar42 = 0;
                puVar43 = (undefined8 *)(lVar28 + 0x118);
                local_4a0 = param_6;
                uStack_498 = param_7;
                do {
                  if ((*(uint *)(puVar43 + -1) & uVar41) != 0) {
                    (**(code **)(*(long *)*puVar43 + 0x20))
                              ((long *)*puVar43,param_1,param_2,param_4,param_5,&local_4a0);
                  }
                  lVar42 = lVar42 + 1;
                  puVar43 = puVar43 + 2;
                } while (lVar42 < *(int *)(lVar28 + 0x10c));
              }
            }
            iVar80 = 0;
            iVar77 = 1;
            goto LAB_00826f70;
          }
          fVar103 = *(float *)(*param_4 + 0x3c) + *(float *)(*param_5 + 0x3c);
          uVar67 = NEON_fmax(*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),
                             CONCAT44(fVar103,fVar103),4);
          uVar122 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
          uVar67 = NEON_fmax(CONCAT44(fVar49 + (float)((ulong)uVar67 >> 0x20),
                                      (float)auVar75._0_8_ + (float)uVar67),local_7a0,4);
          uVar67 = NEON_fmin(uVar36,uVar67,4);
          fVar103 = ((float)uVar67 - (float)param_3[2]) * (float)uVar122;
          fVar49 = ((float)((ulong)uVar67 >> 0x20) - (float)((ulong)param_3[2] >> 0x20)) *
                   (float)((ulong)uVar122 >> 0x20);
        }
        auVar54._0_8_ = CONCAT44((int)fVar49,(int)fVar103);
        auVar54._8_8_ = auVar54._0_8_;
        uVar67 = NEON_sqxtun(auVar54._0_8_,auVar54,4);
        *(undefined4 *)(param_6 + 0x18) = 0x7f7f7f;
        *(undefined1 *)(param_6 + 0x1b) = *(undefined1 *)(param_6 + 0x1b);
        *(short *)(param_6 + 0xc) = (short)uVar67;
        iVar77 = *(int *)(param_6 + 0x1c);
        goto joined_r0x00826528;
      }
    }
    *(ushort *)(param_6 + 10) = *(ushort *)(param_6 + 10) & 0xfff7;
    iVar82 = -1;
    iVar80 = -1;
    iVar77 = *(int *)(param_6 + 0x1c);
  }
  if (iVar77 != 0xaaa00) {
    lVar42 = *param_4;
    lVar28 = *param_5;
    uVar36 = (ulong)local_4a0 >> 0x20;
    local_4a0 = CONCAT44((int)uVar36,(int)param_4[3]);
    local_6b0[0] = *(float *)(param_5 + 3);
    lVar44 = *(long *)(param_1 + 0x40);
    uVar41 = *(uint *)(param_6 + 0x2c);
    if ((*(uint *)(lVar44 + 0x108) & uVar41) != 0) {
      lVar46 = 0;
      puVar43 = (undefined8 *)(lVar44 + 0x118);
      do {
        if ((*(uint *)(puVar43 + -1) & uVar41) != 0) {
          (**(code **)(*(long *)*puVar43 + 0x30))
                    ((long *)*puVar43,param_1,param_2,lVar42 + 0x50,lVar28 + 0x50,&local_4a0,
                     local_6b0,param_6);
        }
        lVar46 = lVar46 + 1;
        puVar43 = puVar43 + 2;
      } while (lVar46 < *(int *)(lVar44 + 0x10c));
    }
    lVar28 = *(long *)(param_6 + 0x20);
    iVar80 = iVar82;
    if (lVar28 != 0) {
      lVar42 = param_3[0xd];
      if (*(long *)(lVar42 + 0x18) == lVar28) {
        iVar77 = *(int *)(lVar42 + 0x20) + 1;
      }
      else {
        if (*(long *)(lVar42 + 0x18) != 0) {
          FUN_031c3a50(lVar42);
        }
        iVar77 = 1;
        *(long *)(lVar42 + 0x18) = lVar28;
      }
      *(int *)(lVar42 + 0x20) = iVar77;
    }
  }
  iVar77 = 0;
  *(undefined1 *)(param_6 + 0x15) = 0;
  *(undefined4 *)(param_6 + 0x1c) = 0;
  *(undefined1 *)(param_6 + 0x1b) = 0;
  *(undefined1 *)(param_6 + 9) = 2;
LAB_00826f70:
  if (local_70 != 0) {
    FUN_031d39b4(&local_4a0);
    *(long *)(local_88 + 8) = (long)uStack_498 + (*(long *)(local_88 + 8) - local_78);
    *(int *)(local_88 + 0x10) = *(int *)(local_88 + 0x10) + 1;
  }
  return iVar77 + iVar80;
}


