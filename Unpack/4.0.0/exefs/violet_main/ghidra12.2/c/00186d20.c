/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00186d20; name: FUN_00186d20
 */


undefined8
FUN_00186d20(byte *param_1,long param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
            long param_6,uint *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *pbVar11;
  ushort *puVar12;
  code *pcVar13;
  size_t sVar14;
  ushort *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  ushort *puVar27;
  ulong uVar28;
  uint *puVar29;
  ushort *puVar30;
  uint uVar31;
  ulong uVar32;
  byte *__src;
  ushort *__src_00;
  byte *pbVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  ushort *local_1d0;
  ushort local_16c [72];
  byte local_db [123];
  
  puVar18 = *(ulong **)(param_6 + 0x88);
  pbVar1 = param_1 + param_2;
  pbVar33 = *(byte **)(param_6 + 0x38);
  pbVar2 = *(byte **)(param_6 + 0x40);
  puVar30 = *(ushort **)(param_6 + 0x48);
  puVar3 = *(ushort **)(param_6 + 0x50);
  local_1d0 = *(ushort **)(param_6 + 0x10);
  uVar32 = (ulong)*param_7;
  puVar34 = *(ulong **)(param_6 + 0x20);
  puVar19 = *(ushort **)(param_6 + 0x18);
  sVar14 = (long)pbVar2 - (long)pbVar33;
  if (0x70 < (long)sVar14) {
    sVar14 = 0x71;
  }
  __src = pbVar2 + -sVar14;
  puVar29 = *(uint **)(param_6 + 0x78);
  puVar4 = *(uint **)(param_6 + 0x80);
  memcpy(local_db + -sVar14,__src,sVar14);
  sVar14 = (long)puVar3 - (long)puVar30;
  if (0x1f < (long)sVar14) {
    sVar14 = 0x20;
  }
  local_db[0] = 0;
  local_db[1] = 0;
  local_db[2] = 0;
  local_db[3] = 0;
  local_db[4] = 0;
  local_db[5] = 0;
  local_db[6] = 0;
  local_db[7] = 0;
  local_db[8] = 0;
  local_db[9] = 0;
  local_db[10] = 0;
  local_db[0xb] = 0;
  local_db[0xc] = 0;
  local_db[0xd] = 0;
  local_db[0xe] = 0;
  local_db[0xf] = 0;
  local_db[0x10] = 0;
  local_db[0x11] = 0;
  local_db[0x12] = 0;
  local_db[0x13] = 0;
  local_db[0x14] = 0;
  local_db[0x15] = 0;
  local_db[0x16] = 0;
  local_db[0x17] = 0;
  local_db[0x18] = 0;
  local_db[0x19] = 0;
  local_db[0x1a] = 0;
  local_db[0x1b] = 0;
  local_db[0x1c] = 0;
  local_db[0x1d] = 0;
  local_db[0x1e] = 0;
  local_db[0x1f] = 0;
  local_db[0x20] = 0;
  local_db[0x21] = 0;
  local_db[0x22] = 0;
  local_db[0x23] = 0;
  local_db[0x24] = 0;
  local_db[0x25] = 0;
  local_db[0x26] = 0;
  local_db[0x27] = 0;
  local_db[0x28] = 0;
  local_db[0x29] = 0;
  local_db[0x2a] = 0;
  local_db[0x2b] = 0;
  local_db[0x2c] = 0;
  local_db[0x2d] = 0;
  local_db[0x2e] = 0;
  local_db[0x2f] = 0;
  local_db[0x30] = 0;
  local_db[0x31] = 0;
  local_db[0x32] = 0;
  local_db[0x33] = 0;
  local_db[0x34] = 0;
  local_db[0x35] = 0;
  local_db[0x36] = 0;
  local_db[0x37] = 0;
  local_db[0x38] = 0;
  local_db[0x39] = 0;
  local_db[0x3a] = 0;
  local_db[0x3b] = 0;
  local_db[0x3c] = 0;
  local_db[0x3d] = 0;
  local_db[0x3e] = 0;
  local_db[0x3f] = 0;
  local_db[0x40] = 0;
  local_db[0x41] = 0;
  local_db[0x42] = 0;
  local_db[0x43] = 0;
  local_db[0x44] = 0;
  local_db[0x45] = 0;
  local_db[0x46] = 0;
  local_db[0x47] = 0;
  local_db[0x48] = 0;
  local_db[0x49] = 0;
  local_db[0x4a] = 0;
  local_db[0x4b] = 0;
  local_db[0x4c] = 0;
  local_db[0x4d] = 0;
  local_db[0x4e] = 0;
  local_db[0x4f] = 0;
  local_db[0x50] = 0;
  local_db[0x51] = 0;
  local_db[0x52] = 0;
  local_db[0x53] = 0;
  local_db[0x54] = 0;
  local_db[0x55] = 0;
  local_db[0x56] = 0;
  local_db[0x57] = 0;
  local_db[0x58] = 0;
  local_db[0x59] = 0;
  local_db[0x5a] = 0;
  local_db[0x5b] = 0;
  local_db[0x5c] = 0;
  local_db[0x5d] = 0;
  local_db[0x5e] = 0;
  local_db[0x5f] = 0;
  local_db[0x60] = 0;
  local_db[0x61] = 0;
  local_db[0x62] = 0;
  local_db[99] = 0;
  local_db[100] = 0;
  local_db[0x65] = 0;
  local_db[0x66] = 0;
  local_db[0x67] = 0;
  __src_00 = (ushort *)((long)puVar3 - sVar14);
  local_db[0x68] = 0;
  local_db[0x69] = 0;
  local_db[0x6a] = 0;
  local_db[0x6b] = 0;
  local_db[0x6c] = 0;
  local_db[0x6d] = 0;
  local_db[0x6e] = 0;
  local_db[0x6f] = 0;
  local_db[0x70] = 0;
  memcpy((void *)((long)local_16c - sVar14),__src_00,sVar14);
  local_16c[4] = 0;
  local_16c[5] = 0;
  local_16c[6] = 0;
  local_16c[7] = 0;
  local_16c[0] = 0;
  local_16c[1] = 0;
  local_16c[2] = 0;
  local_16c[3] = 0;
  local_16c[0xc] = 0;
  local_16c[0xd] = 0;
  local_16c[0xe] = 0;
  local_16c[0xf] = 0;
  local_16c[8] = 0;
  local_16c[9] = 0;
  local_16c[10] = 0;
  local_16c[0xb] = 0;
  pbVar11 = pbVar2;
  puVar12 = puVar3;
  pbVar7 = param_1;
  if ((puVar34 < (ulong *)((long)puVar18 + -0xf)) && (param_1 + 0x168 <= param_3)) {
    if (pbVar33 < __src) goto LAB_00186eb0;
    while (pbVar33 < pbVar11 || (long)pbVar33 - (long)pbVar11 == 0) {
      pbVar33 = local_db + ((long)pbVar33 - (long)pbVar11);
      pbVar11 = local_db;
      __src = local_db;
LAB_00186eb0:
      do {
        if (__src_00 <= puVar30) {
          if (puVar12 <= puVar30 && (long)puVar30 - (long)puVar12 != 0) {
            FUN_0015c3d0();
            pcVar13 = *(code **)PTR_PTR_047cb868;
            if (pcVar13 == (code *)0x0) goto LAB_00188078;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar9 = 0xdc;
            goto LAB_00188074;
          }
          puVar30 = (ushort *)((long)local_16c + ((long)puVar30 - (long)puVar12));
          puVar12 = local_16c;
          __src_00 = local_16c;
        }
        uVar24 = *puVar34;
        uVar23 = (uint)uVar24;
        if ((uVar24 + 0xe7e7e7e7e7e7e7e8 & (uVar24 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0)
        {
          uVar17 = puVar34[1];
          *(undefined8 *)pbVar7 = *(undefined8 *)pbVar33;
          pbVar7 = pbVar7 + (uVar24 & 7);
          pbVar33 = pbVar33 + (uVar24 & 7);
          puVar15 = (ushort *)((long)puVar30 + ((uVar24 & 0x80) >> 6 ^ 2));
          uVar31 = (uint)uVar32;
          if ((uVar24 & 0x80) == 0) {
            uVar31 = -(uint)*puVar30;
          }
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 3 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 8 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 3 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar24 & 0x8000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar24 & 0x8000) >> 0xe ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0xb & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 0x10 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 0xb & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar24 & 0x800000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar24 & 0x800000) >> 0x16 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0x13 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 0x18 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 0x13 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if (-1 < (int)uVar23) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((ulong)(uVar23 >> 0x1e ^ 0xffffffff) & 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0x1b & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 0x20 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 0x1b & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar24 & 0x8000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar24 & 0x8000000000) >> 0x26 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0x23 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 0x28 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 0x23 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar24 & 0x800000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar24 & 0x800000000000) >> 0x2e ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0x2b & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar24 >> 0x30 & 7;
          pbVar7 = pbVar7 + (uVar24 >> 0x2b & 0xf) + uVar32;
          if ((uVar24 & 0x80000000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar24 & 0x80000000000000) >> 0x36 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar24 >> 0x33 & 0xf)) = *(undefined8 *)(pbVar33 + uVar32);
          uVar28 = uVar24 >> 0x38 & 7;
          pbVar33 = pbVar33 + uVar32 + uVar28;
          if (-1 < (long)uVar24) {
            uVar31 = -(uint)*puVar15;
          }
          uVar32 = (ulong)uVar31;
          pbVar7 = pbVar7 + (uVar24 >> 0x33 & 0xf) + uVar28;
          puVar30 = (ushort *)((long)puVar15 + ((ulong)~(uint)(uVar24 >> 0x3e) & 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          pbVar7 = pbVar7 + (uVar24 >> 0x3b & 0xf);
          if ((uVar17 + 0xe7e7e7e7e7e7e7e8 & (uVar17 ^ 0xffffffffffffffff) & 0x8080808080808080) !=
              0) {
            bVar5 = (byte)puVar34[1];
            uVar17 = (ulong)bVar5;
            uVar23 = (uint)bVar5;
            puVar34 = (ulong *)((long)puVar34 + 9);
            uVar24 = uVar17;
            if (0x17 < bVar5) goto LAB_00187184;
            goto LAB_001871e8;
          }
          *(undefined8 *)pbVar7 = *(undefined8 *)pbVar33;
          pbVar7 = pbVar7 + (uVar17 & 7);
          pbVar33 = pbVar33 + (uVar17 & 7);
          puVar15 = (ushort *)((long)puVar30 + ((uVar17 & 0x80) >> 6 ^ 2));
          if ((uVar17 & 0x80) == 0) {
            uVar31 = -(uint)*puVar30;
          }
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 3 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 8 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 3 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar17 & 0x8000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar17 & 0x8000) >> 0xe ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0xb & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 0x10 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 0xb & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar17 & 0x800000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar17 & 0x800000) >> 0x16 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0x13 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 0x18 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 0x13 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if (-1 < (int)(uint)uVar17) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((ulong)((uint)uVar17 >> 0x1e ^ 0xffffffff) & 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0x1b & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 0x20 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 0x1b & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar17 & 0x8000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar17 & 0x8000000000) >> 0x26 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0x23 & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 0x28 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 0x23 & 0xf) + uVar32;
          pbVar33 = pbVar33 + uVar32;
          if ((uVar17 & 0x800000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar17 & 0x800000000000) >> 0x2e ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0x2b & 0xf)) = *(undefined8 *)pbVar33;
          uVar32 = uVar17 >> 0x30 & 7;
          pbVar7 = pbVar7 + (uVar17 >> 0x2b & 0xf) + uVar32;
          if ((uVar17 & 0x80000000000000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          puVar15 = (ushort *)((long)puVar15 + ((uVar17 & 0x80000000000000) >> 0x36 ^ 2));
          *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar31);
          *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar31 + 8);
          *(undefined8 *)(pbVar7 + (uVar17 >> 0x33 & 0xf)) = *(undefined8 *)(pbVar33 + uVar32);
          uVar24 = uVar17 >> 0x38 & 7;
          pbVar33 = pbVar33 + uVar32 + uVar24;
          if (-1 < (long)uVar17) {
            uVar31 = -(uint)*puVar15;
          }
          pbVar22 = pbVar7 + (uVar17 >> 0x33 & 0xf) + uVar24;
          puVar30 = (ushort *)((long)puVar15 + ((ulong)~(uint)(uVar17 >> 0x3e) & 2));
          *(undefined8 *)pbVar22 = *(undefined8 *)(pbVar22 + (int)uVar31);
          puVar34 = puVar34 + 2;
          *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar22 + (int)uVar31 + 8);
          pbVar22 = pbVar22 + (uVar17 >> 0x3b & 0xf);
          puVar21 = puVar29;
