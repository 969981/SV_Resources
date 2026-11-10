/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00185580; name: FUN_00185580
 */


undefined8
FUN_00185580(byte *param_1,long param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
            long param_6,uint *param_7)

{
  byte *pbVar1;
  ushort *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  code *pcVar12;
  size_t sVar13;
  ushort *puVar14;
  byte *pbVar15;
  ulong *puVar16;
  ushort *puVar17;
  byte *pbVar18;
  uint uVar19;
  ulong uVar20;
  ushort *puVar21;
  long lVar22;
  byte *pbVar23;
  uint *puVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  byte *extraout_x17;
  byte *pbVar33;
  ulong *extraout_x18;
  ulong *puVar34;
  byte *pbVar35;
  uint uVar36;
  ulong uVar37;
  ulong *puVar38;
  byte *pbVar39;
  ushort *__src;
  ushort *puVar40;
  uint *puVar41;
  ulong *puVar42;
  ulong *puVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  ushort *local_1d0;
  ushort local_16c [72];
  byte local_db [123];
  
  puVar16 = *(ulong **)(param_6 + 0x88);
  pbVar35 = *(byte **)(param_6 + 0x38);
  pbVar1 = *(byte **)(param_6 + 0x40);
  pbVar15 = param_1 + param_2;
  uVar37 = (ulong)*param_7;
  puVar42 = *(ulong **)(param_6 + 0x20);
  puVar40 = *(ushort **)(param_6 + 0x48);
  puVar2 = *(ushort **)(param_6 + 0x50);
  puVar38 = (ulong *)((long)puVar16 + -0xf);
  local_1d0 = *(ushort **)(param_6 + 0x10);
  sVar13 = (long)pbVar1 - (long)pbVar35;
  puVar17 = *(ushort **)(param_6 + 0x18);
  if (0x70 < (long)sVar13) {
    sVar13 = 0x71;
  }
  pbVar39 = pbVar1 + -sVar13;
  puVar41 = *(uint **)(param_6 + 0x78);
  puVar3 = *(uint **)(param_6 + 0x80);
  memcpy(local_db + -sVar13,pbVar39,sVar13);
  sVar13 = (long)puVar2 - (long)puVar40;
  if (0x1f < (long)sVar13) {
    sVar13 = 0x20;
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
  __src = (ushort *)((long)puVar2 - sVar13);
  local_db[0x68] = 0;
  local_db[0x69] = 0;
  local_db[0x6a] = 0;
  local_db[0x6b] = 0;
  local_db[0x6c] = 0;
  local_db[0x6d] = 0;
  local_db[0x6e] = 0;
  local_db[0x6f] = 0;
  local_db[0x70] = 0;
  puVar6 = memcpy((void *)((long)local_16c - sVar13),__src,sVar13);
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
  pbVar11 = pbVar1;
  puVar14 = puVar2;
  pbVar18 = param_1;
  pbVar33 = extraout_x17;
  if ((puVar42 < puVar38) && (param_1 + 0x168 <= param_3)) {
    if (pbVar35 < pbVar39) goto LAB_00185718;
    while (pbVar35 < pbVar11 || (long)pbVar35 - (long)pbVar11 == 0) {
      pbVar35 = local_db + ((long)pbVar35 - (long)pbVar11);
      pbVar11 = local_db;
      pbVar39 = local_db;
LAB_00185718:
      do {
        if (__src <= puVar40) {
          if (puVar14 <= puVar40 && (long)puVar40 - (long)puVar14 != 0) {
            FUN_0015c3d0();
            pcVar12 = *(code **)PTR_PTR_047cb868;
            if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
            pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar44 = 0xdc;
            goto LAB_00186b18;
          }
          puVar40 = (ushort *)((long)local_16c + ((long)puVar40 - (long)puVar14));
          puVar14 = local_16c;
          __src = local_16c;
        }
        uVar27 = *puVar42;
        uVar26 = (uint)uVar27;
        if ((uVar27 + 0xe7e7e7e7e7e7e7e8 & (uVar27 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0)
        {
          uVar20 = puVar42[1];
          uVar36 = (uint)uVar37;
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          pbVar33 = (byte *)(uVar20 + 0xe7e7e7e7e7e7e7e8 & (uVar20 ^ 0xffffffffffffffff) &
                            0x8080808080808080);
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          if ((uVar27 & 0x80) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          pbVar18 = pbVar18 + (uVar27 & 7);
          pbVar35 = pbVar35 + (uVar27 & 7);
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          puVar40 = (ushort *)((long)puVar40 + ((uVar27 & 0x80) >> 6 ^ 2));
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 3 & 0xf);
          uVar37 = uVar27 >> 8 & 7;
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          pbVar35 = pbVar35 + uVar37;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          pbVar18 = pbVar18 + uVar37;
          if ((uVar27 & 0x8000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar27 & 0x8000) >> 0xe ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0xb & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar27 >> 0x10 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar27 & 0x800000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar27 & 0x800000) >> 0x16 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x13 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar27 >> 0x18 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if (-1 < (int)uVar26) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((ulong)(uVar26 >> 0x1e ^ 0xffffffff) & 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x1b & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar27 >> 0x20 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar27 & 0x8000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar27 & 0x8000000000) >> 0x26 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x23 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar27 >> 0x28 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar27 & 0x800000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar27 & 0x800000000000) >> 0x2e ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x2b & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar7 = uVar27 >> 0x30 & 7;
          pbVar18 = pbVar18 + uVar7;
          if ((uVar27 & 0x80000000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar6 = (ushort *)((long)puVar40 + ((uVar27 & 0x80000000000000) >> 0x36 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x33 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)(pbVar35 + uVar7);
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar8 = uVar27 >> 0x38 & 7;
          pbVar18 = pbVar18 + uVar8;
          if (-1 < (long)uVar27) {
            uVar36 = -(uint)*puVar6;
          }
          uVar37 = (ulong)uVar36;
          puVar40 = (ushort *)((long)puVar6 + ((ulong)~(uint)(uVar27 >> 0x3e) & 2));
          pbVar35 = pbVar35 + uVar7 + uVar8;
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar27 >> 0x3b & 0xf);
          if (pbVar33 != (byte *)0x0) {
            bVar4 = (byte)puVar42[1];
            uVar20 = (ulong)bVar4;
            uVar26 = (uint)bVar4;
            puVar42 = (ulong *)((long)puVar42 + 9);
            uVar27 = uVar20;
            if (0x17 < bVar4) goto LAB_00185a54;
            goto LAB_00185ac0;
          }
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          if ((uVar20 & 0x80) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          pbVar18 = pbVar18 + (uVar20 & 7);
          pbVar35 = pbVar35 + (uVar20 & 7);
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 3 & 0xf);
          uVar37 = uVar20 >> 8 & 7;
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x80) >> 6 ^ 2));
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar20 & 0x8000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x8000) >> 0xe ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 0xb & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar20 >> 0x10 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar20 & 0x800000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x800000) >> 0x16 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 0x13 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar20 >> 0x18 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if (-1 < (int)(uint)uVar20) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((ulong)((uint)uVar20 >> 0x1e ^ 0xffffffff) & 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 0x1b & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar20 >> 0x20 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar20 & 0x8000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x8000000000) >> 0x26 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 0x23 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar20 >> 0x28 & 7;
          pbVar18 = pbVar18 + uVar37;
          pbVar35 = pbVar35 + uVar37;
          if ((uVar20 & 0x800000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x800000000000) >> 0x2e ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          pbVar18 = pbVar18 + (uVar20 >> 0x2b & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)pbVar35;
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          uVar37 = uVar20 >> 0x30 & 7;
          pbVar18 = pbVar18 + uVar37;
          if ((uVar20 & 0x80000000000000) == 0) {
            uVar36 = -(uint)*puVar40;
          }
          puVar40 = (ushort *)((long)puVar40 + ((uVar20 & 0x80000000000000) >> 0x36 ^ 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          puVar6 = *(ushort **)(pbVar18 + (int)uVar36 + 8);
          *(ushort **)(pbVar18 + 8) = puVar6;
          pbVar18 = pbVar18 + (uVar20 >> 0x33 & 0xf);
          uVar44 = *(undefined8 *)(pbVar18 + (int)uVar36);
          uVar45 = *(undefined8 *)(pbVar35 + uVar37);
          *(ulong *)pbVar18 =
               CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                        CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                 CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                          (char)((ulong)uVar44 >> 0x28),
                                          CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                   (char)((ulong)uVar44 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                            (char)((ulong)uVar44 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar45 >> 0x10) +
                                                                     (char)((ulong)uVar44 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar45
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar44
                                                                                    >> 8),
                                                                              (char)uVar45 +
                                                                              (char)uVar44)))))));
          pbVar33 = (byte *)(uVar20 >> 0x38 & 7);
          pbVar35 = pbVar35 + uVar37 + (long)pbVar33;
          if (-1 < (long)uVar20) {
            uVar36 = -(uint)*puVar40;
          }
          pbVar18 = pbVar18 + (long)pbVar33;
          puVar40 = (ushort *)((long)puVar40 + ((ulong)~(uint)(uVar20 >> 0x3e) & 2));
          *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar36);
          *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar36 + 8);
          puVar42 = puVar42 + 2;
          pbVar29 = pbVar18 + (uVar20 >> 0x3b & 0xf);
          puVar24 = puVar41;
