/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00475590; name: FUN_00475590
 */


void FUN_00475590(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  ulong local_70;
  ulong local_68;
  
  if (param_3 != 0) {
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar14 = param_1[2];
    uVar16 = param_1[3];
    uVar3 = param_1[4];
    uVar20 = param_1[5];
    uVar22 = param_1[6];
    uVar18 = param_1[7];
    do {
      local_70 = 0;
      uVar30 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar32 = uVar30 >> 0x20 | uVar30 << 0x20;
      lVar1 = uVar18 + (uVar22 & (uVar3 ^ 0xffffffffffffffff) | uVar20 & uVar3) + uVar32 +
              ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
              (uVar3 >> 0x29 | uVar3 << 0x17)) + 0x428a2f98d728ae22;
      uVar30 = lVar1 + uVar16;
      uVar33 = ((uVar5 >> 0x22 | uVar5 << 0x1e) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 >> 0x27 | uVar5 << 0x19)) + (uVar14 & uVar5 ^ uVar7 & uVar5 ^ uVar14 & uVar7)
               + lVar1;
      uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      local_68 = uVar4 >> 0x20 | uVar4 << 0x20;
      lVar1 = uVar22 + local_68 + (uVar30 & uVar3 | uVar20 & (uVar30 ^ 0xffffffffffffffff)) +
              ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000)) + 0x7137449123ef65cd;
      uVar4 = lVar1 + uVar14;
      uVar27 = ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
               (uVar33 >> 0x27 | uVar33 * 0x2000000)) +
               (uVar33 & uVar7 ^ uVar7 & uVar5 ^ uVar33 & uVar5) + lVar1;
      uVar29 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar29 >> 0x20 | uVar29 << 0x20;
      lVar1 = uVar20 + uVar10 + (uVar4 & uVar30 | uVar3 & (uVar4 ^ 0xffffffffffffffff)) +
              ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
              (uVar4 >> 0x29 | uVar4 * 0x800000)) + -0x4a3f043013b2c4d1;
      uVar29 = lVar1 + uVar7;
      uVar28 = ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
               (uVar27 & uVar5 ^ uVar33 & uVar5 ^ uVar27 & uVar33) + lVar1;
      uVar23 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar3 + uVar11 + (uVar29 & uVar4 | uVar30 & (uVar29 ^ 0xffffffffffffffff)) +
              ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
              (uVar29 >> 0x29 | uVar29 * 0x800000)) + -0x164a245a7e762444;
      uVar23 = lVar1 + uVar5;
      uVar2 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
              (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
              (uVar28 & uVar33 ^ uVar27 & uVar33 ^ uVar28 & uVar27) + lVar1;
      uVar12 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      lVar1 = uVar30 + uVar12 + (uVar23 & uVar29 | uVar4 & (uVar23 ^ 0xffffffffffffffff)) +
              ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000)) + 0x3956c25bf348b538;
      uVar33 = lVar1 + uVar33;
      uVar30 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar30 >> 0x20 | uVar30 << 0x20;
      uVar30 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
               (uVar2 >> 0x27 | uVar2 * 0x2000000)) +
               (uVar2 & uVar27 ^ uVar28 & uVar27 ^ uVar2 & uVar28) + lVar1;
      lVar1 = uVar4 + uVar13 + (uVar33 & uVar23 | uVar29 & (uVar33 ^ 0xffffffffffffffff)) +
              ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32) ^
              (uVar33 >> 0x29 | uVar33 * 0x800000)) + 0x59f111f1b605d019;
      uVar27 = lVar1 + uVar27;
      uVar4 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
              (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
              (uVar30 & uVar28 ^ uVar2 & uVar28 ^ uVar30 & uVar2) + lVar1;
      uVar15 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar17 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
      lVar1 = uVar29 + uVar15 + (uVar27 & uVar33 | uVar23 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000)) + -0x6dc07d5b50e6b065;
      uVar28 = lVar1 + uVar28;
      uVar29 = ((uVar4 >> 0x22 | uVar4 * 0x40000000) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
               (uVar4 >> 0x27 | uVar4 * 0x2000000)) +
               (uVar4 & uVar2 ^ uVar30 & uVar2 ^ uVar4 & uVar30) + lVar1;
      lVar1 = uVar23 + uVar17 + (uVar28 & uVar27 | uVar33 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000)) + -0x54e3a12a25927ee8;
      uVar2 = lVar1 + uVar2;
      uVar23 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
               (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
               (uVar29 & uVar30 ^ uVar4 & uVar30 ^ uVar29 & uVar4) + lVar1;
      uVar19 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
      lVar1 = uVar33 + uVar19 + (uVar2 & uVar28 | uVar27 & (uVar2 ^ 0xffffffffffffffff)) +
              ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
              (uVar2 >> 0x29 | uVar2 * 0x800000)) + -0x27f855675cfcfdbe;
      uVar30 = lVar1 + uVar30;
      uVar33 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar33 >> 0x20 | uVar33 << 0x20;
      uVar33 = ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
               (uVar23 & uVar4 ^ uVar29 & uVar4 ^ uVar23 & uVar29) + lVar1;
      lVar1 = uVar27 + uVar21 + (uVar30 & uVar2 | uVar28 & (uVar30 ^ 0xffffffffffffffff)) +
              ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000)) + 0x12835b0145706fbe;
      uVar4 = lVar1 + uVar4;
      uVar27 = ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
               (uVar33 >> 0x27 | uVar33 * 0x2000000)) +
               (uVar33 & uVar29 ^ uVar23 & uVar29 ^ uVar33 & uVar23) + lVar1;
      uVar6 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      lVar1 = uVar28 + uVar6 + (uVar4 & uVar30 | uVar2 & (uVar4 ^ 0xffffffffffffffff)) +
              ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
              (uVar4 >> 0x29 | uVar4 * 0x800000)) + 0x243185be4ee4b28c;
      uVar28 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar28 >> 0x20 | uVar28 << 0x20;
      uVar29 = lVar1 + uVar29;
      uVar28 = ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
               (uVar27 & uVar23 ^ uVar33 & uVar23 ^ uVar27 & uVar33) + lVar1;
      lVar1 = uVar2 + uVar8 + (uVar29 & uVar4 | uVar30 & (uVar29 ^ 0xffffffffffffffff)) +
              ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
              (uVar29 >> 0x29 | uVar29 * 0x800000)) + 0x550c7dc3d5ffb4e2;
      uVar23 = lVar1 + uVar23;
      uVar2 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
              (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
              (uVar28 & uVar33 ^ uVar27 & uVar33 ^ uVar28 & uVar27) + lVar1;
      uVar9 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      lVar1 = uVar30 + uVar9 + (uVar23 & uVar29 | uVar4 & (uVar23 ^ 0xffffffffffffffff)) +
              ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000)) + 0x72be5d74f27b896f;
      uVar33 = lVar1 + uVar33;
      uVar30 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
               (uVar2 >> 0x27 | uVar2 * 0x2000000)) +
               (uVar2 & uVar27 ^ uVar28 & uVar27 ^ uVar2 & uVar28) + lVar1;
      uVar24 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
      lVar1 = uVar4 + uVar24 + (uVar33 & uVar23 | uVar29 & (uVar33 ^ 0xffffffffffffffff)) +
              ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32) ^
              (uVar33 >> 0x29 | uVar33 * 0x800000)) + -0x7f214e01c4e9694f;
      uVar27 = lVar1 + uVar27;
      uVar4 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
              (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
              (uVar30 & uVar28 ^ uVar2 & uVar28 ^ uVar30 & uVar2) + lVar1;
      uVar25 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
      uVar26 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar26 >> 0x20 | uVar26 << 0x20;
      lVar1 = uVar29 + uVar25 + (uVar27 & uVar33 | uVar23 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000)) + -0x6423f958da38edcb;
      uVar28 = lVar1 + uVar28;
      uVar29 = ((uVar4 >> 0x22 | uVar4 * 0x40000000) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
               (uVar4 >> 0x27 | uVar4 * 0x2000000)) +
               (uVar4 & uVar2 ^ uVar30 & uVar2 ^ uVar4 & uVar30) + lVar1;
      lVar1 = uVar23 + uVar26 + (uVar28 & uVar27 | uVar33 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000)) + -0x3e640e8b3096d96c;
      uVar2 = lVar1 + uVar2;
      uVar23 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
               (uVar29 >> 0x27 | uVar29 * 0x2000000)) + (uVar29 & (uVar4 ^ uVar30) ^ uVar4 & uVar30)
               + lVar1;
      plVar31 = &DAT_03d01070;
      do {
        uVar32 = uVar21 + uVar32 +
                 ((local_68 >> 1 | local_68 << 0x3f) ^ local_68 >> 7 ^
                 (local_68 >> 8 | local_68 << 0x38)) +
                 ((uVar25 >> 0x13 | uVar25 << 0x2d) ^ uVar25 >> 6 ^ (uVar25 >> 0x3d | uVar25 << 3));
        lVar1 = (uVar2 & uVar28 | uVar27 & (uVar2 ^ 0xffffffffffffffff)) + uVar33 +
                ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
                (uVar2 >> 0x29 | uVar2 << 0x17)) + plVar31[-0xf] + uVar32;
        uVar30 = lVar1 + uVar30;
        uVar33 = ((uVar23 >> 0x22 | uVar23 << 0x1e) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 >> 0x27 | uVar23 << 0x19)) + ((uVar23 ^ uVar29) & uVar4 ^ uVar23 & uVar29)
                 + lVar1;
        local_68 = uVar6 + local_68 +
                   ((uVar10 >> 1 | uVar10 << 0x3f) ^ uVar10 >> 7 ^ (uVar10 >> 8 | uVar10 << 0x38)) +
                   ((uVar26 >> 0x13 | uVar26 << 0x2d) ^ uVar26 >> 6 ^ (uVar26 >> 0x3d | uVar26 << 3)
                   );
        lVar1 = (uVar30 & uVar2 | uVar28 & (uVar30 ^ 0xffffffffffffffff)) + uVar27 +
                ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000)) + plVar31[-0xe] + local_68;
        uVar4 = lVar1 + uVar4;
        uVar27 = ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
                 (uVar33 >> 0x27 | uVar33 * 0x2000000)) +
                 (uVar33 & uVar29 ^ uVar23 & uVar29 ^ uVar33 & uVar23) + lVar1;
        uVar10 = uVar8 + uVar10 +
                 ((uVar11 >> 1 | uVar11 << 0x3f) ^ uVar11 >> 7 ^ (uVar11 >> 8 | uVar11 << 0x38)) +
                 ((uVar32 >> 0x13 | uVar32 << 0x2d) ^ uVar32 >> 6 ^ (uVar32 >> 0x3d | uVar32 * 8));
        lVar1 = (uVar4 & uVar30 | uVar2 & (uVar4 ^ 0xffffffffffffffff)) + uVar28 +
                ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
                (uVar4 >> 0x29 | uVar4 * 0x800000)) + plVar31[-0xd] + uVar10;
        uVar29 = lVar1 + uVar29;
        uVar28 = ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
                 (uVar27 & uVar23 ^ uVar33 & uVar23 ^ uVar27 & uVar33) + lVar1;
        uVar11 = uVar9 + uVar11 +
                 ((uVar12 >> 1 | uVar12 << 0x3f) ^ uVar12 >> 7 ^ (uVar12 >> 8 | uVar12 << 0x38)) +
                 ((local_68 >> 0x13 | local_68 << 0x2d) ^ local_68 >> 6 ^
                 (local_68 >> 0x3d | local_68 * 8));
        lVar1 = (uVar29 & uVar4 | uVar30 & (uVar29 ^ 0xffffffffffffffff)) + uVar2 +
                ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
                (uVar29 >> 0x29 | uVar29 * 0x800000)) + plVar31[-0xc] + uVar11;
        uVar23 = lVar1 + uVar23;
        uVar2 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
                (uVar28 & uVar33 ^ uVar27 & uVar33 ^ uVar28 & uVar27) + lVar1;
        uVar12 = uVar24 + uVar12 +
                 ((uVar13 >> 1 | uVar13 << 0x3f) ^ uVar13 >> 7 ^ (uVar13 >> 8 | uVar13 << 0x38)) +
                 ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6 ^ (uVar10 >> 0x3d | uVar10 * 8));
        lVar1 = (uVar23 & uVar29 | uVar4 & (uVar23 ^ 0xffffffffffffffff)) + uVar30 +
                ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000)) + plVar31[-0xb] + uVar12;
        uVar33 = lVar1 + uVar33;
        uVar30 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
                 (uVar2 >> 0x27 | uVar2 * 0x2000000)) +
                 (uVar2 & uVar27 ^ uVar28 & uVar27 ^ uVar2 & uVar28) + lVar1;
        uVar13 = uVar25 + uVar13 +
                 ((uVar15 >> 1 | uVar15 << 0x3f) ^ uVar15 >> 7 ^ (uVar15 >> 8 | uVar15 << 0x38)) +
                 ((uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6 ^ (uVar11 >> 0x3d | uVar11 * 8));
        lVar1 = (uVar33 & uVar23 | uVar29 & (uVar33 ^ 0xffffffffffffffff)) + uVar4 +
                ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32) ^
                (uVar33 >> 0x29 | uVar33 * 0x800000)) + plVar31[-10] + uVar13;
        uVar27 = lVar1 + uVar27;
        uVar4 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
                (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                (uVar30 & uVar28 ^ uVar2 & uVar28 ^ uVar30 & uVar2) + lVar1;
        uVar15 = uVar26 + uVar15 +
                 ((uVar17 >> 1 | uVar17 << 0x3f) ^ uVar17 >> 7 ^ (uVar17 >> 8 | uVar17 << 0x38)) +
                 ((uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6 ^ (uVar12 >> 0x3d | uVar12 * 8));
        lVar1 = (uVar27 & uVar33 | uVar23 & (uVar27 ^ 0xffffffffffffffff)) + uVar29 +
                ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
                (uVar27 >> 0x29 | uVar27 * 0x800000)) + plVar31[-9] + uVar15;
        uVar28 = lVar1 + uVar28;
        uVar29 = ((uVar4 >> 0x22 | uVar4 * 0x40000000) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
                 (uVar4 >> 0x27 | uVar4 * 0x2000000)) +
                 (uVar4 & uVar2 ^ uVar30 & uVar2 ^ uVar4 & uVar30) + lVar1;
        uVar17 = uVar32 + uVar17 +
                 ((uVar19 >> 1 | uVar19 << 0x3f) ^ uVar19 >> 7 ^ (uVar19 >> 8 | uVar19 << 0x38)) +
                 ((uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6 ^ (uVar13 >> 0x3d | uVar13 * 8));
        lVar1 = (uVar28 & uVar27 | uVar33 & (uVar28 ^ 0xffffffffffffffff)) + uVar23 +
                ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
                (uVar28 >> 0x29 | uVar28 * 0x800000)) + plVar31[-8] + uVar17;
        uVar2 = lVar1 + uVar2;
        uVar23 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
                 (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
                 (uVar29 & uVar30 ^ uVar4 & uVar30 ^ uVar29 & uVar4) + lVar1;
        uVar19 = local_68 + uVar19 +
                 ((uVar21 >> 1 | uVar21 << 0x3f) ^ uVar21 >> 7 ^ (uVar21 >> 8 | uVar21 << 0x38)) +
                 ((uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6 ^ (uVar15 >> 0x3d | uVar15 * 8));
        lVar1 = (uVar2 & uVar28 | uVar27 & (uVar2 ^ 0xffffffffffffffff)) + uVar33 +
                ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
                (uVar2 >> 0x29 | uVar2 * 0x800000)) + plVar31[-7] + uVar19;
        uVar30 = lVar1 + uVar30;
        uVar33 = ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
                 (uVar23 & uVar4 ^ uVar29 & uVar4 ^ uVar23 & uVar29) + lVar1;
        uVar21 = uVar10 + uVar21 +
                 ((uVar6 >> 1 | uVar6 << 0x3f) ^ uVar6 >> 7 ^ (uVar6 >> 8 | uVar6 << 0x38)) +
                 ((uVar17 >> 0x13 | uVar17 << 0x2d) ^ uVar17 >> 6 ^ (uVar17 >> 0x3d | uVar17 * 8));
        lVar1 = (uVar30 & uVar2 | uVar28 & (uVar30 ^ 0xffffffffffffffff)) + uVar27 +
                ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000)) + plVar31[-6] + uVar21;
        uVar4 = lVar1 + uVar4;
        uVar27 = ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
                 (uVar33 >> 0x27 | uVar33 * 0x2000000)) +
                 (uVar33 & uVar29 ^ uVar23 & uVar29 ^ uVar33 & uVar23) + lVar1;
        uVar6 = uVar11 + uVar6 +
                ((uVar8 >> 1 | uVar8 << 0x3f) ^ uVar8 >> 7 ^ (uVar8 >> 8 | uVar8 << 0x38)) +
                ((uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6 ^ (uVar19 >> 0x3d | uVar19 * 8));
        lVar1 = (uVar4 & uVar30 | uVar2 & (uVar4 ^ 0xffffffffffffffff)) + uVar28 +
                ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
                (uVar4 >> 0x29 | uVar4 * 0x800000)) + plVar31[-5] + uVar6;
        uVar29 = lVar1 + uVar29;
        uVar28 = ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
                 (uVar27 & uVar23 ^ uVar33 & uVar23 ^ uVar27 & uVar33) + lVar1;
        uVar8 = uVar12 + uVar8 +
                ((uVar9 >> 1 | uVar9 << 0x3f) ^ uVar9 >> 7 ^ (uVar9 >> 8 | uVar9 << 0x38)) +
                ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6 ^ (uVar21 >> 0x3d | uVar21 * 8));
        lVar1 = (uVar29 & uVar4 | uVar30 & (uVar29 ^ 0xffffffffffffffff)) + uVar2 +
                ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
                (uVar29 >> 0x29 | uVar29 * 0x800000)) + plVar31[-4] + uVar8;
        uVar23 = lVar1 + uVar23;
        uVar2 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
                (uVar28 & uVar33 ^ uVar27 & uVar33 ^ uVar28 & uVar27) + lVar1;
        uVar9 = uVar13 + uVar9 +
                ((uVar24 >> 1 | uVar24 << 0x3f) ^ uVar24 >> 7 ^ (uVar24 >> 8 | uVar24 << 0x38)) +
                ((uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6 ^ (uVar6 >> 0x3d | uVar6 * 8));
        lVar1 = (uVar23 & uVar29 | uVar4 & (uVar23 ^ 0xffffffffffffffff)) + uVar30 +
                ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000)) + plVar31[-3] + uVar9;
        uVar33 = lVar1 + uVar33;
        uVar30 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
                 (uVar2 >> 0x27 | uVar2 * 0x2000000)) +
                 (uVar2 & uVar27 ^ uVar28 & uVar27 ^ uVar2 & uVar28) + lVar1;
        uVar24 = uVar15 + uVar24 +
                 ((uVar25 >> 1 | uVar25 << 0x3f) ^ uVar25 >> 7 ^ (uVar25 >> 8 | uVar25 << 0x38)) +
                 ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6 ^ (uVar8 >> 0x3d | uVar8 * 8));
        lVar1 = (uVar33 & uVar23 | uVar29 & (uVar33 ^ 0xffffffffffffffff)) + uVar4 +
                ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32) ^
                (uVar33 >> 0x29 | uVar33 * 0x800000)) + plVar31[-2] + uVar24;
        uVar27 = lVar1 + uVar27;
        uVar4 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
                (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                (uVar30 & uVar28 ^ uVar2 & uVar28 ^ uVar30 & uVar2) + lVar1;
        uVar25 = uVar17 + uVar25 +
                 ((uVar26 >> 1 | uVar26 << 0x3f) ^ uVar26 >> 7 ^ (uVar26 >> 8 | uVar26 << 0x38)) +
                 ((uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6 ^ (uVar9 >> 0x3d | uVar9 * 8));
        lVar1 = (uVar27 & uVar33 | uVar23 & (uVar27 ^ 0xffffffffffffffff)) + uVar29 +
                ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
                (uVar27 >> 0x29 | uVar27 * 0x800000)) + plVar31[-1] + uVar25;
        uVar28 = lVar1 + uVar28;
        uVar29 = ((uVar4 >> 0x22 | uVar4 * 0x40000000) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
                 (uVar4 >> 0x27 | uVar4 * 0x2000000)) +
                 (uVar4 & uVar2 ^ uVar30 & uVar2 ^ uVar4 & uVar30) + lVar1;
        uVar26 = uVar19 + uVar26 +
                 ((uVar32 >> 1 | uVar32 << 0x3f) ^ uVar32 >> 7 ^ (uVar32 >> 8 | uVar32 << 0x38)) +
                 ((uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6 ^ (uVar24 >> 0x3d | uVar24 * 8));
        lVar1 = (uVar28 & uVar27 | uVar33 & (uVar28 ^ 0xffffffffffffffff)) + uVar23 +
                ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
                (uVar28 >> 0x29 | uVar28 * 0x800000)) + *plVar31 + uVar26;
        uVar2 = lVar1 + uVar2;
        uVar23 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
                 (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
                 (uVar29 & (uVar4 ^ uVar30) ^ uVar4 & uVar30) + lVar1;
        local_70 = local_70 + 0x10;
        plVar31 = plVar31 + 0x10;
      } while (local_70 < 0x40);
      uVar5 = uVar23 + uVar5;
      uVar7 = uVar29 + uVar7;
      *param_1 = uVar5;
      param_1[1] = uVar7;
      uVar14 = uVar4 + uVar14;
      uVar16 = uVar30 + uVar16;
      param_1[2] = uVar14;
      param_1[3] = uVar16;
      uVar3 = uVar2 + uVar3;
      uVar20 = uVar28 + uVar20;
      param_1[4] = uVar3;
      param_1[5] = uVar20;
      param_3 = param_3 + -1;
      uVar22 = uVar27 + uVar22;
      uVar18 = uVar33 + uVar18;
      param_2 = param_2 + 0x10;
      param_1[6] = uVar22;
      param_1[7] = uVar18;
    } while (param_3 != 0);
  }
  return;
}