joined_r0x001874a4:
          uVar32 = (ulong)uVar31;
          pbVar7 = pbVar22;
          puVar29 = puVar21;
        }
        else {
          uVar23 = uVar23 & 0xff;
          uVar17 = (ulong)uVar23;
          puVar34 = (ulong *)((long)puVar34 + 1);
          if (0x17 < uVar23) {
LAB_00187184:
            do {
              uVar6 = *puVar30;
              uVar9 = *(undefined8 *)pbVar33;
              uVar31 = ((uint)uVar17 >> 7) - 1;
              pbVar33 = pbVar33 + (uVar17 & 7);
              *(undefined8 *)pbVar7 = uVar9;
              pbVar7 = pbVar7 + (uVar17 & 7);
              uVar23 = -(uint)uVar6 & uVar31 | (uint)uVar32 & (uVar31 ^ 0xffffffff);
              uVar32 = (ulong)uVar23;
              puVar30 = (ushort *)((long)puVar30 + (ulong)(uVar31 & 2));
              *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + (int)uVar23);
              *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar7 + (int)uVar23 + 8);
              pbVar7 = pbVar7 + ((uint)uVar17 >> 3 & 0xf);
              puVar35 = (ulong *)((long)puVar34 + 1);
              bVar5 = (byte)*puVar34;
              uVar17 = (ulong)bVar5;
              uVar23 = (uint)bVar5;
              puVar34 = puVar35;
            } while (0x17 < bVar5);
            uVar24 = uVar17;
          }