joined_r0x00185de0:
          uVar37 = (ulong)uVar36;
          pbVar18 = pbVar29;
          puVar41 = puVar24;
        }
        else {
          uVar26 = uVar26 & 0xff;
          uVar20 = (ulong)uVar26;
          puVar42 = (ulong *)((long)puVar42 + 1);
          if (0x17 < uVar26) {
LAB_00185a54:
            do {
              uVar44 = *(undefined8 *)(pbVar18 + (int)(uint)uVar37);
              uVar19 = (uint)uVar20;
              uVar45 = *(undefined8 *)pbVar35;
              pbVar35 = pbVar35 + (uVar20 & 7);
              uVar5 = *puVar40;
              uVar36 = (uVar19 >> 7) - 1;
              *(ulong *)pbVar18 =
                   CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                            CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                     CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                              (char)((ulong)uVar44 >> 0x28),
                                              CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                       (char)((ulong)uVar44 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                (char)((ulong)uVar44 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar45 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar44 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
              pbVar18 = pbVar18 + (uVar20 & 7);
              uVar26 = -(uint)uVar5 & uVar36 | (uint)uVar37 & (uVar36 ^ 0xffffffff);
              uVar37 = (ulong)uVar26;
              puVar40 = (ushort *)((long)puVar40 + (ulong)(uVar36 & 2));
              *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar26);
              *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar26 + 8);
              puVar34 = (ulong *)((long)puVar42 + 1);
              bVar4 = (byte)*puVar42;
              uVar20 = (ulong)bVar4;
              uVar26 = (uint)bVar4;
              pbVar18 = pbVar18 + (uVar19 >> 3 & 0xf);
              puVar42 = puVar34;
            } while (0x17 < bVar4);
            uVar27 = uVar20;
          }
LAB_00185ac0:
          if (2 < ((uint)uVar27 & 0xff)) {
            if (puVar41 < puVar3) {
              puVar24 = puVar41 + 1;
              pbVar28 = param_1 + -(ulong)*puVar41;
              pbVar29 = pbVar18 + (uVar26 + 5);
              *(undefined8 *)pbVar18 = *(undefined8 *)pbVar28;
              *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar28 + 8);
              pbVar33 = *(byte **)(pbVar28 + 0x10);
              uVar36 = (int)pbVar28 - (int)pbVar18;
              *(byte **)(pbVar18 + 0x10) = pbVar33;
              if (0x18 < uVar26 + 5) {
                *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar28 + 0x18);
              }
              Hint_Prefetch((long)param_1 - (ulong)puVar41[4],0,0,0);
              goto joined_r0x00185de0;
            }
            goto LAB_00186934;
          }
          if ((uVar27 & 0xff) == 0) {
            if (local_1d0 < puVar17) {
              puVar21 = (ushort *)((long)local_1d0 + 1);
              uVar27 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar27) {
                local_1d0 = (ushort *)((long)local_1d0 + 3);
                if (local_1d0 <= puVar17) {
                  uVar27 = uVar27 + (ulong)*puVar21 * 4;
                  lVar22 = uVar27 + 0x40;
                  if (lVar22 <= (long)pbVar15 - (long)pbVar18) goto LAB_00185e50;
                  goto LAB_00186bdc;
                }
                uVar27 = 0;
              }
              lVar22 = uVar27 + 0x40;
              local_1d0 = puVar21;
              if ((long)pbVar15 - (long)pbVar18 < lVar22) goto LAB_00186bdc;
            }
            else {
              uVar27 = 0;
              lVar22 = 0x40;
              if ((long)pbVar15 - (long)pbVar18 < 0x40) goto LAB_00186bdc;
            }
