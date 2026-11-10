/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00431cf0; name: FUN_00431cf0
 */


undefined8 FUN_00431cf0(int param_1,byte *param_2,uint *param_3)

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
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  
  bVar22 = param_2[1];
  uVar31 = (uint)*param_2 << 0x18 | (uint)bVar22 << 0x10;
  uVar36 = uVar31 | (uint)param_2[2] << 8 | (uint)param_2[3];
  *param_3 = uVar36;
  bVar23 = param_2[5];
  uVar32 = (uint)param_2[4] << 0x18 | (uint)bVar23 << 0x10;
  uVar39 = uVar32 | (uint)param_2[6] << 8 | (uint)param_2[7];
  param_3[1] = uVar39;
  bVar24 = param_2[9];
  uVar37 = (uint)param_2[8] << 0x18 | (uint)bVar24 << 0x10;
  uVar42 = uVar37 | (uint)param_2[10] << 8 | (uint)param_2[0xb];
  param_3[2] = uVar42;
  bVar25 = param_2[0xd];
  uVar40 = (uint)param_2[0xc] << 0x18 | (uint)bVar25 << 0x10;
  uVar26 = uVar40 | (uint)param_2[0xe] << 8 | (uint)param_2[0xf];
  param_3[3] = uVar26;
  if (param_1 == 0x80) {
    uVar35 = uVar26;
    uVar49 = uVar42;
    uVar34 = uVar39;
    uVar30 = uVar36;
  }
  else {
    uVar30 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
    param_3[8] = uVar30;
    uVar34 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
             (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
    uVar34 = uVar34 >> 0x10 | uVar34 << 0x10;
    param_3[9] = uVar34;
    if (param_1 == 0xc0) {
      uVar49 = ~uVar30;
      param_3[10] = uVar49;
      uVar35 = ~uVar34;
    }
    else {
      uVar35 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
      uVar49 = uVar35 >> 0x10 | uVar35 << 0x10;
      param_3[10] = uVar49;
      uVar35 = (*(uint *)(param_2 + 0x1c) & 0xff00ff00) >> 8 |
               (*(uint *)(param_2 + 0x1c) & 0xff00ff) << 8;
      uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
    }
    uVar30 = uVar30 ^ uVar36;
    uVar34 = uVar34 ^ uVar39;
    param_3[0xb] = uVar35;
    uVar49 = uVar49 ^ uVar42;
    uVar35 = uVar35 ^ uVar26;
  }
  uVar47 = uVar30 ^ 0xa09e667f;
  uVar12 = uVar34 ^ 0x3bcc908b;
  uVar47 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar47 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4010 + (ulong)(uVar47 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar47 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar47 >> 0x18) * 4);
  uVar13 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar12 & 0xff) * 4) ^ uVar47 ^
           *(uint *)(&DAT_03cf4810 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar12 >> 0x18) * 4);
  uVar49 = uVar13 ^ uVar49;
  uVar12 = uVar49 ^ 0xb67ae858;
  uVar13 = uVar35 ^ (uVar47 >> 8 | uVar47 << 0x18) ^ uVar13;
  uVar35 = uVar13 ^ 0x4caa73b2;
  uVar47 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4010 + (ulong)(uVar12 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar12 >> 0x18) * 4);
  uVar35 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar35 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar35 & 0xff) * 4) ^ uVar47 ^
           *(uint *)(&DAT_03cf4810 + (ulong)(uVar35 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar35 >> 0x18) * 4);
  uVar12 = uVar30 ^ uVar36 ^ uVar35;
  uVar30 = uVar12 ^ 0xc6ef372f;
  uVar35 = uVar34 ^ uVar39 ^ (uVar47 >> 8 | uVar47 << 0x18) ^ uVar35;
  uVar34 = uVar35 ^ 0xe94f82be;
  uVar30 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar30 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4010 + (ulong)(uVar30 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar30 >> 0x18) * 4);
  uVar47 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar34 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar34 & 0xff) * 4) ^ uVar30 ^
           *(uint *)(&DAT_03cf4810 + (ulong)(uVar34 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar34 >> 0x18) * 4);
  uVar34 = uVar49 ^ uVar42 ^ uVar47;
  uVar47 = uVar13 ^ uVar26 ^ (uVar30 >> 8 | uVar30 << 0x18) ^ uVar47;
  uVar30 = uVar34 ^ 0x54ff53a5;
  uVar49 = uVar47 ^ 0xf1d36f1c;
  uVar30 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar30 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4010 + (ulong)(uVar30 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar30 >> 0x18) * 4);
  uVar49 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar49 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf3c10 + (ulong)(uVar49 & 0xff) * 4) ^ uVar30 ^
           *(uint *)(&DAT_03cf4810 + (ulong)(uVar49 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf4410 + (ulong)(uVar49 >> 0x18) * 4);
  uVar12 = uVar49 ^ uVar12;
  uVar49 = uVar35 ^ (uVar30 >> 8 | uVar30 << 0x18) ^ uVar49;
  if (param_1 == 0x80) {
    param_3[4] = uVar12;
    param_3[5] = uVar49;
    param_3[6] = uVar34;
    param_3[7] = uVar47;
    uVar9 = (uint)(CONCAT44(uVar12,uVar49) >> 0x11);
    uVar14 = CONCAT44(uVar49,uVar34) >> 0x11;
    uVar15 = CONCAT44(uVar34,uVar47) >> 0x11;
    uVar8 = (uint)(CONCAT44(uVar47,uVar12) >> 0x11);
    uVar30 = (uint)uVar14;
    param_3[0xc] = uVar9;
    param_3[0xd] = uVar30;
    uVar4 = uVar49 >> 2 & 0x7fff | uVar9 << 0xf;
    uVar47 = uVar47 >> 2;
    uVar30 = uVar34 >> 2 & 0x7fff | uVar30 << 0xf;
    uVar35 = (uint)uVar15;
    param_3[0xe] = uVar35;
    param_3[0xf] = uVar8;
    uVar5 = uVar47 & 0x7fff | uVar35 << 0xf;
    uVar13 = (uint)((uVar14 & 0xffffffff) >> 2) & 0x7fff;
    uVar35 = uVar13 | uVar4 << 0xf;
    uVar1 = (uint)((uVar15 & 0xffffffff) >> 2) & 0x7fff;
    uVar6 = uVar1 | uVar30 << 0xf;
    param_3[0x10] = uVar4;
    param_3[0x11] = uVar30;
    param_3[0x18] = uVar35;
    param_3[0x19] = uVar6;
    uVar2 = uVar30 >> 2 & 0x7fff;
    uVar7 = uVar2 | uVar35 << 0xf;
    uVar12 = uVar12 >> 2;
    uVar3 = uVar5 >> 2 & 0x7fff;
    uVar6 = uVar3 | uVar6 << 0xf;
    uVar30 = (uVar8 & 0x1fffc) << 0xd;
    uVar8 = uVar12 & 0x7fff | uVar8 << 0xf;
    uVar35 = (uVar9 & 0x1fffc) << 0xd;
    uVar9 = uVar8 >> 2 & 0x7fff;
    uVar10 = uVar30 | uVar47 << 0x1e | uVar9;
    uVar4 = uVar4 >> 2 & 0x7fff;
    uVar11 = uVar35 | uVar12 << 0x1e | uVar4;
    uVar47 = uVar47 & 3 | (uVar3 | uVar1 << 0xf) << 2;
    uVar30 = uVar12 & 3 | (uVar30 | uVar9) << 2;
    param_3[0x1e] = uVar10;
    param_3[0x1f] = uVar11;
    uVar35 = uVar49 >> 2 & 3 | (uVar35 | uVar4) << 2;
    param_3[0x1c] = uVar7;
    param_3[0x1d] = uVar6;
    uVar34 = uVar34 >> 2 & 3 | (uVar2 | uVar13 << 0xf) << 2;
    param_3[0x2a] = uVar35;
    param_3[0x2b] = uVar34;
    uVar14 = CONCAT44(uVar36,uVar32) >> 0x11;
    uVar15 = CONCAT44(uVar39,uVar37) >> 0x11;
    uVar16 = CONCAT44(uVar42,uVar40) >> 0x11;
    uVar17 = CONCAT44(uVar26,uVar31) >> 0x11;
    param_3[0x30] = uVar10 >> 0xd & 0x1ffff | uVar47 << 0x11;
    param_3[0x31] = uVar11 >> 0xd & 0x1ffff | uVar30 << 0x11;
    uVar36 = (uint)uVar14;
    param_3[8] = uVar36;
    param_3[9] = (uint)uVar15;
    uVar42 = (uint)uVar16;
    uVar39 = (uint)uVar17;
    param_3[10] = uVar42;
    param_3[0xb] = uVar39;
    uVar36 = uVar36 >> 2;
    uVar18 = ((ulong)(uVar32 >> 0x11) << 0x20 | uVar15 & 0xffffffff) >> 2;
    uVar48 = uVar18 & 0xffffffff;
    uVar16 = ((ulong)(uVar37 >> 0x11) << 0x20 | uVar16 & 0xffffffff) >> 2;
    uVar32 = (uint)uVar16;
    uVar39 = uVar39 >> 2;
    uVar14 = ((ulong)(uVar31 >> 0x11) << 0x20 | uVar14 & 0xffffffff) >> 2;
    uVar38 = uVar14 & 0xffffffff;
    uVar17 = ((ulong)(uVar40 >> 0x11) << 0x20 | uVar17 & 0xffffffff) >> 2;
    uVar41 = uVar17 & 0xffffffff;
    param_3[0x32] = uVar7 >> 0xd & 0x1ffff | uVar35 << 0x11;
    param_3[0x33] = uVar6 >> 0xd & 0x1ffff | uVar34 << 0x11;
    param_3[0x1a] = (uint)(((ulong)uVar39 << 0x20 | uVar38) >> 0x11);
    param_3[0x1b] = (uint)(((ulong)uVar36 << 0x20 | uVar48) >> 0x11);
    uVar31 = (uVar32 & 0x3fff8000) << 2;
    uVar19 = ((ulong)(uVar42 >> 2) << 0x20 | uVar41) >> 0xf;
    uVar20 = ((ulong)uVar39 << 0x20 | uVar38) >> 0xf;
    uVar21 = ((ulong)uVar36 << 0x20 | uVar48) >> 0xf;
    uVar15 = (((uVar15 & 0xffffffff) >> 2) << 0x20 | uVar16 & 0xffffffff) >> 0xf;
    param_3[0x12] = uVar5;
    param_3[0x13] = uVar8;
    param_3[0x28] = uVar47;
    param_3[0x29] = uVar30;
    uVar36 = (uint)uVar18;
    param_3[0x14] = uVar36;
    param_3[0x15] = uVar32;
    uVar40 = (uint)uVar17;
    uVar37 = (uint)uVar14;
    param_3[0x16] = uVar40;
    param_3[0x17] = uVar37;
    param_3[0x20] = uVar32;
    param_3[0x21] = uVar40;
    param_3[0x22] = uVar37;
    param_3[0x23] = uVar36;
    uVar40 = (uint)((uVar19 & 0xffffffff) >> 0xf);
    uVar39 = (uint)(((uVar41 >> 0xf) << 0x20 | uVar20 & 0xffffffff) >> 0xf);
    uVar36 = (uint)(((uVar38 >> 0xf) << 0x20 | uVar21 & 0xffffffff) >> 0xf);
    uVar42 = (uint)(((uVar48 >> 0xf) << 0x20 | uVar15 & 0xffffffff) >> 0xf);
    param_3[0x24] = (uint)uVar19;
    param_3[0x25] = (uint)uVar20;
    uVar33 = 3;
    lVar43 = 0x2f;
    lVar44 = 0x2e;
    lVar45 = 0x2d;
    lVar46 = 0x2c;
    param_3[0x26] = (uint)uVar21;
    param_3[0x27] = (uint)uVar15;
  }
  else {
    uVar3 = param_3[8];
    uVar5 = param_3[9];
    uVar4 = param_3[10];
    uVar6 = param_3[0xb];
    param_3[0xe] = uVar34;
    param_3[0xf] = uVar47;
    uVar30 = uVar3 ^ uVar12 ^ 0x10e527fa;
    uVar13 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar30 & 0xff) * 4);
    uVar1 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar30 >> 8 & 0xff) * 4);
    uVar35 = uVar5 ^ uVar49 ^ 0xde682d1d;
    param_3[0xc] = uVar12;
    param_3[0xd] = uVar49;
    uVar30 = uVar1 ^ uVar13 ^ *(uint *)(&DAT_03cf4410 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf3c10 + (ulong)(uVar30 >> 0x18) * 4);
    uVar13 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar35 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf3c10 + (ulong)(uVar35 & 0xff) * 4) ^ uVar30 ^
             *(uint *)(&DAT_03cf4810 + (ulong)(uVar35 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf4410 + (ulong)(uVar35 >> 0x18) * 4);
    uVar35 = uVar4 ^ uVar34 ^ uVar13;
    uVar13 = uVar6 ^ uVar47 ^ (uVar30 >> 8 | uVar30 << 0x18) ^ uVar13;
    uVar30 = uVar35 ^ 0xb05688c2;
    uVar1 = uVar13 ^ 0xb3e6c1fd;
    uVar30 = *(uint *)(&DAT_03cf4810 + (ulong)(uVar30 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf4010 + (ulong)(uVar30 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf4410 + (ulong)(uVar30 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03cf3c10 + (ulong)(uVar30 >> 0x18) * 4);
    uVar14 = CONCAT44(uVar35,uVar13) >> 2;
    uVar2 = *(uint *)(&DAT_03cf4010 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf3c10 + (ulong)(uVar1 & 0xff) * 4) ^ uVar30 ^
            *(uint *)(&DAT_03cf4810 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_03cf4410 + (ulong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar2 ^ uVar3 ^ uVar12;
    param_3[6] = uVar35;
    param_3[7] = uVar13;
    uVar2 = uVar5 ^ uVar49 ^ (uVar30 >> 8 | uVar30 << 0x18) ^ uVar2;
    uVar15 = CONCAT44(uVar13,uVar1) >> 2;
    param_3[0x16] = (uint)uVar14;
    param_3[0x17] = (uint)uVar15;
    param_3[4] = uVar1;
    param_3[5] = uVar2;
    uVar16 = ((ulong)(uVar13 >> 2) << 0x20 | uVar15 & 0xffffffff) >> 2;
    uVar17 = ((ulong)(uVar35 >> 2) << 0x20 | uVar14 & 0xffffffff) >> 2;
    param_3[0x2a] = (uint)uVar16;
    uVar18 = CONCAT44(uVar1,uVar2) >> 2;
    uVar19 = ((ulong)(uVar1 >> 2) << 0x20 | uVar18 & 0xffffffff) >> 2;
    uVar20 = CONCAT44(uVar2,uVar35) >> 2;
    uVar30 = (uint)uVar18;
    param_3[0x14] = uVar30;
    param_3[0x15] = (uint)uVar20;
    uVar18 = ((ulong)(uVar2 >> 2) << 0x20 | uVar20 & 0xffffffff) >> 2;
    param_3[0x40] = (uint)((((uVar14 & 0xffffffff) >> 2) << 0x20 | uVar16 & 0xffffffff) >> 0xd);
    uVar35 = (uint)(CONCAT44(uVar4,uVar6) >> 0x11);
    param_3[0x41] = (uint)((((uVar15 & 0xffffffff) >> 2) << 0x20 | uVar19 & 0xffffffff) >> 0xd);
    uVar2 = uVar6 >> 2;
    param_3[0x2b] = (uint)uVar19;
    param_3[0x42] = (uint)(((ulong)(uVar30 >> 2) << 0x20 | uVar18 & 0xffffffff) >> 0xd);
    uVar10 = uVar35 << 0xf;
    uVar30 = uVar2 & 0x7fff | uVar10;
    param_3[0x28] = (uint)uVar18;
    param_3[0x29] = (uint)uVar17;
    uVar13 = (uint)(CONCAT44(uVar5,uVar4) >> 0x11);
    param_3[10] = uVar35;
    uVar7 = uVar4 >> 2;
    param_3[0x43] = (uint)((((uVar20 & 0xffffffff) >> 2) << 0x20 | uVar17 & 0xffffffff) >> 0xd);
    uVar27 = (uint)(CONCAT44(uVar3,uVar5) >> 0x11);
    uVar11 = uVar13 << 0xf;
    uVar35 = uVar7 & 0x7fff | uVar11;
    param_3[8] = uVar27;
    param_3[9] = uVar13;
    uVar8 = uVar5 >> 2;
    uVar27 = uVar27 << 0xf;
    uVar13 = uVar8 & 0x7fff | uVar27;
    uVar9 = uVar3 >> 2;
    param_3[0x24] = (uint)(CONCAT44(uVar8,uVar35) >> 2);
    param_3[0x25] = (uint)(CONCAT44(uVar7,uVar30) >> 2);
    uVar29 = (uint)(CONCAT44(uVar6,uVar3) >> 0x11);
    uVar28 = uVar29 << 0xf;
    uVar1 = uVar9 & 0x7fff | uVar28;
    param_3[0x12] = uVar30;
    param_3[0x13] = uVar1;
    param_3[0x10] = uVar13;
    param_3[0x11] = uVar35;
    param_3[0x36] = uVar8 & 0x7ffc | uVar27 | uVar5 >> 2 & 3;
    param_3[0x37] = uVar7 & 0x7ffc | uVar11 | uVar4 >> 2 & 3;
    uVar14 = CONCAT44(uVar47,uVar12) >> 0x11;
    uVar15 = ((ulong)(uVar47 >> 0x11) << 0x20 | uVar14 & 0xffffffff) >> 2;
    uVar30 = (uint)uVar15;
    param_3[0x26] = (uint)(CONCAT44(uVar2,uVar1) >> 2);
    param_3[0x27] = (uint)(CONCAT44(uVar9,uVar13) >> 2);
    param_3[0x31] = uVar30;
    param_3[0x34] = uVar2 & 0x7ffc | uVar10 | uVar6 >> 2 & 3;
    param_3[0x35] = uVar9 & 0x7ffc | uVar28 | uVar3 >> 2 & 3;
    uVar16 = CONCAT44(uVar34,uVar47) >> 0x11;
    uVar47 = (uint)uVar14;
    param_3[0xe] = (uint)uVar16;
    param_3[0xf] = uVar47;
    uVar14 = ((ulong)(uVar34 >> 0x11) << 0x20 | uVar16 & 0xffffffff) >> 2;
    uVar35 = (uint)uVar14;
    param_3[0x1d] = uVar35;
    param_3[0x1e] = uVar30;
    uVar17 = CONCAT44(uVar12,uVar49) >> 0x11;
    uVar18 = ((ulong)(uVar12 >> 0x11) << 0x20 | uVar17 & 0xffffffff) >> 2;
    param_3[0x38] = (uint)((((uVar16 & 0xffffffff) >> 2) << 0x20 | uVar15 & 0xffffffff) >> 0xf);
    param_3[0x39] = (uint)(((ulong)(uVar47 >> 2) << 0x20 | uVar18 & 0xffffffff) >> 0xf);
    uVar37 = (uint)(CONCAT44(uVar39,uVar37) >> 0x13);
    uVar40 = (uint)(CONCAT44(uVar42,uVar40) >> 0x13);
    uVar30 = (uint)(CONCAT44(uVar26,uVar31) >> 0x13);
    uVar31 = (uint)uVar18;
    param_3[0x1f] = uVar31;
    param_3[0x20] = uVar37 << 0xf | uVar42 >> 4 & 0x7fff;
    param_3[0x32] = uVar31;
    uVar15 = CONCAT44(uVar49,uVar34) >> 0x11;
    uVar31 = (uint)(CONCAT44(uVar36,uVar32) >> 0x13);
    uVar16 = ((ulong)(uVar49 >> 0x11) << 0x20 | uVar15 & 0xffffffff) >> 2;
    uVar34 = (uint)uVar16;
    param_3[0x1b] = uVar31;
    param_3[0x1c] = uVar34;
    param_3[0x18] = uVar37;
    param_3[0x19] = uVar40;
    uVar49 = (uint)uVar17;
    uVar32 = (uint)uVar15;
    param_3[0xc] = uVar49;
    param_3[0xd] = uVar32;
    param_3[0x1a] = uVar30;
    param_3[0x30] = uVar35;
    param_3[0x3a] = (uint)(((ulong)(uVar49 >> 2) << 0x20 | uVar16 & 0xffffffff) >> 0xf);
    param_3[0x3b] = (uint)(((ulong)(uVar32 >> 2) << 0x20 | uVar14 & 0xffffffff) >> 0xf);
    uVar33 = 4;
    param_3[0x21] = uVar40 << 0xf | uVar26 >> 4 & 0x7fff;
    uVar32 = uVar31 & 0x1ffff | (uVar36 >> 4) << 0x11;
    uVar37 = uVar37 & 0x1ffff | (uVar39 >> 4) << 0x11;
    param_3[0x22] = uVar36 >> 4 & 0x7fff | uVar30 << 0xf;
    param_3[0x23] = uVar31 << 0xf | uVar39 >> 4 & 0x7fff;
    uVar40 = uVar40 & 0x1ffff | (uVar42 >> 4) << 0x11;
    uVar31 = uVar30 & 0x1ffff | (uVar26 >> 4) << 0x11;
    param_3[0xb] = uVar29;
    param_3[0x33] = uVar34;
    param_3[0x2c] = uVar40;
    param_3[0x2d] = uVar31;
    uVar36 = bVar23 >> 1 & 3 | uVar32 << 2;
    uVar39 = bVar22 >> 1 & 3 | uVar31 << 2;
    uVar42 = bVar24 >> 1 & 3 | uVar37 << 2;
    uVar31 = bVar25 >> 1 & 3;
    param_3[0x2e] = uVar32;
    param_3[0x2f] = uVar37;
    uVar40 = uVar40 << 2;
    lVar43 = 0x3f;
    lVar44 = 0x3e;
    lVar45 = 0x3d;
    lVar46 = 0x3c;
  }
  param_3[lVar46] = uVar39;
  param_3[lVar45] = uVar36;
  param_3[lVar44] = uVar42;
  param_3[lVar43] = uVar40 | uVar31;
  return uVar33;
}


