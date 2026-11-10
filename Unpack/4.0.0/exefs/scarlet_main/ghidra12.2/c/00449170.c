/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00449170; name: FUN_00449170
 */


void FUN_00449170(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong uVar29;
  long lVar30;
  uint *puVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  uint local_120 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar24 = param_2;
  if (0xf < (int)param_2) {
    uVar24 = 0x10;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if ((int)param_2 < 1) {
    uVar29 = 0;
    local_80._4_4_ = 0;
    uStack_78._0_4_ = 0;
    uVar26 = 0;
    local_68._0_4_ = 0;
    local_70._0_4_ = 0;
    uVar27 = 0;
    local_68._4_4_ = 0;
    uVar20 = 0;
    local_70._4_4_ = 0;
    uVar32 = 0;
    uVar37 = 0;
    uVar39 = 0;
    uVar21 = 0;
    local_88._4_4_ = 0;
    uVar40 = 0;
    uVar42 = 0;
    uVar36 = 0;
    uStack_98._4_4_ = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar19 = 0;
  }
  else {
    uVar42 = uVar24;
    if ((int)uVar24 < 2) {
      uVar42 = 1;
    }
    uVar29 = (ulong)uVar42;
    uVar26 = uVar29 & 3;
    if (uVar29 - 1 < 3) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      puVar31 = (uint *)((ulong)&local_a0 | 8);
      do {
        pbVar28 = (byte *)(param_3 + 3 + uVar27);
        uVar27 = uVar27 + 4;
        puVar31[-2] = (uint)pbVar28[-3];
        puVar31[-1] = (uint)pbVar28[-2];
        *puVar31 = (uint)pbVar28[-1];
        puVar31[1] = (uint)*pbVar28;
        puVar31 = puVar31 + 4;
      } while ((uVar29 & 0x7ffffffc) != uVar27);
    }
    if ((uVar42 & 3) != 0) {
      pbVar28 = (byte *)(param_3 + uVar27);
      puVar31 = local_120 + uVar27 + 0x20;
      do {
        uVar26 = uVar26 - 1;
        *puVar31 = (uint)*pbVar28;
        pbVar28 = pbVar28 + 1;
        puVar31 = puVar31 + 1;
      } while (uVar26 != 0);
    }
    uVar42 = local_90._4_4_ << 0x10;
    uVar40 = (int)local_88 << 8;
    uVar19 = (int)local_a0 << 0x18;
    uVar45 = local_a0._4_4_ << 0x10;
    uVar44 = (int)uStack_98 << 8;
    uVar36 = (int)local_90 << 0x18;
    uVar26 = local_80 & 0xffffffff;
    uVar21 = (int)local_80 << 0x18;
    uVar29 = uStack_78 >> 0x20;
    uVar39 = local_80._4_4_ << 0x10;
    uVar27 = (ulong)local_70._4_4_;
    uVar37 = (uint)uStack_78 << 8;
    uVar32 = (uint)local_70 << 0x18;
    local_70._4_4_ = local_70._4_4_ << 0x10;
    uVar20 = (uint)local_68 << 8;
  }
  param_1[0x20] = (uint)((int)uVar24 < 0xb);
  uVar19 = uVar45 | uVar19 | uVar44 | uStack_98._4_4_;
  local_88._4_4_ = uVar42 | uVar36 | uVar40 | local_88._4_4_;
  uVar42 = uVar39 | uVar21 | uVar37 | (uint)uVar29;
  uVar40 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)local_68._4_4_ * 4);
  uVar24 = *(uint *)(PTR_DAT_047cd3f0 + uVar26 * 4);
  local_68._4_4_ = local_70._4_4_ | uVar32 | uVar20 | local_68._4_4_;
  lVar34 = 0;
  bVar18 = true;
  do {
    bVar17 = bVar18;
    uVar24 = *(uint *)(PTR_DAT_047cd3f8 + uVar27 * 4) ^ uVar19 ^ uVar40 ^
             *(uint *)(PTR_DAT_047cd3f0 + (ulong)(uint)local_70 * 4) ^
             *(uint *)(PTR_DAT_047cd400 + (ulong)(uint)local_68 * 4) ^ uVar24;
    lVar33 = (ulong)(uVar24 >> 0x10 & 0xff) * 4;
    lVar23 = (ulong)(uVar24 >> 0x18) * 4;
    lVar38 = (ulong)(uVar24 >> 8 & 0xff) * 4;
    lVar25 = (ulong)(uVar24 & 0xff) * 4;
    uVar44 = *(uint *)(PTR_DAT_047cd3f0 + lVar33);
    uVar36 = *(uint *)(PTR_DAT_047cd400 + lVar23);
    uVar42 = *(uint *)(PTR_DAT_047cd3f8 + lVar23) ^ uVar42 ^ *(uint *)(PTR_DAT_047cd3e8 + lVar38) ^
             uVar44 ^ *(uint *)(PTR_DAT_047cd400 + lVar25) ^
             *(uint *)(PTR_DAT_047cd400 + (ulong)(uint)uStack_78 * 4);
    lVar41 = (ulong)(uVar42 >> 0x10 & 0xff) * 4;
    lVar47 = (ulong)(uVar42 >> 8 & 0xff) * 4;
    lVar35 = (ulong)(uVar42 & 0xff) * 4;
    uVar21 = *(uint *)(PTR_DAT_047cd3e8 + lVar47);
    lVar22 = (ulong)(uVar42 >> 0x18) * 4;
    uVar39 = *(uint *)(PTR_DAT_047cd3f0 + lVar41);
    uVar37 = *(uint *)(PTR_DAT_047cd400 + lVar22);
    uVar40 = uVar39 ^ uVar21 ^ local_68._4_4_ ^ *(uint *)(PTR_DAT_047cd3f8 + lVar35) ^ uVar37 ^
             *(uint *)(PTR_DAT_047cd3f8 + (ulong)local_80._4_4_ * 4);
    uVar32 = *(uint *)(PTR_DAT_047cd3f8 + (ulong)(uVar40 >> 8 & 0xff) * 4);
    lVar48 = (ulong)(uVar40 >> 0x10 & 0xff) * 4;
    lVar30 = (ulong)(uVar40 >> 0x18) * 4;
    lVar43 = (ulong)(uVar40 & 0xff) * 4;
    uVar20 = *(uint *)(PTR_DAT_047cd3f0 + lVar25);
    uVar1 = *(uint *)(PTR_DAT_047cd400 + lVar38);
    uVar2 = *(uint *)(PTR_DAT_047cd3e8 + lVar43);
    uVar3 = *(uint *)(PTR_DAT_047cd3f0 + lVar48);
    uVar40 = *(uint *)(PTR_DAT_047cd400 + lVar47) ^ uVar40 ^ *(uint *)(PTR_DAT_047cd3f8 + lVar41) ^
             *(uint *)(PTR_DAT_047cd3e8 + lVar35) ^ *(uint *)(PTR_DAT_047cd3f0 + lVar22) ^
             *(uint *)(PTR_DAT_047cd3f0 + lVar23);
    uVar4 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)(uVar40 >> 8 & 0xff) * 4);
    lVar23 = (ulong)(uVar40 >> 0x18) * 4;
    uVar5 = *(uint *)(PTR_DAT_047cd3f8 + lVar23);
    uVar19 = uVar32 ^ local_88._4_4_ ^ *(uint *)(PTR_DAT_047cd3e8 + lVar48) ^
             *(uint *)(PTR_DAT_047cd3f0 + lVar43) ^ *(uint *)(PTR_DAT_047cd400 + lVar30) ^
             *(uint *)(PTR_DAT_047cd3e8 + uVar29 * 4);
    lVar46 = (ulong)(uVar40 >> 0x10 & 0xff) * 4;
    lVar41 = (ulong)(uVar40 & 0xff) * 4;
    uVar6 = *(uint *)(PTR_DAT_047cd3f0 + lVar46);
    uVar45 = *(uint *)(PTR_DAT_047cd400 + lVar41);
    lVar43 = (ulong)(uVar19 >> 0x18) * 4;
    uVar7 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)(uVar19 & 0xff) * 4);
    uVar8 = *(uint *)(PTR_DAT_047cd3f8 + (ulong)(uVar19 >> 8 & 0xff) * 4);
    uVar9 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)(uVar19 >> 0x10 & 0xff) * 4);
    local_120[lVar34] =
         *(uint *)(PTR_DAT_047cd3f8 + lVar30) ^ *(uint *)(PTR_DAT_047cd3e8 + lVar48) ^
         *(uint *)(PTR_DAT_047cd3f0 + lVar35) ^ *(uint *)(PTR_DAT_047cd400 + lVar47) ^
         *(uint *)(PTR_DAT_047cd3f8 + lVar38);
    local_120[lVar34 + 1] = uVar39 ^ uVar21 ^ uVar37 ^ uVar32 ^ uVar2;
    uVar45 = uVar1 ^ uVar24 ^ uVar5 ^ uVar4 ^ uVar6 ^ uVar45;
    uVar24 = *(uint *)(PTR_DAT_047cd400 + lVar43);
    uVar21 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)(uVar45 >> 8 & 0xff) * 4);
    lVar22 = (ulong)(uVar45 & 0xff) * 4;
    uVar39 = *(uint *)(PTR_DAT_047cd3f8 + lVar22);
    lVar30 = (ulong)(uVar45 >> 0x10 & 0xff) * 4;
    uVar37 = *(uint *)(PTR_DAT_047cd3f0 + lVar30);
    lVar35 = (ulong)(uVar45 >> 0x18) * 4;
    uVar32 = *(uint *)(PTR_DAT_047cd400 + lVar35);
    local_120[lVar34 + 2] = uVar9 ^ *(uint *)(PTR_DAT_047cd3f8 + lVar43) ^ uVar20 ^ uVar1 ^ uVar3;
    local_120[lVar34 + 3] = uVar8 ^ uVar44 ^ uVar7 ^ uVar36 ^ uVar24;
    uVar36 = *(uint *)(PTR_DAT_047cd3e8 + lVar23);
    uVar20 = *(uint *)(PTR_DAT_047cd3f8 + lVar30);
    uVar1 = *(uint *)(PTR_DAT_047cd3e8 + lVar35);
    uVar2 = *(uint *)(PTR_DAT_047cd400 + lVar22);
    uVar3 = *(uint *)(PTR_DAT_047cd3f0 + lVar41);
    uVar24 = uVar21 ^ uVar39 ^ uVar42 ^ uVar37 ^ uVar32 ^ *(uint *)(PTR_DAT_047cd3f8 + lVar33);
    lVar22 = (ulong)(uVar24 >> 8 & 0xff) * 4;
    lVar33 = (ulong)(uVar24 >> 0x10 & 0xff) * 4;
    lVar23 = (ulong)(uVar24 & 0xff) * 4;
    lVar35 = (ulong)(uVar24 >> 0x18) * 4;
    uVar37 = *(uint *)(PTR_DAT_047cd3f8 + lVar46);
    uVar32 = *(uint *)(PTR_DAT_047cd400 + lVar23);
    uVar42 = *(uint *)(PTR_DAT_047cd3f8 + lVar22) ^ uVar19 ^ *(uint *)(PTR_DAT_047cd3e8 + lVar33) ^
             *(uint *)(PTR_DAT_047cd3f0 + lVar23) ^ *(uint *)(PTR_DAT_047cd400 + lVar35) ^
             *(uint *)(PTR_DAT_047cd3e8 + lVar25);
    uVar19 = *(uint *)(PTR_DAT_047cd3f0 + lVar35);
    uVar5 = *(uint *)(PTR_DAT_047cd400 + lVar33);
    lVar25 = (ulong)(uVar42 >> 8 & 0xff) * 4;
    uVar6 = *(uint *)(PTR_DAT_047cd3f0 + (ulong)(uVar42 >> 0x18) * 4);
    uVar7 = *(uint *)(PTR_DAT_047cd3f0 + lVar25);
    lVar38 = (ulong)(uVar42 >> 0x10 & 0xff) * 4;
    lVar30 = (ulong)(uVar42 & 0xff) * 4;
    uVar8 = *(uint *)(PTR_DAT_047cd3e8 + lVar38);
    uVar9 = *(uint *)(PTR_DAT_047cd400 + lVar30);
    uVar10 = *(uint *)(PTR_DAT_047cd3f8 + lVar38);
    uVar11 = *(uint *)(PTR_DAT_047cd3e8 + lVar30);
    uVar12 = *(uint *)(PTR_DAT_047cd3f0 + lVar22);
    uVar44 = *(uint *)(PTR_DAT_047cd400 + lVar25);
    local_120[lVar34 + 4] =
         *(uint *)(PTR_DAT_047cd3f8 + lVar41) ^ uVar4 ^ uVar6 ^ *(uint *)(PTR_DAT_047cd400 + lVar38)
         ^ *(uint *)(PTR_DAT_047cd3f8 + lVar35);
    local_120[lVar34 + 5] = uVar36 ^ uVar37 ^ uVar7 ^ uVar9 ^ uVar8;
    uVar44 = uVar6 ^ uVar40 ^ uVar19 ^ uVar10 ^ uVar11 ^ uVar44;
    lVar30 = (ulong)(uVar44 >> 0x18) * 4;
    lVar35 = (ulong)(uVar44 >> 8 & 0xff) * 4;
    lVar46 = (ulong)(uVar44 >> 0x10 & 0xff) * 4;
    uVar36 = *(uint *)(PTR_DAT_047cd3e8 + lVar35);
    lVar41 = (ulong)(uVar44 & 0xff) * 4;
    uVar24 = *(uint *)(PTR_DAT_047cd3f8 + lVar30) ^ uVar24 ^ uVar36 ^
             *(uint *)(PTR_DAT_047cd3f0 + lVar46) ^ *(uint *)(PTR_DAT_047cd400 + lVar41) ^
             *(uint *)(PTR_DAT_047cd400 + lVar22);
    lVar25 = (ulong)(uVar24 & 0xff) * 4;
    lVar43 = (ulong)(uVar24 >> 8 & 0xff) * 4;
    uVar37 = *(uint *)(PTR_DAT_047cd3f8 + lVar25);
    lVar22 = (ulong)(uVar24 >> 0x10 & 0xff) * 4;
    uVar4 = *(uint *)(PTR_DAT_047cd3e8 + lVar43);
    lVar38 = (ulong)(uVar24 >> 0x18) * 4;
    uVar40 = *(uint *)(PTR_DAT_047cd3e8 + lVar23);
    uVar6 = *(uint *)(PTR_DAT_047cd3f8 + lVar46);
    uVar7 = *(uint *)(PTR_DAT_047cd3f8 + lVar22);
    uVar8 = *(uint *)(PTR_DAT_047cd400 + lVar43);
    uVar9 = *(uint *)(PTR_DAT_047cd3e8 + lVar38);
    uVar10 = *(uint *)(PTR_DAT_047cd3f8 + lVar41);
    uVar11 = *(uint *)(PTR_DAT_047cd3f0 + lVar35);
    uVar13 = *(uint *)(PTR_DAT_047cd3f0 + lVar38);
    uVar14 = *(uint *)(PTR_DAT_047cd3e8 + lVar30);
    uVar42 = uVar4 ^ uVar37 ^ uVar42 ^ *(uint *)(PTR_DAT_047cd3f0 + lVar22) ^
             *(uint *)(PTR_DAT_047cd400 + lVar38) ^ *(uint *)(PTR_DAT_047cd3f8 + lVar33);
    lVar33 = (ulong)(uVar42 >> 0x10 & 0xff) * 4;
    lVar23 = (ulong)(uVar42 >> 8 & 0xff) * 4;
    uVar15 = *(uint *)(PTR_DAT_047cd3f8 + lVar23);
    uVar16 = *(uint *)(PTR_DAT_047cd3f8 + lVar33);
    local_120[lVar34 + 6] = uVar21 ^ uVar39 ^ uVar19 ^ uVar5 ^ uVar3;
    local_120[lVar34 + 7] = uVar1 ^ uVar20 ^ uVar12 ^ uVar32 ^ uVar2;
    lVar22 = (ulong)(uVar42 & 0xff) * 4;
    uVar21 = *(uint *)(PTR_DAT_047cd3e8 + lVar33);
    lVar38 = (ulong)(uVar42 >> 0x18) * 4;
    uVar39 = *(uint *)(PTR_DAT_047cd3f0 + lVar22);
    uVar32 = *(uint *)(PTR_DAT_047cd3e8 + lVar25);
    uVar20 = *(uint *)(PTR_DAT_047cd400 + lVar38);
    uVar1 = *(uint *)(PTR_DAT_047cd400 + lVar22);
    uVar19 = *(uint *)(PTR_DAT_047cd3f0 + lVar30);
    uVar2 = *(uint *)(PTR_DAT_047cd3f0 + lVar23);
    local_120[lVar34 + 10] =
         uVar4 ^ uVar37 ^ *(uint *)(PTR_DAT_047cd3f0 + lVar38) ^
         *(uint *)(PTR_DAT_047cd400 + lVar33) ^ uVar11;
    uVar19 = uVar8 ^ uVar7 ^ uVar42 ^ uVar32 ^ uVar13 ^ uVar19;
    lVar25 = (ulong)(uVar19 >> 0x18) * 4;
    uVar37 = *(uint *)(PTR_DAT_047cd3f0 + (ulong)(uVar19 >> 0x10 & 0xff) * 4);
    lVar38 = (ulong)(uVar19 & 0xff) * 4;
    uVar40 = uVar15 ^ uVar45 ^ uVar21 ^ uVar39 ^ uVar20 ^ uVar40;
    lVar23 = (ulong)(uVar19 >> 8 & 0xff) * 4;
    lVar22 = (ulong)(uVar40 >> 0x18) * 4;
    uVar42 = *(uint *)(PTR_DAT_047cd3f0 + (ulong)(uVar40 >> 8 & 0xff) * 4);
    uVar45 = *(uint *)(PTR_DAT_047cd3e8 + lVar22);
    uVar21 = *(uint *)(PTR_DAT_047cd400 + (ulong)(uVar40 & 0xff) * 4);
    local_88._4_4_ =
         *(uint *)(PTR_DAT_047cd3f8 + lVar25) ^ uVar44 ^ *(uint *)(PTR_DAT_047cd3e8 + lVar23) ^
         uVar37 ^ *(uint *)(PTR_DAT_047cd400 + lVar38) ^ *(uint *)(PTR_DAT_047cd400 + lVar35);
    uVar44 = *(uint *)(PTR_DAT_047cd3f0 + (ulong)(local_88._4_4_ >> 0x10 & 0xff) * 4);
    uVar39 = *(uint *)(PTR_DAT_047cd400 + (ulong)(local_88._4_4_ >> 0x18) * 4);
    lVar33 = (ulong)(local_88._4_4_ & 0xff) * 4;
    lVar30 = (ulong)(local_88._4_4_ >> 8 & 0xff) * 4;
    uVar32 = *(uint *)(PTR_DAT_047cd3f8 + lVar33);
    local_120[lVar34 + 8] =
         uVar10 ^ uVar36 ^ *(uint *)(PTR_DAT_047cd3f0 + lVar22) ^
         *(uint *)(PTR_DAT_047cd400 + (ulong)(uVar40 >> 0x10 & 0xff) * 4) ^ uVar16;
    local_120[lVar34 + 9] = uVar14 ^ uVar6 ^ uVar42 ^ uVar21 ^ uVar45;
    uVar42 = *(uint *)(PTR_DAT_047cd3e8 + lVar30);
    local_120[lVar34 + 0xb] = uVar8 ^ uVar7 ^ uVar9 ^ uVar2 ^ uVar1;
    uVar42 = uVar39 ^ uVar44 ^ uVar24 ^ uVar6 ^ uVar32 ^ uVar42;
    uStack_78._0_4_ = uVar42 >> 8 & 0xff;
    uVar29 = (ulong)(uVar42 & 0xff);
    local_80._4_4_ = uVar42 >> 0x10 & 0xff;
    uVar24 = *(uint *)(PTR_DAT_047cd3f8 + (ulong)(uint)uStack_78 * 4);
    lVar22 = (ulong)(uVar42 >> 0x18) * 4;
    local_68._4_4_ =
         uVar24 ^ uVar40 ^ *(uint *)(PTR_DAT_047cd3e8 + (ulong)local_80._4_4_ * 4) ^
         *(uint *)(PTR_DAT_047cd3f0 + uVar29 * 4) ^ *(uint *)(PTR_DAT_047cd400 + lVar22) ^
         *(uint *)(PTR_DAT_047cd3e8 + lVar41);
    uVar40 = *(uint *)(PTR_DAT_047cd3e8 + lVar33);
    uVar27 = (ulong)(local_68._4_4_ >> 0x10 & 0xff);
    uVar45 = *(uint *)(PTR_DAT_047cd3e8 + uVar29 * 4);
    local_120[lVar34 + 0xc] =
         *(uint *)(PTR_DAT_047cd3f8 + lVar22) ^
         *(uint *)(PTR_DAT_047cd3e8 + (ulong)local_80._4_4_ * 4) ^
         *(uint *)(PTR_DAT_047cd3f0 + lVar33) ^ *(uint *)(PTR_DAT_047cd400 + lVar30) ^
         *(uint *)(PTR_DAT_047cd3f8 + lVar38);
    local_120[lVar34 + 0xd] = uVar39 ^ uVar44 ^ uVar24 ^ uVar45 ^ uVar40;
    local_70._0_4_ = local_68._4_4_ >> 0x18;
    local_68._0_4_ = local_68._4_4_ >> 8 & 0xff;
    uVar45 = *(uint *)(PTR_DAT_047cd3f8 + (ulong)(uint)local_68 * 4);
    uVar44 = *(uint *)(PTR_DAT_047cd400 + lVar25);
    uVar24 = *(uint *)(PTR_DAT_047cd3f0 + lVar22);
    uVar40 = *(uint *)(PTR_DAT_047cd3e8 + (ulong)(local_68._4_4_ & 0xff) * 4);
    uVar36 = *(uint *)(PTR_DAT_047cd400 + uVar27 * 4);
    local_120[lVar34 + 0xe] =
         *(uint *)(PTR_DAT_047cd3e8 + uVar27 * 4) ^
         *(uint *)(PTR_DAT_047cd3f8 + (ulong)(uint)local_70 * 4) ^
         *(uint *)(PTR_DAT_047cd3f0 + lVar38) ^ *(uint *)(PTR_DAT_047cd400 + lVar23) ^ uVar24;
    local_120[lVar34 + 0xf] = uVar45 ^ uVar37 ^ uVar40 ^ uVar44 ^ uVar36;
    lVar34 = 0x10;
    bVar18 = false;
  } while (bVar17);
  *param_1 = local_120[0];
  param_1[1] = local_120[0x10] + 0x10 & 0x1f;
  param_1[2] = local_120[1];
  param_1[3] = local_120[0x11] + 0x10 & 0x1f;
  param_1[4] = local_120[2];
  param_1[5] = local_120[0x12] + 0x10 & 0x1f;
  param_1[6] = local_120[3];
  param_1[7] = local_120[0x13] + 0x10 & 0x1f;
  param_1[8] = local_120[4];
  param_1[9] = local_120[0x14] + 0x10 & 0x1f;
  param_1[10] = local_120[5];
  param_1[0xb] = local_120[0x15] + 0x10 & 0x1f;
  param_1[0xc] = local_120[6];
  param_1[0xd] = local_120[0x16] + 0x10 & 0x1f;
  param_1[0xe] = local_120[7];
  param_1[0xf] = local_120[0x17] + 0x10 & 0x1f;
  param_1[0x10] = local_120[8];
  param_1[0x11] = local_120[0x18] + 0x10 & 0x1f;
  param_1[0x12] = local_120[9];
  param_1[0x13] = local_120[0x19] + 0x10 & 0x1f;
  param_1[0x14] = local_120[10];
  param_1[0x15] = local_120[0x1a] + 0x10 & 0x1f;
  param_1[0x16] = local_120[0xb];
  param_1[0x17] = local_120[0x1b] + 0x10 & 0x1f;
  param_1[0x18] = local_120[0xc];
  param_1[0x19] = local_120[0x1c] + 0x10 & 0x1f;
  param_1[0x1a] = local_120[0xd];
  param_1[0x1b] = local_120[0x1d] + 0x10 & 0x1f;
  param_1[0x1c] = local_120[0xe];
  param_1[0x1d] = local_120[0x1e] + 0x10 & 0x1f;
  param_1[0x1e] = local_120[0xf];
  param_1[0x1f] = local_120[0x1f] + 0x10 & 0x1f;
  return;
}


