/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00188270; name: FUN_00188270
 */


undefined8
FUN_00188270(long param_1,long param_2,char *param_3,char *param_4,undefined8 param_5,long param_6,
            uint *param_7)

{
  char *pcVar1;
  char *pcVar2;
  ushort *puVar3;
  ushort uVar4;
  byte bVar5;
  char *__src;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong *puVar9;
  size_t sVar10;
  ushort *puVar11;
  char *pcVar12;
  code *pcVar13;
  ushort *puVar14;
  ulong *puVar15;
  ushort *puVar16;
  char *pcVar17;
  ushort *puVar18;
  char *pcVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  char *extraout_x16;
  long lVar29;
  char *pcVar30;
  char *extraout_x17;
  char *pcVar31;
  char *extraout_x18;
  char *pcVar32;
  ulong *puVar33;
  uint uVar34;
  ulong uVar35;
  ulong *puVar36;
  ushort *__src_00;
  undefined8 uVar37;
  undefined8 uVar38;
  ushort *local_1d0;
  ushort local_16c [72];
  char local_db [123];
  
  pcVar7 = *(char **)(param_6 + 0x38);
  pcVar2 = *(char **)(param_6 + 0x40);
  puVar9 = *(ulong **)(param_6 + 0x88);
  puVar36 = (ulong *)((long)puVar9 + -0xf);
  pcVar8 = (char *)(param_1 + param_2);
  uVar35 = (ulong)*param_7;
  puVar33 = *(ulong **)(param_6 + 0x20);
  sVar10 = (long)pcVar2 - (long)pcVar7;
  if (0x70 < (long)sVar10) {
    sVar10 = 0x71;
  }
  local_1d0 = *(ushort **)(param_6 + 0x10);
  puVar16 = *(ushort **)(param_6 + 0x48);
  puVar3 = *(ushort **)(param_6 + 0x50);
  puVar11 = *(ushort **)(param_6 + 0x18);
  pcVar17 = (char *)(param_1 + 8);
  __src = pcVar2 + -sVar10;
  memcpy(local_db + -sVar10,__src,sVar10);
  sVar10 = (long)puVar3 - (long)puVar16;
  if (0x1f < (long)sVar10) {
    sVar10 = 0x20;
  }
  local_db[0] = '\0';
  local_db[1] = '\0';
  local_db[2] = '\0';
  local_db[3] = '\0';
  local_db[4] = '\0';
  local_db[5] = '\0';
  local_db[6] = '\0';
  local_db[7] = '\0';
  local_db[8] = '\0';
  local_db[9] = '\0';
  local_db[10] = '\0';
  local_db[0xb] = '\0';
  local_db[0xc] = '\0';
  local_db[0xd] = '\0';
  local_db[0xe] = '\0';
  local_db[0xf] = '\0';
  local_db[0x10] = '\0';
  local_db[0x11] = '\0';
  local_db[0x12] = '\0';
  local_db[0x13] = '\0';
  local_db[0x14] = '\0';
  local_db[0x15] = '\0';
  local_db[0x16] = '\0';
  local_db[0x17] = '\0';
  local_db[0x18] = '\0';
  local_db[0x19] = '\0';
  local_db[0x1a] = '\0';
  local_db[0x1b] = '\0';
  local_db[0x1c] = '\0';
  local_db[0x1d] = '\0';
  local_db[0x1e] = '\0';
  local_db[0x1f] = '\0';
  local_db[0x20] = '\0';
  local_db[0x21] = '\0';
  local_db[0x22] = '\0';
  local_db[0x23] = '\0';
  local_db[0x24] = '\0';
  local_db[0x25] = '\0';
  local_db[0x26] = '\0';
  local_db[0x27] = '\0';
  local_db[0x28] = '\0';
  local_db[0x29] = '\0';
  local_db[0x2a] = '\0';
  local_db[0x2b] = '\0';
  local_db[0x2c] = '\0';
  local_db[0x2d] = '\0';
  local_db[0x2e] = '\0';
  local_db[0x2f] = '\0';
  local_db[0x30] = '\0';
  local_db[0x31] = '\0';
  local_db[0x32] = '\0';
  local_db[0x33] = '\0';
  local_db[0x34] = '\0';
  local_db[0x35] = '\0';
  local_db[0x36] = '\0';
  local_db[0x37] = '\0';
  local_db[0x38] = '\0';
  local_db[0x39] = '\0';
  local_db[0x3a] = '\0';
  local_db[0x3b] = '\0';
  local_db[0x3c] = '\0';
  local_db[0x3d] = '\0';
  local_db[0x3e] = '\0';
  local_db[0x3f] = '\0';
  local_db[0x40] = '\0';
  local_db[0x41] = '\0';
  local_db[0x42] = '\0';
  local_db[0x43] = '\0';
  local_db[0x44] = '\0';
  local_db[0x45] = '\0';
  local_db[0x46] = '\0';
  local_db[0x47] = '\0';
  local_db[0x48] = '\0';
  local_db[0x49] = '\0';
  local_db[0x4a] = '\0';
  local_db[0x4b] = '\0';
  local_db[0x4c] = '\0';
  local_db[0x4d] = '\0';
  local_db[0x4e] = '\0';
  local_db[0x4f] = '\0';
  local_db[0x50] = '\0';
  local_db[0x51] = '\0';
  local_db[0x52] = '\0';
  local_db[0x53] = '\0';
  local_db[0x54] = '\0';
  local_db[0x55] = '\0';
  local_db[0x56] = '\0';
  local_db[0x57] = '\0';
  local_db[0x58] = '\0';
  local_db[0x59] = '\0';
  local_db[0x5a] = '\0';
  local_db[0x5b] = '\0';
  local_db[0x5c] = '\0';
  local_db[0x5d] = '\0';
  local_db[0x5e] = '\0';
  local_db[0x5f] = '\0';
  local_db[0x60] = '\0';
  local_db[0x61] = '\0';
  local_db[0x62] = '\0';
  local_db[99] = '\0';
  local_db[100] = '\0';
  local_db[0x65] = '\0';
  local_db[0x66] = '\0';
  local_db[0x67] = '\0';
  __src_00 = (ushort *)((long)puVar3 - sVar10);
  local_db[0x68] = '\0';
  local_db[0x69] = '\0';
  local_db[0x6a] = '\0';
  local_db[0x6b] = '\0';
  local_db[0x6c] = '\0';
  local_db[0x6d] = '\0';
  local_db[0x6e] = '\0';
  local_db[0x6f] = '\0';
  local_db[0x70] = 0;
  memcpy((void *)((long)local_16c - sVar10),__src_00,sVar10);
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
  pcVar12 = pcVar2;
  puVar14 = puVar3;
  pcVar30 = extraout_x16;
  pcVar31 = extraout_x17;
  if ((puVar33 < puVar36) && ((char *)(param_1 + 0x170U) <= param_3)) {
    pcVar32 = extraout_x18;
    do {
      if (__src <= pcVar7) {
        if (pcVar12 <= pcVar7 && (long)pcVar7 - (long)pcVar12 != 0) {
          FUN_0015c3d0();
          pcVar13 = *(code **)PTR_PTR_047cb868;
          if (pcVar13 == (code *)0x0) goto LAB_00189360;
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar37 = 0xdb;
          goto LAB_0018935c;
        }
        pcVar7 = local_db + ((long)pcVar7 - (long)pcVar12);
        __src = local_db;
        pcVar12 = local_db;
      }
      if (__src_00 <= puVar16) {
        if (puVar14 <= puVar16 && (long)puVar16 - (long)puVar14 != 0) {
          FUN_0015c3d0();
          pcVar13 = *(code **)PTR_PTR_047cb868;
          if (pcVar13 == (code *)0x0) goto LAB_00189360;
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar37 = 0xdc;
          goto LAB_0018935c;
        }
        puVar16 = (ushort *)((long)local_16c + ((long)puVar16 - (long)puVar14));
        puVar14 = local_16c;
        __src_00 = local_16c;
      }
      uVar23 = *puVar33;
      uVar21 = (uint)uVar23;
      if ((uVar23 + 0xe7e7e7e7e7e7e7e8 & (uVar23 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar20 = puVar33[1];
        uVar34 = (uint)uVar35;
        uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
        uVar38 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                      CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                               CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                        (char)((ulong)uVar37 >> 0x28),
                                        CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                 (char)((ulong)uVar37 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                          (char)((ulong)uVar37 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                   (char)((ulong)uVar37 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar38 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar37 >>
                                                                                  8),(char)uVar38 +
                                                                                     (char)uVar37)))
                                                ))));
        if ((uVar23 & 0x80) == 0) {
          uVar34 = -(uint)*puVar16;
        }
        pcVar17 = pcVar17 + (uVar23 & 7);
        if (param_4 <= pcVar17 + (int)uVar34) {
          *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
          pcVar7 = pcVar7 + (uVar23 & 7);
          *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
          pcVar17 = pcVar17 + (uVar23 >> 3 & 0xf);
          uVar35 = uVar23 >> 8 & 7;
          uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
          uVar38 = *(undefined8 *)pcVar7;
          puVar16 = (ushort *)((long)puVar16 + ((uVar23 & 0x80) >> 6 ^ 2));
          *(ulong *)pcVar17 =
               CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                 CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                          (char)((ulong)uVar37 >> 0x28),
                                          CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                   (char)((ulong)uVar37 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                            (char)((ulong)uVar37 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                     (char)((ulong)uVar37 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar38
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar37
                                                                                    >> 8),
                                                                              (char)uVar38 +
                                                                              (char)uVar37)))))));
          if ((uVar23 & 0x8000) == 0) {
            uVar34 = -(uint)*puVar16;
          }
          pcVar17 = pcVar17 + uVar35;
          if (param_4 <= pcVar17 + (int)uVar34) {
            *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
            pcVar7 = pcVar7 + uVar35;
            puVar16 = (ushort *)((long)puVar16 + ((uVar23 & 0x8000) >> 0xe ^ 2));
            *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
            pcVar17 = pcVar17 + (uVar23 >> 0xb & 0xf);
            uVar35 = uVar23 >> 0x10 & 7;
            uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
            uVar38 = *(undefined8 *)pcVar7;
            *(ulong *)pcVar17 =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            if ((uVar23 & 0x800000) == 0) {
              uVar34 = -(uint)*puVar16;
            }
            pcVar17 = pcVar17 + uVar35;
            if (param_4 <= pcVar17 + (int)uVar34) {
              *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
              pcVar7 = pcVar7 + uVar35;
              puVar16 = (ushort *)((long)puVar16 + ((uVar23 & 0x800000) >> 0x16 ^ 2));
              *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
              pcVar17 = pcVar17 + (uVar23 >> 0x13 & 0xf);
              uVar35 = uVar23 >> 0x18 & 7;
              uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
              uVar38 = *(undefined8 *)pcVar7;
              *(ulong *)pcVar17 =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              if (-1 < (int)uVar21) {
                uVar34 = -(uint)*puVar16;
              }
              pcVar17 = pcVar17 + uVar35;
              if (param_4 <= pcVar17 + (int)uVar34) {
                *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                pcVar7 = pcVar7 + uVar35;
                puVar16 = (ushort *)((long)puVar16 + ((ulong)(uVar21 >> 0x1e ^ 0xffffffff) & 2));
                *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                pcVar17 = pcVar17 + (uVar23 >> 0x1b & 0xf);
                uVar35 = uVar23 >> 0x20 & 7;
                uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                uVar38 = *(undefined8 *)pcVar7;
                *(ulong *)pcVar17 =
                     CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                              CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                 (char)((ulong)uVar37 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                          (char)((ulong)uVar37 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                   (char)((ulong)uVar37 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar38 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar37 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
                if ((uVar23 & 0x8000000000) == 0) {
                  uVar34 = -(uint)*puVar16;
                }
                pcVar17 = pcVar17 + uVar35;
                if (param_4 <= pcVar17 + (int)uVar34) {
                  *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                  pcVar7 = pcVar7 + uVar35;
                  puVar16 = (ushort *)((long)puVar16 + ((uVar23 & 0x8000000000) >> 0x26 ^ 2));
                  uVar35 = uVar23 >> 0x28 & 7;
                  *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                  pcVar17 = pcVar17 + (uVar23 >> 0x23 & 0xf);
                  uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                  uVar38 = *(undefined8 *)pcVar7;
                  *(ulong *)pcVar17 =
                       CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                                CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                         (char)((ulong)uVar37 >> 0x30),
                                         CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                  (char)((ulong)uVar37 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                           (char)((ulong)uVar37 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                    (char)((ulong)uVar37 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar38 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar37 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
                  pcVar17 = pcVar17 + uVar35;
                  if ((uVar23 & 0x800000000000) == 0) {
                    uVar34 = -(uint)*puVar16;
                  }
                  if (param_4 <= pcVar17 + (int)uVar34) {
                    pcVar7 = pcVar7 + uVar35;
                    *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                    puVar16 = (ushort *)((long)puVar16 + ((uVar23 & 0x800000000000) >> 0x2e ^ 2));
                    *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                    pcVar17 = pcVar17 + (uVar23 >> 0x2b & 0xf);
                    uVar35 = uVar23 >> 0x30 & 7;
                    uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                    uVar38 = *(undefined8 *)pcVar7;
                    *(ulong *)pcVar17 =
                         CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                                  CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                           (char)((ulong)uVar37 >> 0x30),
                                           CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                    (char)((ulong)uVar37 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                             (char)((ulong)uVar37 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar38 >> 0x18)
                                                                      + (char)((ulong)uVar37 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar38
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar37
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
                    if ((uVar23 & 0x80000000000000) == 0) {
                      uVar34 = -(uint)*puVar16;
                    }
                    pcVar17 = pcVar17 + uVar35;
                    if (param_4 <= pcVar17 + (int)uVar34) {
                      *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                      puVar16 = (ushort *)
                                ((long)puVar16 + ((uVar23 & 0x80000000000000) >> 0x36 ^ 2));
                      pcVar19 = pcVar17 + (uVar23 >> 0x33 & 0xf);
                      *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                      uVar37 = *(undefined8 *)(pcVar19 + (int)uVar34);
                      uVar38 = *(undefined8 *)(pcVar7 + uVar35);
                      *(ulong *)pcVar19 =
                           CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                                    CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                             (char)((ulong)uVar37 >> 0x30),
                                             CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                      (char)((ulong)uVar37 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                               (char)((ulong)uVar37 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar38 >> 0x18
                                                                              ) + (char)((ulong)
                                                  uVar37 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                           (char)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar38 >> 8) +
                                                                    (char)((ulong)uVar37 >> 8),
                                                                    (char)uVar38 + (char)uVar37)))))
                                            ));
                      uVar6 = uVar23 >> 0x38 & 7;
                      pcVar19 = pcVar19 + uVar6;
                      if (-1 < (long)uVar23) {
                        uVar34 = -(uint)*puVar16;
                      }
                      pcVar31 = (char *)(long)(int)uVar34;
                      pcVar32 = pcVar19 + (long)pcVar31;
                      if (param_4 <= pcVar32) {
                        pcVar7 = pcVar7 + uVar35 + uVar6;
                        pcVar30 = (char *)((ulong)~(uint)(uVar23 >> 0x3e) & 2);
                        puVar16 = (ushort *)((long)puVar16 + (long)pcVar30);
                        *(undefined8 *)pcVar19 = *(undefined8 *)pcVar32;
                        pcVar17 = pcVar19 + (uVar23 >> 0x3b & 0xf);
                        *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar32 + 8);
                        if ((uVar20 + 0xe7e7e7e7e7e7e7e8 & (uVar20 ^ 0xffffffffffffffff) &
                            0x8080808080808080) != 0) {
                          bVar5 = (byte)puVar33[1];
                          puVar33 = (ulong *)((long)puVar33 + 9);
                          goto joined_r0x00188814;
                        }
                        uVar37 = *(undefined8 *)(pcVar17 + (long)pcVar31);
                        uVar38 = *(undefined8 *)pcVar7;
                        *(ulong *)pcVar17 =
                             CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                                      CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                               (char)((ulong)uVar37 >> 0x30),
                                               CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                        (char)((ulong)uVar37 >> 0x28),
                                                        CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                                 (char)((ulong)uVar37 >> 0x20),
                                                                 CONCAT13((char)((ulong)uVar38 >>
                                                                                0x18) +
                                                                          (char)((ulong)uVar37 >>
                                                                                0x18),
                                                                          CONCAT12((char)((ulong)
                                                  uVar38 >> 0x10) + (char)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar38 >> 8) +
                                                           (char)((ulong)uVar37 >> 8),
                                                           (char)uVar38 + (char)uVar37)))))));
                        if ((uVar20 & 0x80) == 0) {
                          uVar34 = -(uint)*puVar16;
                        }
                        pcVar17 = pcVar17 + (uVar20 & 7);
                        if (param_4 <= pcVar17 + (int)uVar34) {
                          *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                          pcVar7 = pcVar7 + (uVar20 & 7);
                          *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                          pcVar17 = pcVar17 + (uVar20 >> 3 & 0xf);
                          uVar35 = uVar20 >> 8 & 7;
                          uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                          uVar38 = *(undefined8 *)pcVar7;
                          puVar16 = (ushort *)((long)puVar16 + ((uVar20 & 0x80) >> 6 ^ 2));
                          *(ulong *)pcVar17 =
                               CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                        (char)((ulong)uVar37 >> 0x38),
                                        CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                 (char)((ulong)uVar37 >> 0x30),
                                                 CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                          (char)((ulong)uVar37 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                                   (char)((ulong)uVar37 >> 0x20),
                                                                   CONCAT13((char)((ulong)uVar38 >>
                                                                                  0x18) +
                                                                            (char)((ulong)uVar37 >>
                                                                                  0x18),
                                                                            CONCAT12((char)((ulong)
                                                  uVar38 >> 0x10) + (char)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar38 >> 8) +
                                                           (char)((ulong)uVar37 >> 8),
                                                           (char)uVar38 + (char)uVar37)))))));
                          if ((uVar20 & 0x8000) == 0) {
                            uVar34 = -(uint)*puVar16;
                          }
                          pcVar17 = pcVar17 + uVar35;
                          if (param_4 <= pcVar17 + (int)uVar34) {
                            *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                            pcVar7 = pcVar7 + uVar35;
                            puVar16 = (ushort *)((long)puVar16 + ((uVar20 & 0x8000) >> 0xe ^ 2));
                            *(undefined8 *)(pcVar17 + 8) =
                                 *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                            pcVar17 = pcVar17 + (uVar20 >> 0xb & 0xf);
                            uVar35 = uVar20 >> 0x10 & 7;
                            uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                            uVar38 = *(undefined8 *)pcVar7;
                            *(ulong *)pcVar17 =
                                 CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                          (char)((ulong)uVar37 >> 0x38),
                                          CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                   (char)((ulong)uVar37 >> 0x30),
                                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                            (char)((ulong)uVar37 >> 0x28),
                                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                                     (char)((ulong)uVar37 >> 0x20),
                                                                     CONCAT13((char)((ulong)uVar38
                                                                                    >> 0x18) +
                                                                              (char)((ulong)uVar37
                                                                                    >> 0x18),
                                                                              CONCAT12((char)((ulong
                                                  )uVar38 >> 0x10) + (char)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar38 >> 8) +
                                                           (char)((ulong)uVar37 >> 8),
                                                           (char)uVar38 + (char)uVar37)))))));
                            if ((uVar20 & 0x800000) == 0) {
                              uVar34 = -(uint)*puVar16;
                            }
                            pcVar17 = pcVar17 + uVar35;
                            if (param_4 <= pcVar17 + (int)uVar34) {
                              *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                              pcVar7 = pcVar7 + uVar35;
                              puVar16 = (ushort *)
                                        ((long)puVar16 + ((uVar20 & 0x800000) >> 0x16 ^ 2));
                              *(undefined8 *)(pcVar17 + 8) =
                                   *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                              pcVar17 = pcVar17 + (uVar20 >> 0x13 & 0xf);
                              uVar35 = uVar20 >> 0x18 & 7;
                              uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                              uVar38 = *(undefined8 *)pcVar7;
                              *(ulong *)pcVar17 =
                                   CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                            (char)((ulong)uVar37 >> 0x38),
                                            CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                     (char)((ulong)uVar37 >> 0x30),
                                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                              (char)((ulong)uVar37 >> 0x28),
                                                              CONCAT14((char)((ulong)uVar38 >> 0x20)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x20),
                                                                       CONCAT13((char)((ulong)uVar38
                                                                                      >> 0x18) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 0x18),
                                                                                CONCAT12((char)((
                                                  ulong)uVar38 >> 0x10) +
                                                  (char)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar38 >> 8) +
                                                           (char)((ulong)uVar37 >> 8),
                                                           (char)uVar38 + (char)uVar37)))))));
                              if (-1 < (int)(uint)uVar20) {
                                uVar34 = -(uint)*puVar16;
                              }
                              pcVar17 = pcVar17 + uVar35;
                              if (param_4 <= pcVar17 + (int)uVar34) {
                                *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                pcVar7 = pcVar7 + uVar35;
                                puVar16 = (ushort *)
                                          ((long)puVar16 +
                                          ((ulong)((uint)uVar20 >> 0x1e ^ 0xffffffff) & 2));
                                *(undefined8 *)(pcVar17 + 8) =
                                     *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                                pcVar17 = pcVar17 + (uVar20 >> 0x1b & 0xf);
                                uVar35 = uVar20 >> 0x20 & 7;
                                uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                uVar38 = *(undefined8 *)pcVar7;
                                *(ulong *)pcVar17 =
                                     CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                              (char)((ulong)uVar37 >> 0x38),
                                              CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                       (char)((ulong)uVar37 >> 0x30),
                                                       CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                                (char)((ulong)uVar37 >> 0x28),
                                                                CONCAT14((char)((ulong)uVar38 >>
                                                                               0x20) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x20),
                                                                         CONCAT13((char)((ulong)
                                                  uVar38 >> 0x18) + (char)((ulong)uVar37 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                           (char)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar38 >> 8) +
                                                                    (char)((ulong)uVar37 >> 8),
                                                                    (char)uVar38 + (char)uVar37)))))
                                                  ));
                                if ((uVar20 & 0x8000000000) == 0) {
                                  uVar34 = -(uint)*puVar16;
                                }
                                pcVar17 = pcVar17 + uVar35;
                                if (param_4 <= pcVar17 + (int)uVar34) {
                                  *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                  pcVar7 = pcVar7 + uVar35;
                                  puVar16 = (ushort *)
                                            ((long)puVar16 + ((uVar20 & 0x8000000000) >> 0x26 ^ 2));
                                  *(undefined8 *)(pcVar17 + 8) =
                                       *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                                  pcVar17 = pcVar17 + (uVar20 >> 0x23 & 0xf);
                                  uVar35 = uVar20 >> 0x28 & 7;
                                  uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                  uVar38 = *(undefined8 *)pcVar7;
                                  *(ulong *)pcVar17 =
                                       CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                                (char)((ulong)uVar37 >> 0x38),
                                                CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                         (char)((ulong)uVar37 >> 0x30),
                                                         CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                                  (char)((ulong)uVar37 >> 0x28),
                                                                  CONCAT14((char)((ulong)uVar38 >>
                                                                                 0x20) +
                                                                           (char)((ulong)uVar37 >>
                                                                                 0x20),
                                                                           CONCAT13((char)((ulong)
                                                  uVar38 >> 0x18) + (char)((ulong)uVar37 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                           (char)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar38 >> 8) +
                                                                    (char)((ulong)uVar37 >> 8),
                                                                    (char)uVar38 + (char)uVar37)))))
                                                  ));
                                  if ((uVar20 & 0x800000000000) == 0) {
                                    uVar34 = -(uint)*puVar16;
                                  }
                                  pcVar17 = pcVar17 + uVar35;
                                  if (param_4 <= pcVar17 + (int)uVar34) {
                                    *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                    pcVar7 = pcVar7 + uVar35;
                                    puVar16 = (ushort *)
                                              ((long)puVar16 +
                                              ((uVar20 & 0x800000000000) >> 0x2e ^ 2));
                                    *(undefined8 *)(pcVar17 + 8) =
                                         *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                                    pcVar17 = pcVar17 + (uVar20 >> 0x2b & 0xf);
                                    uVar23 = uVar20 >> 0x30 & 7;
                                    uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                    uVar38 = *(undefined8 *)pcVar7;
                                    *(ulong *)pcVar17 =
                                         CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                                  (char)((ulong)uVar37 >> 0x38),
                                                  CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                           (char)((ulong)uVar37 >> 0x30),
                                                           CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                                                    (char)((ulong)uVar37 >> 0x28),
                                                                    CONCAT14((char)((ulong)uVar38 >>
                                                                                   0x20) +
                                                                             (char)((ulong)uVar37 >>
                                                                                   0x20),
                                                                             CONCAT13((char)((ulong)
                                                  uVar38 >> 0x18) + (char)((ulong)uVar37 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                           (char)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar38 >> 8) +
                                                                    (char)((ulong)uVar37 >> 8),
                                                                    (char)uVar38 + (char)uVar37)))))
                                                  ));
                                    if ((uVar20 & 0x80000000000000) == 0) {
                                      uVar34 = -(uint)*puVar16;
                                    }
                                    pcVar17 = pcVar17 + uVar23;
                                    if (param_4 <= pcVar17 + (int)uVar34) {
                                      *(undefined8 *)pcVar17 =
                                           *(undefined8 *)(pcVar17 + (int)uVar34);
                                      puVar16 = (ushort *)
                                                ((long)puVar16 +
                                                ((uVar20 & 0x80000000000000) >> 0x36 ^ 2));
                                      *(undefined8 *)(pcVar17 + 8) =
                                           *(undefined8 *)(pcVar17 + (int)uVar34 + 8);
                                      pcVar17 = pcVar17 + (uVar20 >> 0x33 & 0xf);
                                      uVar37 = *(undefined8 *)(pcVar17 + (int)uVar34);
                                      uVar38 = *(undefined8 *)(pcVar7 + uVar23);
                                      *(ulong *)pcVar17 =
                                           CONCAT17((char)((ulong)uVar38 >> 0x38) +
                                                    (char)((ulong)uVar37 >> 0x38),
                                                    CONCAT16((char)((ulong)uVar38 >> 0x30) +
                                                             (char)((ulong)uVar37 >> 0x30),
                                                             CONCAT15((char)((ulong)uVar38 >> 0x28)
                                                                      + (char)((ulong)uVar37 >> 0x28
                                                                              ),
                                                                      CONCAT14((char)((ulong)uVar38
                                                                                     >> 0x20) +
                                                                               (char)((ulong)uVar37
                                                                                     >> 0x20),
                                                                               CONCAT13((char)((
                                                  ulong)uVar38 >> 0x18) +
                                                  (char)((ulong)uVar37 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                           (char)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar38 >> 8) +
                                                                    (char)((ulong)uVar37 >> 8),
                                                                    (char)uVar38 + (char)uVar37)))))
                                                  ));
                                      pcVar31 = (char *)(uVar20 >> 0x38 & 7);
                                      pcVar30 = pcVar17 + (long)pcVar31;
                                      if (-1 < (long)uVar20) {
                                        uVar34 = -(uint)*puVar16;
                                      }
                                      uVar35 = (ulong)uVar34;
                                      pcVar17 = pcVar30 + (int)uVar34;
                                      if (param_4 <= pcVar17) {
                                        pcVar7 = pcVar7 + uVar23 + (long)pcVar31;
                                        *(undefined8 *)pcVar30 = *(undefined8 *)pcVar17;
                                        pcVar32 = (char *)((ulong)~(uint)(uVar20 >> 0x3e) & 2);
                                        puVar33 = puVar33 + 2;
                                        puVar16 = (ushort *)((long)puVar16 + (long)pcVar32);
                                        *(undefined8 *)(pcVar30 + 8) = *(undefined8 *)(pcVar17 + 8);
                                        pcVar17 = pcVar30 + (uVar20 >> 0x3b & 0xf);
                                        if (puVar33 < puVar36) goto LAB_00188b20;
                                        break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        FUN_0015c3d0();
                        pcVar13 = *(code **)PTR_PTR_047cb868;
                        if (pcVar13 == (code *)0x0) goto LAB_00189360;
                        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                        pcVar8 = "OODLE ERROR : corruption : mp >= window_base\n";
                        uVar37 = 0x156;
                        goto LAB_0018935c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_0015c3d0();
        pcVar13 = *(code **)PTR_PTR_047cb868;
        if (pcVar13 == (code *)0x0) goto LAB_00189360;
        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar8 = "OODLE ERROR : corruption : mp >= window_base\n";
        uVar37 = 0x151;
        goto LAB_0018935c;
      }
      puVar33 = (ulong *)((long)puVar33 + 1);
      if (0x17 < (uVar21 & 0xff)) {
        do {
          uVar37 = *(undefined8 *)(pcVar17 + (int)(uint)uVar35);
          uVar38 = *(undefined8 *)pcVar7;
          uVar22 = (uint)uVar23;
          uVar21 = (uVar22 >> 7 & 1) - 1;
          pcVar19 = pcVar17 + (uVar22 & 7);
          uVar34 = (uint)uVar35 & (uVar21 ^ 0xffffffff);
          pcVar31 = (char *)(ulong)uVar34;
          uVar34 = -(uint)*puVar16 & uVar21 | uVar34;
          pcVar30 = pcVar19 + (int)uVar34;
          *(ulong *)pcVar17 =
               CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                 CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                          (char)((ulong)uVar37 >> 0x28),
                                          CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                   (char)((ulong)uVar37 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                            (char)((ulong)uVar37 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                     (char)((ulong)uVar37 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar38
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar37
                                                                                    >> 8),
                                                                              (char)uVar38 +
                                                                              (char)uVar37)))))));
          if (pcVar30 < param_4) {
            FUN_0015c3d0();
            pcVar13 = *(code **)PTR_PTR_047cb868;
            if (pcVar13 == (code *)0x0) goto LAB_00189360;
            pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar8 = "OODLE ERROR : corruption : mp >= window_base\n";
            uVar37 = 0x182;
            goto LAB_0018935c;
          }
          pcVar7 = pcVar7 + (uVar22 & 7);
          *(undefined8 *)pcVar19 = *(undefined8 *)pcVar30;
          *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar30 + 8);
          bVar5 = (byte)*puVar33;
          puVar16 = (ushort *)((long)puVar16 + (ulong)(uVar21 & 2));
          pcVar17 = pcVar19 + ((uVar22 & 0xff) >> 3 & 0xf);
          puVar33 = (ulong *)((long)puVar33 + 1);
