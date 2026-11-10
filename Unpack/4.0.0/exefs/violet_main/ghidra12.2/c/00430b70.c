/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00430b70; name: FUN_00430b70
 */


undefined8 FUN_00430b70(byte *param_1,int param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  iVar5 = param_2 + 0x11f;
  if (-1 < param_2 + 0x100) {
    iVar5 = param_2 + 0x100;
  }
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar39 = param_2 - 0x80;
  if (((uVar39 != 0) && (param_2 != 0x100)) && (param_2 != 0xc0)) {
    return 0xfffffffe;
  }
  param_3[0x44] = iVar5 >> 5;
  bVar14 = *param_1;
  bVar15 = param_1[1];
  uVar11 = param_2 - 0x41;
  if (-1 < (int)uVar39) {
    uVar11 = uVar39;
  }
  bVar16 = param_1[2];
  bVar17 = param_1[4];
  uVar30 = (uint)bVar17 << 0x18;
  uVar31 = (uint)bVar14 << 0x18;
  uVar39 = uVar31 | (uint)bVar15 << 0x10;
  bVar18 = param_1[3];
  bVar19 = param_1[5];
  bVar20 = param_1[8];
  bVar21 = param_1[9];
  uVar2 = uVar30 | (uint)bVar19 << 0x10;
  uVar34 = uVar39 | (uint)bVar16 << 8 | (uint)bVar18;
  bVar22 = param_1[6];
  bVar23 = param_1[7];
  uVar32 = (uint)bVar20 << 0x18;
  uVar3 = uVar32 | (uint)bVar21 << 0x10;
  bVar24 = param_1[10];
  uVar35 = uVar2 | (uint)bVar22 << 8 | (uint)bVar23;
  bVar25 = param_1[0xb];
  bVar26 = param_1[0xc];
  uVar33 = (uint)bVar26 << 0x18;
  uVar36 = uVar3 | (uint)bVar24 << 8 | (uint)bVar25;
  bVar27 = param_1[0xd];
  bVar28 = param_1[0xe];
  lVar1 = (long)((int)uVar11 >> 6) * 0x10;
  bVar29 = param_1[0xf];
  uVar4 = uVar33 | (uint)bVar27 << 0x10;
  uVar37 = uVar4 | (uint)bVar28 << 8 | (uint)bVar29;
  uVar6 = *(uint *)(&DAT_03cf3bc0 + lVar1) ^ uVar34;
  uVar7 = *(uint *)(&DAT_03cf3bc8 + lVar1) ^ uVar36;
  uVar8 = *(uint *)(&DAT_03cf3bcc + lVar1) ^ uVar37;
  uVar9 = *(uint *)(&DAT_03cf3bc4 + lVar1) ^ uVar35;
  uVar10 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar6 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf37c0 + (ulong)(uVar6 & 0xff) * 4);
  uVar42 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf37c0 + (ulong)(uVar7 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf37c0 + (ulong)(uVar9 & 0xff) * 4) ^ uVar42;
  uVar6 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf37c0 + (ulong)(uVar8 & 0xff) * 4);
  uVar42 = uVar6 ^ uVar42;
  uVar6 = uVar6 ^ uVar7;
  uVar7 = uVar7 ^ uVar10;
  uVar10 = uVar42 ^ uVar10;
  uVar42 = uVar42 ^ uVar7;
  uVar9 = uVar42 >> 0x10 | uVar42 << 0x10;
  uVar8 = uVar9 ^ ((uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8);
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar9 = uVar9 ^ uVar10;
  uVar6 = uVar8 ^ uVar7;
  if (param_2 < 0x81) {
    uVar41 = 0;
    uVar42 = 0;
  }
  else {
    uVar42 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8;
    uVar41 = uVar42 >> 0x10 | uVar42 << 0x10;
    uVar42 = (*(uint *)(param_1 + 0x14) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x14) & 0xff00ff) << 8;
    uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
    if (0xc0 < param_2) {
      uVar43 = (*(uint *)(param_1 + 0x18) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x18) & 0xff00ff) << 8;
      uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
      uVar40 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
      uVar40 = uVar40 >> 0x10 | uVar40 << 0x10;
      goto LAB_00430dec;
    }
  }
  uVar43 = 0;
  uVar40 = 0;
