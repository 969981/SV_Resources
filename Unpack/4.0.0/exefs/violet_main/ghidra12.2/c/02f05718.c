/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f05718; name: FUN_02f05718
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02f05718(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0 [2];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float fStack_68;
  undefined8 uStack_60;
  float fStack_58;
  
  local_1e0 = local_1d0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uVar19 = param_1._8_8_;
  local_1d8 = -0x7ffffffdfffffffe;
  local_1d0[0] = 0;
  local_140 = 0;
  uStack_178 = DAT_03cab628;
  local_180 = DAT_03cab620;
  uStack_168 = _UNK_03cabe68;
  uStack_170 = _DAT_03cabe60;
  uVar7 = 0x80040200;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_158 = _UNK_03caa5b8;
  local_160 = _DAT_03caa5b0;
  uStack_148 = _UNK_03cabe58;
  uStack_150 = _DAT_03cabe50;
  uStack_e8 = DAT_03cab628;
  local_f0 = DAT_03cab620;
  uStack_d8 = _UNK_03cabe68;
  uStack_e0 = _DAT_03cabe60;
  uStack_c8 = _UNK_03caa5b8;
  local_d0 = _DAT_03caa5b0;
  uStack_b8 = _UNK_03cabe58;
  uStack_c0 = _DAT_03cabe50;
  local_230 = *param_3;
  uVar1 = *(uint *)(param_3 + 1);
  uStack_228 = CONCAT44(uVar1,uVar1);
  uStack_78 = CONCAT44(*(undefined4 *)((long)param_3 + 0x14),*(undefined4 *)((long)param_3 + 0x14));
  local_80 = *(undefined8 *)((long)param_3 + 0xc);
  local_b0 = param_3[3];
  uStack_a8 = *(uint *)(param_3 + 4);
  uStack_a4 = uStack_a8;
  iVar5 = FUN_03190574(ZEXT816(0x3f800000),param_1,&local_230,&local_80,&local_b0);
  if (-1 < iVar5) {
    uVar1 = *(uint *)(param_3 + 4);
    uStack_228 = CONCAT44(uVar1,uVar1);
    local_230 = param_3[3];
    uStack_78 = CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),*(undefined4 *)((long)param_3 + 0x2c)
                        );
    local_80 = *(undefined8 *)((long)param_3 + 0x24);
    local_b0 = *param_3;
    uStack_a8 = *(uint *)(param_3 + 1);
    auVar14._8_8_ = uVar19;
    auVar14._0_8_ = param_1._0_8_;
    uStack_a4 = uStack_a8;
    iVar5 = FUN_03190574(ZEXT816(0x3f800000),auVar14,&local_230,&local_80,&local_b0,local_1e0 + 0x12
                        );
    if (-1 < iVar5) {
      local_230 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      FUN_03191a34(&local_1e0,&local_230);
      *(undefined8 *)(param_4 + 6) = uStack_218;
      *(undefined8 *)(param_4 + 4) = local_220;
      *param_4 = (float)local_230;
      param_4[1] = local_230._4_4_;
      memcpy(&local_b0,&local_210,0x30);
      FUN_031921bc(&local_b0,&local_80);
      param_4[10] = uStack_a8;
      param_4[0xb] = uStack_a4;
      param_4[8] = (uint)local_b0;
      param_4[9] = local_b0._4_4_;
      puVar3 = PTR_DAT_047d19e0;
      uVar1 = *(uint *)(PTR_DAT_047d19e0 + 0x2c);
      uVar10 = (uint)local_b0 ^ ((uint)local_b0 ^ uStack_a0) & *(uint *)(PTR_DAT_047d19e0 + 0x20);
      uVar11 = local_b0._4_4_ ^ (local_b0._4_4_ ^ uStack_9c) & *(uint *)(PTR_DAT_047d19e0 + 0x24);
      uVar12 = uStack_a8 ^ (uStack_a8 ^ uStack_98) & *(uint *)(PTR_DAT_047d19e0 + 0x28);
      param_4[10] = uVar12;
      param_4[0xb] = uStack_a4 ^ (uStack_a4 ^ uStack_94) & uVar1;
      param_4[8] = uVar10;
      param_4[9] = uVar11;
      uVar1 = *(uint *)(puVar3 + 0x40);
      uVar2 = *(uint *)(puVar3 + 0x44);
      fVar13 = (float)local_80;
      fVar17 = (float)((ulong)local_80 >> 0x20);
      param_4[10] = uVar12 ^ (uVar12 ^ uStack_88) & *(uint *)(puVar3 + 0x48);
      param_4[0xb] = (float)local_230;
      param_4[8] = uVar10 ^ (uVar10 ^ local_90) & uVar1;
      param_4[9] = uVar11 ^ (uVar11 ^ uStack_8c) & uVar2;
      fVar18 = (float)uStack_60;
      fVar20 = (float)((ulong)uStack_60 >> 0x20);
      fVar9 = (float)((ulong)local_70 >> 0x20);
      fVar8 = (float)uStack_78;
      if (fStack_58 < 0.0) {
        uVar19 = NEON_fmov(0x3f800000,4);
        fVar17 = fVar17 + (float)local_70;
        fVar15 = (float)uVar19 - fStack_58;
        if (fVar13 <= fVar9) {
          fVar15 = fVar15 - (fVar13 - fVar9);
          fVar16 = fStack_68 + fVar20;
          fStack_58 = fVar18 - fVar8;
          fVar13 = fVar17;
        }
        else {
          fVar16 = fVar8 + fVar18;
          fStack_58 = fStack_68 - fVar20;
          fVar13 = (fVar13 - fVar9) + fVar15;
          fVar15 = fVar17;
        }
      }
      else {
        uVar19 = NEON_fmov(0x3f800000,4);
        fVar17 = fVar17 - (float)local_70;
        fStack_58 = fStack_58 + (float)uVar19;
        if (-fVar9 <= fVar13) {
          fStack_58 = fVar13 + fVar9 + fStack_58;
          fVar16 = fVar17;
          fVar13 = fStack_68 - fVar20;
          fVar15 = fVar18 - fVar8;
        }
        else {
          fVar16 = fStack_58 - (fVar13 + fVar9);
          fStack_58 = fVar17;
          fVar13 = fVar8 + fVar18;
          fVar15 = fStack_68 + fVar20;
        }
      }
      fVar17 = fVar13 * fVar13 + fVar15 * fVar15;
      fVar9 = fVar16 * fVar16 + fStack_58 * fStack_58;
      fVar8 = fVar17 + fVar9;
      if (fVar8 == 0.0) {
        fVar13 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fStack_58 = 0.0;
      }
      else {
        fVar8 = SQRT(fVar8);
        fVar17 = SQRT(fVar17 + fVar9);
        fVar13 = fVar13 / fVar8;
        fVar15 = fVar15 / fVar17;
        fVar16 = fVar16 / fVar8;
        fStack_58 = fStack_58 / fVar17;
      }
      if ((float)local_230 != 0.0) {
        uVar7 = 0;
      }
      param_4[0xe] = fVar16;
      param_4[0xf] = fStack_58;
      param_4[0xc] = fVar13;
      param_4[0xd] = fVar15;
    }
  }
  lVar4 = local_1d8;
  uVar6 = (ulong)local_1d8._4_4_;
  local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_1e0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1e0,uVar6 * 0x90);
  }
  return uVar7;
}