joined_r0x00188814:
          uVar23 = (ulong)bVar5;
          uVar35 = (ulong)uVar34;
        } while (0x17 < bVar5);
      }
      if (2 < ((uint)uVar23 & 0xff)) {
        return 0;
      }
      if ((uVar23 & 0xff) == 0) {
        if (local_1d0 < puVar11) {
          puVar18 = (ushort *)((long)local_1d0 + 1);
          uVar23 = (ulong)(byte)*local_1d0;
          if (0xfb < uVar23) {
            local_1d0 = (ushort *)((long)local_1d0 + 3);
            if (local_1d0 <= puVar11) {
              uVar23 = uVar23 + (ulong)*puVar18 * 4;
              lVar26 = uVar23 + 0x40;
              if (lVar26 <= (long)pcVar8 - (long)pcVar17) goto LAB_00188b44;
              goto LAB_001895a8;
            }
            uVar23 = 0;
          }
          lVar26 = uVar23 + 0x40;
          local_1d0 = puVar18;
          if ((long)pcVar8 - (long)pcVar17 < lVar26) goto LAB_001895a8;
        }
        else {
          uVar23 = 0;
          lVar26 = 0x40;
          if ((long)pcVar8 - (long)pcVar17 < 0x40) goto LAB_001895a8;
        }
LAB_00188b44:
        if ((long)pcVar12 - (long)pcVar7 < lVar26) goto LAB_001895d8;
        uVar23 = uVar23 + 0x37;
        uVar21 = (int)(uVar23 >> 3) + 1;
        lVar24 = (long)(int)uVar35;
        uVar20 = (ulong)uVar21 & 3;
        lVar29 = lVar26;
        if ((uVar21 & 3) != 0) {
          lVar29 = 0;
          do {
            uVar37 = *(undefined8 *)(pcVar17 + lVar29 + lVar24);
            uVar20 = uVar20 - 1;
            uVar38 = *(undefined8 *)(pcVar7 + lVar29);
            *(ulong *)(pcVar17 + lVar29) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            lVar29 = lVar29 + 8;
          } while (uVar20 != 0);
          pcVar17 = pcVar17 + lVar29;
          pcVar7 = pcVar7 + lVar29;
          pcVar31 = pcVar17 + -8;
          pcVar32 = pcVar7 + -8;
          lVar29 = lVar26 - lVar29;
        }
        if (0x17 < uVar23) {
          lVar27 = 0;
          do {
            lVar28 = lVar27;
            pcVar30 = pcVar17 + lVar28 + lVar24;
            pcVar31 = pcVar7 + lVar28;
            uVar37 = *(undefined8 *)pcVar30;
            uVar38 = *(undefined8 *)pcVar31;
            pcVar32 = pcVar17 + lVar28;
            *(ulong *)pcVar32 =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            uVar37 = *(undefined8 *)(pcVar30 + 8);
            uVar38 = *(undefined8 *)(pcVar31 + 8);
            *(ulong *)(pcVar32 + 8) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            uVar37 = *(undefined8 *)(pcVar30 + 0x10);
            uVar38 = *(undefined8 *)(pcVar31 + 0x10);
            *(ulong *)(pcVar32 + 0x10) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            uVar37 = *(undefined8 *)(pcVar30 + 0x18);
            uVar38 = *(undefined8 *)(pcVar31 + 0x18);
            lVar29 = lVar29 + -0x20;
            *(ulong *)(pcVar32 + 0x18) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            lVar27 = lVar28 + 0x20;
          } while (8 < lVar29);
          pcVar31 = pcVar17 + lVar28 + 0x18;
          pcVar32 = pcVar7 + lVar28 + 0x18;
        }
        pcVar30 = (char *)(uVar23 & 0xffff8);
        pcVar17 = pcVar31 + (lVar26 - (long)pcVar30);
        pcVar7 = pcVar32 + (lVar26 - (long)pcVar30);
        uVar37 = *(undefined8 *)(pcVar17 + lVar24 + -8);
        uVar38 = *(undefined8 *)(pcVar7 + -8);
        *(ulong *)(pcVar17 + -8) =
             CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                      CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                               CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                        (char)((ulong)uVar37 >> 0x28),
                                        CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                 (char)((ulong)uVar37 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                          (char)((ulong)uVar37 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                   (char)((ulong)uVar37 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar38 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar37 >>
                                                                                  8),(char)uVar38 +
                                                                                     (char)uVar37)))
                                                ))));
      }
      else {
        if (((uint)uVar23 & 0xff) != 1) {
          return 0;
        }
        if (local_1d0 < puVar11) {
          puVar18 = (ushort *)((long)local_1d0 + 1);
          uVar35 = (ulong)(byte)*local_1d0;
          if (uVar35 < 0xfc) {
            local_1d0 = puVar18;
          }
          else if (puVar11 < (ushort *)((long)local_1d0 + 3U)) {
            uVar35 = 0;
            local_1d0 = puVar18;
          }
          else {
            uVar35 = uVar35 + (ulong)*puVar18 * 4;
            local_1d0 = (ushort *)((long)local_1d0 + 3U);
          }
        }
        else {
          uVar35 = 0;
        }
        if ((long)pcVar8 - (long)pcVar17 < (long)(uVar35 + 99)) {
          if ((long)pcVar8 - (long)pcVar17 < (long)(uVar35 + 0x5b)) goto LAB_0018965c;
          if ((long)param_3 - (long)pcVar17 < (long)(uVar35 + 99)) goto LAB_00189688;
        }
        puVar18 = puVar16 + 1;
        uVar4 = *puVar16;
        pcVar19 = pcVar17 + -(ulong)uVar4;
        if (pcVar19 < param_4) goto LAB_001896b4;
        pcVar1 = pcVar17 + uVar35 + 0x5b;
        *(undefined8 *)pcVar17 = *(undefined8 *)pcVar19;
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar19 + 8);
        *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar19 + 0x10);
        *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar19 + 0x18);
        *(undefined8 *)(pcVar17 + 0x20) = *(undefined8 *)(pcVar19 + 0x20);
        *(undefined8 *)(pcVar17 + 0x28) = *(undefined8 *)(pcVar19 + 0x28);
        *(undefined8 *)(pcVar17 + 0x30) = *(undefined8 *)(pcVar19 + 0x30);
        uVar35 = -(ulong)uVar4;
        *(undefined8 *)(pcVar17 + 0x38) = *(undefined8 *)(pcVar19 + 0x38);
        pcVar19 = pcVar17 + 0x40;
        do {
          pcVar25 = pcVar19 + 8;
          *(undefined8 *)pcVar19 = *(undefined8 *)(pcVar19 + uVar35);
          pcVar19 = pcVar25;
          puVar16 = puVar18;
          pcVar17 = pcVar1;
        } while (pcVar25 < pcVar1);
      }
      if (puVar36 <= puVar33) break;
