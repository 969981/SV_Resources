/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0016e310; name: FUN_0016e310
 */


bool FUN_0016e310(long param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  int iVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  byte *pbVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  char *__src;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  byte *pbVar22;
  byte *pbVar21;
  undefined8 uVar23;
  undefined8 uVar24;
  char *local_220;
  char local_150 [200];
  int aiStack_88 [10];
  
  if ((long)param_4 - (long)param_3 < 0x10) {
    return false;
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar19 = *(uint **)(param_1 + 0x20);
  pbVar21 = *(byte **)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x38);
  puVar1 = puVar19 + *(long *)(param_1 + 0x28);
  pcVar18 = *(char **)(param_1 + 0x40);
  __n = *(size_t *)(param_1 + 0x48);
  aiStack_88[4] = 0xfffffff8;
  aiStack_88[5] = 0xfffffff8;
  aiStack_88[6] = 0xfffffff8;
  if (0x14f < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -0x150;
  }
  puVar1[0] = 3;
  puVar1[1] = 3;
  puVar1[2] = 3;
  puVar1[3] = 3;
  puVar1[4] = 3;
  puVar1[5] = 3;
  puVar1[6] = 3;
  puVar1[7] = 3;
  local_220 = pcVar18 + __n;
  puVar1[0xc] = 3;
  puVar1[0xd] = 3;
  puVar1[0xe] = 3;
  puVar1[0xf] = 3;
  if (199 < (long)__n) {
    __n = 200;
  }
  __src = local_220 + -__n;
  pbVar2 = pbVar21 + lVar6;
  puVar1[8] = 3;
  puVar1[9] = 3;
  puVar1[10] = 3;
  puVar1[0xb] = 3;
  memcpy(local_150 + -__n,__src,__n);
  uVar10 = 0xfffffffffffffff8;
  local_150[0xc0] = '\0';
  local_150[0xc1] = '\0';
  local_150[0xc2] = '\0';
  local_150[0xc3] = '\0';
  local_150[0xc4] = '\0';
  local_150[0xc5] = '\0';
  local_150[0xc6] = '\0';
  local_150[199] = '\0';
  local_150[0] = '\0';
  local_150[1] = '\0';
  local_150[2] = '\0';
  local_150[3] = '\0';
  local_150[4] = '\0';
  local_150[5] = '\0';
  local_150[6] = '\0';
  local_150[7] = '\0';
  local_150[8] = '\0';
  local_150[9] = '\0';
  local_150[10] = '\0';
  local_150[0xb] = '\0';
  local_150[0xc] = '\0';
  local_150[0xd] = '\0';
  local_150[0xe] = '\0';
  local_150[0xf] = '\0';
  local_150[0x10] = '\0';
  local_150[0x11] = '\0';
  local_150[0x12] = '\0';
  local_150[0x13] = '\0';
  local_150[0x14] = '\0';
  local_150[0x15] = '\0';
  local_150[0x16] = '\0';
  local_150[0x17] = '\0';
  local_150[0x18] = '\0';
  local_150[0x19] = '\0';
  local_150[0x1a] = '\0';
  local_150[0x1b] = '\0';
  local_150[0x1c] = '\0';
  local_150[0x1d] = '\0';
  local_150[0x1e] = '\0';
  local_150[0x1f] = '\0';
  local_150[0x20] = '\0';
  local_150[0x21] = '\0';
  local_150[0x22] = '\0';
  local_150[0x23] = '\0';
  local_150[0x24] = '\0';
  local_150[0x25] = '\0';
  local_150[0x26] = '\0';
  local_150[0x27] = '\0';
  local_150[0x28] = '\0';
  local_150[0x29] = '\0';
  local_150[0x2a] = '\0';
  local_150[0x2b] = '\0';
  local_150[0x2c] = '\0';
  local_150[0x2d] = '\0';
  local_150[0x2e] = '\0';
  local_150[0x2f] = '\0';
  local_150[0x30] = '\0';
  local_150[0x31] = '\0';
  local_150[0x32] = '\0';
  local_150[0x33] = '\0';
  local_150[0x34] = '\0';
  local_150[0x35] = '\0';
  local_150[0x36] = '\0';
  local_150[0x37] = '\0';
  local_150[0x38] = '\0';
  local_150[0x39] = '\0';
  local_150[0x3a] = '\0';
  local_150[0x3b] = '\0';
  local_150[0x3c] = '\0';
  local_150[0x3d] = '\0';
  local_150[0x3e] = '\0';
  local_150[0x3f] = '\0';
  local_150[0x40] = '\0';
  local_150[0x41] = '\0';
  local_150[0x42] = '\0';
  local_150[0x43] = '\0';
  local_150[0x44] = '\0';
  local_150[0x45] = '\0';
  local_150[0x46] = '\0';
  local_150[0x47] = '\0';
  local_150[0x48] = '\0';
  local_150[0x49] = '\0';
  local_150[0x4a] = '\0';
  local_150[0x4b] = '\0';
  local_150[0x4c] = '\0';
  local_150[0x4d] = '\0';
  local_150[0x4e] = '\0';
  local_150[0x4f] = '\0';
  local_150[0x50] = '\0';
  local_150[0x51] = '\0';
  local_150[0x52] = '\0';
  local_150[0x53] = '\0';
  local_150[0x54] = '\0';
  local_150[0x55] = '\0';
  local_150[0x56] = '\0';
  local_150[0x57] = '\0';
  local_150[0x58] = '\0';
  local_150[0x59] = '\0';
  local_150[0x5a] = '\0';
  local_150[0x5b] = '\0';
  local_150[0x5c] = '\0';
  local_150[0x5d] = '\0';
  local_150[0x5e] = '\0';
  local_150[0x5f] = '\0';
  local_150[0x60] = '\0';
  local_150[0x61] = '\0';
  local_150[0x62] = '\0';
  local_150[99] = '\0';
  local_150[100] = '\0';
  local_150[0x65] = '\0';
  local_150[0x66] = '\0';
  local_150[0x67] = '\0';
  local_150[0x68] = '\0';
  local_150[0x69] = '\0';
  local_150[0x6a] = '\0';
  local_150[0x6b] = '\0';
  local_150[0x6c] = '\0';
  local_150[0x6d] = '\0';
  local_150[0x6e] = '\0';
  local_150[0x6f] = '\0';
  local_150[0x70] = '\0';
  local_150[0x71] = '\0';
  local_150[0x72] = '\0';
  local_150[0x73] = '\0';
  local_150[0x74] = '\0';
  local_150[0x75] = '\0';
  local_150[0x76] = '\0';
  local_150[0x77] = '\0';
  local_150[0x78] = '\0';
  local_150[0x79] = '\0';
  local_150[0x7a] = '\0';
  local_150[0x7b] = '\0';
  local_150[0x7c] = '\0';
  local_150[0x7d] = '\0';
  local_150[0x7e] = '\0';
  local_150[0x7f] = '\0';
  local_150[0x80] = '\0';
  local_150[0x81] = '\0';
  local_150[0x82] = '\0';
  local_150[0x83] = '\0';
  local_150[0x84] = '\0';
  local_150[0x85] = '\0';
  local_150[0x86] = '\0';
  local_150[0x87] = '\0';
  local_150[0x88] = '\0';
  local_150[0x89] = '\0';
  local_150[0x8a] = '\0';
  local_150[0x8b] = '\0';
  local_150[0x8c] = '\0';
  local_150[0x8d] = '\0';
  local_150[0x8e] = '\0';
  local_150[0x8f] = '\0';
  local_150[0x90] = '\0';
  local_150[0x91] = '\0';
  local_150[0x92] = '\0';
  local_150[0x93] = '\0';
  local_150[0x94] = '\0';
  local_150[0x95] = '\0';
  local_150[0x96] = '\0';
  local_150[0x97] = '\0';
  local_150[0x98] = '\0';
  local_150[0x99] = '\0';
  local_150[0x9a] = '\0';
  local_150[0x9b] = '\0';
  local_150[0x9c] = '\0';
  local_150[0x9d] = '\0';
  local_150[0x9e] = '\0';
  local_150[0x9f] = '\0';
  local_150[0xa0] = '\0';
  local_150[0xa1] = '\0';
  local_150[0xa2] = '\0';
  local_150[0xa3] = '\0';
  local_150[0xa4] = '\0';
  local_150[0xa5] = '\0';
  local_150[0xa6] = '\0';
  local_150[0xa7] = '\0';
  local_150[0xa8] = '\0';
  local_150[0xa9] = '\0';
  local_150[0xaa] = '\0';
  local_150[0xab] = '\0';
  local_150[0xac] = '\0';
  local_150[0xad] = '\0';
  local_150[0xae] = '\0';
  local_150[0xaf] = '\0';
  local_150[0xb0] = '\0';
  local_150[0xb1] = '\0';
  local_150[0xb2] = '\0';
  local_150[0xb3] = '\0';
  local_150[0xb4] = '\0';
  local_150[0xb5] = '\0';
  local_150[0xb6] = '\0';
  local_150[0xb7] = '\0';
  local_150[0xb8] = '\0';
  local_150[0xb9] = '\0';
  local_150[0xba] = '\0';
  local_150[0xbb] = '\0';
  local_150[0xbc] = '\0';
  local_150[0xbd] = '\0';
  local_150[0xbe] = '\0';
  local_150[0xbf] = '\0';
  puVar12 = puVar4;
  do {
    if ((pbVar2 <= pbVar21) || (param_3 <= param_2)) {
      while( true ) {
        if (pbVar2 <= pbVar21) {
          if (puVar19 != puVar1) {
            return false;
          }
          if (puVar12 != puVar4 + lVar5) {
            return false;
          }
          if (param_2 < param_4) {
            uVar15 = (long)param_4 - (long)param_2;
            if ((long)local_220 - (long)pcVar18 != uVar15) {
              return false;
            }
            uVar11 = uVar15 - 8;
            if (7 < (long)uVar15) {
              uVar16 = uVar15;
              if (((uint)uVar11 >> 3 & 1) == 0) {
                uVar23 = *(undefined8 *)(param_2 + uVar10);
                uVar24 = *(undefined8 *)pcVar18;
                *(ulong *)param_2 =
                     CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                              CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                                 (char)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                          (char)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                   (char)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar24 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar24 >> 8) + (char)((ulong)uVar23 >> 8),
                                                  (char)uVar24 + (char)uVar23)))))));
                uVar16 = uVar11;
                param_2 = param_2 + 8;
                pcVar18 = pcVar18 + 8;
              }
              if (7 < uVar11) {
                do {
                  uVar23 = *(undefined8 *)pcVar18;
                  uVar16 = uVar16 - 0x10;
                  uVar24 = *(undefined8 *)(param_2 + uVar10 + 8 + -8);
                  *(ulong *)param_2 =
                       CONCAT17((char)((ulong)uVar23 >> 0x38) + (char)((ulong)uVar24 >> 0x38),
                                CONCAT16((char)((ulong)uVar23 >> 0x30) +
                                         (char)((ulong)uVar24 >> 0x30),
                                         CONCAT15((char)((ulong)uVar23 >> 0x28) +
                                                  (char)((ulong)uVar24 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar23 >> 0x20) +
                                                           (char)((ulong)uVar24 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar23 >> 0x18) +
                                                                    (char)((ulong)uVar24 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar23 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar24 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar23 >> 8) + (char)((ulong)uVar24 >> 8),
                                                  (char)uVar23 + (char)uVar24)))))));
                  uVar23 = *(undefined8 *)(param_2 + uVar10 + 8);
                  uVar24 = *(undefined8 *)(pcVar18 + 8);
                  pcVar18 = pcVar18 + 0x10;
                  *(ulong *)(param_2 + 8) =
                       CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                                CONCAT16((char)((ulong)uVar24 >> 0x30) +
                                         (char)((ulong)uVar23 >> 0x30),
                                         CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                                  (char)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                           (char)((ulong)uVar23 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                    (char)((ulong)uVar23 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar24 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar23 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar24 >> 8) + (char)((ulong)uVar23 >> 8),
                                                  (char)uVar24 + (char)uVar23)))))));
                  param_2 = param_2 + 0x10;
                } while (7 < (long)uVar16);
              }
              uVar15 = uVar15 & 7;
            }
            if (uVar15 != 0) {
              uVar11 = uVar15;
              if ((uVar15 & 1) != 0) {
                *param_2 = param_2[uVar10] + *pcVar18;
                pcVar18 = pcVar18 + 1;
                uVar11 = uVar15 - 1;
                param_2 = param_2 + 1;
              }
              if (uVar15 != 1) {
                do {
                  uVar11 = uVar11 - 2;
                  *param_2 = (param_2 + uVar10 + 1)[-1] + *pcVar18;
                  param_2[1] = param_2[uVar10 + 1] + pcVar18[1];
                  param_2 = param_2 + 2;
                  pcVar18 = pcVar18 + 2;
                } while (uVar11 != 0);
              }
            }
          }
          return param_2 == param_4;
        }
        if (__src <= pcVar18) {
          if (local_220 <= pcVar18 && (long)pcVar18 - (long)local_220 != 0) {
            return false;
          }
          pcVar18 = local_150 + ((long)pcVar18 - (long)local_220);
          __src = local_150;
          local_220 = local_150;
        }
        bVar8 = *pbVar21;
        aiStack_88[7] = *puVar12;
        uVar15 = (ulong)*puVar19;
        puVar20 = puVar19 + 1;
        if (((ulong)bVar8 & 3) != 3) {
          uVar15 = (ulong)bVar8 & 3;
          puVar20 = puVar19;
        }
        if ((long)(param_4 + (-0x10 - (long)param_2)) < (long)uVar15) break;
        uVar23 = *(undefined8 *)(param_2 + uVar10);
        uVar24 = *(undefined8 *)pcVar18;
        *(ulong *)param_2 =
             CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                      CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                               CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                        (char)((ulong)uVar23 >> 0x28),
                                        CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                 (char)((ulong)uVar23 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                          (char)((ulong)uVar23 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar24 >> 0x10) +
                                                                   (char)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar24 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar23 >>
                                                                                  8),(char)uVar24 +
                                                                                     (char)uVar23)))
                                                ))));
        if (8 < uVar15) {
          uVar23 = *(undefined8 *)(param_2 + uVar10 + 8);
          uVar24 = *(undefined8 *)(pcVar18 + 8);
          *(ulong *)(param_2 + 8) =
               CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                        CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                                 CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                          (char)((ulong)uVar23 >> 0x28),
                                          CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                   (char)((ulong)uVar23 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                            (char)((ulong)uVar23 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar24 >> 0x10) +
                                                                     (char)((ulong)uVar23 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar24
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar23
                                                                                    >> 8),
                                                                              (char)uVar24 +
                                                                              (char)uVar23)))))));
          if (0x10 < uVar15) {
            uVar23 = *(undefined8 *)(param_2 + uVar10 + 0x10);
            uVar24 = *(undefined8 *)(pcVar18 + 0x10);
            *(ulong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                          CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                                   CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                            (char)((ulong)uVar23 >> 0x28),
                                            CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                     (char)((ulong)uVar23 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                              (char)((ulong)uVar23 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar24 >> 0x10)
                                                                       + (char)((ulong)uVar23 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar24
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar23
                                                                                      >> 8),
                                                                                (char)uVar24 +
                                                                                (char)uVar23)))))));
            if (0x18 < uVar15) {
              if (((long)__src - (long)pcVar18 <= (long)uVar15) &&
                 ((long)local_220 - (long)pcVar18 < (long)uVar15)) {
                return false;
              }
              uVar15 = uVar15 - 0x18;
              pcVar14 = param_2 + 0x18;
              pcVar17 = pcVar18 + 0x18;
              do {
                uVar23 = *(undefined8 *)(pcVar14 + uVar10);
                uVar15 = uVar15 - 8;
                pcVar18 = pcVar17 + 8;
                uVar24 = *(undefined8 *)pcVar17;
                param_2 = pcVar14 + 8;
                *(ulong *)pcVar14 =
                     CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                              CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                                 (char)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                          (char)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                   (char)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar24 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar24 >> 8) + (char)((ulong)uVar23 >> 8),
                                                  (char)uVar24 + (char)uVar23)))))));
                pcVar14 = param_2;
                pcVar17 = pcVar18;
              } while (0 < (long)uVar15);
            }
          }
        }
        uVar11 = (ulong)(bVar8 >> 6);
        uVar16 = uVar11 << 2 | 0x10;
        iVar3 = aiStack_88[uVar11 + 2];
        iVar9 = *(int *)((long)aiStack_88 + uVar16);
        uVar10 = (ulong)iVar9;
        iVar7 = aiStack_88[uVar11 + 1];
        *(int *)((long)aiStack_88 + uVar16) = aiStack_88[uVar11 + 3];
        pcVar14 = param_2 + uVar15;
        aiStack_88[uVar11 + 2] = iVar7;
        aiStack_88[uVar11 + 3] = iVar3;
        aiStack_88[4] = iVar9;
        if (uVar10 < (ulong)(param_5 - (long)pcVar14)) {
          return false;
        }
        uVar16 = (ulong)(bVar8 >> 2) & 0xf;
        pcVar17 = pcVar14 + uVar10;
        if (uVar16 == 0xf) {
          puVar19 = puVar20 + 1;
          if ((long)(param_4 + (-8 - (long)pcVar14)) < (long)(ulong)(*puVar20 + 0xe)) {
            return false;
          }
          param_2 = pcVar14 + (*puVar20 + 0xe);
          *(undefined8 *)pcVar14 = *(undefined8 *)pcVar17;
          *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar17 + 8);
          *(undefined8 *)(pcVar14 + 0x10) = *(undefined8 *)(pcVar17 + 0x10);
          for (pcVar14 = pcVar14 + 0x18; pcVar14 < param_2; pcVar14 = pcVar14 + 8) {
            *(undefined8 *)pcVar14 = *(undefined8 *)(pcVar14 + uVar10);
          }
        }
        else {
          *(undefined8 *)pcVar14 = *(undefined8 *)pcVar17;
          param_2 = pcVar14 + uVar16 + 2;
          *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar17 + 8);
          puVar19 = puVar20;
        }
        puVar12 = (uint *)((long)puVar12 + (uVar11 + 1 & 4));
        if (puVar1 < puVar12) {
          return false;
        }
        pcVar18 = pcVar18 + uVar15;
        pbVar21 = pbVar21 + 1;
        if (puVar1 < puVar19) {
          return false;
        }
      }
      return false;
    }
    if (__src <= pcVar18) {
      if (local_220 <= pcVar18 && (long)pcVar18 - (long)local_220 != 0) {
        return false;
      }
      pcVar18 = local_150 + ((long)pcVar18 - (long)local_220);
      __src = local_150;
      local_220 = local_150;
    }
    pbVar13 = pbVar2;
    if (7 < (long)pbVar2 - (long)pbVar21) {
      pbVar13 = pbVar21 + 8;
    }
    while( true ) {
      puVar20 = puVar19;
      pbVar22 = pbVar21;
      if (pbVar13 <= pbVar21) break;
      while( true ) {
        pbVar21 = pbVar22 + 1;
        bVar8 = *pbVar22;
        aiStack_88[7] = *puVar12;
        uVar23 = *(undefined8 *)(param_2 + uVar10);
        uVar24 = *(undefined8 *)pcVar18;
        uVar15 = (ulong)*puVar20;
        puVar19 = puVar20 + 1;
        if (((ulong)bVar8 & 3) != 3) {
          uVar15 = (ulong)bVar8 & 3;
          puVar19 = puVar20;
        }
        puVar20 = puVar19;
        *(ulong *)param_2 =
             CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                      CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                               CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                        (char)((ulong)uVar23 >> 0x28),
                                        CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                 (char)((ulong)uVar23 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                          (char)((ulong)uVar23 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar24 >> 0x10) +
                                                                   (char)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar24 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar23 >>
                                                                                  8),(char)uVar24 +
                                                                                     (char)uVar23)))
                                                ))));
        if (8 < uVar15) {
          uVar23 = *(undefined8 *)(param_2 + uVar10 + 8);
          uVar24 = *(undefined8 *)(pcVar18 + 8);
          *(ulong *)(param_2 + 8) =
               CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                        CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                                 CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                          (char)((ulong)uVar23 >> 0x28),
                                          CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                   (char)((ulong)uVar23 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                            (char)((ulong)uVar23 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar24 >> 0x10) +
                                                                     (char)((ulong)uVar23 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar24
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar23
                                                                                    >> 8),
                                                                              (char)uVar24 +
                                                                              (char)uVar23)))))));
          if (0x10 < uVar15) {
            uVar23 = *(undefined8 *)(param_2 + uVar10 + 0x10);
            uVar24 = *(undefined8 *)(pcVar18 + 0x10);
            *(ulong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                          CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30),
                                   CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                            (char)((ulong)uVar23 >> 0x28),
                                            CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                     (char)((ulong)uVar23 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                              (char)((ulong)uVar23 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar24 >> 0x10)
                                                                       + (char)((ulong)uVar23 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar24
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar23
                                                                                      >> 8),
                                                                                (char)uVar24 +
                                                                                (char)uVar23)))))));
            if (0x18 < uVar15) {
              if (((long)__src - (long)pcVar18 <= (long)uVar15) &&
                 (pbVar13 = pbVar21, (long)local_220 - (long)pcVar18 < (long)uVar15)) {
                return false;
              }
              if (((long)param_3 - (long)param_2 < (long)uVar15) &&
                 (pbVar13 = pbVar21, (long)(param_4 + (-0x10 - (long)param_2)) < (long)uVar15)) {
                return false;
              }
              uVar15 = uVar15 - 0x18;
              pcVar14 = param_2 + 0x18;
              pcVar17 = pcVar18 + 0x18;
              do {
                uVar23 = *(undefined8 *)(pcVar14 + uVar10);
                uVar15 = uVar15 - 8;
                pcVar18 = pcVar17 + 8;
                uVar24 = *(undefined8 *)pcVar17;
                param_2 = pcVar14 + 8;
                *(ulong *)pcVar14 =
                     CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar23 >> 0x38),
                              CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                                 (char)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                          (char)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                   (char)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar24 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar24 >> 8) + (char)((ulong)uVar23 >> 8),
                                                  (char)uVar24 + (char)uVar23)))))));
                pcVar14 = param_2;
                pcVar17 = pcVar18;
              } while (0 < (long)uVar15);
            }
          }
        }
        uVar11 = (ulong)(bVar8 >> 6);
        uVar16 = uVar11 << 2 | 0x10;
        iVar7 = aiStack_88[uVar11 + 1];
        iVar3 = aiStack_88[uVar11 + 2];
        iVar9 = *(int *)((long)aiStack_88 + uVar16);
        uVar10 = (ulong)iVar9;
        *(int *)((long)aiStack_88 + uVar16) = aiStack_88[uVar11 + 3];
        pcVar14 = param_2 + uVar15;
        aiStack_88[uVar11 + 2] = iVar7;
        aiStack_88[uVar11 + 3] = iVar3;
        aiStack_88[4] = iVar9;
        if (uVar10 < (ulong)(param_5 - (long)pcVar14)) {
          return false;
        }
        uVar16 = (ulong)(bVar8 >> 2) & 0xf;
        pcVar18 = pcVar18 + uVar15;
        puVar12 = (uint *)((long)puVar12 + (uVar11 + 1 & 4));
        pcVar17 = pcVar14 + uVar10;
        if (uVar16 == 0xf) break;
        *(undefined8 *)pcVar14 = *(undefined8 *)pcVar17;
        param_2 = pcVar14 + uVar16 + 2;
        *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar17 + 8);
        pbVar22 = pbVar21;
        if (pbVar13 <= pbVar21) goto LAB_0016e628;
      }
      puVar19 = puVar20 + 1;
      if ((long)(param_4 + (-8 - (long)pcVar14)) < (long)(ulong)(*puVar20 + 0xe)) {
        return false;
      }
      param_2 = pcVar14 + (*puVar20 + 0xe);
      *(undefined8 *)pcVar14 = *(undefined8 *)pcVar17;
      *(undefined8 *)(pcVar14 + 8) = *(undefined8 *)(pcVar17 + 8);
      *(undefined8 *)(pcVar14 + 0x10) = *(undefined8 *)(pcVar17 + 0x10);
      for (pcVar14 = pcVar14 + 0x18; pcVar14 < param_2; pcVar14 = pcVar14 + 8) {
        *(undefined8 *)pcVar14 = *(undefined8 *)(pcVar14 + uVar10);
      }
      puVar20 = puVar19;
      if (param_3 <= param_2) break;
    }
LAB_0016e628:
    if (puVar1 < puVar20) {
      return false;
    }
    puVar19 = puVar20;
    if (puVar1 < puVar12) {
      return false;
    }
  } while( true );
}