LAB_00430dec:
  uVar42 = uVar9 ^ uVar7 ^ uVar42;
  lVar1 = ((long)((ulong)uVar11 << 0x20) >> 0x26) * 0x10;
  uVar43 = uVar6 ^ uVar9 ^ uVar43;
  uVar40 = uVar8 ^ uVar10 ^ uVar40;
  uVar11 = *(uint *)(&DAT_03cf3bd4 + lVar1) ^ uVar42;
  uVar7 = *(uint *)(&DAT_03cf3bd8 + lVar1) ^ uVar43;
  uVar8 = *(uint *)(&DAT_03cf3bdc + lVar1) ^ uVar40;
  uVar41 = uVar41 ^ uVar6;
  uVar6 = *(uint *)(&DAT_03cf3bd0 + lVar1) ^ uVar41;
  uVar7 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar7 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar8 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar11 & 0xff) * 4) ^ uVar7;
  uVar11 = uVar9 ^ uVar8;
  uVar9 = uVar9 ^ uVar7;
  uVar7 = (uVar11 & 0xff00ff) << 8 | uVar11 >> 8 & 0xff00ff;
  uVar11 = *(uint *)(&DAT_03cf37c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar6 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar6 & 0xff) * 4);
  uVar8 = uVar8 ^ uVar11;
  uVar12 = uVar9 ^ uVar8;
  uVar9 = uVar9 ^ uVar11;
  uVar11 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar38 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar11 = (uVar11 >> 0x10 | uVar11 << 0x10) ^ uVar12;
  uVar12 = uVar7 ^ uVar12;
  uVar6 = uVar11 ^ uVar38;
  uVar7 = uVar11 ^ uVar37 ^ uVar7;
  uVar11 = uVar6 ^ uVar34;
  uVar8 = uVar11 ^ *(uint *)(&DAT_03cf3be0 + lVar1);
  uVar9 = uVar7 ^ *(uint *)(&DAT_03cf3bec + lVar1);
  uVar6 = uVar6 ^ uVar36 ^ uVar12;
  uVar10 = uVar6 ^ *(uint *)(&DAT_03cf3be8 + lVar1);
  uVar13 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf37c0 + (ulong)(uVar8 & 0xff) * 4);
  uVar12 = uVar38 ^ uVar35 ^ uVar12;
  uVar8 = uVar12 ^ *(uint *)(&DAT_03cf3be4 + lVar1);
  uVar38 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar10 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar10 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf37c0 + (ulong)(uVar10 & 0xff) * 4);
  uVar10 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar9 >> 0x18) * 4) ^
           *(uint *)(&DAT_03cf33c0 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_03cf37c0 + (ulong)(uVar9 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03cf2fc0 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf2bc0 + (ulong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_03cf33c0 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cf37c0 + (ulong)(uVar8 & 0xff) * 4) ^ uVar38;
  uVar38 = uVar10 ^ uVar38;
  uVar9 = uVar38 ^ uVar13;
  uVar13 = uVar8 ^ uVar13;
  uVar10 = uVar10 ^ uVar8;
  param_3[4] = uVar41 ^ uVar11 >> 0x13 ^ uVar7 << 0xd;
  param_3[5] = uVar42 ^ uVar11 << 0xd ^ uVar12 >> 0x13;
  uVar38 = uVar38 ^ uVar13;
  uVar8 = uVar38 >> 0x10 | uVar38 << 0x10;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar38 = ((uVar9 & 0xff00ff) << 8 | uVar9 >> 8 & 0xff00ff) ^ uVar8;
  uVar8 = uVar8 ^ uVar10;
  uVar9 = uVar10 ^ uVar40 ^ uVar38;
  uVar38 = uVar38 ^ uVar13;
  uVar10 = uVar13 ^ uVar42 ^ uVar8;
  uVar13 = uVar38 ^ uVar41;
  param_3[6] = uVar43 ^ uVar6 >> 0x13 ^ uVar12 << 0xd;
  uVar38 = uVar8 ^ uVar43 ^ uVar38;
  param_3[7] = uVar40 ^ uVar7 >> 0x13 ^ uVar6 << 0xd;
  param_3[8] = uVar11 ^ uVar13 >> 0x13 ^ uVar9 << 0xd;
  param_3[9] = uVar12 ^ uVar10 >> 0x13 ^ uVar13 << 0xd;
  param_3[10] = uVar6 ^ uVar10 << 0xd ^ uVar38 >> 0x13;
  param_3[0xb] = uVar7 ^ uVar9 >> 0x13 ^ uVar38 << 0xd;
  param_3[0xc] = (uint)(CONCAT44(uVar37,uVar39) >> 0x13) ^ uVar13;
  param_3[0xd] = (uint)(CONCAT44(uVar34,uVar2) >> 0x13) ^ uVar10;
  param_3[0xe] = (uint)(CONCAT44(uVar35,uVar3) >> 0x13) ^ uVar38;
  param_3[0xf] = (uint)(CONCAT44(uVar36,uVar4) >> 0x13) ^ uVar9;
  param_3[0x10] = uVar34 ^ uVar41 >> 0x1f ^ uVar40 << 1;
  param_3[0x11] = uVar35 ^ uVar41 << 1 ^ uVar42 >> 0x1f;
  param_3[0x12] = uVar36 ^ uVar42 << 1 ^ uVar43 >> 0x1f;
  param_3[0x13] = uVar37 ^ uVar43 << 1 ^ uVar40 >> 0x1f;
  param_3[0x14] = uVar41 ^ uVar11 >> 0x1f ^ uVar7 << 1;
  param_3[0x15] = uVar42 ^ uVar11 << 1 ^ uVar12 >> 0x1f;
  param_3[0x16] = uVar43 ^ uVar6 >> 0x1f ^ uVar12 << 1;
  param_3[0x17] = uVar40 ^ uVar7 >> 0x1f ^ uVar6 << 1;
  param_3[0x18] = uVar11 ^ uVar13 >> 0x1f ^ uVar9 << 1;
  param_3[0x19] = uVar12 ^ uVar10 >> 0x1f ^ uVar13 << 1;
  param_3[0x1a] = uVar6 ^ uVar10 << 1 ^ uVar38 >> 0x1f;
  param_3[0x1b] = uVar7 ^ uVar9 >> 0x1f ^ uVar38 << 1;
  param_3[0x1c] =
       ((uint)(bVar14 >> 7) |
       (uVar33 & 0x7fffffff | (uint)bVar27 << 0x10 | (uint)bVar28 << 8 | (uint)bVar29) << 1) ^
       uVar13;
  param_3[0x1d] =
       ((uint)(bVar17 >> 7) |
       (uVar31 & 0x7fffffff | (uint)bVar15 << 0x10 | (uint)bVar16 << 8 | (uint)bVar18) << 1) ^
       uVar10;
  param_3[0x1e] =
       ((uint)(bVar20 >> 7) |
       (uVar30 & 0x7fffffff | (uint)bVar19 << 0x10 | (uint)bVar22 << 8 | (uint)bVar23) << 1) ^
       uVar38;
  param_3[0x1f] =
       ((uint)(bVar26 >> 7) |
       (uVar32 & 0x7fffffff | (uint)bVar21 << 0x10 | (uint)bVar24 << 8 | (uint)bVar25) << 1) ^ uVar9
  ;
  param_3[0x20] = uVar34 ^ uVar42 << 0x1d ^ uVar43 >> 3;
  param_3[0x21] = uVar35 ^ uVar43 << 0x1d ^ uVar40 >> 3;
  param_3[0x22] = uVar36 ^ uVar41 >> 3 ^ uVar40 << 0x1d;
  param_3[0x23] = uVar37 ^ uVar41 << 0x1d ^ uVar42 >> 3;
  param_3[0x24] = uVar41 ^ uVar6 >> 3 ^ uVar12 << 0x1d;
  param_3[0x25] = uVar42 ^ uVar7 >> 3 ^ uVar6 << 0x1d;
  *param_3 = uVar34 ^ uVar41 >> 0x13 ^ uVar40 << 0xd;
  param_3[1] = uVar35 ^ uVar41 << 0xd ^ uVar42 >> 0x13;
  param_3[2] = uVar36 ^ uVar42 << 0xd ^ uVar43 >> 0x13;
  param_3[3] = uVar37 ^ uVar43 << 0xd ^ uVar40 >> 0x13;
  param_3[0x26] = uVar43 ^ uVar11 >> 3 ^ uVar7 << 0x1d;
  param_3[0x27] = uVar40 ^ uVar11 << 0x1d ^ uVar12 >> 3;
  param_3[0x28] = uVar11 ^ uVar10 << 0x1d ^ uVar38 >> 3;
  param_3[0x29] = uVar12 ^ uVar9 >> 3 ^ uVar38 << 0x1d;
  param_3[0x2a] = uVar6 ^ uVar13 >> 3 ^ uVar9 << 0x1d;
  param_3[0x2b] = uVar7 ^ uVar10 >> 3 ^ uVar13 << 0x1d;
  param_3[0x2c] = (uint)(CONCAT14(bVar23,uVar36) >> 3) ^ uVar13;
  param_3[0x2d] = (uint)(CONCAT14(bVar25,uVar37) >> 3) ^ uVar10;
  param_3[0x2e] = (uint)(CONCAT14(bVar29,uVar34) >> 3) ^ uVar38;
  param_3[0x2f] = (uint)(CONCAT14(bVar18,uVar35) >> 3) ^ uVar9;
  param_3[0x30] = uVar34 ^ uVar41 << 0x1f ^ uVar42 >> 1;
  param_3[0x31] = uVar35 ^ uVar42 << 0x1f ^ uVar43 >> 1;
  param_3[0x32] = uVar36 ^ uVar43 << 0x1f ^ uVar40 >> 1;
  param_3[0x33] = uVar37 ^ uVar41 >> 1 ^ uVar40 << 0x1f;
  if (0x80 < param_2) {
    param_3[0x34] = uVar41 ^ uVar11 << 0x1f ^ uVar12 >> 1;
    param_3[0x35] = uVar42 ^ uVar6 >> 1 ^ uVar12 << 0x1f;
    param_3[0x36] = uVar43 ^ uVar7 >> 1 ^ uVar6 << 0x1f;
    param_3[0x37] = uVar40 ^ uVar11 >> 1 ^ uVar7 << 0x1f;
    param_3[0x38] = uVar11 ^ uVar10 >> 1 ^ uVar13 << 0x1f;
    param_3[0x39] = uVar12 ^ uVar10 << 0x1f ^ uVar38 >> 1;
    param_3[0x3a] = uVar6 ^ uVar9 >> 1 ^ uVar38 << 0x1f;
    param_3[0x3b] = uVar7 ^ uVar13 >> 1 ^ uVar9 << 0x1f;
    if (0xc0 < param_2) {
      param_3[0x42] = uVar36 ^ uVar43 << 0x13 ^ uVar40 >> 0xd;
      param_3[0x3c] = (uint)(CONCAT14(bVar18,uVar35) >> 1) ^ uVar13;
      param_3[0x3d] = (uint)(CONCAT14(bVar23,uVar36) >> 1) ^ uVar10;
      param_3[0x3e] = (uint)(CONCAT14(bVar25,uVar37) >> 1) ^ uVar38;
      param_3[0x3f] = (uint)(CONCAT14(bVar29,uVar34) >> 1) ^ uVar9;
      param_3[0x40] = uVar34 ^ uVar41 << 0x13 ^ uVar42 >> 0xd;
      param_3[0x41] = uVar35 ^ uVar42 << 0x13 ^ uVar43 >> 0xd;
      param_3[0x43] = uVar37 ^ uVar41 >> 0xd ^ uVar40 << 0x13;
      return 0;
    }
  }
  return 0;
}