LAB_001871e8:
          if (2 < ((uint)uVar24 & 0xff)) {
            if (puVar29 < puVar4) {
              puVar21 = puVar29 + 1;
              pbVar25 = param_1 + -(ulong)*puVar29;
              pbVar22 = pbVar7 + (uVar23 + 5);
              *(undefined8 *)pbVar7 = *(undefined8 *)pbVar25;
              *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar25 + 8);
              uVar31 = (int)pbVar25 - (int)pbVar7;
              *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar25 + 0x10);
              if (0x18 < uVar23 + 5) {
                *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar25 + 0x18);
              }
              Hint_Prefetch((long)param_1 - (ulong)puVar29[4],0,0,0);
              goto joined_r0x001874a4;
            }
            goto LAB_00187e90;
          }
          if ((uVar24 & 0xff) == 0) {
            if (local_1d0 < puVar19) {
              puVar27 = (ushort *)((long)local_1d0 + 1);
              uVar24 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar24) {
                local_1d0 = (ushort *)((long)local_1d0 + 3);
                if (local_1d0 <= puVar19) {
                  uVar24 = uVar24 + (ulong)*puVar27 * 4;
                  lVar16 = uVar24 + 0x40;
                  puVar15 = local_1d0;
                  if (lVar16 <= (long)pbVar1 - (long)pbVar7) goto LAB_00187514;
                  goto LAB_00188134;
                }
                uVar24 = 0;
              }
              lVar16 = uVar24 + 0x40;
              puVar15 = local_1d0;
              local_1d0 = puVar27;
              if ((long)pbVar1 - (long)pbVar7 < lVar16) goto LAB_00188134;
            }
            else {
              uVar24 = 0;
              lVar16 = 0x40;
              puVar15 = local_1d0;
              if ((long)pbVar1 - (long)pbVar7 < 0x40) goto LAB_00188134;
            }