LAB_00185e50:
            if ((long)pbVar11 - (long)pbVar35 < lVar22) goto LAB_00186c0c;
            uVar27 = uVar27 + 0x37;
            uVar26 = (int)(uVar27 >> 3) + 1;
            lVar25 = (long)(int)uVar37;
            uVar20 = (ulong)uVar26 & 3;
            puVar34 = puVar38;
            lVar32 = lVar22;
            if ((uVar26 & 3) != 0) {
              lVar32 = 0;
              do {
                uVar44 = *(undefined8 *)(pbVar18 + lVar32 + lVar25);
                uVar20 = uVar20 - 1;
                uVar45 = *(undefined8 *)(pbVar35 + lVar32);
                *(ulong *)(pbVar18 + lVar32) =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                lVar32 = lVar32 + 8;
              } while (uVar20 != 0);
              pbVar18 = pbVar18 + lVar32;
              pbVar35 = pbVar35 + lVar32;
              puVar6 = (ushort *)(pbVar35 + -8);
              puVar34 = (ulong *)(pbVar18 + -8);
              lVar32 = lVar22 - lVar32;
            }
            if (0x17 < uVar27) {
              lVar30 = 0;
              do {
                lVar31 = lVar30;
                pbVar33 = pbVar18 + lVar31 + lVar25;
                pbVar29 = pbVar35 + lVar31;
                uVar44 = *(undefined8 *)pbVar33;
                uVar45 = *(undefined8 *)pbVar29;
                pbVar28 = pbVar18 + lVar31;
                *(ulong *)pbVar28 =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                uVar44 = *(undefined8 *)(pbVar33 + 8);
                uVar45 = *(undefined8 *)(pbVar29 + 8);
                *(ulong *)(pbVar28 + 8) =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                uVar44 = *(undefined8 *)(pbVar33 + 0x10);
                uVar45 = *(undefined8 *)(pbVar29 + 0x10);
                *(ulong *)(pbVar28 + 0x10) =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                uVar44 = *(undefined8 *)(pbVar33 + 0x18);
                uVar45 = *(undefined8 *)(pbVar29 + 0x18);
                lVar32 = lVar32 + -0x20;
                *(ulong *)(pbVar28 + 0x18) =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                lVar30 = lVar31 + 0x20;
              } while (8 < lVar32);
              puVar34 = (ulong *)(pbVar18 + lVar31 + 0x18);
              puVar6 = (ushort *)(pbVar35 + lVar31 + 0x18);
            }
            pbVar33 = (byte *)(uVar27 & 0xffff8);
            pbVar18 = (byte *)((long)puVar34 + (lVar22 - (long)pbVar33));
            pbVar35 = (byte *)((long)puVar6 + (lVar22 - (long)pbVar33));
            uVar44 = *(undefined8 *)(pbVar18 + lVar25 + -8);
            uVar45 = *(undefined8 *)(pbVar35 + -8);
            *(ulong *)(pbVar18 + -8) =
                 CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                          CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                   CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                            (char)((ulong)uVar44 >> 0x28),
                                            CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                     (char)((ulong)uVar44 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                              (char)((ulong)uVar44 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar45 >> 0x10)
                                                                       + (char)((ulong)uVar44 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar45
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar44
                                                                                      >> 8),
                                                                                (char)uVar45 +
                                                                                (char)uVar44)))))));
          }
          else if (((uint)uVar27 & 0xff) == 1) {
            if (local_1d0 < puVar17) {
              puVar21 = (ushort *)((long)local_1d0 + 1);
              uVar27 = (ulong)(byte)*local_1d0;
              if (uVar27 < 0xfc) {
                local_1d0 = puVar21;
              }
              else if (puVar17 < (ushort *)((long)local_1d0 + 3U)) {
                uVar27 = 0;
                local_1d0 = puVar21;
              }
              else {
                uVar27 = uVar27 + (ulong)*puVar21 * 4;
                local_1d0 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
              uVar27 = 0;
            }
            if ((long)pbVar15 - (long)pbVar18 < (long)(uVar27 + 99)) {
              if ((long)pbVar15 - (long)pbVar18 < (long)(uVar27 + 0x5b)) goto LAB_00186c64;
              if ((long)param_3 - (long)pbVar18 < (long)(uVar27 + 99)) goto LAB_00186c90;
            }
            uVar37 = -(ulong)*puVar40;
            pbVar29 = pbVar18 + -(ulong)*puVar40;
            *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
            *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
            *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
            *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar29 + 0x18);
            *(undefined8 *)(pbVar18 + 0x20) = *(undefined8 *)(pbVar29 + 0x20);
            *(undefined8 *)(pbVar18 + 0x28) = *(undefined8 *)(pbVar29 + 0x28);
            *(undefined8 *)(pbVar18 + 0x30) = *(undefined8 *)(pbVar29 + 0x30);
            *(undefined8 *)(pbVar18 + 0x38) = *(undefined8 *)(pbVar29 + 0x38);
            pbVar29 = pbVar18 + 0x40;
            do {
              pbVar28 = pbVar29 + 8;
              *(undefined8 *)pbVar29 = *(undefined8 *)(pbVar29 + uVar37);
              pbVar29 = pbVar28;
            } while (pbVar28 < pbVar18 + uVar27 + 0x5b);
            puVar40 = puVar40 + 1;
            pbVar18 = pbVar18 + uVar27 + 0x5b;
          }
          else {
            puVar21 = local_1d0;
            if (local_1d0 < puVar17) {
              puVar21 = (ushort *)((long)local_1d0 + 1);
              uVar37 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar37) {
                if (puVar17 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x00186030;
                uVar37 = uVar37 + (ulong)*puVar21 * 4;
                puVar21 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
joined_r0x00186030:
              uVar37 = 0;
            }
            if (puVar3 <= puVar41) goto LAB_00186c38;
            uVar27 = uVar37 + 0x1d;
            if ((long)pbVar15 - (long)pbVar18 < (long)(uVar37 + 0x2d)) {
              if ((long)pbVar15 - (long)pbVar18 < (long)uVar27) goto LAB_00186cbc;
              if ((long)param_3 - (long)pbVar18 < (long)(uVar37 + 0x2d)) goto LAB_00186ce8;
            }
            pbVar29 = param_1 + -(ulong)*puVar41;
            *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
            *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
            *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
            *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar29 + 0x18);
            pbVar33 = *(byte **)(pbVar29 + 0x20);
            uVar37 = (ulong)(uint)((int)pbVar29 - (int)pbVar18);
            *(byte **)(pbVar18 + 0x20) = pbVar33;
            if (0x28 < uVar27) {
              pbVar28 = pbVar18 + 0x28;
              pbVar29 = pbVar29 + 0x28;
              do {
                pbVar23 = pbVar28 + 8;
                *(undefined8 *)pbVar28 = *(undefined8 *)pbVar29;
                pbVar28 = pbVar23;
                pbVar29 = pbVar29 + 8;
              } while (pbVar23 < pbVar18 + uVar27);
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar41[4],0,0,0);
            pbVar18 = pbVar18 + uVar27;
            puVar41 = puVar41 + 1;
            local_1d0 = puVar21;
          }
        }
        if (puVar38 <= puVar42) goto LAB_001861f0;
        if (param_3 < pbVar18 + 0x168) goto LAB_001861f0;
      } while (pbVar35 < pbVar39);
    }
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
    uVar44 = 0xdb;
  }
  else {
    puVar38 = extraout_x18;
LAB_001861f0:
    uVar26 = (uint)uVar37;
    if (pbVar15 < pbVar18) {
      FUN_0015c3d0();
      pcVar12 = *(code **)PTR_PTR_047cb868;
      if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
      pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
      pcVar10 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
      uVar44 = 0x1c0;
    }
    else {
      if (pbVar39 <= pbVar35) {
        if (pbVar11 <= pbVar35 && (long)pbVar35 - (long)pbVar11 != 0) {
          FUN_0015c3d0();
          pcVar12 = *(code **)PTR_PTR_047cb868;
          if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
          pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar44 = 0x1e7;
          goto LAB_00186b18;
        }
        pbVar35 = local_db + ((long)pbVar35 - (long)pbVar11);
        pbVar11 = local_db;
        pbVar39 = local_db;
      }
      if (__src <= puVar40) {
        if (puVar14 <= puVar40 && (long)puVar40 - (long)puVar14 != 0) {
          FUN_0015c3d0();
          pcVar12 = *(code **)PTR_PTR_047cb868;
          if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
          pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar44 = 0x1e8;
          goto LAB_00186b18;
        }
        puVar40 = (ushort *)((long)local_16c + ((long)puVar40 - (long)puVar14));
        puVar14 = local_16c;
        __src = local_16c;
      }
      if (puVar42 < puVar16) {
        puVar34 = puVar42 + 2;
        puVar43 = puVar42;
        if (puVar42 < puVar34) goto LAB_0018629c;
        do {
          if (pbVar39 <= pbVar35) {
            if (pbVar11 <= pbVar35 && (long)pbVar35 - (long)pbVar11 != 0) {
              FUN_0015c3d0();
              pcVar12 = *(code **)PTR_PTR_047cb868;
              if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
              pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar44 = 500;
              goto LAB_00186b18;
            }
            pbVar35 = local_db + ((long)pbVar35 - (long)pbVar11);
            pbVar11 = local_db;
            pbVar39 = local_db;
          }
          puVar34 = puVar42 + 2;
          puVar43 = puVar42;
          if (__src <= puVar40) {
            if (puVar14 <= puVar40 && (long)puVar40 - (long)puVar14 != 0) {
              FUN_0015c3d0();
              pcVar12 = *(code **)PTR_PTR_047cb868;
              if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
              pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar44 = 0x1f5;
              goto LAB_00186b18;
            }
            puVar40 = (ushort *)((long)local_16c + ((long)puVar40 - (long)puVar14));
            puVar14 = local_16c;
            __src = local_16c;
          }
LAB_0018629c:
          do {
            puVar42 = (ulong *)((long)puVar43 + 1);
            bVar4 = (byte)*puVar43;
            uVar27 = (ulong)bVar4;
            uVar26 = (uint)uVar37;
            if (0x17 < bVar4) {
              if (param_3 < pbVar18 + 8) {
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                pcVar10 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
              }
              else {
                uVar44 = *(undefined8 *)(pbVar18 + (int)uVar26);
                uVar45 = *(undefined8 *)pbVar35;
                uVar5 = *puVar40;
                *(ulong *)pbVar18 =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                pbVar18 = pbVar18 + (uVar27 & 7);
                if (pbVar18 + 0x10 <= param_3) {
                  uVar36 = (bVar4 >> 7) - 1;
                  uVar26 = uVar26 & (uVar36 ^ 0xffffffff);
                  pbVar33 = (byte *)(ulong)uVar26;
                  uVar26 = -(uint)uVar5 & uVar36 | uVar26;
                  uVar37 = (ulong)uVar26;
                  puVar40 = (ushort *)((long)puVar40 + (ulong)(uVar36 & 2));
                  *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + (int)uVar26);
                  pbVar35 = pbVar35 + (uVar27 & 7);
                  *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar18 + (int)uVar26 + 8);
                  pbVar18 = pbVar18 + ((ulong)(bVar4 >> 3) & 0xf);
                  goto LAB_00186248;
                }
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                pcVar10 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
              }
              pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              uVar44 = 0x1fc;
              goto LAB_00186b18;
            }
            if (bVar4 < 3) {
              if (bVar4 == 0) {
                if (local_1d0 < puVar17) {
                  puVar6 = (ushort *)((long)local_1d0 + 1);
                  uVar27 = (ulong)(byte)*local_1d0;
                  if (0xfb < uVar27) {
                    local_1d0 = (ushort *)((long)local_1d0 + 3);
                    if (local_1d0 <= puVar17) {
                      uVar27 = uVar27 + (ulong)*puVar6 * 4;
                      lVar22 = uVar27 + 0x40;
                      if (lVar22 <= (long)pbVar15 - (long)pbVar18) goto LAB_00186468;
                      goto LAB_00186bdc;
                    }
                    uVar27 = 0;
                  }
                  lVar22 = uVar27 + 0x40;
                  local_1d0 = puVar6;
                  if ((long)pbVar15 - (long)pbVar18 < lVar22) goto LAB_00186bdc;
                }
                else {
                  uVar27 = 0;
                  lVar22 = 0x40;
                  if ((long)pbVar15 - (long)pbVar18 < 0x40) goto LAB_00186bdc;
                }
LAB_00186468:
                if ((long)pbVar11 - (long)pbVar35 < lVar22) goto LAB_00186c0c;
                uVar27 = uVar27 + 0x37;
                uVar36 = (int)(uVar27 >> 3) + 1;
                uVar20 = (ulong)uVar36 & 3;
                lVar32 = lVar22;
                if ((uVar36 & 3) != 0) {
                  lVar32 = 0;
                  do {
                    uVar44 = *(undefined8 *)(pbVar18 + lVar32 + (int)uVar26);
                    uVar20 = uVar20 - 1;
                    uVar45 = *(undefined8 *)(pbVar35 + lVar32);
                    *(ulong *)(pbVar18 + lVar32) =
                         CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                                  CONCAT16((char)((ulong)uVar45 >> 0x30) +
                                           (char)((ulong)uVar44 >> 0x30),
                                           CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                    (char)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                             (char)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar45 >> 0x18)
                                                                      + (char)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar45
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                    lVar32 = lVar32 + 8;
                  } while (uVar20 != 0);
                  pbVar18 = pbVar18 + lVar32;
                  pbVar35 = pbVar35 + lVar32;
                  pbVar33 = pbVar18 + -8;
                  puVar38 = (ulong *)(pbVar35 + -8);
                  lVar32 = lVar22 - lVar32;
                }
                if (0x17 < uVar27) {
                  lVar25 = 0;
                  do {
                    lVar30 = lVar25;
                    pbVar33 = pbVar18 + lVar30 + (int)uVar26;
                    pbVar29 = pbVar35 + lVar30;
                    uVar44 = *(undefined8 *)pbVar33;
                    uVar45 = *(undefined8 *)pbVar29;
                    pbVar28 = pbVar18 + lVar30;
                    *(ulong *)pbVar28 =
                         CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                                  CONCAT16((char)((ulong)uVar45 >> 0x30) +
                                           (char)((ulong)uVar44 >> 0x30),
                                           CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                    (char)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                             (char)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar45 >> 0x18)
                                                                      + (char)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar45
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                    uVar44 = *(undefined8 *)(pbVar33 + 8);
                    uVar45 = *(undefined8 *)(pbVar29 + 8);
                    *(ulong *)(pbVar28 + 8) =
                         CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                                  CONCAT16((char)((ulong)uVar45 >> 0x30) +
                                           (char)((ulong)uVar44 >> 0x30),
                                           CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                    (char)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                             (char)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar45 >> 0x18)
                                                                      + (char)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar45
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                    uVar44 = *(undefined8 *)(pbVar33 + 0x10);
                    uVar45 = *(undefined8 *)(pbVar29 + 0x10);
                    *(ulong *)(pbVar28 + 0x10) =
                         CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                                  CONCAT16((char)((ulong)uVar45 >> 0x30) +
                                           (char)((ulong)uVar44 >> 0x30),
                                           CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                    (char)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                             (char)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar45 >> 0x18)
                                                                      + (char)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar45
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                    uVar44 = *(undefined8 *)(pbVar33 + 0x18);
                    uVar45 = *(undefined8 *)(pbVar29 + 0x18);
                    lVar32 = lVar32 + -0x20;
                    *(ulong *)(pbVar28 + 0x18) =
                         CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                                  CONCAT16((char)((ulong)uVar45 >> 0x30) +
                                           (char)((ulong)uVar44 >> 0x30),
                                           CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                    (char)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                             (char)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar45 >> 0x18)
                                                                      + (char)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar45
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
                    lVar25 = lVar30 + 0x20;
                  } while (8 < lVar32);
                  pbVar33 = pbVar18 + lVar30 + 0x18;
                  puVar38 = (ulong *)(pbVar35 + lVar30 + 0x18);
                }
                lVar22 = lVar22 - (uVar27 & 0xffff8);
                pbVar18 = pbVar33 + lVar22;
                pbVar35 = (byte *)((long)puVar38 + lVar22);
                uVar44 = *(undefined8 *)(pbVar18 + (long)(int)uVar26 + -8);
                uVar45 = *(undefined8 *)(pbVar35 + -8);
                *(ulong *)(pbVar18 + -8) =
                     CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                              CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                                 (char)((ulong)uVar44 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                          (char)((ulong)uVar44 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                   (char)((ulong)uVar44 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar45 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar44 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
              }
              else if (bVar4 == 1) {
                if (local_1d0 < puVar17) {
                  puVar6 = (ushort *)((long)local_1d0 + 1);
                  uVar27 = (ulong)(byte)*local_1d0;
                  if (uVar27 < 0xfc) {
                    local_1d0 = puVar6;
                  }
                  else if (puVar17 < (ushort *)((long)local_1d0 + 3U)) {
                    uVar27 = 0;
                    local_1d0 = puVar6;
                  }
                  else {
                    uVar27 = uVar27 + (ulong)*puVar6 * 4;
                    local_1d0 = (ushort *)((long)local_1d0 + 3U);
                  }
                }
                else {
                  uVar27 = 0;
                }
                if ((long)pbVar15 - (long)pbVar18 < (long)(uVar27 + 99)) {
                  if ((long)pbVar15 - (long)pbVar18 < (long)(uVar27 + 0x5b)) goto LAB_00186c64;
                  if ((long)param_3 - (long)pbVar18 < (long)(uVar27 + 99)) goto LAB_00186c90;
                }
                uVar37 = -(ulong)*puVar40;
                pbVar29 = pbVar18 + -(ulong)*puVar40;
                *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
                *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
                *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
                *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar29 + 0x18);
                *(undefined8 *)(pbVar18 + 0x20) = *(undefined8 *)(pbVar29 + 0x20);
                *(undefined8 *)(pbVar18 + 0x28) = *(undefined8 *)(pbVar29 + 0x28);
                *(undefined8 *)(pbVar18 + 0x30) = *(undefined8 *)(pbVar29 + 0x30);
                *(undefined8 *)(pbVar18 + 0x38) = *(undefined8 *)(pbVar29 + 0x38);
                pbVar29 = pbVar18 + 0x40;
                do {
                  pbVar28 = pbVar29 + 8;
                  *(undefined8 *)pbVar29 = *(undefined8 *)(pbVar29 + uVar37);
                  pbVar29 = pbVar28;
                } while (pbVar28 < pbVar18 + uVar27 + 0x5b);
                puVar40 = puVar40 + 1;
                pbVar18 = pbVar18 + uVar27 + 0x5b;
              }
              else {
                if (local_1d0 < puVar17) {
                  puVar6 = (ushort *)((long)local_1d0 + 1);
                  uVar37 = (ulong)(byte)*local_1d0;
                  if (0xfb < uVar37) {
                    if (puVar17 < (ushort *)((long)local_1d0 + 3U)) {
                      uVar37 = 0;
                    }
                    else {
                      uVar37 = uVar37 + (ulong)*puVar6 * 4;
                      puVar6 = (ushort *)((long)local_1d0 + 3U);
                    }
                  }
                }
                else {
                  uVar37 = 0;
                  puVar6 = local_1d0;
                }
                local_1d0 = puVar6;
                if (puVar3 <= puVar41) goto LAB_00186c38;
                uVar27 = uVar37 + 0x1d;
                if ((long)pbVar15 - (long)pbVar18 < (long)(uVar37 + 0x2d)) {
                  if ((long)pbVar15 - (long)pbVar18 < (long)uVar27) goto LAB_00186cbc;
                  if ((long)param_3 - (long)pbVar18 < (long)(uVar37 + 0x2d)) goto LAB_00186ce8;
                }
                pbVar29 = param_1 + -(ulong)*puVar41;
                *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
                *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
                *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
                *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar29 + 0x18);
                uVar37 = (ulong)(uint)((int)pbVar29 - (int)pbVar18);
                *(undefined8 *)(pbVar18 + 0x20) = *(undefined8 *)(pbVar29 + 0x20);
                if (0x28 < uVar27) {
                  pbVar28 = pbVar18 + 0x28;
                  pbVar29 = pbVar29 + 0x28;
                  do {
                    pbVar23 = pbVar28 + 8;
                    *(undefined8 *)pbVar28 = *(undefined8 *)pbVar29;
                    pbVar28 = pbVar23;
                    pbVar29 = pbVar29 + 8;
                  } while (pbVar23 < pbVar18 + uVar27);
                }
                Hint_Prefetch((long)param_1 - (ulong)puVar41[4],0,0,0);
                pbVar18 = pbVar18 + uVar27;
                puVar41 = puVar41 + 1;
              }
            }
            else {
              if (puVar3 <= puVar41) goto LAB_00186934;
              lVar22 = uVar27 + 5;
              if ((long)pbVar15 - (long)pbVar18 < 0x24) {
                if ((long)pbVar15 - (long)pbVar18 < lVar22) {
                  FUN_0015c3d0();
                  pcVar12 = *(code **)PTR_PTR_047cb868;
                  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
                  pcVar10 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n"
                  ;
                  uVar44 = 0x111;
                  goto LAB_00186b18;
                }
                if ((long)param_3 - (long)pbVar18 < (long)(uVar27 + 0x15)) {
                  FUN_0015c3d0();
                  pcVar12 = *(code **)PTR_PTR_047cb868;
                  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
                  pcVar10 = 
                  "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n";
                  uVar44 = 0x115;
                  goto LAB_00186b18;
                }
              }
              pbVar29 = param_1 + -(ulong)*puVar41;
              *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
              *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
              uVar37 = (ulong)(uint)((int)pbVar29 - (int)pbVar18);
              *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
              if (0x18 < (uint)lVar22) {
                *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)(pbVar29 + 0x18);
              }
              Hint_Prefetch((long)param_1 - (ulong)puVar41[4],0,0,0);
              pbVar18 = pbVar18 + lVar22;
              puVar41 = puVar41 + 1;
            }
            if (pbVar39 <= pbVar35) {
              if (pbVar11 <= pbVar35 && (long)pbVar35 - (long)pbVar11 != 0) {
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
                uVar44 = 0x208;
                goto LAB_00186b18;
              }
              pbVar35 = local_db + ((long)pbVar35 - (long)pbVar11);
              pbVar11 = local_db;
              pbVar39 = local_db;
            }
            puVar34 = (ulong *)((long)puVar43 + 0x11);
            if (__src <= puVar40) {
              if (puVar14 <= puVar40 && (long)puVar40 - (long)puVar14 != 0) {
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
                pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
                uVar44 = 0x209;
                goto LAB_00186b18;
              }
              puVar40 = (ushort *)((long)local_16c + ((long)puVar40 - (long)puVar14));
              puVar14 = local_16c;
              __src = local_16c;
            }
LAB_00186248:
            uVar26 = (uint)uVar37;
            if (puVar42 == puVar16) goto LAB_001867b4;
            puVar43 = puVar42;
          } while (puVar42 < puVar34);
        } while( true );
      }
