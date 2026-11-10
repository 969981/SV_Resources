/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2c8b8; name: FUN_02f2c8b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02f2c8b8(long param_1,long param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [72];
  undefined2 local_f8;
  undefined1 local_f2;
  uint local_d0 [32];
  
  FUN_02f2d868(param_2 + 0x530,*(long *)(param_1 + 0x18),
               *(long *)(param_2 + 0x150) +
               (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8) & 0xffffff) * 0xc0
                               + 0x80) * 0x80,1,local_d0);
  uStack_168 = local_d0._56_8_;
  local_170 = local_d0._48_8_;
  puVar1 = (undefined8 *)
           (*(long *)(param_2 + 0x150) +
           (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                            ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8) & 0xffffff) * 0xc0 +
                           0x80) * 0x80);
  puVar6 = (undefined8 *)
           (*(long *)(param_2 + 0x150) +
           (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                            ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0xc) & 0xffffff) * 0xc0 +
                           0x80) * 0x80);
  if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
    puVar5 = puVar1;
  }
  else {
    memset(auStack_140,0,0x70);
    local_f8 = 0;
    bVar4 = (param_4 & 1) == 0;
    local_f2 = 0xff;
    puVar2 = puVar1;
    if (bVar4) {
      puVar2 = puVar6;
    }
    uStack_148 = _UNK_03cabe58;
    local_150 = _DAT_03cabe50;
    puVar5 = &local_150;
    uVar3 = *(ulong *)(param_2 + 0x540);
    if (bVar4) {
      puVar5 = puVar1;
      uVar3 = *(ulong *)(param_2 + 0x540) ^ 0x8000000080000000;
      puVar6 = &local_150;
    }
    FUN_02f2e900(param_2 + 0x540,local_d0,puVar2,&local_150,&local_160);
    fVar11 = (float)(uVar3 >> 0x20);
    local_170._0_4_ = local_d0[0xc];
    local_170._4_4_ = local_d0[0xd];
    uStack_168._0_4_ = local_d0[0xe];
    uStack_168._4_4_ = local_d0[0xf];
    uStack_168 = CONCAT44(uStack_168._4_4_ + fVar11 * fStack_154,
                          (float)uStack_168 + (float)uVar3 * fStack_158);
    local_170 = CONCAT44(local_170._4_4_ + fVar11 * fStack_15c,
                         (float)local_170 + (float)uVar3 * local_160);
  }
  FUN_02f2e900(param_2 + 0x540,local_d0,puVar5,puVar6,&local_160);
  fVar11 = (float)*(undefined8 *)(param_2 + 0x540);
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x540) >> 0x20);
  fVar16 = (float)local_170;
  fVar17 = (float)((ulong)local_170 >> 0x20);
  fVar18 = (float)uStack_168;
  fVar19 = (float)((ulong)uStack_168 >> 0x20);
  if (3 < (int)local_d0[0]) {
    local_d0[0] = 4;
  }
  auVar8._0_4_ = fVar16 - (fVar16 + fVar11 * local_160);
  auVar8._4_4_ = fVar17 - (fVar17 + fVar10 * fStack_15c);
  auVar8._8_4_ = fVar18 - (fVar18 + fVar11 * fStack_158);
  auVar8._12_4_ = fVar19 - (fVar19 + fVar10 * fStack_154);
  fVar11 = (float)*param_3;
  auVar13._0_4_ = fVar16 - fVar11;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  auVar13._4_4_ = fVar17 - fVar10;
  auVar13._8_4_ = fVar18 - fVar11;
  auVar13._12_4_ = fVar19 - fVar10;
  auVar14 = NEON_fmin(auVar13,ZEXT816(0),4);
  auVar9._8_4_ = 0x34000000;
  auVar9._0_8_ = 0x3400000034000000;
  auVar9._12_4_ = 0x34000000;
  auVar9 = NEON_fmax(auVar8,auVar9,4);
  fVar11 = (fVar16 - auVar14._0_4_) / auVar9._0_4_;
  auVar15._0_8_ = CONCAT44((fVar17 - auVar14._4_4_) / auVar9._4_4_,fVar11);
  auVar15._8_4_ = (fVar18 - auVar14._8_4_) / auVar9._8_4_;
  auVar15._12_4_ = (fVar19 - auVar14._12_4_) / auVar9._12_4_;
  auVar14._8_8_ = auVar9._8_8_;
  if (local_d0[0] < 4) {
    auVar14._0_8_ = NEON_fmov(0x3f800000,4);
    switch(local_d0[0]) {
    case 1:
      auVar14._4_4_ = fVar11;
      auVar14._0_4_ = fVar11;
      auVar14._8_8_ = 0;
      break;
    case 2:
      auVar14._0_8_ = NEON_fminp(auVar15._0_8_,auVar15._0_8_,4);
      break;
    case 3:
      uVar7 = NEON_fminp(auVar15._0_8_,auVar15._0_8_,4);
      uVar12 = CONCAT44(auVar15._8_4_,auVar15._8_4_);
      auVar14._0_8_ = NEON_fmin(uVar12,uVar7,4);
    }
  }
  else {
    auVar14._0_4_ = NEON_fminnmv(auVar15,4);
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_8_ = 0;
  }
  return auVar14;
}