LAB_00187514:
            pbVar22 = pbVar11 + -(long)pbVar33;
            if ((long)pbVar22 < lVar16) goto LAB_00188164;
            uVar24 = uVar24 + 0x2f;
            uVar23 = (int)(uVar24 >> 4) + 1;
            uVar17 = (ulong)uVar23 & 3;
            lVar26 = lVar16;
            if ((uVar23 & 3) != 0) {
              lVar26 = 0;
              do {
                pbVar22 = pbVar33 + lVar26;
                uVar9 = *(undefined8 *)(pbVar22 + 8);
                pbVar25 = pbVar7 + lVar26;
                uVar17 = uVar17 - 1;
                lVar26 = lVar26 + 0x10;
                *(undefined8 *)pbVar25 = *(undefined8 *)pbVar22;
                *(undefined8 *)(pbVar25 + 8) = uVar9;
              } while (uVar17 != 0);
              pbVar7 = pbVar7 + lVar26;
              pbVar33 = pbVar33 + lVar26;
              pbVar22 = pbVar7 + -0x10;
              puVar15 = (ushort *)(pbVar33 + -0x10);
              lVar26 = lVar16 - lVar26;
            }
            if (0x2f < uVar24) {
              pbVar7 = pbVar7 + -0x10;
              puVar27 = (ushort *)(pbVar33 + -0x10);
              do {
                uVar9 = *(undefined8 *)(puVar27 + 0xc);
                lVar26 = lVar26 + -0x40;
                *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(puVar27 + 8);
                *(undefined8 *)(pbVar7 + 0x18) = uVar9;
                uVar9 = *(undefined8 *)(puVar27 + 0x14);
                *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(puVar27 + 0x10);
                *(undefined8 *)(pbVar7 + 0x28) = uVar9;
                uVar9 = *(undefined8 *)(puVar27 + 0x1c);
                *(undefined8 *)(pbVar7 + 0x30) = *(undefined8 *)(puVar27 + 0x18);
                *(undefined8 *)(pbVar7 + 0x38) = uVar9;
                puVar15 = puVar27 + 0x20;
                uVar9 = *(undefined8 *)(puVar27 + 0x24);
                pbVar22 = pbVar7 + 0x40;
                *(undefined8 *)pbVar22 = *(undefined8 *)puVar15;
                *(undefined8 *)(pbVar7 + 0x48) = uVar9;
                pbVar7 = pbVar22;
                puVar27 = puVar15;
              } while (0x10 < lVar26);
            }
            lVar16 = lVar16 - (uVar24 & 0xffff0);
            pbVar33 = (byte *)((long)puVar15 + lVar16);
            pbVar7 = pbVar22 + lVar16;
            uVar9 = *(undefined8 *)(pbVar33 + -8);
            *(undefined8 *)(pbVar7 + -0x10) = *(undefined8 *)(pbVar33 + -0x10);
            *(undefined8 *)(pbVar7 + -8) = uVar9;
          }
          else if (((uint)uVar24 & 0xff) == 1) {
            if (local_1d0 < puVar19) {
              puVar15 = (ushort *)((long)local_1d0 + 1);
              uVar24 = (ulong)(byte)*local_1d0;
              if (uVar24 < 0xfc) {
                local_1d0 = puVar15;
              }
              else if (puVar19 < (ushort *)((long)local_1d0 + 3U)) {
                uVar24 = 0;
                local_1d0 = puVar15;
              }
              else {
                uVar24 = uVar24 + (ulong)*puVar15 * 4;
                local_1d0 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
              uVar24 = 0;
            }
            if ((long)pbVar1 - (long)pbVar7 < (long)(uVar24 + 99)) {
              if ((long)pbVar1 - (long)pbVar7 < (long)(uVar24 + 0x5b)) goto LAB_001881bc;
              if ((long)param_3 - (long)pbVar7 < (long)(uVar24 + 99)) goto LAB_001881e8;
            }
            uVar32 = -(ulong)*puVar30;
            pbVar22 = pbVar7 + -(ulong)*puVar30;
            *(undefined8 *)pbVar7 = *(undefined8 *)pbVar22;
            *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar22 + 8);
            *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
            *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar22 + 0x18);
            *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(pbVar22 + 0x20);
            *(undefined8 *)(pbVar7 + 0x28) = *(undefined8 *)(pbVar22 + 0x28);
            *(undefined8 *)(pbVar7 + 0x30) = *(undefined8 *)(pbVar22 + 0x30);
            *(undefined8 *)(pbVar7 + 0x38) = *(undefined8 *)(pbVar22 + 0x38);
            pbVar22 = pbVar7 + 0x40;
            do {
              pbVar25 = pbVar22 + 8;
              *(undefined8 *)pbVar22 = *(undefined8 *)(pbVar22 + uVar32);
              pbVar22 = pbVar25;
            } while (pbVar25 < pbVar7 + uVar24 + 0x5b);
            puVar30 = puVar30 + 1;
            pbVar7 = pbVar7 + uVar24 + 0x5b;
          }
          else {
            puVar15 = local_1d0;
            if (local_1d0 < puVar19) {
              puVar15 = (ushort *)((long)local_1d0 + 1);
              uVar32 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar32) {
                if (puVar19 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x001876a0;
                uVar32 = uVar32 + (ulong)*puVar15 * 4;
                puVar15 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
joined_r0x001876a0:
              uVar32 = 0;
            }
            if (puVar4 <= puVar29) goto LAB_00188190;
            uVar24 = uVar32 + 0x1d;
            if ((long)pbVar1 - (long)pbVar7 < (long)(uVar32 + 0x2d)) {
              if ((long)pbVar1 - (long)pbVar7 < (long)uVar24) goto LAB_00188214;
              if ((long)param_3 - (long)pbVar7 < (long)(uVar32 + 0x2d)) goto LAB_00188240;
            }
            pbVar22 = param_1 + -(ulong)*puVar29;
            *(undefined8 *)pbVar7 = *(undefined8 *)pbVar22;
            *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar22 + 8);
            *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
            *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar22 + 0x18);
            uVar32 = (ulong)(uint)((int)pbVar22 - (int)pbVar7);
            *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(pbVar22 + 0x20);
            if (0x28 < uVar24) {
              pbVar25 = pbVar7 + 0x28;
              pbVar22 = pbVar22 + 0x28;
              do {
                pbVar20 = pbVar25 + 8;
                *(undefined8 *)pbVar25 = *(undefined8 *)pbVar22;
                pbVar25 = pbVar20;
                pbVar22 = pbVar22 + 8;
              } while (pbVar20 < pbVar7 + uVar24);
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar29[4],0,0,0);
            pbVar7 = pbVar7 + uVar24;
            puVar29 = puVar29 + 1;
            local_1d0 = puVar15;
          }
        }
        if ((ulong *)((long)puVar18 + -0xf) <= puVar34) goto LAB_00187854;
        if (param_3 < pbVar7 + 0x168) goto LAB_00187854;
      } while (pbVar33 < __src);
    }
    FUN_0015c3d0();
    pcVar13 = *(code **)PTR_PTR_047cb868;
    if (pcVar13 == (code *)0x0) goto LAB_00188078;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
    uVar9 = 0xdb;
  }
  else {
LAB_00187854:
    uVar23 = (uint)uVar32;
    if (pbVar1 < pbVar7) {
      FUN_0015c3d0();
      pcVar13 = *(code **)PTR_PTR_047cb868;
      if (pcVar13 == (code *)0x0) goto LAB_00188078;
      pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
      pcVar10 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
      uVar9 = 0x1c0;
    }
    else {
      if (__src <= pbVar33) {
        if (pbVar11 <= pbVar33 && (long)pbVar33 - (long)pbVar11 != 0) {
          FUN_0015c3d0();
          pcVar13 = *(code **)PTR_PTR_047cb868;
          if (pcVar13 == (code *)0x0) goto LAB_00188078;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar9 = 0x1e7;
          goto LAB_00188074;
        }
        pbVar33 = local_db + ((long)pbVar33 - (long)pbVar11);
        pbVar11 = local_db;
        __src = local_db;
      }
      if (__src_00 <= puVar30) {
        if (puVar12 <= puVar30 && (long)puVar30 - (long)puVar12 != 0) {
          FUN_0015c3d0();
          pcVar13 = *(code **)PTR_PTR_047cb868;
          if (pcVar13 == (code *)0x0) goto LAB_00188078;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar9 = 0x1e8;
          goto LAB_00188074;
        }
        puVar30 = (ushort *)((long)local_16c + ((long)puVar30 - (long)puVar12));
        puVar12 = local_16c;
        __src_00 = local_16c;
      }
      if (puVar34 < puVar18) {
        puVar35 = puVar34 + 2;
        puVar36 = puVar34;
        if (puVar34 < puVar35) goto LAB_00187900;
        do {
          if (__src <= pbVar33) {
            if (pbVar11 <= pbVar33 && (long)pbVar33 - (long)pbVar11 != 0) {
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00188078;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar9 = 500;
              goto LAB_00188074;
            }
            pbVar33 = local_db + ((long)pbVar33 - (long)pbVar11);
            pbVar11 = local_db;
            __src = local_db;
          }
          puVar35 = puVar34 + 2;
          puVar36 = puVar34;
          if (__src_00 <= puVar30) {
            if (puVar12 <= puVar30 && (long)puVar30 - (long)puVar12 != 0) {
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00188078;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar9 = 0x1f5;
              goto LAB_00188074;
            }
            puVar30 = (ushort *)((long)local_16c + ((long)puVar30 - (long)puVar12));
            puVar12 = local_16c;
            __src_00 = local_16c;
          }
LAB_00187900:
          do {
            puVar34 = (ulong *)((long)puVar36 + 1);
            bVar5 = (byte)*puVar36;
            uVar24 = (ulong)bVar5;
            if (0x17 < bVar5) {
              if (param_3 < pbVar7 + 8) {
                FUN_0015c3d0();
                pcVar13 = *(code **)PTR_PTR_047cb868;
                if (pcVar13 == (code *)0x0) goto LAB_00188078;
                pcVar10 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
              }
              else {
                uVar6 = *puVar30;
                *(undefined8 *)pbVar7 = *(undefined8 *)pbVar33;
                pbVar22 = pbVar7 + (uVar24 & 7);
                if (pbVar22 + 0x10 <= param_3) {
                  uVar31 = (bVar5 >> 7) - 1;
                  uVar23 = -(uint)uVar6 & uVar31 | (uint)uVar32 & (uVar31 ^ 0xffffffff);
                  uVar32 = (ulong)uVar23;
                  puVar30 = (ushort *)((long)puVar30 + (ulong)(uVar31 & 2));
                  *(undefined8 *)pbVar22 = *(undefined8 *)(pbVar22 + (int)uVar23);
                  pbVar33 = pbVar33 + (uVar24 & 7);
                  pbVar7 = pbVar22 + ((ulong)(bVar5 >> 3) & 0xf);
                  *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pbVar22 + (int)uVar23 + 8);
                  goto LAB_001878ac;
                }
                FUN_0015c3d0();
                pcVar13 = *(code **)PTR_PTR_047cb868;
                if (pcVar13 == (code *)0x0) goto LAB_00188078;
                pcVar10 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
              }
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              uVar9 = 0x1fc;
              goto LAB_00188074;
            }
            if (bVar5 < 3) {
              if (bVar5 == 0) {
                if (local_1d0 < puVar19) {
                  puVar15 = (ushort *)((long)local_1d0 + 1);
                  uVar24 = (ulong)(byte)*local_1d0;
                  if (0xfb < uVar24) {
                    local_1d0 = (ushort *)((long)local_1d0 + 3);
                    if (local_1d0 <= puVar19) {
                      uVar24 = uVar24 + (ulong)*puVar15 * 4;
                      lVar16 = uVar24 + 0x40;
                      puVar27 = local_1d0;
                      if (lVar16 <= (long)pbVar1 - (long)pbVar7) goto LAB_00187ac4;
                      goto LAB_00188134;
                    }
                    uVar24 = 0;
                  }
                  lVar16 = uVar24 + 0x40;
                  puVar27 = local_1d0;
                  local_1d0 = puVar15;
                  if ((long)pbVar1 - (long)pbVar7 < lVar16) goto LAB_00188134;
                }
                else {
                  uVar24 = 0;
                  lVar16 = 0x40;
                  puVar27 = local_1d0;
                  if ((long)pbVar1 - (long)pbVar7 < 0x40) goto LAB_00188134;
                }
LAB_00187ac4:
                pbVar22 = pbVar11 + -(long)pbVar33;
                if ((long)pbVar22 < lVar16) goto LAB_00188164;
                uVar24 = uVar24 + 0x2f;
                uVar23 = (int)(uVar24 >> 4) + 1;
                uVar17 = (ulong)uVar23 & 3;
                lVar26 = lVar16;
                if ((uVar23 & 3) != 0) {
                  lVar26 = 0;
                  do {
                    pbVar22 = pbVar33 + lVar26;
                    uVar9 = *(undefined8 *)(pbVar22 + 8);
                    pbVar25 = pbVar7 + lVar26;
                    uVar17 = uVar17 - 1;
                    lVar26 = lVar26 + 0x10;
                    *(undefined8 *)pbVar25 = *(undefined8 *)pbVar22;
                    *(undefined8 *)(pbVar25 + 8) = uVar9;
                  } while (uVar17 != 0);
                  pbVar7 = pbVar7 + lVar26;
                  pbVar33 = pbVar33 + lVar26;
                  pbVar22 = pbVar7 + -0x10;
                  puVar27 = (ushort *)(pbVar33 + -0x10);
                  lVar26 = lVar16 - lVar26;
                }
                if (0x2f < uVar24) {
                  pbVar7 = pbVar7 + -0x10;
                  puVar15 = (ushort *)(pbVar33 + -0x10);
                  do {
                    uVar9 = *(undefined8 *)(puVar15 + 0xc);
                    lVar26 = lVar26 + -0x40;
                    *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(puVar15 + 8);
                    *(undefined8 *)(pbVar7 + 0x18) = uVar9;
                    uVar9 = *(undefined8 *)(puVar15 + 0x14);
                    *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(puVar15 + 0x10);
                    *(undefined8 *)(pbVar7 + 0x28) = uVar9;
                    uVar9 = *(undefined8 *)(puVar15 + 0x1c);
                    *(undefined8 *)(pbVar7 + 0x30) = *(undefined8 *)(puVar15 + 0x18);
                    *(undefined8 *)(pbVar7 + 0x38) = uVar9;
                    puVar27 = puVar15 + 0x20;
                    uVar9 = *(undefined8 *)(puVar15 + 0x24);
                    pbVar22 = pbVar7 + 0x40;
                    *(undefined8 *)pbVar22 = *(undefined8 *)puVar27;
                    *(undefined8 *)(pbVar7 + 0x48) = uVar9;
                    pbVar7 = pbVar22;
                    puVar15 = puVar27;
                  } while (0x10 < lVar26);
                }
                lVar16 = lVar16 - (uVar24 & 0xffff0);
                pbVar33 = (byte *)((long)puVar27 + lVar16);
                pbVar7 = pbVar22 + lVar16;
                uVar9 = *(undefined8 *)(pbVar33 + -8);
                *(undefined8 *)(pbVar7 + -0x10) = *(undefined8 *)(pbVar33 + -0x10);
                *(undefined8 *)(pbVar7 + -8) = uVar9;
              }
              else if (bVar5 == 1) {
                if (local_1d0 < puVar19) {
                  puVar15 = (ushort *)((long)local_1d0 + 1);
                  uVar24 = (ulong)(byte)*local_1d0;
                  if (uVar24 < 0xfc) {
                    local_1d0 = puVar15;
                  }
                  else if (puVar19 < (ushort *)((long)local_1d0 + 3U)) {
                    uVar24 = 0;
                    local_1d0 = puVar15;
                  }
                  else {
                    uVar24 = uVar24 + (ulong)*puVar15 * 4;
                    local_1d0 = (ushort *)((long)local_1d0 + 3U);
                  }
                }
                else {
                  uVar24 = 0;
                }
                if ((long)pbVar1 - (long)pbVar7 < (long)(uVar24 + 99)) {
                  if ((long)pbVar1 - (long)pbVar7 < (long)(uVar24 + 0x5b)) goto LAB_001881bc;
                  if ((long)param_3 - (long)pbVar7 < (long)(uVar24 + 99)) goto LAB_001881e8;
                }
                uVar32 = -(ulong)*puVar30;
                pbVar22 = pbVar7 + -(ulong)*puVar30;
                *(undefined8 *)pbVar7 = *(undefined8 *)pbVar22;
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar22 + 8);
                *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
                *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar22 + 0x18);
                *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(pbVar22 + 0x20);
                *(undefined8 *)(pbVar7 + 0x28) = *(undefined8 *)(pbVar22 + 0x28);
                *(undefined8 *)(pbVar7 + 0x30) = *(undefined8 *)(pbVar22 + 0x30);
                *(undefined8 *)(pbVar7 + 0x38) = *(undefined8 *)(pbVar22 + 0x38);
                pbVar22 = pbVar7 + 0x40;
                do {
                  pbVar25 = pbVar22 + 8;
                  *(undefined8 *)pbVar22 = *(undefined8 *)(pbVar22 + uVar32);
                  pbVar22 = pbVar25;
                } while (pbVar25 < pbVar7 + uVar24 + 0x5b);
                puVar30 = puVar30 + 1;
                pbVar7 = pbVar7 + uVar24 + 0x5b;
              }
              else {
                if (local_1d0 < puVar19) {
                  puVar15 = (ushort *)((long)local_1d0 + 1);
                  uVar32 = (ulong)(byte)*local_1d0;
                  if (0xfb < uVar32) {
                    if (puVar19 < (ushort *)((long)local_1d0 + 3U)) {
                      uVar32 = 0;
                    }
                    else {
                      uVar32 = uVar32 + (ulong)*puVar15 * 4;
                      puVar15 = (ushort *)((long)local_1d0 + 3U);
                    }
                  }
                }
                else {
                  uVar32 = 0;
                  puVar15 = local_1d0;
                }
                local_1d0 = puVar15;
                if (puVar4 <= puVar29) goto LAB_00188190;
                uVar24 = uVar32 + 0x1d;
                if ((long)pbVar1 - (long)pbVar7 < (long)(uVar32 + 0x2d)) {
                  if ((long)pbVar1 - (long)pbVar7 < (long)uVar24) goto LAB_00188214;
                  if ((long)param_3 - (long)pbVar7 < (long)(uVar32 + 0x2d)) goto LAB_00188240;
                }
                pbVar22 = param_1 + -(ulong)*puVar29;
                *(undefined8 *)pbVar7 = *(undefined8 *)pbVar22;
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar22 + 8);
                *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
                *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar22 + 0x18);
                uVar32 = (ulong)(uint)((int)pbVar22 - (int)pbVar7);
                *(undefined8 *)(pbVar7 + 0x20) = *(undefined8 *)(pbVar22 + 0x20);
                if (0x28 < uVar24) {
                  pbVar25 = pbVar7 + 0x28;
                  pbVar22 = pbVar22 + 0x28;
                  do {
                    pbVar20 = pbVar25 + 8;
                    *(undefined8 *)pbVar25 = *(undefined8 *)pbVar22;
                    pbVar25 = pbVar20;
                    pbVar22 = pbVar22 + 8;
                  } while (pbVar20 < pbVar7 + uVar24);
                }
                Hint_Prefetch((long)param_1 - (ulong)puVar29[4],0,0,0);
                pbVar7 = pbVar7 + uVar24;
                puVar29 = puVar29 + 1;
              }
            }
            else {
              if (puVar4 <= puVar29) goto LAB_00187e90;
              lVar16 = uVar24 + 5;
              if ((long)pbVar1 - (long)pbVar7 < 0x24) {
                if ((long)pbVar1 - (long)pbVar7 < lVar16) {
                  FUN_0015c3d0();
                  pcVar13 = *(code **)PTR_PTR_047cb868;
                  if (pcVar13 == (code *)0x0) goto LAB_00188078;
                  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
                  pcVar10 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n"
                  ;
                  uVar9 = 0x111;
                  goto LAB_00188074;
                }
                if ((long)param_3 - (long)pbVar7 < (long)(uVar24 + 0x15)) {
                  FUN_0015c3d0();
                  pcVar13 = *(code **)PTR_PTR_047cb868;
                  if (pcVar13 == (code *)0x0) goto LAB_00188078;
                  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
                  pcVar10 = 
                  "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n";
                  uVar9 = 0x115;
                  goto LAB_00188074;
                }
              }
              pbVar22 = param_1 + -(ulong)*puVar29;
              *(undefined8 *)pbVar7 = *(undefined8 *)pbVar22;
              *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar22 + 8);
              uVar32 = (ulong)(uint)((int)pbVar22 - (int)pbVar7);
              *(undefined8 *)(pbVar7 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
              if (0x18 < (uint)lVar16) {
                *(undefined8 *)(pbVar7 + 0x18) = *(undefined8 *)(pbVar22 + 0x18);
              }
              Hint_Prefetch((long)param_1 - (ulong)puVar29[4],0,0,0);
              pbVar7 = pbVar7 + lVar16;
              puVar29 = puVar29 + 1;
            }
            if (__src <= pbVar33) {
              if (pbVar11 <= pbVar33 && (long)pbVar33 - (long)pbVar11 != 0) {
                FUN_0015c3d0();
                pcVar13 = *(code **)PTR_PTR_047cb868;
                if (pcVar13 == (code *)0x0) goto LAB_00188078;
                pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
                uVar9 = 0x208;
                goto LAB_00188074;
              }
              pbVar33 = local_db + ((long)pbVar33 - (long)pbVar11);
              pbVar11 = local_db;
              __src = local_db;
            }
            puVar35 = (ulong *)((long)puVar36 + 0x11);
            if (__src_00 <= puVar30) {
              if (puVar12 <= puVar30 && (long)puVar30 - (long)puVar12 != 0) {
                FUN_0015c3d0();
                pcVar13 = *(code **)PTR_PTR_047cb868;
                if (pcVar13 == (code *)0x0) goto LAB_00188078;
                pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
                uVar9 = 0x209;
                goto LAB_00188074;
              }
              puVar30 = (ushort *)((long)local_16c + ((long)puVar30 - (long)puVar12));
              puVar12 = local_16c;
              __src_00 = local_16c;
            }
