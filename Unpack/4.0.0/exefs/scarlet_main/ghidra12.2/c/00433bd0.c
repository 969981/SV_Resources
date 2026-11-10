/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00433bd0; name: FUN_00433bd0
 */


void FUN_00433bd0(ulong param_1,int *param_2,ulong param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  byte *pbVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  uint uVar31;
  byte *pbVar32;
  undefined8 *puVar33;
  uint uVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  int local_a0 [2];
  undefined8 uStack_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (param_3 != 0) {
    uVar4 = *param_4;
    uVar8 = param_4[1];
    uVar13 = param_4[4];
    uVar5 = param_4[2];
    uVar9 = param_4[3];
    uVar6 = param_4[5];
    uVar10 = param_4[6];
    uVar14 = param_4[7];
    uVar7 = param_5[2];
    uVar11 = param_5[3];
    uVar39 = *param_5;
    uVar12 = param_5[1];
    do {
      uVar41 = 0x16;
      uVar37 = 0x6b206574;
      uVar34 = 0x79622d32;
      uVar20 = 0x3320646e;
      uVar38 = 0x61707865;
      uVar48 = uVar8;
      uVar47 = uVar5;
      uVar46 = uVar9;
      uVar45 = uVar10;
      uVar22 = uVar7;
      uVar40 = uVar12;
      uVar26 = uVar13;
      uVar23 = uVar4;
      uVar43 = uVar14;
      uVar42 = uVar11;
      uVar31 = uVar6;
      uVar21 = uVar39;
      do {
        uVar21 = uVar23 + uVar38 ^ uVar21;
        uVar40 = uVar48 + uVar20 ^ uVar40;
        uVar22 = uVar47 + uVar34 ^ uVar22;
        uVar42 = uVar46 + uVar37 ^ uVar42;
        uVar15 = uVar21 >> 0x10 | uVar21 << 0x10;
        uVar16 = uVar40 >> 0x10 | uVar40 << 0x10;
        uVar17 = uVar22 >> 0x10 | uVar22 << 0x10;
        uVar18 = uVar42 >> 0x10 | uVar42 << 0x10;
        uVar26 = uVar15 + uVar26;
        uVar31 = uVar16 + uVar31;
        uVar45 = uVar17 + uVar45;
        uVar43 = uVar18 + uVar43;
        uVar21 = uVar26 ^ uVar23;
        uVar40 = uVar31 ^ uVar48;
        uVar22 = uVar45 ^ uVar47;
        uVar42 = uVar43 ^ uVar46;
        uVar21 = uVar21 >> 0x14 | uVar21 << 0xc;
        uVar40 = uVar40 >> 0x14 | uVar40 << 0xc;
        uVar22 = uVar22 >> 0x14 | uVar22 << 0xc;
        uVar42 = uVar42 >> 0x14 | uVar42 << 0xc;
        uVar38 = uVar21 + uVar23 + uVar38;
        uVar20 = uVar40 + uVar48 + uVar20;
        uVar34 = uVar22 + uVar47 + uVar34;
        uVar37 = uVar42 + uVar46 + uVar37;
        uVar15 = uVar38 ^ uVar15;
        uVar16 = uVar20 ^ uVar16;
        uVar17 = uVar34 ^ uVar17;
        uVar18 = uVar37 ^ uVar18;
        uVar47 = uVar15 >> 0x18 | uVar15 << 8;
        uVar46 = uVar16 >> 0x18 | uVar16 << 8;
        uVar23 = uVar17 >> 0x18 | uVar17 << 8;
        uVar48 = uVar18 >> 0x18 | uVar18 << 8;
        uVar26 = uVar47 + uVar26;
        uVar31 = uVar46 + uVar31;
        uVar45 = uVar23 + uVar45;
        uVar43 = uVar48 + uVar43;
        uVar21 = uVar26 ^ uVar21;
        uVar40 = uVar31 ^ uVar40;
        uVar22 = uVar45 ^ uVar22;
        uVar42 = uVar43 ^ uVar42;
        uVar15 = uVar21 >> 0x19 | uVar21 << 7;
        uVar21 = uVar40 >> 0x19 | uVar40 << 7;
        uVar40 = uVar22 >> 0x19 | uVar22 << 7;
        uVar22 = uVar42 >> 0x19 | uVar42 << 7;
        uVar38 = uVar21 + uVar38;
        uVar20 = uVar40 + uVar20;
        uVar34 = uVar22 + uVar34;
        uVar37 = uVar15 + uVar37;
        uVar48 = uVar38 ^ uVar48;
        uVar47 = uVar47 ^ uVar20;
        uVar46 = uVar46 ^ uVar34;
        uVar23 = uVar37 ^ uVar23;
        uVar42 = uVar48 >> 0x10 | uVar48 << 0x10;
        uVar48 = uVar47 >> 0x10 | uVar47 << 0x10;
        uVar47 = uVar46 >> 0x10 | uVar46 << 0x10;
        uVar46 = uVar23 >> 0x10 | uVar23 << 0x10;
        uVar45 = uVar42 + uVar45;
        uVar43 = uVar48 + uVar43;
        uVar26 = uVar26 + uVar47;
        uVar31 = uVar46 + uVar31;
        uVar21 = uVar45 ^ uVar21;
        uVar40 = uVar43 ^ uVar40;
        uVar22 = uVar26 ^ uVar22;
        uVar15 = uVar31 ^ uVar15;
        uVar23 = uVar21 >> 0x14 | uVar21 << 0xc;
        uVar16 = uVar40 >> 0x14 | uVar40 << 0xc;
        uVar17 = uVar22 >> 0x14 | uVar22 << 0xc;
        uVar15 = uVar15 >> 0x14 | uVar15 << 0xc;
        uVar38 = uVar23 + uVar38;
        uVar20 = uVar16 + uVar20;
        uVar34 = uVar17 + uVar34;
        uVar37 = uVar15 + uVar37;
        uVar42 = uVar38 ^ uVar42;
        uVar48 = uVar20 ^ uVar48;
        uVar47 = uVar34 ^ uVar47;
        uVar46 = uVar37 ^ uVar46;
        uVar42 = uVar42 >> 0x18 | uVar42 << 8;
        uVar21 = uVar48 >> 0x18 | uVar48 << 8;
        uVar40 = uVar47 >> 0x18 | uVar47 << 8;
        uVar22 = uVar46 >> 0x18 | uVar46 << 8;
        uVar45 = uVar42 + uVar45;
        uVar43 = uVar21 + uVar43;
        uVar26 = uVar40 + uVar26;
        uVar31 = uVar22 + uVar31;
        uVar23 = uVar45 ^ uVar23;
        uVar16 = uVar43 ^ uVar16;
        uVar17 = uVar26 ^ uVar17;
        uVar15 = uVar31 ^ uVar15;
        uVar41 = uVar41 - 2;
        uVar48 = uVar23 >> 0x19 | uVar23 << 7;
        uVar47 = uVar16 >> 0x19 | uVar16 << 7;
        uVar46 = uVar17 >> 0x19 | uVar17 << 7;
        uVar23 = uVar15 >> 0x19 | uVar15 << 7;
      } while (2 < uVar41);
      local_a0[0] = uVar38 + 0x61707865;
      local_a0[1] = uVar20 + 0x3320646e;
      uStack_98._0_4_ = uVar34 + 0x79622d32;
      uStack_98._4_4_ = uVar37 + 0x6b206574;
      local_90 = uVar23 + uVar4;
      iStack_8c = uVar48 + uVar8;
      iStack_88 = uVar47 + uVar5;
      iStack_84 = uVar46 + uVar9;
      local_80 = uVar26 + uVar13;
      iStack_7c = uVar31 + uVar6;
      iStack_78 = uVar45 + uVar10;
      iStack_74 = uVar43 + uVar14;
      uVar2 = param_3;
      if (0x3f < param_3) {
        uVar2 = 0x40;
      }
      local_70 = uVar21 + uVar39;
      iStack_6c = uVar40 + uVar12;
      iStack_68 = uVar22 + uVar7;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 1;
      }
      iStack_64 = uVar42 + uVar11;
      if (uVar3 < 0x10) {
        uVar44 = 0;
LAB_00433f0c:
        uVar24 = ~uVar44;
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(byte *)(param_1 + uVar44) =
               *(byte *)((long)local_a0 + uVar44) ^ *(byte *)((long)param_2 + uVar44);
          uVar44 = uVar44 + 1;
        }
        if (2 < uVar3 + uVar24) {
          lVar25 = uVar3 - uVar44;
          pbVar27 = (byte *)(param_1 + uVar44 + 1);
          pbVar32 = (byte *)(((ulong)local_a0 | 3) + uVar44);
          pbVar35 = (byte *)((long)param_2 + uVar44 + 3);
          do {
            lVar25 = lVar25 + -4;
            pbVar27[-1] = pbVar32[-3] ^ pbVar35[-3];
            *pbVar27 = pbVar32[-2] ^ pbVar35[-2];
            pbVar27[1] = pbVar32[-1] ^ pbVar35[-1];
            pbVar27[2] = *pbVar32 ^ *pbVar35;
            pbVar27 = pbVar27 + 4;
            pbVar32 = pbVar32 + 4;
            pbVar35 = pbVar35 + 4;
          } while (lVar25 != 0);
        }
      }
      else {
        uVar44 = 0;
        if ((param_1 < (long)param_2 + uVar3 && param_2 < (int *)(param_1 + uVar3)) ||
           (param_1 < (long)local_a0 + uVar3 && local_a0 < (int *)(param_1 + uVar3)))
        goto LAB_00433f0c;
        uVar44 = uVar3 & 0x70;
        uVar1 = (uVar44 - 0x10 >> 4) + 1;
        uVar24 = uVar1 & 3;
        if (uVar44 - 0x10 < 0x30) {
          lVar28 = 0;
        }
        else {
          lVar25 = -(uVar1 & 0x1ffffffffffffffc);
          lVar29 = 0;
          do {
            uVar50 = *(undefined8 *)((long)local_a0 + lVar29 + 8);
            uVar49 = *(undefined8 *)((long)local_a0 + lVar29);
            puVar30 = (undefined8 *)((long)param_2 + lVar29 + 0x30);
            uVar52 = puVar30[-5];
            uVar51 = puVar30[-6];
            puVar33 = (undefined8 *)(param_1 + 0x30 + lVar29);
            puVar33[-5] = CONCAT17((byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar52 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar50 >> 0x30) ^
                                            (byte)((ulong)uVar52 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar50 >> 0x28) ^
                                                     (byte)((ulong)uVar52 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar50 >> 0x20) ^
                                                              (byte)((ulong)uVar52 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar50 >> 0x18)
                                                                       ^ (byte)((ulong)uVar52 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar50
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar52
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar50 >> 8) ^ (byte)((ulong)uVar52 >> 8),
                                                  (byte)uVar50 ^ (byte)uVar52)))))));
            puVar33[-6] = CONCAT17((byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar51 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar49 >> 0x30) ^
                                            (byte)((ulong)uVar51 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar49 >> 0x28) ^
                                                     (byte)((ulong)uVar51 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar49 >> 0x20) ^
                                                              (byte)((ulong)uVar51 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar49 >> 0x18)
                                                                       ^ (byte)((ulong)uVar51 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar49
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar51
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar49 >> 8) ^ (byte)((ulong)uVar51 >> 8),
                                                  (byte)uVar49 ^ (byte)uVar51)))))));
            lVar28 = lVar29 + 0x40;
            uVar50 = puVar30[-3];
            uVar49 = puVar30[-4];
            uVar52 = *(undefined8 *)((long)&iStack_88 + lVar29);
            uVar51 = *(undefined8 *)((long)&local_90 + lVar29);
            puVar33[-3] = CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar52 >> 0x30) ^
                                            (byte)((ulong)uVar50 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar52 >> 0x28) ^
                                                     (byte)((ulong)uVar50 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                                              (byte)((ulong)uVar50 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar52 >> 0x18)
                                                                       ^ (byte)((ulong)uVar50 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar52
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar50
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar52 >> 8) ^ (byte)((ulong)uVar50 >> 8),
                                                  (byte)uVar52 ^ (byte)uVar50)))))));
            puVar33[-4] = CONCAT17((byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar51 >> 0x30) ^
                                            (byte)((ulong)uVar49 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar51 >> 0x28) ^
                                                     (byte)((ulong)uVar49 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar51 >> 0x20) ^
                                                              (byte)((ulong)uVar49 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar51 >> 0x18)
                                                                       ^ (byte)((ulong)uVar49 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar51
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar49
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar51 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                                  (byte)uVar51 ^ (byte)uVar49)))))));
            uVar50 = puVar30[-1];
            uVar49 = puVar30[-2];
            uVar52 = *(undefined8 *)((long)&iStack_78 + lVar29);
            uVar51 = *(undefined8 *)((long)&local_80 + lVar29);
            puVar33[-1] = CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar52 >> 0x30) ^
                                            (byte)((ulong)uVar50 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar52 >> 0x28) ^
                                                     (byte)((ulong)uVar50 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                                              (byte)((ulong)uVar50 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar52 >> 0x18)
                                                                       ^ (byte)((ulong)uVar50 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar52
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar50
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar52 >> 8) ^ (byte)((ulong)uVar50 >> 8),
                                                  (byte)uVar52 ^ (byte)uVar50)))))));
            puVar33[-2] = CONCAT17((byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar51 >> 0x30) ^
                                            (byte)((ulong)uVar49 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar51 >> 0x28) ^
                                                     (byte)((ulong)uVar49 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar51 >> 0x20) ^
                                                              (byte)((ulong)uVar49 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar51 >> 0x18)
                                                                       ^ (byte)((ulong)uVar49 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar51
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar49
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar51 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                                  (byte)uVar51 ^ (byte)uVar49)))))));
            uVar50 = puVar30[1];
            uVar49 = *puVar30;
            uVar52 = *(undefined8 *)((long)&iStack_68 + lVar29);
            uVar51 = *(undefined8 *)((long)&local_70 + lVar29);
            lVar25 = lVar25 + 4;
            puVar33[1] = CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar52 >> 0x30) ^
                                           (byte)((ulong)uVar50 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar52 >> 0x28) ^
                                                    (byte)((ulong)uVar50 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                                             (byte)((ulong)uVar50 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar52 >> 0x18)
                                                                      ^ (byte)((ulong)uVar50 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar52
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar50
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar52 >> 8) ^ (byte)((ulong)uVar50 >> 8),
                                                  (byte)uVar52 ^ (byte)uVar50)))))));
            *puVar33 = CONCAT17((byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                                CONCAT16((byte)((ulong)uVar51 >> 0x30) ^
                                         (byte)((ulong)uVar49 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar51 >> 0x28) ^
                                                  (byte)((ulong)uVar49 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar51 >> 0x20) ^
                                                           (byte)((ulong)uVar49 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar51 >> 0x18) ^
                                                                    (byte)((ulong)uVar49 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar51 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar49 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar51 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                                  (byte)uVar51 ^ (byte)uVar49)))))));
            lVar29 = lVar28;
          } while (lVar25 != 0);
        }
        if (uVar24 != 0) {
          lVar25 = -uVar24;
          puVar30 = (undefined8 *)((long)param_2 + lVar28);
          puVar33 = (undefined8 *)(param_1 + lVar28);
          puVar36 = (undefined8 *)((long)local_a0 + lVar28);
          do {
            uVar50 = puVar30[1];
            uVar49 = *puVar30;
            bVar19 = lVar25 != -1;
            lVar25 = lVar25 + 1;
            uVar52 = puVar36[1];
            uVar51 = *puVar36;
            puVar33[1] = CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar52 >> 0x30) ^
                                           (byte)((ulong)uVar50 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar52 >> 0x28) ^
                                                    (byte)((ulong)uVar50 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                                             (byte)((ulong)uVar50 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar52 >> 0x18)
                                                                      ^ (byte)((ulong)uVar50 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar52
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar50
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar52 >> 8) ^ (byte)((ulong)uVar50 >> 8),
                                                  (byte)uVar52 ^ (byte)uVar50)))))));
            *puVar33 = CONCAT17((byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                                CONCAT16((byte)((ulong)uVar51 >> 0x30) ^
                                         (byte)((ulong)uVar49 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar51 >> 0x28) ^
                                                  (byte)((ulong)uVar49 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar51 >> 0x20) ^
                                                           (byte)((ulong)uVar49 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar51 >> 0x18) ^
                                                                    (byte)((ulong)uVar49 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar51 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar49 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar51 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                                  (byte)uVar51 ^ (byte)uVar49)))))));
            puVar30 = puVar30 + 2;
            puVar33 = puVar33 + 2;
            puVar36 = puVar36 + 2;
          } while (bVar19);
        }
        if (uVar3 != uVar44) goto LAB_00433f0c;
      }
      param_1 = param_1 + uVar2;
      param_2 = (int *)((long)param_2 + uVar2);
      param_3 = param_3 - uVar2;
      uVar39 = uVar39 + 1;
    } while (param_3 != 0);
  }
  return;
}


