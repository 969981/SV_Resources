/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047f4c0; name: FUN_0047f4c0
 */


void FUN_0047f4c0(ulong *param_1,ulong *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
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
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar28 = 0;
  puVar11 = param_2;
  do {
    if (((ulong)puVar11 & 7) == 0) {
      uVar44 = puVar11[1];
      uVar43 = *puVar11;
      uVar42 = puVar11[3];
      uVar14 = puVar11[2];
      uVar13 = param_1[1];
      uVar17 = *param_1;
      local_a0 = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(uVar17 >> 0x38),
                          CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(uVar17 >> 0x30),
                                   CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(uVar17 >> 0x28),
                                            CONCAT14((byte)(uVar43 >> 0x20) ^ (byte)(uVar17 >> 0x20)
                                                     ,CONCAT13((byte)(uVar43 >> 0x18) ^
                                                               (byte)(uVar17 >> 0x18),
                                                               CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                        (byte)(uVar17 >> 0x10),
                                                                        CONCAT11((byte)(uVar43 >> 8)
                                                                                 ^ (byte)(uVar17 >>
                                                                                         8),
                                                                                 (byte)uVar43 ^
                                                                                 (byte)uVar17)))))))
      ;
      uStack_98 = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                           CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                                    CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar13 >> 0x28),
                                             CONCAT14((byte)(uVar44 >> 0x20) ^
                                                      (byte)(uVar13 >> 0x20),
                                                      CONCAT13((byte)(uVar44 >> 0x18) ^
                                                               (byte)(uVar13 >> 0x18),
                                                               CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                        (byte)(uVar13 >> 0x10),
                                                                        CONCAT11((byte)(uVar44 >> 8)
                                                                                 ^ (byte)(uVar13 >>
                                                                                         8),
                                                                                 (byte)uVar44 ^
                                                                                 (byte)uVar13)))))))
      ;
      uVar12 = param_1[3];
      uVar41 = param_1[2];
      local_90 = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar41 >> 0x38),
                          CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar41 >> 0x30),
                                   CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar41 >> 0x28),
                                            CONCAT14((byte)(uVar14 >> 0x20) ^ (byte)(uVar41 >> 0x20)
                                                     ,CONCAT13((byte)(uVar14 >> 0x18) ^
                                                               (byte)(uVar41 >> 0x18),
                                                               CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                        (byte)(uVar41 >> 0x10),
                                                                        CONCAT11((byte)(uVar14 >> 8)
                                                                                 ^ (byte)(uVar41 >>
                                                                                         8),
                                                                                 (byte)uVar14 ^
                                                                                 (byte)uVar41)))))))
      ;
      uStack_88 = CONCAT17((byte)(uVar42 >> 0x38) ^ (byte)(uVar12 >> 0x38),
                           CONCAT16((byte)(uVar42 >> 0x30) ^ (byte)(uVar12 >> 0x30),
                                    CONCAT15((byte)(uVar42 >> 0x28) ^ (byte)(uVar12 >> 0x28),
                                             CONCAT14((byte)(uVar42 >> 0x20) ^
                                                      (byte)(uVar12 >> 0x20),
                                                      CONCAT13((byte)(uVar42 >> 0x18) ^
                                                               (byte)(uVar12 >> 0x18),
                                                               CONCAT12((byte)(uVar42 >> 0x10) ^
                                                                        (byte)(uVar12 >> 0x10),
                                                                        CONCAT11((byte)(uVar42 >> 8)
                                                                                 ^ (byte)(uVar12 >>
                                                                                         8),
                                                                                 (byte)uVar42 ^
                                                                                 (byte)uVar12)))))))
      ;
      uVar14 = param_1[5];
      uVar42 = param_1[4];
      uVar44 = puVar11[5];
      uVar43 = puVar11[4];
      local_80 = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(uVar42 >> 0x38),
                          CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(uVar42 >> 0x30),
                                   CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(uVar42 >> 0x28),
                                            CONCAT14((byte)(uVar43 >> 0x20) ^ (byte)(uVar42 >> 0x20)
                                                     ,CONCAT13((byte)(uVar43 >> 0x18) ^
                                                               (byte)(uVar42 >> 0x18),
                                                               CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                        (byte)(uVar42 >> 0x10),
                                                                        CONCAT11((byte)(uVar43 >> 8)
                                                                                 ^ (byte)(uVar42 >>
                                                                                         8),
                                                                                 (byte)uVar43 ^
                                                                                 (byte)uVar42)))))))
      ;
      uStack_78 = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                           CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar14 >> 0x30),
                                    CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar14 >> 0x28),
                                             CONCAT14((byte)(uVar44 >> 0x20) ^
                                                      (byte)(uVar14 >> 0x20),
                                                      CONCAT13((byte)(uVar44 >> 0x18) ^
                                                               (byte)(uVar14 >> 0x18),
                                                               CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                        (byte)(uVar14 >> 0x10),
                                                                        CONCAT11((byte)(uVar44 >> 8)
                                                                                 ^ (byte)(uVar14 >>
                                                                                         8),
                                                                                 (byte)uVar44 ^
                                                                                 (byte)uVar14)))))))
      ;
      uVar43 = param_1[6];
      uVar44 = param_1[7];
      local_70 = puVar11[6] ^ uVar43;
      puVar15 = puVar11 + 7;
    }
    else {
      uVar44 = puVar11[1];
      uVar43 = *puVar11;
      uVar42 = puVar11[3];
      uVar14 = puVar11[2];
      uVar46 = puVar11[5];
      uVar45 = puVar11[4];
      uVar13 = param_1[1];
      uVar17 = *param_1;
      uVar12 = param_1[3];
      uVar41 = param_1[2];
      local_90 = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar41 >> 0x38),
                          CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar41 >> 0x30),
                                   CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar41 >> 0x28),
                                            CONCAT14((byte)(uVar14 >> 0x20) ^ (byte)(uVar41 >> 0x20)
                                                     ,CONCAT13((byte)(uVar14 >> 0x18) ^
                                                               (byte)(uVar41 >> 0x18),
                                                               CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                        (byte)(uVar41 >> 0x10),
                                                                        CONCAT11((byte)(uVar14 >> 8)
                                                                                 ^ (byte)(uVar41 >>
                                                                                         8),
                                                                                 (byte)uVar14 ^
                                                                                 (byte)uVar41)))))))
      ;
      uStack_88 = CONCAT17((byte)(uVar42 >> 0x38) ^ (byte)(uVar12 >> 0x38),
                           CONCAT16((byte)(uVar42 >> 0x30) ^ (byte)(uVar12 >> 0x30),
                                    CONCAT15((byte)(uVar42 >> 0x28) ^ (byte)(uVar12 >> 0x28),
                                             CONCAT14((byte)(uVar42 >> 0x20) ^
                                                      (byte)(uVar12 >> 0x20),
                                                      CONCAT13((byte)(uVar42 >> 0x18) ^
                                                               (byte)(uVar12 >> 0x18),
                                                               CONCAT12((byte)(uVar42 >> 0x10) ^
                                                                        (byte)(uVar12 >> 0x10),
                                                                        CONCAT11((byte)(uVar42 >> 8)
                                                                                 ^ (byte)(uVar12 >>
                                                                                         8),
                                                                                 (byte)uVar42 ^
                                                                                 (byte)uVar12)))))))
      ;
      uStack_98 = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar13 >> 0x38),
                           CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar13 >> 0x30),
                                    CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar13 >> 0x28),
                                             CONCAT14((byte)(uVar44 >> 0x20) ^
                                                      (byte)(uVar13 >> 0x20),
                                                      CONCAT13((byte)(uVar44 >> 0x18) ^
                                                               (byte)(uVar13 >> 0x18),
                                                               CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                        (byte)(uVar13 >> 0x10),
                                                                        CONCAT11((byte)(uVar44 >> 8)
                                                                                 ^ (byte)(uVar13 >>
                                                                                         8),
                                                                                 (byte)uVar44 ^
                                                                                 (byte)uVar13)))))))
      ;
      local_a0 = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(uVar17 >> 0x38),
                          CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(uVar17 >> 0x30),
                                   CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(uVar17 >> 0x28),
                                            CONCAT14((byte)(uVar43 >> 0x20) ^ (byte)(uVar17 >> 0x20)
                                                     ,CONCAT13((byte)(uVar43 >> 0x18) ^
                                                               (byte)(uVar17 >> 0x18),
                                                               CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                        (byte)(uVar17 >> 0x10),
                                                                        CONCAT11((byte)(uVar43 >> 8)
                                                                                 ^ (byte)(uVar17 >>
                                                                                         8),
                                                                                 (byte)uVar43 ^
                                                                                 (byte)uVar17)))))))
      ;
      uVar14 = param_1[5];
      uVar42 = param_1[4];
      local_80 = CONCAT17((byte)(uVar45 >> 0x38) ^ (byte)(uVar42 >> 0x38),
                          CONCAT16((byte)(uVar45 >> 0x30) ^ (byte)(uVar42 >> 0x30),
                                   CONCAT15((byte)(uVar45 >> 0x28) ^ (byte)(uVar42 >> 0x28),
                                            CONCAT14((byte)(uVar45 >> 0x20) ^ (byte)(uVar42 >> 0x20)
                                                     ,CONCAT13((byte)(uVar45 >> 0x18) ^
                                                               (byte)(uVar42 >> 0x18),
                                                               CONCAT12((byte)(uVar45 >> 0x10) ^
                                                                        (byte)(uVar42 >> 0x10),
                                                                        CONCAT11((byte)(uVar45 >> 8)
                                                                                 ^ (byte)(uVar42 >>
                                                                                         8),
                                                                                 (byte)uVar45 ^
                                                                                 (byte)uVar42)))))))
      ;
      uStack_78 = CONCAT17((byte)(uVar46 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                           CONCAT16((byte)(uVar46 >> 0x30) ^ (byte)(uVar14 >> 0x30),
                                    CONCAT15((byte)(uVar46 >> 0x28) ^ (byte)(uVar14 >> 0x28),
                                             CONCAT14((byte)(uVar46 >> 0x20) ^
                                                      (byte)(uVar14 >> 0x20),
                                                      CONCAT13((byte)(uVar46 >> 0x18) ^
                                                               (byte)(uVar14 >> 0x18),
                                                               CONCAT12((byte)(uVar46 >> 0x10) ^
                                                                        (byte)(uVar14 >> 0x10),
                                                                        CONCAT11((byte)(uVar46 >> 8)
                                                                                 ^ (byte)(uVar14 >>
                                                                                         8),
                                                                                 (byte)uVar46 ^
                                                                                 (byte)uVar14)))))))
      ;
      uVar43 = param_1[6];
      uVar44 = param_1[7];
      local_70 = puVar11[6] ^ uVar43;
      puVar15 = &uStack_68;
    }
    lVar34 = 0;
    uStack_68 = *puVar15 ^ uVar44;
    do {
      uVar27 = uVar17 >> 0x1a;
      uVar23 = uVar17 >> 10;
      uVar29 = uVar17 >> 0x22;
      uVar16 = uVar17 >> 2;
      uVar24 = uVar17 >> 0x12;
      uVar30 = uVar17 >> 0x2a;
      uVar45 = local_a0 >> 0x28;
      uVar35 = uVar13 >> 2;
      uVar46 = local_a0 >> 0x30;
      uVar36 = uVar13 >> 10;
      uVar37 = uVar13 >> 0x12;
      uVar38 = uVar13 >> 0x1a;
      uVar39 = uVar13 >> 0x22;
      uVar4 = uStack_98 >> 0x20;
      uVar5 = uStack_98 >> 0x28;
      uVar18 = uVar41 >> 2;
      uVar21 = uVar41 >> 10;
      uVar40 = uVar41 >> 0x1a;
      uVar25 = uVar41 >> 0x12;
      uVar6 = local_90 >> 0x20;
      uVar31 = uVar12 >> 2;
      uVar32 = uVar12 >> 10;
      uVar33 = uVar12 >> 0x12;
      uVar7 = uStack_88 >> 0x18;
      uVar8 = local_80 >> 8;
      uVar22 = uVar42 >> 2;
      uVar9 = local_80 >> 0x10;
      uVar26 = uVar42 >> 10;
      uVar10 = uStack_78 >> 8;
      uVar19 = uVar14 >> 2;
      uVar20 = *(ulong *)(&DAT_03d02468 + (uVar13 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar17 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar41 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar12 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar42 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar14 >> 10 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 2 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar44 << 3) & 0x7f8) * 8);
      uVar17 = *(ulong *)((long)&DAT_03d06468 + lVar34) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar17 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar13 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar41 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar12 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar42 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar14 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 10 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 2 & 0x3fc0 | 8));
      uVar13 = *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar13 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + (uVar16 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar41 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar12 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar42 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar14 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 10 & 0x3fc0 | 0x10));
      uVar41 = *(ulong *)(&DAT_03d02468 + (uVar35 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar23 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar41 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar12 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar42 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar14 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 0x12 & 0x3fc0 | 0x18));
      uVar16 = uStack_68 >> 0x30;
      uVar12 = *(ulong *)(&DAT_03d02468 + (uVar36 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar24 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar18 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar12 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar42 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar14 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 0x1a & 0x3fc0 | 0x20));
      uVar42 = *(ulong *)(&DAT_03d02468 + (uVar37 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar27 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar21 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar31 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar42 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar14 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar43 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 0x22 & 0x3fc0 | 0x28));
      uVar14 = *(ulong *)(&DAT_03d02468 + (uVar38 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar29 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar25 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar32 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar22 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar14 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar43 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03d02468 + (uVar44 >> 0x2a & 0x3fc0 | 0x30));
      uVar43 = *(ulong *)(&DAT_03d02468 + (uVar39 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + (uVar30 & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + (uVar40 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + (uVar33 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + (uVar26 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + (uVar19 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)(uint)((int)uVar43 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03d02468 + ((ulong)((uint)(uVar44 >> 0x32) | 0x38) & 0x3ff8));
      uVar23 = *(ulong *)(&DAT_03d02468 + (local_a0 & 0xff) * 0x40) ^ uVar17 ^
               *(ulong *)(&DAT_03d02468 + ((uStack_98 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03d02468 + ((local_90 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + ((local_80 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_68 >> 8 & 0xff) << 6 | 8));
      uVar22 = *(ulong *)(&DAT_03d02468 + ((local_a0 >> 8 & 0xff) << 6 | 8)) ^ uVar13 ^
               *(ulong *)(&DAT_03d02468 + (uStack_98 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03d02468 + ((local_90 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((local_80 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_68 >> 0x10 & 0xff) << 6 | 0x10));
      uVar21 = *(ulong *)(&DAT_03d02468 + ((local_a0 >> 0x10 & 0xff) << 6 | 0x10)) ^ uVar41 ^
               *(ulong *)(&DAT_03d02468 + ((uStack_98 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03d02468 + (local_90 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03d02468 + ((local_80 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_68 >> 0x18 & 0xff) << 6 | 0x18));
      uVar18 = *(ulong *)(&DAT_03d02468 + ((local_a0 >> 0x38) << 6 | 0x38)) ^ uVar20 ^
               *(ulong *)(&DAT_03d02468 + ((uStack_98 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((local_90 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03d02468 + ((local_80 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + ((local_70 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03d02468 + (uStack_68 & 0xff) * 0x40);
      uVar19 = *(ulong *)(&DAT_03d02468 + ((local_a0 >> 0x18 & 0xff) << 6 | 0x18)) ^ uVar12 ^
               *(ulong *)(&DAT_03d02468 + ((uStack_98 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03d02468 + ((local_90 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03d02468 + (uStack_88 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03d02468 + ((local_80 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03d02468 + ((uStack_68 >> 0x20 & 0xff) << 6 | 0x20));
      local_80 = *(ulong *)(&DAT_03d02468 + ((local_a0 >> 0x20 & 0xff) << 6 | 0x20)) ^ uVar42 ^
                 *(ulong *)(&DAT_03d02468 + ((uStack_98 >> 0x18 & 0xff) << 6 | 0x18)) ^
                 *(ulong *)(&DAT_03d02468 + ((local_90 >> 0x10 & 0xff) << 6 | 0x10)) ^
                 *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 8 & 0xff) << 6 | 8)) ^
                 *(ulong *)(&DAT_03d02468 + (local_80 & 0xff) * 0x40) ^
                 *(ulong *)(&DAT_03d02468 + ((uStack_78 >> 0x38) << 6 | 0x38)) ^
                 *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x30 & 0xff) << 6 | 0x30)) ^
                 *(ulong *)(&DAT_03d02468 + ((uStack_68 >> 0x28 & 0xff) << 6 | 0x28));
      uVar44 = uStack_68 >> 0x38;
      uStack_68 = uVar18;
      local_a0 = uVar23;
      uStack_98 = uVar22;
      uStack_78 = *(ulong *)(&DAT_03d02468 + ((uVar45 & 0xff) << 6 | 0x28)) ^ uVar14 ^
                  *(ulong *)(&DAT_03d02468 + ((uVar4 & 0xff) << 6 | 0x20)) ^
                  *(ulong *)(&DAT_03d02468 + ((local_90 >> 0x18 & 0xff) << 6 | 0x18)) ^
                  *(ulong *)(&DAT_03d02468 + ((uStack_88 >> 0x10 & 0xff) << 6 | 0x10)) ^
                  *(ulong *)(&DAT_03d02468 + ((uVar8 & 0xff) << 6 | 8)) ^
                  *(ulong *)(&DAT_03d02468 + (uStack_78 & 0xff) * 0x40) ^
                  *(ulong *)(&DAT_03d02468 + ((local_70 >> 0x38) << 6 | 0x38)) ^
                  *(ulong *)(&DAT_03d02468 + ((uVar16 & 0xff) << 6 | 0x30));
      local_90 = uVar21;
      uStack_88 = uVar19;
      local_70 = *(ulong *)(&DAT_03d02468 + ((uVar46 & 0xff) << 6 | 0x30)) ^ uVar43 ^
                 *(ulong *)(&DAT_03d02468 + ((uVar5 & 0xff) << 6 | 0x28)) ^
                 *(ulong *)(&DAT_03d02468 + ((uVar6 & 0xff) << 6 | 0x20)) ^
                 *(ulong *)(&DAT_03d02468 + ((uVar7 & 0xff) << 6 | 0x18)) ^
                 *(ulong *)(&DAT_03d02468 + ((uVar9 & 0xff) << 6 | 0x10)) ^
                 *(ulong *)(&DAT_03d02468 + ((uVar10 & 0xff) << 6 | 8)) ^
                 *(ulong *)(&DAT_03d02468 + (local_70 & 0xff) * 0x40) ^
                 *(ulong *)(&DAT_03d02468 + (uVar44 << 6 | 0x38));
      lVar34 = lVar34 + 8;
      uVar44 = uVar20;
    } while (lVar34 != 0x50);
    if (((ulong)puVar11 & 7) == 0) {
      *param_1 = *puVar11 ^ uVar23 ^ *param_1;
      param_1[1] = puVar11[1] ^ uVar22 ^ param_1[1];
      param_1[2] = puVar11[2] ^ uVar21 ^ param_1[2];
      param_1[3] = puVar11[3] ^ uVar19 ^ param_1[3];
      param_1[4] = puVar11[4] ^ local_80 ^ param_1[4];
      param_1[5] = puVar11[5] ^ uStack_78 ^ param_1[5];
      param_1[6] = puVar11[6] ^ local_70 ^ param_1[6];
      param_1[7] = puVar11[7] ^ uVar18 ^ param_1[7];
    }
    else if (param_1 < (ulong *)((long)register0x00000008 + -0x60) && &local_a0 < param_1 + 8 ||
             param_1 < param_2 + lVar28 * 8 + 8 && param_2 + lVar28 * 8 < param_1 + 8) {
      lVar34 = 0;
      do {
        pbVar1 = (byte *)((long)puVar11 + lVar34);
        pbVar2 = (byte *)((long)param_1 + lVar34 + 1);
        pbVar2[-1] = *pbVar1 ^ *(byte *)((long)&local_a0 + lVar34) ^ pbVar2[-1];
        pbVar3 = (byte *)(((ulong)&local_a0 | 1) + lVar34);
        lVar34 = lVar34 + 4;
        *pbVar2 = pbVar1[1] ^ *pbVar3 ^ *pbVar2;
        pbVar2[1] = pbVar1[2] ^ pbVar3[1] ^ pbVar2[1];
        pbVar2[2] = pbVar1[3] ^ pbVar3[2] ^ pbVar2[2];
      } while (lVar34 != 0x40);
    }
    else {
      uVar12 = puVar11[1];
      uVar43 = *puVar11;
      uVar14 = param_1[1];
      uVar44 = *param_1;
      uVar17 = param_1[3];
      uVar13 = param_1[2];
      param_1[1] = CONCAT17((byte)(uVar12 >> 0x38) ^ (byte)(uVar22 >> 0x38) ^ (byte)(uVar14 >> 0x38)
                            ,CONCAT16((byte)(uVar12 >> 0x30) ^ (byte)(uVar22 >> 0x30) ^
                                      (byte)(uVar14 >> 0x30),
                                      CONCAT15((byte)(uVar12 >> 0x28) ^ (byte)(uVar22 >> 0x28) ^
                                               (byte)(uVar14 >> 0x28),
                                               CONCAT14((byte)(uVar12 >> 0x20) ^
                                                        (byte)(uVar22 >> 0x20) ^
                                                        (byte)(uVar14 >> 0x20),
                                                        CONCAT13((byte)(uVar12 >> 0x18) ^
                                                                 (byte)(uVar22 >> 0x18) ^
                                                                 (byte)(uVar14 >> 0x18),
                                                                 CONCAT12((byte)(uVar12 >> 0x10) ^
                                                                          (byte)(uVar22 >> 0x10) ^
                                                                          (byte)(uVar14 >> 0x10),
                                                                          CONCAT11((byte)(uVar12 >>
                                                                                         8) ^
                                                                                   (byte)(uVar22 >>
                                                                                         8) ^
                                                                                   (byte)(uVar14 >>
                                                                                         8),(byte)
                                                  uVar12 ^ (byte)uVar22 ^ (byte)uVar14)))))));
      *param_1 = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(uVar23 >> 0x38) ^ (byte)(uVar44 >> 0x38),
                          CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(uVar23 >> 0x30) ^
                                   (byte)(uVar44 >> 0x30),
                                   CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(uVar23 >> 0x28) ^
                                            (byte)(uVar44 >> 0x28),
                                            CONCAT14((byte)(uVar43 >> 0x20) ^ (byte)(uVar23 >> 0x20)
                                                     ^ (byte)(uVar44 >> 0x20),
                                                     CONCAT13((byte)(uVar43 >> 0x18) ^
                                                              (byte)(uVar23 >> 0x18) ^
                                                              (byte)(uVar44 >> 0x18),
                                                              CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                       (byte)(uVar23 >> 0x10) ^
                                                                       (byte)(uVar44 >> 0x10),
                                                                       CONCAT11((byte)(uVar43 >> 8)
                                                                                ^ (byte)(uVar23 >> 8
                                                                                        ) ^
                                                                                (byte)(uVar44 >> 8),
                                                                                (byte)uVar43 ^
                                                                                (byte)uVar23 ^
                                                                                (byte)uVar44)))))));
      uVar44 = puVar11[3];
      uVar43 = puVar11[2];
      param_1[3] = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar19 >> 0x38) ^ (byte)(uVar17 >> 0x38)
                            ,CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar19 >> 0x30) ^
                                      (byte)(uVar17 >> 0x30),
                                      CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar19 >> 0x28) ^
                                               (byte)(uVar17 >> 0x28),
                                               CONCAT14((byte)(uVar44 >> 0x20) ^
                                                        (byte)(uVar19 >> 0x20) ^
                                                        (byte)(uVar17 >> 0x20),
                                                        CONCAT13((byte)(uVar44 >> 0x18) ^
                                                                 (byte)(uVar19 >> 0x18) ^
                                                                 (byte)(uVar17 >> 0x18),
                                                                 CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                          (byte)(uVar19 >> 0x10) ^
                                                                          (byte)(uVar17 >> 0x10),
                                                                          CONCAT11((byte)(uVar44 >>
                                                                                         8) ^
                                                                                   (byte)(uVar19 >>
                                                                                         8) ^
                                                                                   (byte)(uVar17 >>
                                                                                         8),(byte)
                                                  uVar44 ^ (byte)uVar19 ^ (byte)uVar17)))))));
      param_1[2] = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(uVar21 >> 0x38) ^ (byte)(uVar13 >> 0x38)
                            ,CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(uVar21 >> 0x30) ^
                                      (byte)(uVar13 >> 0x30),
                                      CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(uVar21 >> 0x28) ^
                                               (byte)(uVar13 >> 0x28),
                                               CONCAT14((byte)(uVar43 >> 0x20) ^
                                                        (byte)(uVar21 >> 0x20) ^
                                                        (byte)(uVar13 >> 0x20),
                                                        CONCAT13((byte)(uVar43 >> 0x18) ^
                                                                 (byte)(uVar21 >> 0x18) ^
                                                                 (byte)(uVar13 >> 0x18),
                                                                 CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                          (byte)(uVar21 >> 0x10) ^
                                                                          (byte)(uVar13 >> 0x10),
                                                                          CONCAT11((byte)(uVar43 >>
                                                                                         8) ^
                                                                                   (byte)(uVar21 >>
                                                                                         8) ^
                                                                                   (byte)(uVar13 >>
                                                                                         8),(byte)
                                                  uVar43 ^ (byte)uVar21 ^ (byte)uVar13)))))));
      uVar12 = puVar11[5];
      uVar43 = puVar11[4];
      uVar14 = param_1[5];
      uVar44 = param_1[4];
      uVar17 = param_1[7];
      uVar13 = param_1[6];
      param_1[5] = CONCAT17((byte)(uVar12 >> 0x38) ^ (byte)(uStack_78 >> 0x38) ^
                            (byte)(uVar14 >> 0x38),
                            CONCAT16((byte)(uVar12 >> 0x30) ^ (byte)(uStack_78 >> 0x30) ^
                                     (byte)(uVar14 >> 0x30),
                                     CONCAT15((byte)(uVar12 >> 0x28) ^ (byte)(uStack_78 >> 0x28) ^
                                              (byte)(uVar14 >> 0x28),
                                              CONCAT14((byte)(uVar12 >> 0x20) ^
                                                       (byte)(uStack_78 >> 0x20) ^
                                                       (byte)(uVar14 >> 0x20),
                                                       CONCAT13((byte)(uVar12 >> 0x18) ^
                                                                (byte)(uStack_78 >> 0x18) ^
                                                                (byte)(uVar14 >> 0x18),
                                                                CONCAT12((byte)(uVar12 >> 0x10) ^
                                                                         (byte)(uStack_78 >> 0x10) ^
                                                                         (byte)(uVar14 >> 0x10),
                                                                         CONCAT11((byte)(uVar12 >> 8
                                                                                        ) ^ (byte)(
                                                  uStack_78 >> 8) ^ (byte)(uVar14 >> 8),
                                                  (byte)uVar12 ^ (byte)uStack_78 ^ (byte)uVar14)))))
                                    ));
      param_1[4] = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(local_80 >> 0x38) ^
                            (byte)(uVar44 >> 0x38),
                            CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(local_80 >> 0x30) ^
                                     (byte)(uVar44 >> 0x30),
                                     CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(local_80 >> 0x28) ^
                                              (byte)(uVar44 >> 0x28),
                                              CONCAT14((byte)(uVar43 >> 0x20) ^
                                                       (byte)(local_80 >> 0x20) ^
                                                       (byte)(uVar44 >> 0x20),
                                                       CONCAT13((byte)(uVar43 >> 0x18) ^
                                                                (byte)(local_80 >> 0x18) ^
                                                                (byte)(uVar44 >> 0x18),
                                                                CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                         (byte)(local_80 >> 0x10) ^
                                                                         (byte)(uVar44 >> 0x10),
                                                                         CONCAT11((byte)(uVar43 >> 8
                                                                                        ) ^ (byte)(
                                                  local_80 >> 8) ^ (byte)(uVar44 >> 8),
                                                  (byte)uVar43 ^ (byte)local_80 ^ (byte)uVar44))))))
                           );
      uVar44 = puVar11[7];
      uVar43 = puVar11[6];
      param_1[7] = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar18 >> 0x38) ^ (byte)(uVar17 >> 0x38)
                            ,CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar18 >> 0x30) ^
                                      (byte)(uVar17 >> 0x30),
                                      CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar18 >> 0x28) ^
                                               (byte)(uVar17 >> 0x28),
                                               CONCAT14((byte)(uVar44 >> 0x20) ^
                                                        (byte)(uVar18 >> 0x20) ^
                                                        (byte)(uVar17 >> 0x20),
                                                        CONCAT13((byte)(uVar44 >> 0x18) ^
                                                                 (byte)(uVar18 >> 0x18) ^
                                                                 (byte)(uVar17 >> 0x18),
                                                                 CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                          (byte)(uVar18 >> 0x10) ^
                                                                          (byte)(uVar17 >> 0x10),
                                                                          CONCAT11((byte)(uVar44 >>
                                                                                         8) ^
                                                                                   (byte)(uVar18 >>
                                                                                         8) ^
                                                                                   (byte)(uVar17 >>
                                                                                         8),(byte)
                                                  uVar44 ^ (byte)uVar18 ^ (byte)uVar17)))))));
      param_1[6] = CONCAT17((byte)(uVar43 >> 0x38) ^ (byte)(local_70 >> 0x38) ^
                            (byte)(uVar13 >> 0x38),
                            CONCAT16((byte)(uVar43 >> 0x30) ^ (byte)(local_70 >> 0x30) ^
                                     (byte)(uVar13 >> 0x30),
                                     CONCAT15((byte)(uVar43 >> 0x28) ^ (byte)(local_70 >> 0x28) ^
                                              (byte)(uVar13 >> 0x28),
                                              CONCAT14((byte)(uVar43 >> 0x20) ^
                                                       (byte)(local_70 >> 0x20) ^
                                                       (byte)(uVar13 >> 0x20),
                                                       CONCAT13((byte)(uVar43 >> 0x18) ^
                                                                (byte)(local_70 >> 0x18) ^
                                                                (byte)(uVar13 >> 0x18),
                                                                CONCAT12((byte)(uVar43 >> 0x10) ^
                                                                         (byte)(local_70 >> 0x10) ^
                                                                         (byte)(uVar13 >> 0x10),
                                                                         CONCAT11((byte)(uVar43 >> 8
                                                                                        ) ^ (byte)(
                                                  local_70 >> 8) ^ (byte)(uVar13 >> 8),
                                                  (byte)uVar43 ^ (byte)local_70 ^ (byte)uVar13))))))
                           );
    }
    puVar11 = puVar11 + 8;
    param_3 = param_3 + -1;
    lVar28 = lVar28 + 1;
  } while (param_3 != 0);
  return;
}