LAB_00188b20:
    } while (pcVar17 + 0x168 <= param_3);
  }
  uVar21 = (uint)uVar35;
  if (pcVar8 < pcVar17) {
    FUN_0015c3d0();
    pcVar13 = *(code **)PTR_PTR_047cb868;
    if (pcVar13 == (code *)0x0) goto LAB_00189360;
    pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar8 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar37 = 0x1c0;
  }
  else {
    if (__src <= pcVar7) {
      if (pcVar12 <= pcVar7 && (long)pcVar7 - (long)pcVar12 != 0) {
        FUN_0015c3d0();
        pcVar13 = *(code **)PTR_PTR_047cb868;
        if (pcVar13 == (code *)0x0) goto LAB_00189360;
        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar37 = 0x1e7;
        goto LAB_0018935c;
      }
      pcVar7 = local_db + ((long)pcVar7 - (long)pcVar12);
      __src = local_db;
      pcVar12 = local_db;
    }
    if (__src_00 <= puVar16) {
      if (puVar14 <= puVar16 && (long)puVar16 - (long)puVar14 != 0) {
        FUN_0015c3d0();
        pcVar13 = *(code **)PTR_PTR_047cb868;
        if (pcVar13 == (code *)0x0) goto LAB_00189360;
        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar37 = 0x1e8;
        goto LAB_0018935c;
      }
      puVar16 = (ushort *)((long)local_16c + ((long)puVar16 - (long)puVar14));
      puVar14 = local_16c;
      __src_00 = local_16c;
    }
    if (puVar33 < puVar9) {
      puVar36 = puVar33 + 2;
      pcVar32 = pcVar17;
      puVar18 = puVar16;
      do {
        if (puVar36 <= puVar33) {
          if (__src <= pcVar7) {
            if (pcVar12 <= pcVar7 && (long)pcVar7 - (long)pcVar12 != 0) {
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00189360;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar37 = 500;
              goto LAB_0018935c;
            }
            pcVar7 = local_db + ((long)pcVar7 - (long)pcVar12);
            __src = local_db;
            pcVar12 = local_db;
          }
          puVar36 = puVar33 + 2;
          if (__src_00 <= puVar18) {
            if (puVar14 <= puVar18 && (long)puVar18 - (long)puVar14 != 0) {
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00189360;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar37 = 0x1f5;
              goto LAB_0018935c;
            }
            puVar18 = (ushort *)((long)local_16c + ((long)puVar18 - (long)puVar14));
            puVar14 = local_16c;
            __src_00 = local_16c;
          }
        }
        puVar15 = (ulong *)((long)puVar33 + 1);
        bVar5 = (byte)*puVar33;
        uVar21 = (uint)uVar35;
        if (0x17 < bVar5) {
          if (param_3 < pcVar32 + 8) {
            FUN_0015c3d0();
            pcVar13 = *(code **)PTR_PTR_047cb868;
            if (pcVar13 == (code *)0x0) goto LAB_00189360;
            pcVar8 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar34 = (bVar5 >> 7) - 1;
            uVar37 = *(undefined8 *)(pcVar32 + (int)uVar21);
            pcVar30 = (char *)((ulong)bVar5 & 7);
            uVar38 = *(undefined8 *)pcVar7;
            pcVar1 = pcVar32 + (long)pcVar30;
            uVar21 = -(uint)*puVar18 & uVar34 | uVar21 & (uVar34 ^ 0xffffffff);
            uVar35 = (ulong)uVar21;
            pcVar19 = pcVar1 + (int)uVar21;
            *(ulong *)pcVar32 =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            if (pcVar19 < param_4) {
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00189360;
              pcVar8 = "OODLE ERROR : corruption : mp >= window_base\n";
            }
            else {
              pcVar31 = pcVar1 + 0x10;
              if (pcVar31 <= param_3) {
                puVar16 = (ushort *)((long)puVar18 + (ulong)(uVar34 & 2));
                *(undefined8 *)pcVar1 = *(undefined8 *)pcVar19;
                pcVar7 = pcVar7 + (long)pcVar30;
                pcVar17 = pcVar1 + ((ulong)(bVar5 >> 3) & 0xf);
                *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(pcVar19 + 8);
                goto LAB_00188ecc;
              }
              FUN_0015c3d0();
              pcVar13 = *(code **)PTR_PTR_047cb868;
              if (pcVar13 == (code *)0x0) goto LAB_00189360;
              pcVar8 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            }
          }
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar37 = 0x1fc;
          goto LAB_0018935c;
        }
        if (2 < bVar5) {
          return 0;
        }
        if (bVar5 == 0) {
          if (local_1d0 < puVar11) {
            puVar16 = (ushort *)((long)local_1d0 + 1);
            uVar23 = (ulong)(byte)*local_1d0;
            if (uVar23 < 0xfc) {
              local_1d0 = puVar16;
            }
            else if (puVar11 < (ushort *)((long)local_1d0 + 3U)) {
              uVar23 = 0;
              local_1d0 = puVar16;
            }
            else {
              uVar23 = uVar23 + (ulong)*puVar16 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar23 = 0;
          }
          lVar26 = uVar23 + 0x40;
          if ((long)pcVar8 - (long)pcVar32 < lVar26) goto LAB_001895a8;
          if ((long)pcVar12 - (long)pcVar7 < lVar26) goto LAB_001895d8;
          uVar23 = uVar23 + 0x37;
          uVar34 = (int)(uVar23 >> 3) + 1;
          uVar20 = (ulong)uVar34 & 3;
          lVar29 = lVar26;
          if ((uVar34 & 3) != 0) {
            lVar29 = 0;
            do {
              uVar37 = *(undefined8 *)(pcVar32 + lVar29 + (int)uVar21);
              uVar20 = uVar20 - 1;
              uVar38 = *(undefined8 *)(pcVar7 + lVar29);
              *(ulong *)(pcVar32 + lVar29) =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              lVar29 = lVar29 + 8;
            } while (uVar20 != 0);
            pcVar32 = pcVar32 + lVar29;
            pcVar7 = pcVar7 + lVar29;
            pcVar30 = pcVar32 + -8;
            pcVar31 = pcVar7 + -8;
            lVar29 = lVar26 - lVar29;
          }
          if (0x17 < uVar23) {
            lVar24 = 0;
            do {
              lVar27 = lVar24;
              pcVar17 = pcVar32 + lVar27 + (int)uVar21;
              pcVar30 = pcVar7 + lVar27;
              uVar37 = *(undefined8 *)pcVar17;
              uVar38 = *(undefined8 *)pcVar30;
              pcVar31 = pcVar32 + lVar27;
              *(ulong *)pcVar31 =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              uVar37 = *(undefined8 *)(pcVar17 + 8);
              uVar38 = *(undefined8 *)(pcVar30 + 8);
              *(ulong *)(pcVar31 + 8) =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              uVar37 = *(undefined8 *)(pcVar17 + 0x10);
              uVar38 = *(undefined8 *)(pcVar30 + 0x10);
              *(ulong *)(pcVar31 + 0x10) =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              uVar37 = *(undefined8 *)(pcVar17 + 0x18);
              uVar38 = *(undefined8 *)(pcVar30 + 0x18);
              lVar29 = lVar29 + -0x20;
              *(ulong *)(pcVar31 + 0x18) =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                              (char)((ulong)uVar37 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                       (char)((ulong)uVar37 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                                (char)((ulong)uVar37 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + (char)((ulong)uVar37 >> 8),
                                                  (char)uVar38 + (char)uVar37)))))));
              lVar24 = lVar27 + 0x20;
            } while (8 < lVar29);
            pcVar30 = pcVar32 + lVar27 + 0x18;
            pcVar31 = pcVar7 + lVar27 + 0x18;
          }
          lVar26 = lVar26 - (uVar23 & 0xffff8);
          pcVar17 = pcVar30 + lVar26;
          pcVar7 = pcVar31 + lVar26;
          uVar37 = *(undefined8 *)(pcVar17 + (long)(int)uVar21 + -8);
          uVar38 = *(undefined8 *)(pcVar7 + -8);
          *(ulong *)(pcVar17 + -8) =
               CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                 CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                          (char)((ulong)uVar37 >> 0x28),
                                          CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                   (char)((ulong)uVar37 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                            (char)((ulong)uVar37 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                     (char)((ulong)uVar37 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar38
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar37
                                                                                    >> 8),
                                                                              (char)uVar38 +
                                                                              (char)uVar37)))))));
          puVar16 = puVar18;
        }
        else {
          if (bVar5 != 1) {
            return 0;
          }
          if (local_1d0 < puVar11) {
            puVar16 = (ushort *)((long)local_1d0 + 1);
            uVar35 = (ulong)(byte)*local_1d0;
            if (uVar35 < 0xfc) {
              local_1d0 = puVar16;
            }
            else if (puVar11 < (ushort *)((long)local_1d0 + 3U)) {
              uVar35 = 0;
              local_1d0 = puVar16;
            }
            else {
              uVar35 = uVar35 + (ulong)*puVar16 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar35 = 0;
          }
          if ((long)pcVar8 - (long)pcVar32 < (long)(uVar35 + 99)) {
            if ((long)pcVar8 - (long)pcVar32 < (long)(uVar35 + 0x5b)) goto LAB_0018965c;
            if ((long)param_3 - (long)pcVar32 < (long)(uVar35 + 99)) goto LAB_00189688;
          }
          puVar16 = puVar18 + 1;
          uVar4 = *puVar18;
          pcVar19 = pcVar32 + -(ulong)uVar4;
          if (pcVar19 < param_4) goto LAB_001896b4;
          pcVar17 = pcVar32 + uVar35 + 0x5b;
          *(undefined8 *)pcVar32 = *(undefined8 *)pcVar19;
          *(undefined8 *)(pcVar32 + 8) = *(undefined8 *)(pcVar19 + 8);
          *(undefined8 *)(pcVar32 + 0x10) = *(undefined8 *)(pcVar19 + 0x10);
          *(undefined8 *)(pcVar32 + 0x18) = *(undefined8 *)(pcVar19 + 0x18);
          *(undefined8 *)(pcVar32 + 0x20) = *(undefined8 *)(pcVar19 + 0x20);
          *(undefined8 *)(pcVar32 + 0x28) = *(undefined8 *)(pcVar19 + 0x28);
          *(undefined8 *)(pcVar32 + 0x30) = *(undefined8 *)(pcVar19 + 0x30);
          uVar35 = -(ulong)uVar4;
          *(undefined8 *)(pcVar32 + 0x38) = *(undefined8 *)(pcVar19 + 0x38);
          pcVar32 = pcVar32 + 0x40;
          do {
            pcVar19 = pcVar32 + 8;
            *(undefined8 *)pcVar32 = *(undefined8 *)(pcVar32 + uVar35);
            pcVar32 = pcVar19;
          } while (pcVar19 < pcVar17);
        }
        if (__src <= pcVar7) {
          if (pcVar12 <= pcVar7 && (long)pcVar7 - (long)pcVar12 != 0) {
            FUN_0015c3d0();
            pcVar13 = *(code **)PTR_PTR_047cb868;
            if (pcVar13 == (code *)0x0) goto LAB_00189360;
            pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar37 = 0x208;
            goto LAB_0018935c;
          }
          pcVar7 = local_db + ((long)pcVar7 - (long)pcVar12);
          __src = local_db;
          pcVar12 = local_db;
        }
        puVar36 = (ulong *)((long)puVar33 + 0x11);
        if (__src_00 <= puVar16) {
          if (puVar14 <= puVar16 && (long)puVar16 - (long)puVar14 != 0) {
            FUN_0015c3d0();
            pcVar13 = *(code **)PTR_PTR_047cb868;
            if (pcVar13 == (code *)0x0) goto LAB_00189360;
            pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar37 = 0x209;
            goto LAB_0018935c;
          }
          puVar16 = (ushort *)((long)local_16c + ((long)puVar16 - (long)puVar14));
          puVar14 = local_16c;
          __src_00 = local_16c;
        }
LAB_00188ecc:
        uVar21 = (uint)uVar35;
        puVar33 = puVar15;
        pcVar32 = pcVar17;
        puVar18 = puVar16;
      } while (puVar15 != puVar9);
    }
    if (pcVar8 <= pcVar17) {
      if (pcVar17 != pcVar8) {
        return 0;
      }
LAB_001892c8:
      if (puVar14 <= puVar16 && (long)puVar16 - (long)puVar14 != 0) {
        return 0;
      }
      if (pcVar12 <= pcVar7 && (long)pcVar7 - (long)pcVar12 != 0) {
        return 0;
      }
      *param_7 = uVar21;
      *(char **)(param_6 + 0x38) = pcVar2 + ((long)pcVar7 - (long)pcVar12);
      *(char **)(param_6 + 0x48) = (char *)((long)puVar3 + ((long)puVar16 - (long)puVar14));
      if (puVar11 < local_1d0) {
        return 0;
      }
      *(ushort **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    uVar35 = (long)pcVar8 - (long)pcVar17;
    if (pcVar7 + uVar35 <= pcVar12) {
      uVar23 = uVar35 - 8;
      if (7 < (long)uVar35) {
        uVar20 = uVar35;
        if (((uint)uVar23 >> 3 & 1) == 0) {
          uVar37 = *(undefined8 *)(pcVar17 + (int)uVar21);
          uVar38 = *(undefined8 *)pcVar7;
          *(ulong *)pcVar17 =
               CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                 CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                          (char)((ulong)uVar37 >> 0x28),
                                          CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                   (char)((ulong)uVar37 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                            (char)((ulong)uVar37 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar38 >> 0x10) +
                                                                     (char)((ulong)uVar37 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar38
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar37
                                                                                    >> 8),
                                                                              (char)uVar38 +
                                                                              (char)uVar37)))))));
          uVar20 = uVar23;
          pcVar17 = pcVar17 + 8;
          pcVar7 = pcVar7 + 8;
        }
        if (7 < uVar23) {
          do {
            uVar37 = *(undefined8 *)pcVar7;
            uVar20 = uVar20 - 0x10;
            uVar38 = *(undefined8 *)(pcVar17 + (long)(int)uVar21 + 8 + -8);
            *(ulong *)pcVar17 =
                 CONCAT17((char)((ulong)uVar37 >> 0x38) + (char)((ulong)uVar38 >> 0x38),
                          CONCAT16((char)((ulong)uVar37 >> 0x30) + (char)((ulong)uVar38 >> 0x30),
                                   CONCAT15((char)((ulong)uVar37 >> 0x28) +
                                            (char)((ulong)uVar38 >> 0x28),
                                            CONCAT14((char)((ulong)uVar37 >> 0x20) +
                                                     (char)((ulong)uVar38 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar37 >> 0x18) +
                                                              (char)((ulong)uVar38 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar37 >> 0x10)
                                                                       + (char)((ulong)uVar38 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar37
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar38
                                                                                      >> 8),
                                                                                (char)uVar37 +
                                                                                (char)uVar38)))))));
            uVar37 = *(undefined8 *)(pcVar17 + (long)(int)uVar21 + 8);
            uVar38 = *(undefined8 *)(pcVar7 + 8);
            pcVar7 = pcVar7 + 0x10;
            *(ulong *)(pcVar17 + 8) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + (char)((ulong)uVar37 >> 0x38),
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar37 >> 0x30),
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) +
                                            (char)((ulong)uVar37 >> 0x28),
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) +
                                                     (char)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) +
                                                              (char)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                       + (char)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar38
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar37
                                                                                      >> 8),
                                                                                (char)uVar38 +
                                                                                (char)uVar37)))))));
            pcVar17 = pcVar17 + 0x10;
          } while (7 < (long)uVar20);
        }
        uVar35 = uVar35 & 7;
      }
      if (uVar35 != 0) {
        uVar23 = uVar35;
        if ((uVar35 & 1) != 0) {
          *pcVar17 = pcVar17[(int)uVar21] + *pcVar7;
          pcVar7 = pcVar7 + 1;
          uVar23 = uVar35 - 1;
          pcVar17 = pcVar17 + 1;
        }
        if (uVar35 != 1) {
          pcVar8 = pcVar17 + 1;
          do {
            uVar23 = uVar23 - 2;
            pcVar8[-1] = (pcVar8 + (int)uVar21)[-1] + *pcVar7;
            pcVar17 = pcVar7 + 1;
            pcVar7 = pcVar7 + 2;
            *pcVar8 = pcVar8[(int)uVar21] + *pcVar17;
            pcVar8 = pcVar8 + 2;
          } while (uVar23 != 0);
        }
      }
      goto LAB_001892c8;
    }
    FUN_0015c3d0();
    pcVar13 = *(code **)PTR_PTR_047cb868;
    if (pcVar13 == (code *)0x0) goto LAB_00189360;
    pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar8 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar37 = 0x217;
  }
LAB_0018935c:
  (*pcVar13)(0,pcVar7,uVar37,pcVar8);
LAB_00189360:
  FUN_0015c3f0();
  return 0;
LAB_001895a8:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00189360;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar37 = 0x30;
  goto LAB_0018935c;
LAB_001895d8:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00189360;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar37 = 0x31;
  goto LAB_0018935c;
LAB_0018965c:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00189360;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar37 = 0x86;
  goto LAB_0018935c;
LAB_00189688:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00189360;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar37 = 0x87;
  goto LAB_0018935c;
LAB_001896b4:
  FUN_0015c3d0();
  pcVar13 = *(code **)PTR_PTR_047cb868;
  if (pcVar13 == (code *)0x0) goto LAB_00189360;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : mp >= window_base\n";
  uVar37 = 0x98;
  goto LAB_0018935c;
}


