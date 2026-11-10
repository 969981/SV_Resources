/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004745e0; name: FUN_004745e0
 */


void FUN_004745e0(uint *param_1,uint *param_2,long param_3)

{
  int iVar1;
  int iVar2;
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
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  uint local_a0 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if (param_3 != 0) {
    uVar8 = *param_1;
    uVar27 = param_1[1];
    uVar7 = param_1[4];
    uVar24 = param_1[5];
    uVar25 = param_1[6];
    uVar18 = param_1[7];
    uVar9 = param_1[2];
    uVar20 = param_1[3];
    do {
      uVar29 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      local_a0[0] = uVar29 >> 0x10 | uVar29 << 0x10;
      iVar1 = uVar18 + ((uVar7 >> 6 | uVar7 << 0x1a) ^ (uVar7 >> 0xb | uVar7 << 0x15) ^
                       (uVar7 >> 0x19 | uVar7 << 7)) +
              (uVar25 & (uVar7 ^ 0xffffffff) | uVar24 & uVar7) + local_a0[0] + 0x428a2f98;
      uVar29 = iVar1 + uVar20;
      uVar23 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
      local_a0[1] = uVar23 >> 0x10 | uVar23 << 0x10;
      uVar21 = (uVar9 & uVar8 ^ uVar27 & uVar8 ^ uVar9 & uVar27) +
               ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
               (uVar8 >> 0x16 | uVar8 << 10)) + iVar1;
      iVar1 = uVar25 + (uVar29 & uVar7 | uVar24 & (uVar29 ^ 0xffffffff)) + local_a0[1] +
              ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
              (uVar29 >> 0x19 | uVar29 * 0x80)) + 0x71374491;
      uVar23 = iVar1 + uVar9;
      uVar10 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
      local_a0[2] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
      local_a0[3] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar13 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 0x16 | uVar21 * 0x400)) +
               (uVar21 & uVar27 ^ uVar27 & uVar8 ^ uVar21 & uVar8) + iVar1;
      iVar1 = uVar24 + local_a0[2] + (uVar23 & uVar29 | uVar7 & (uVar23 ^ 0xffffffff)) +
              ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80)) + -0x4a3f0431;
      uVar10 = iVar1 + uVar27;
      uVar26 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
               (uVar13 >> 0x16 | uVar13 * 0x400)) +
               (uVar13 & uVar8 ^ uVar21 & uVar8 ^ uVar13 & uVar21) + iVar1;
      uVar12 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
      local_90 = uVar12 >> 0x10 | uVar12 << 0x10;
      iVar1 = uVar7 + local_a0[3] + (uVar10 & uVar23 | uVar29 & (uVar10 ^ 0xffffffff)) +
              ((uVar10 >> 6 | uVar10 * 0x4000000) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 0x19 | uVar10 * 0x80)) + -0x164a245b;
      uVar12 = iVar1 + uVar8;
      iVar2 = uVar29 + local_90 + (uVar12 & uVar10 | uVar23 & (uVar12 ^ 0xffffffff)) +
              ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 0x19 | uVar12 * 0x80)) + 0x3956c25b;
      uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
               (uVar26 >> 0x16 | uVar26 * 0x400)) +
               (uVar26 & uVar21 ^ uVar13 & uVar21 ^ uVar26 & uVar13) + iVar1;
      uVar21 = iVar2 + uVar21;
      uVar11 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
      local_8c = uVar11 >> 0x10 | uVar11 << 0x10;
      uVar11 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
               (uVar29 >> 0x16 | uVar29 * 0x400)) +
               (uVar29 & uVar13 ^ uVar26 & uVar13 ^ uVar29 & uVar26) + iVar2;
      uVar6 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
      local_88 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar23 + local_8c + (uVar21 & uVar12 | uVar10 & (uVar21 ^ 0xffffffff)) +
              ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80)) + 0x59f111f1;
      uVar13 = iVar1 + uVar13;
      uVar23 = ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar11 >> 0xd | uVar11 * 0x80000) ^
               (uVar11 >> 0x16 | uVar11 * 0x400)) +
               (uVar11 & uVar26 ^ uVar29 & uVar26 ^ uVar11 & uVar29) + iVar1;
      uVar6 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
      local_84 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar10 + local_88 + (uVar13 & uVar21 | uVar12 & (uVar13 ^ 0xffffffff)) +
              ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
              (uVar13 >> 0x19 | uVar13 * 0x80)) + -0x6dc07d5c;
      uVar26 = iVar1 + uVar26;
      uVar10 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
               (uVar23 >> 0x16 | uVar23 * 0x400)) +
               (uVar23 & uVar29 ^ uVar11 & uVar29 ^ uVar23 & uVar11) + iVar1;
      uVar6 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
      local_80 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar12 + local_84 + (uVar26 & uVar13 | uVar21 & (uVar26 ^ 0xffffffff)) +
              ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
              (uVar26 >> 0x19 | uVar26 * 0x80)) + -0x54e3a12b;
      uVar29 = iVar1 + uVar29;
      uVar12 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
      uStack_7c = uVar12 >> 0x10 | uVar12 << 0x10;
      uVar12 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) +
               (uVar10 & uVar11 ^ uVar23 & uVar11 ^ uVar10 & uVar23) + iVar1;
      iVar1 = uVar21 + local_80 + (uVar29 & uVar26 | uVar13 & (uVar29 ^ 0xffffffff)) +
              ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
              (uVar29 >> 0x19 | uVar29 * 0x80)) + -0x27f85568;
      uVar11 = iVar1 + uVar11;
      uVar21 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
               (uVar12 >> 0x16 | uVar12 * 0x400)) +
               (uVar12 & uVar23 ^ uVar10 & uVar23 ^ uVar12 & uVar10) + iVar1;
      uVar6 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
      local_78 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uStack_7c + uVar13 + (uVar11 & uVar29 | uVar26 & (uVar11 ^ 0xffffffff)) +
              ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 0x19 | uVar11 * 0x80)) + 0x12835b01;
      uVar23 = iVar1 + uVar23;
      uVar13 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 0x16 | uVar21 * 0x400)) +
               (uVar21 & uVar10 ^ uVar12 & uVar10 ^ uVar21 & uVar12) + iVar1;
      iVar1 = local_78 + uVar26 + (uVar23 & uVar11 | uVar29 & (uVar23 ^ 0xffffffff)) +
              ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80)) + 0x243185be;
      uVar10 = iVar1 + uVar10;
      uVar26 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
               (uVar13 >> 0x16 | uVar13 * 0x400)) +
               (uVar13 & uVar12 ^ uVar21 & uVar12 ^ uVar13 & uVar21) + iVar1;
      uVar6 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
      local_74 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_74 + uVar29 + (uVar10 & uVar23 | uVar11 & (uVar10 ^ 0xffffffff)) +
              ((uVar10 >> 6 | uVar10 * 0x4000000) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
              (uVar10 >> 0x19 | uVar10 * 0x80)) + 0x550c7dc3;
      uVar12 = iVar1 + uVar12;
      uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
               (uVar26 >> 0x16 | uVar26 * 0x400)) +
               (uVar26 & uVar21 ^ uVar13 & uVar21 ^ uVar26 & uVar13) + iVar1;
      uVar6 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
      local_70 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_70 + uVar11 + (uVar12 & uVar10 | uVar23 & (uVar12 ^ 0xffffffff)) +
              ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 0x19 | uVar12 * 0x80)) + 0x72be5d74;
      uVar21 = iVar1 + uVar21;
      uVar11 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
               (uVar29 >> 0x16 | uVar29 * 0x400)) +
               (uVar29 & uVar13 ^ uVar26 & uVar13 ^ uVar29 & uVar26) + iVar1;
      uVar6 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
      local_6c = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_6c + uVar23 + (uVar21 & uVar12 | uVar10 & (uVar21 ^ 0xffffffff)) +
              ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80)) + -0x7f214e02;
      uVar13 = iVar1 + uVar13;
      uVar23 = ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar11 >> 0xd | uVar11 * 0x80000) ^
               (uVar11 >> 0x16 | uVar11 * 0x400)) +
               (uVar11 & uVar26 ^ uVar29 & uVar26 ^ uVar11 & uVar29) + iVar1;
      uVar6 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
      local_68 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_68 + uVar10 + (uVar13 & uVar21 | uVar12 & (uVar13 ^ 0xffffffff)) +
              ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
              (uVar13 >> 0x19 | uVar13 * 0x80)) + -0x6423f959;
      uVar26 = iVar1 + uVar26;
      uVar10 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
               (uVar23 >> 0x16 | uVar23 * 0x400)) +
               (uVar23 & uVar29 ^ uVar11 & uVar29 ^ uVar23 & uVar11) + iVar1;
      uVar6 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
      local_64 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_64 + uVar12 + (uVar26 & uVar13 | uVar21 & (uVar26 ^ 0xffffffff)) +
              ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
              (uVar26 >> 0x19 | uVar26 * 0x80)) + -0x3e640e8c;
      uVar12 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar23 ^ uVar11) ^ uVar23 & uVar11) +
               iVar1;
      uVar29 = iVar1 + uVar29;
      piVar19 = &DAT_03d00ec4;
      uVar31 = 0x12;
      do {
        iVar30 = (int)uVar31;
        uVar16 = (ulong)(iVar30 + 0xc) & 0xe;
        uVar14 = (ulong)(iVar30 - 1) & 9;
        uVar17 = uVar31 - 2;
        uVar3 = (uint)uVar17 & 8;
        uVar4 = local_a0[uVar14];
        uVar6 = local_a0[uVar16];
        iVar1 = piVar19[-7];
        iVar2 = piVar19[-6];
        uVar6 = local_a0[uVar3] + local_a0[(ulong)(iVar30 + 7) & 9] +
                ((uVar4 >> 0x12 | uVar4 << 0xe) ^ uVar4 >> 3 ^ (uVar4 >> 7 | uVar4 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar3] = uVar6;
        iVar1 = ((uVar29 >> 6 | uVar29 << 0x1a) ^ (uVar29 >> 0xb | uVar29 << 0x15) ^
                (uVar29 >> 0x19 | uVar29 << 7)) + uVar21 +
                (uVar13 & (uVar29 ^ 0xffffffff) | uVar26 & uVar29) + iVar1 + uVar6;
        uVar11 = iVar1 + uVar11;
        uVar21 = ((uVar12 >> 2 | uVar12 << 0x1e) ^ (uVar12 >> 0xd | uVar12 << 0x13) ^
                 (uVar12 >> 0x16 | uVar12 << 10)) + ((uVar12 ^ uVar10) & uVar23 ^ uVar12 & uVar10) +
                 iVar1;
        uVar22 = uVar31 & 10;
        uVar32 = (ulong)(iVar30 + 0xd) & 0xf;
        uVar6 = local_a0[uVar22];
        uVar5 = local_a0[uVar32];
        uVar6 = local_a0[uVar31 + 8 & 10] + uVar4 +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar5 >> 0x13 | uVar5 << 0xd) ^ uVar5 >> 10 ^ (uVar5 >> 0x11 | uVar5 << 0xf));
        local_a0[uVar14] = uVar6;
        iVar1 = iVar2 + uVar13 + (uVar11 & uVar29 | uVar26 & (uVar11 ^ 0xffffffff)) +
                ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
                (uVar11 >> 0x19 | uVar11 * 0x80)) + uVar6;
        uVar23 = iVar1 + uVar23;
        uVar13 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
                 (uVar21 >> 0x16 | uVar21 * 0x400)) +
                 (uVar21 & uVar10 ^ uVar12 & uVar10 ^ uVar21 & uVar12) + iVar1;
        uVar15 = (ulong)(iVar30 + 0xe) & 8;
        uVar6 = local_a0[uVar3 | 3];
        uVar4 = local_a0[uVar15];
        uVar6 = local_a0[uVar22] + local_a0[(ulong)(iVar30 + 9) & 0xb] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        iVar1 = piVar19[-5];
        local_a0[uVar22] = uVar6;
        iVar2 = piVar19[-4];
        uVar22 = (ulong)(iVar30 + 2) & 0xc;
        uVar28 = (ulong)(iVar30 + 1) & 0xb;
        iVar1 = iVar1 + uVar26 + uVar6 + (uVar23 & uVar11 | uVar29 & (uVar23 ^ 0xffffffff)) +
                ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
                (uVar23 >> 0x19 | uVar23 * 0x80));
        uVar6 = local_a0[uVar22];
        uVar10 = iVar1 + uVar10;
        uVar4 = local_a0[uVar14];
        uVar26 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
                 (uVar13 >> 0x16 | uVar13 * 0x400)) +
                 (uVar13 & uVar12 ^ uVar21 & uVar12 ^ uVar13 & uVar21) + iVar1;
        uVar6 = local_a0[uVar28] + local_a0[(ulong)(iVar30 + 10) & 0xc] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        local_a0[uVar28] = uVar6;
        iVar1 = iVar2 + uVar29 + uVar6 + (uVar10 & uVar23 | uVar11 & (uVar10 ^ 0xffffffff)) +
                ((uVar10 >> 6 | uVar10 * 0x4000000) ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^
                (uVar10 >> 0x19 | uVar10 * 0x80));
        uVar6 = local_a0[uVar3 | 5];
        uVar12 = iVar1 + uVar12;
        uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
                 (uVar26 >> 0x16 | uVar26 * 0x400)) +
                 (uVar26 & uVar21 ^ uVar13 & uVar21 ^ uVar26 & uVar13) + iVar1;
        uVar4 = local_a0[(ulong)(iVar30 + 0x10) & 10];
        iVar1 = piVar19[-3];
        iVar2 = piVar19[-2];
        uVar6 = local_a0[uVar22] + local_a0[(ulong)(iVar30 + 0xb) & 0xd] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        local_a0[uVar22] = uVar6;
        iVar1 = iVar1 + uVar11 + uVar6 + (uVar12 & uVar10 | uVar23 & (uVar12 ^ 0xffffffff)) +
                ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
                (uVar12 >> 0x19 | uVar12 * 0x80));
        uVar6 = local_a0[(ulong)(iVar30 + 0x11) & 0xb];
        uVar21 = iVar1 + uVar21;
        uVar14 = (ulong)(iVar30 + 4) & 0xe;
        uVar11 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
                 (uVar29 >> 0x16 | uVar29 * 0x400)) +
                 (uVar29 & uVar13 ^ uVar26 & uVar13 ^ uVar29 & uVar26) + iVar1;
        uVar4 = local_a0[uVar14];
        uVar22 = (ulong)(iVar30 + 3) & 0xd;
        uVar6 = local_a0[uVar22] + local_a0[uVar16] +
                ((uVar4 >> 0x12 | uVar4 << 0xe) ^ uVar4 >> 3 ^ (uVar4 >> 7 | uVar4 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar22] = uVar6;
        iVar1 = iVar2 + uVar23 + uVar6 + (uVar21 & uVar12 | uVar10 & (uVar21 ^ 0xffffffff)) +
                ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
                (uVar21 >> 0x19 | uVar21 * 0x80));
        uVar13 = iVar1 + uVar13;
        uVar23 = ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar11 >> 0xd | uVar11 * 0x80000) ^
                 (uVar11 >> 0x16 | uVar11 * 0x400)) +
                 (uVar11 & uVar26 ^ uVar29 & uVar26 ^ uVar11 & uVar29) + iVar1;
        uVar6 = local_a0[(ulong)(iVar30 + 0x12) & 0xc];
        uVar3 = local_a0[uVar3 | 7];
        iVar1 = piVar19[-1];
        uVar6 = local_a0[uVar14] + local_a0[uVar32] +
                ((uVar3 >> 0x12 | uVar3 << 0xe) ^ uVar3 >> 3 ^ (uVar3 >> 7 | uVar3 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar14] = uVar6;
        uVar3 = local_a0[(ulong)(iVar30 + 6) & 8];
        iVar1 = iVar1 + uVar10 + uVar6 + (uVar13 & uVar21 | uVar12 & (uVar13 ^ 0xffffffff)) +
                ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
                (uVar13 >> 0x19 | uVar13 * 0x80));
        uVar22 = (ulong)(iVar30 + 5) & 0xf;
        uVar10 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
                 (uVar23 >> 0x16 | uVar23 * 0x400)) +
                 (uVar23 & uVar29 ^ uVar11 & uVar29 ^ uVar23 & uVar11) + iVar1;
        uVar6 = local_a0[(ulong)(iVar30 + 0x13) & 0xd];
        uVar26 = iVar1 + uVar26;
        iVar1 = *piVar19;
        uVar6 = local_a0[uVar22] + local_a0[uVar15] +
                ((uVar3 >> 0x12 | uVar3 << 0xe) ^ uVar3 >> 3 ^ (uVar3 >> 7 | uVar3 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar22] = uVar6;
        iVar1 = iVar1 + uVar12 + uVar6 + (uVar26 & uVar13 | uVar21 & (uVar26 ^ 0xffffffff)) +
                ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
                (uVar26 >> 0x19 | uVar26 * 0x80));
        uVar29 = iVar1 + uVar29;
        uVar12 = ((uVar10 >> 2 | uVar10 * 0x40000000) ^ (uVar10 >> 0xd | uVar10 * 0x80000) ^
                 (uVar10 >> 0x16 | uVar10 * 0x400)) + (uVar10 & (uVar23 ^ uVar11) ^ uVar23 & uVar11)
                 + iVar1;
        piVar19 = piVar19 + 8;
        uVar31 = uVar31 + 8;
      } while (uVar17 < 0x38);
      uVar8 = uVar12 + uVar8;
      uVar27 = uVar10 + uVar27;
      *param_1 = uVar8;
      param_1[1] = uVar27;
      uVar9 = uVar23 + uVar9;
      uVar20 = uVar11 + uVar20;
      param_1[2] = uVar9;
      param_1[3] = uVar20;
      param_3 = param_3 + -1;
      uVar7 = uVar29 + uVar7;
      uVar24 = uVar26 + uVar24;
      param_1[4] = uVar7;
      param_1[5] = uVar24;
      param_2 = param_2 + 0x10;
      uVar25 = uVar13 + uVar25;
      uVar18 = uVar21 + uVar18;
      param_1[6] = uVar25;
      param_1[7] = uVar18;
    } while (param_3 != 0);
  }
  return;
}