LAB_001878ac:
            uVar23 = (uint)uVar32;
            if (puVar34 == puVar18) goto LAB_00187dcc;
            puVar36 = puVar34;
          } while (puVar34 < puVar35);
        } while( true );
      }
LAB_00187dcc:
      if (pbVar1 <= pbVar7) {
        if (pbVar1 < pbVar7) {
          return 0;
        }
        lVar16 = (long)puVar30 - (long)puVar12;
        if (puVar12 <= puVar30 && lVar16 != 0) {
          return 0;
        }
LAB_00187e20:
        if (pbVar11 <= pbVar33 && (long)pbVar33 - (long)pbVar11 != 0) {
          return 0;
        }
        *param_7 = uVar23;
        *(byte **)(param_6 + 0x38) = pbVar2 + ((long)pbVar33 - (long)pbVar11);
        *(long *)(param_6 + 0x48) = (long)puVar3 + lVar16;
        if (puVar19 < local_1d0) {
          return 0;
        }
        *(ushort **)(param_6 + 0x10) = local_1d0;
        return param_5;
      }
      if (pbVar33 + ((long)pbVar1 - (long)pbVar7) <= pbVar11) {
        memcpy(pbVar7,pbVar33,(long)pbVar1 - (long)pbVar7);
        lVar16 = (long)puVar30 - (long)puVar12;
        pbVar33 = pbVar33 + ((long)pbVar1 - (long)pbVar7);
        if (puVar12 <= puVar30 && lVar16 != 0) {
          return 0;
        }
        goto LAB_00187e20;
      }
      FUN_0015c3d0();
      pcVar13 = *(code **)PTR_PTR_047cb868;
      if (pcVar13 == (code *)0x0) goto LAB_00188078;
      pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
      pcVar10 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
      uVar9 = 0x217;
    }
  }
LAB_00188074:
  (*pcVar13)(0,pcVar8,uVar9,pcVar10);
LAB_00188078:
  FUN_0015c3f0();
  return 0;
LAB_00188134:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar9 = 0x30;
  goto LAB_00188074;
LAB_00188164:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar9 = 0x31;
  goto LAB_00188074;
LAB_001881bc:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar9 = 0x86;
  goto LAB_00188074;
LAB_001881e8:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar9 = 0x87;
  goto LAB_00188074;
LAB_00188190:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar9 = 0xb6;
  goto LAB_00188074;
LAB_00188214:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar9 = 0xc6;
  goto LAB_00188074;
LAB_00188240:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar9 = 199;
  goto LAB_00188074;
LAB_00187e90:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00188078;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar9 = 0x101;
  goto LAB_00188074;
}