LAB_001867b4:
      if (pbVar15 <= pbVar18) {
        if (pbVar18 != pbVar15) {
          return 0;
        }
LAB_001868c4:
        if (puVar14 <= puVar40 && (long)puVar40 - (long)puVar14 != 0) {
          return 0;
        }
        if (pbVar11 <= pbVar35 && (long)pbVar35 - (long)pbVar11 != 0) {
          return 0;
        }
        *param_7 = uVar26;
        *(byte **)(param_6 + 0x38) = pbVar1 + ((long)pbVar35 - (long)pbVar11);
        *(byte **)(param_6 + 0x48) = (byte *)((long)puVar2 + ((long)puVar40 - (long)puVar14));
        if (puVar17 < local_1d0) {
          return 0;
        }
        *(ushort **)(param_6 + 0x10) = local_1d0;
        return param_5;
      }
      uVar37 = (long)pbVar15 - (long)pbVar18;
      if (pbVar35 + uVar37 <= pbVar11) {
        uVar27 = uVar37 - 8;
        if (7 < (long)uVar37) {
          uVar20 = uVar37;
          if (((uint)uVar27 >> 3 & 1) == 0) {
            uVar44 = *(undefined8 *)(pbVar18 + (int)uVar26);
            uVar45 = *(undefined8 *)pbVar35;
            *(ulong *)pbVar18 =
                 CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                          CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                   CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                            (char)((ulong)uVar44 >> 0x28),
                                            CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                     (char)((ulong)uVar44 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                              (char)((ulong)uVar44 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar45 >> 0x10)
                                                                       + (char)((ulong)uVar44 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar45
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar44
                                                                                      >> 8),
                                                                                (char)uVar45 +
                                                                                (char)uVar44)))))));
            uVar20 = uVar27;
            pbVar18 = pbVar18 + 8;
            pbVar35 = pbVar35 + 8;
          }
          if (7 < uVar27) {
            do {
              uVar44 = *(undefined8 *)pbVar35;
              uVar20 = uVar20 - 0x10;
              uVar45 = *(undefined8 *)(pbVar18 + (long)(int)uVar26 + 8 + -8);
              *(ulong *)pbVar18 =
                   CONCAT17((char)((ulong)uVar44 >> 0x38) + (char)((ulong)uVar45 >> 0x38),
                            CONCAT16((char)((ulong)uVar44 >> 0x30) + (char)((ulong)uVar45 >> 0x30),
                                     CONCAT15((char)((ulong)uVar44 >> 0x28) +
                                              (char)((ulong)uVar45 >> 0x28),
                                              CONCAT14((char)((ulong)uVar44 >> 0x20) +
                                                       (char)((ulong)uVar45 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar44 >> 0x18) +
                                                                (char)((ulong)uVar45 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar44 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar45 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar44 >> 8) + (char)((ulong)uVar45 >> 8),
                                                  (char)uVar44 + (char)uVar45)))))));
              uVar44 = *(undefined8 *)(pbVar18 + (long)(int)uVar26 + 8);
              uVar45 = *(undefined8 *)(pbVar35 + 8);
              pbVar35 = pbVar35 + 0x10;
              *(ulong *)(pbVar18 + 8) =
                   CONCAT17((char)((ulong)uVar45 >> 0x38) + (char)((ulong)uVar44 >> 0x38),
                            CONCAT16((char)((ulong)uVar45 >> 0x30) + (char)((ulong)uVar44 >> 0x30),
                                     CONCAT15((char)((ulong)uVar45 >> 0x28) +
                                              (char)((ulong)uVar44 >> 0x28),
                                              CONCAT14((char)((ulong)uVar45 >> 0x20) +
                                                       (char)((ulong)uVar44 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar45 >> 0x18) +
                                                                (char)((ulong)uVar44 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar45 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar44 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar45 >> 8) + (char)((ulong)uVar44 >> 8),
                                                  (char)uVar45 + (char)uVar44)))))));
              pbVar18 = pbVar18 + 0x10;
            } while (7 < (long)uVar20);
          }
          uVar37 = uVar37 & 7;
        }
        if (uVar37 != 0) {
          uVar27 = uVar37;
          if ((uVar37 & 1) != 0) {
            *pbVar18 = pbVar18[(int)uVar26] + *pbVar35;
            pbVar35 = pbVar35 + 1;
            uVar27 = uVar37 - 1;
            pbVar18 = pbVar18 + 1;
          }
          if (uVar37 != 1) {
            pbVar15 = pbVar18 + 1;
            do {
              uVar27 = uVar27 - 2;
              pbVar15[-1] = (pbVar15 + (int)uVar26)[-1] + *pbVar35;
              pbVar39 = pbVar35 + 1;
              pbVar35 = pbVar35 + 2;
              *pbVar15 = pbVar15[(int)uVar26] + *pbVar39;
              pbVar15 = pbVar15 + 2;
            } while (uVar27 != 0);
          }
        }
        goto LAB_001868c4;
      }
      FUN_0015c3d0();
      pcVar12 = *(code **)PTR_PTR_047cb868;
      if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
      pcVar9 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
      pcVar10 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
      uVar44 = 0x217;
    }
  }
LAB_00186b18:
  (*pcVar12)(0,pcVar9,uVar44,pcVar10);
LAB_00186b1c:
  FUN_0015c3f0();
  return 0;
LAB_00186bdc:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar44 = 0x30;
  goto LAB_00186b18;
LAB_00186c0c:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar44 = 0x31;
  goto LAB_00186b18;
LAB_00186c64:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar44 = 0x86;
  goto LAB_00186b18;
LAB_00186c90:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar44 = 0x87;
  goto LAB_00186b18;
LAB_00186c38:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar44 = 0xb6;
  goto LAB_00186b18;
LAB_00186cbc:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar44 = 0xc6;
  goto LAB_00186b18;
LAB_00186ce8:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar44 = 199;
  goto LAB_00186b18;
LAB_00186934:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_00186b1c;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar44 = 0x101;
  goto LAB_00186b18;
}


