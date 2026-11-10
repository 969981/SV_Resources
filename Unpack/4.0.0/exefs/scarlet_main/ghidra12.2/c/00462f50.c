/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00462f50; name: FUN_00462f50
 */


ulong FUN_00462f50(long param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,ulong param_5,
                  undefined8 *param_6,ulong param_7)

{
  void *__dest;
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
  uint uVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  size_t __n;
  ulong uVar29;
  byte *pbVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 auStack_110 [6];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte abStack_af [7];
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined7 uStack_97;
  byte local_90;
  undefined2 uStack_8f;
  byte bStack_8d;
  undefined4 uStack_8c;
  byte bStack_88;
  undefined7 uStack_87;
  byte local_80;
  undefined2 uStack_7f;
  byte bStack_7d;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint local_64;
  
  local_a8 = 0x10;
  uStack_d8 = *(undefined8 *)(param_1 + 0x100);
  local_e0 = *(undefined8 *)(param_1 + 0xf8);
  uVar23 = *(byte *)(param_1 + 0x107) + 1;
  *(char *)(param_1 + 0x107) = (char)uVar23;
  uVar1 = (uint)*(byte *)(param_1 + 0x106) + (uVar23 >> 8);
  uVar2 = (uint)*(byte *)(param_1 + 0x105) + (uVar1 >> 8);
  uVar3 = (uint)*(byte *)(param_1 + 0x104) + (uVar2 >> 8);
  uVar4 = (uint)*(byte *)(param_1 + 0x103) + (uVar3 >> 8);
  uVar5 = (uint)*(byte *)(param_1 + 0x102) + (uVar4 >> 8);
  uVar6 = (uint)*(byte *)(param_1 + 0x101) + (uVar5 >> 8);
  uVar7 = (uint)*(byte *)(param_1 + 0x100) + (uVar6 >> 8);
  uVar8 = (uint)*(byte *)(param_1 + 0xff) + (uVar7 >> 8);
  uVar9 = (uint)*(byte *)(param_1 + 0xfe) + (uVar8 >> 8);
  uVar10 = (uint)*(byte *)(param_1 + 0xfd) + (uVar9 >> 8);
  uVar11 = (uint)*(byte *)(param_1 + 0xfc) + (uVar10 >> 8);
  *(char *)(param_1 + 0x106) = (char)uVar1;
  *(char *)(param_1 + 0x105) = (char)uVar2;
  *(char *)(param_1 + 0x104) = (char)uVar3;
  *(char *)(param_1 + 0x103) = (char)uVar4;
  *(char *)(param_1 + 0x102) = (char)uVar5;
  *(char *)(param_1 + 0x101) = (char)uVar6;
  *(char *)(param_1 + 0x100) = (char)uVar7;
  *(char *)(param_1 + 0xff) = (char)uVar8;
  *(char *)(param_1 + 0xfe) = (char)uVar9;
  *(char *)(param_1 + 0xfd) = (char)uVar10;
  *(char *)(param_1 + 0xfc) = (char)uVar11;
  uVar12 = (uint)*(byte *)(param_1 + 0xfb) + (uVar11 >> 8);
  uVar13 = (uint)*(byte *)(param_1 + 0xfa) + (uVar12 >> 8);
  uVar14 = (uint)*(byte *)(param_1 + 0xf9) + (uVar13 >> 8);
  cVar15 = *(char *)(param_1 + 0xf8) + (char)(uVar14 >> 8);
  *(char *)(param_1 + 0xfb) = (char)uVar12;
  *(char *)(param_1 + 0xfa) = (char)uVar13;
  *(char *)(param_1 + 0xf9) = (char)uVar14;
  *(char *)(param_1 + 0xf8) = cVar15;
  uStack_c8 = *(undefined8 *)(param_1 + 0x100);
  local_d0 = *(undefined8 *)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0xd0) == 0x10) {
    iVar18 = 0x20;
  }
  else {
    uVar23 = (uVar23 & 0xff) + 1;
    *(char *)(param_1 + 0x107) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar1 & 0xff);
    *(char *)(param_1 + 0x106) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar2 & 0xff);
    *(char *)(param_1 + 0x105) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar3 & 0xff);
    *(char *)(param_1 + 0x104) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar4 & 0xff);
    *(char *)(param_1 + 0x103) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar5 & 0xff);
    *(char *)(param_1 + 0x102) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar6 & 0xff);
    *(char *)(param_1 + 0x101) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar7 & 0xff);
    *(char *)(param_1 + 0x100) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar8 & 0xff);
    *(char *)(param_1 + 0xff) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar9 & 0xff);
    *(char *)(param_1 + 0xfe) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar10 & 0xff);
    *(char *)(param_1 + 0xfd) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar11 & 0xff);
    *(char *)(param_1 + 0xfc) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar12 & 0xff);
    *(char *)(param_1 + 0xfb) = (char)uVar23;
    uVar23 = (uVar23 >> 8) + (uVar13 & 0xff);
    *(char *)(param_1 + 0xfa) = (char)uVar23;
    iVar18 = (uVar23 >> 8) + (uVar14 & 0xff);
    *(char *)(param_1 + 0xf9) = (char)iVar18;
    *(char *)(param_1 + 0xf8) = cVar15 + (char)((uint)iVar18 >> 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x100);
    local_c0 = *(undefined8 *)(param_1 + 0xf8);
    iVar18 = 0x30;
  }
  iVar17 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xa8),auStack_110,&local_a8,&local_e0,iVar18);
  if (iVar17 == 0) {
    return 0;
  }
  if (local_a8 != iVar18) {
    return 0;
  }
  uVar29 = *(size_t *)(param_1 + 0xd0);
  __dest = (void *)(param_1 + 0xd8);
  memcpy(__dest,auStack_110,uVar29);
  uVar31 = *(undefined8 *)((long)auStack_110 + uVar29);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)((long)auStack_110 + uVar29 + 8);
  *(undefined8 *)(param_1 + 0xf8) = uVar31;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    if ((param_2 != (undefined8 *)0x0) && (param_3 != 0)) {
      uVar25 = param_3;
      if (uVar29 <= param_3) {
        uVar25 = uVar29;
      }
      if (uVar25 != 0) {
        if ((uVar25 < 0x40) ||
           ((param_1 + 0xd8U < (long)param_2 + uVar25 &&
            (param_2 < (undefined8 *)(uVar25 + param_1 + 0xd8))))) {
          uVar29 = 0;
LAB_00463214:
          uVar19 = uVar29;
          if ((uVar25 & 1) != 0) {
            *(byte *)(param_1 + uVar29 + 0xd8) =
                 *(byte *)(param_1 + uVar29 + 0xd8) ^ *(byte *)((long)param_2 + uVar29);
            uVar19 = uVar29 | 1;
          }
          if (uVar25 != (uVar29 | 1)) {
            lVar22 = uVar25 - uVar19;
            pbVar30 = (byte *)(uVar19 + param_1 + 0xd9);
            pbVar27 = (byte *)((long)param_2 + uVar19 + 1);
            do {
              lVar22 = lVar22 + -2;
              pbVar30[-1] = pbVar30[-1] ^ pbVar27[-1];
              *pbVar30 = *pbVar30 ^ *pbVar27;
              pbVar30 = pbVar30 + 2;
              pbVar27 = pbVar27 + 2;
            } while (lVar22 != 0);
          }
        }
        else {
          uVar29 = uVar25 & 0xffffffffffffffc0;
          puVar26 = (undefined8 *)(param_1 + 0x108);
          puVar28 = param_2 + 4;
          uVar19 = uVar29;
          do {
            uVar33 = puVar28[-3];
            uVar31 = puVar28[-4];
            uVar35 = puVar28[-1];
            uVar34 = puVar28[-2];
            uVar19 = uVar19 - 0x40;
            uVar40 = puVar26[-5];
            uVar39 = puVar26[-6];
            uVar42 = puVar26[-3];
            uVar41 = puVar26[-4];
            uVar36 = puVar28[1];
            uVar32 = *puVar28;
            uVar38 = puVar28[3];
            uVar37 = puVar28[2];
            puVar26[-5] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                            (byte)((ulong)uVar33 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                     (byte)((ulong)uVar33 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                              (byte)((ulong)uVar33 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar40 >> 0x18)
                                                                       ^ (byte)((ulong)uVar33 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar40
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar33
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar40 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar40 ^ (byte)uVar33)))))));
            puVar26[-6] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                            (byte)((ulong)uVar31 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                     (byte)((ulong)uVar31 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                              (byte)((ulong)uVar31 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar39 >> 0x18)
                                                                       ^ (byte)((ulong)uVar31 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar39
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar31
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar39 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar39 ^ (byte)uVar31)))))));
            puVar26[-3] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                            (byte)((ulong)uVar35 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                     (byte)((ulong)uVar35 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                              (byte)((ulong)uVar35 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar42 >> 0x18)
                                                                       ^ (byte)((ulong)uVar35 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar42
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar35
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar42 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar42 ^ (byte)uVar35)))))));
            puVar26[-4] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                            (byte)((ulong)uVar34 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                     (byte)((ulong)uVar34 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                              (byte)((ulong)uVar34 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar41 >> 0x18)
                                                                       ^ (byte)((ulong)uVar34 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar41
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar34
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar41 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar41 ^ (byte)uVar34)))))));
            uVar33 = puVar26[-1];
            uVar31 = puVar26[-2];
            uVar35 = puVar26[1];
            uVar34 = *puVar26;
            puVar26[-1] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                            (byte)((ulong)uVar36 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                     (byte)((ulong)uVar36 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                              (byte)((ulong)uVar36 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar33 >> 0x18)
                                                                       ^ (byte)((ulong)uVar36 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar33
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar36
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar33 >> 8) ^ (byte)((ulong)uVar36 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar36)))))));
            puVar26[-2] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                            (byte)((ulong)uVar32 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                     (byte)((ulong)uVar32 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                              (byte)((ulong)uVar32 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar31 >> 0x18)
                                                                       ^ (byte)((ulong)uVar32 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar31
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar32
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar31 >> 8) ^ (byte)((ulong)uVar32 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar32)))))));
            puVar26[1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                           (byte)((ulong)uVar38 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                    (byte)((ulong)uVar38 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                             (byte)((ulong)uVar38 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar35 >> 0x18)
                                                                      ^ (byte)((ulong)uVar38 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar35
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar38
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar35 >> 8) ^ (byte)((ulong)uVar38 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar38)))))));
            *puVar26 = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                         (byte)((ulong)uVar37 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                  (byte)((ulong)uVar37 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                           (byte)((ulong)uVar37 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                                    (byte)((ulong)uVar37 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar34 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar37 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar37)))))));
            puVar26 = puVar26 + 8;
            puVar28 = puVar28 + 8;
          } while (uVar19 != 0);
          if (uVar25 != uVar29) goto LAB_00463214;
        }
        uVar29 = *(ulong *)(param_1 + 0xd0);
      }
      if (uVar29 < param_3) {
        param_3 = param_3 - uVar29;
        uVar25 = param_3;
        if (0xf < param_3) {
          uVar25 = 0x10;
        }
        if (uVar25 != 0) {
          if ((param_3 < 0x10) ||
             ((param_1 + 0xf8U < (long)param_2 + uVar29 + uVar25 &&
              ((long)param_2 + uVar29 < uVar25 + param_1 + 0xf8)))) {
            uVar19 = 0;
          }
          else {
            uVar19 = uVar25 & 0x10;
            uVar20 = (uVar19 - 0x10 >> 4) + 1;
            lVar22 = 0;
            if (uVar19 - 0x10 != 0) {
              lVar24 = -(uVar20 & 0x1ffffffffffffffe);
              do {
                puVar26 = (undefined8 *)(param_1 + 0xf8 + lVar22);
                puVar28 = (undefined8 *)((long)param_2 + uVar29 + lVar22);
                uVar33 = puVar28[1];
                uVar31 = *puVar28;
                uVar35 = puVar26[1];
                uVar34 = *puVar26;
                uVar36 = puVar26[3];
                uVar32 = puVar26[2];
                lVar22 = lVar22 + 0x20;
                lVar24 = lVar24 + 2;
                puVar26[1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                               (byte)((ulong)uVar33 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                        (byte)((ulong)uVar33 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                                 (byte)((ulong)uVar33 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar35 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar33 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar35 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar35 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar35 ^ (byte)uVar33)))))));
                *puVar26 = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                             (byte)((ulong)uVar31 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                      (byte)((ulong)uVar31 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                               (byte)((ulong)uVar31 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar34 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar31 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                           (byte)((ulong)uVar31 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar34 >> 8) ^
                                                                    (byte)((ulong)uVar31 >> 8),
                                                                    (byte)uVar34 ^ (byte)uVar31)))))
                                            ));
                uVar33 = puVar28[3];
                uVar31 = puVar28[2];
                puVar26[3] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                               (byte)((ulong)uVar33 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                        (byte)((ulong)uVar33 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                                 (byte)((ulong)uVar33 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar36 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar33 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar36 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar36 ^ (byte)uVar33)))))));
                puVar26[2] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                               (byte)((ulong)uVar31 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                        (byte)((ulong)uVar31 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                                 (byte)((ulong)uVar31 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar32 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar31 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                           (byte)((ulong)uVar31 >> 8),
                                                           (byte)uVar32 ^ (byte)uVar31)))))));
              } while (lVar24 != 0);
            }
            if ((uVar20 & 1) != 0) {
              puVar26 = (undefined8 *)((long)param_2 + lVar22 + uVar29);
              uVar33 = puVar26[1];
              uVar31 = *puVar26;
              lVar22 = param_1 + lVar22;
              uVar35 = *(undefined8 *)(lVar22 + 0x100);
              uVar34 = *(undefined8 *)(lVar22 + 0xf8);
              *(ulong *)(lVar22 + 0x100) =
                   CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                            CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                              (byte)((ulong)uVar33 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                       (byte)((ulong)uVar33 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                                (byte)((ulong)uVar33 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar35 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar33 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar33)))))));
              *(ulong *)(lVar22 + 0xf8) =
                   CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                            CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                              (byte)((ulong)uVar31 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                       (byte)((ulong)uVar31 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                                (byte)((ulong)uVar31 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar34 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar31)))))));
            }
            if (uVar25 == uVar19) goto LAB_004637ec;
          }
          uVar20 = uVar19;
          if ((uVar25 & 1) != 0) {
            *(byte *)(param_1 + uVar19 + 0xf8) =
                 *(byte *)(param_1 + uVar19 + 0xf8) ^ *(byte *)((long)param_2 + uVar19 + uVar29);
            uVar20 = uVar19 | 1;
          }
          if (uVar25 != (uVar19 | 1)) {
            lVar24 = uVar25 - uVar20;
            lVar22 = (long)param_2 + uVar20 + 1;
            pbVar30 = (byte *)(uVar20 + param_1 + 0xf9);
            do {
              pbVar27 = (byte *)(lVar22 + uVar29);
              lVar22 = lVar22 + 2;
              pbVar30[-1] = pbVar30[-1] ^ pbVar27[-1];
              lVar24 = lVar24 + -2;
              *pbVar30 = *pbVar30 ^ *pbVar27;
              pbVar30 = pbVar30 + 2;
            } while (lVar24 != 0);
          }
        }
      }
    }
LAB_004637ec:
    if ((param_4 == (undefined8 *)0x0) || (param_5 == 0)) goto LAB_00464098;
    uVar25 = param_5;
    if (uVar29 <= param_5) {
      uVar25 = uVar29;
    }
    if (uVar25 != 0) {
      if ((uVar25 < 0x40) ||
         ((param_1 + 0xd8U < (long)param_4 + uVar25 &&
          (param_4 < (undefined8 *)(uVar25 + param_1 + 0xd8))))) {
        uVar29 = 0;
LAB_0046382c:
        uVar19 = uVar29;
        if ((uVar25 & 1) != 0) {
          *(byte *)(param_1 + uVar29 + 0xd8) =
               *(byte *)(param_1 + uVar29 + 0xd8) ^ *(byte *)((long)param_4 + uVar29);
          uVar19 = uVar29 | 1;
        }
        if (uVar25 != (uVar29 | 1)) {
          lVar22 = uVar25 - uVar19;
          pbVar30 = (byte *)(uVar19 + param_1 + 0xd9);
          pbVar27 = (byte *)((long)param_4 + uVar19 + 1);
          do {
            lVar22 = lVar22 + -2;
            pbVar30[-1] = pbVar30[-1] ^ pbVar27[-1];
            *pbVar30 = *pbVar30 ^ *pbVar27;
            pbVar30 = pbVar30 + 2;
            pbVar27 = pbVar27 + 2;
          } while (lVar22 != 0);
        }
      }
      else {
        uVar29 = uVar25 & 0xffffffffffffffc0;
        puVar26 = (undefined8 *)(param_1 + 0x108);
        puVar28 = param_4 + 4;
        uVar19 = uVar29;
        do {
          uVar33 = puVar28[-3];
          uVar31 = puVar28[-4];
          uVar35 = puVar28[-1];
          uVar34 = puVar28[-2];
          uVar19 = uVar19 - 0x40;
          uVar40 = puVar26[-5];
          uVar39 = puVar26[-6];
          uVar42 = puVar26[-3];
          uVar41 = puVar26[-4];
          uVar36 = puVar28[1];
          uVar32 = *puVar28;
          uVar38 = puVar28[3];
          uVar37 = puVar28[2];
          puVar26[-5] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                          (byte)((ulong)uVar33 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                   (byte)((ulong)uVar33 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                            (byte)((ulong)uVar33 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar40 >> 0x18) ^
                                                                     (byte)((ulong)uVar33 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar40
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar40 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar40 ^ (byte)uVar33)))))));
          puVar26[-6] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                          (byte)((ulong)uVar31 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                   (byte)((ulong)uVar31 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                            (byte)((ulong)uVar31 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                                     (byte)((ulong)uVar31 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar39
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar39 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar39 ^ (byte)uVar31)))))));
          puVar26[-3] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                          (byte)((ulong)uVar35 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                   (byte)((ulong)uVar35 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                            (byte)((ulong)uVar35 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar42 >> 0x18) ^
                                                                     (byte)((ulong)uVar35 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar42
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar42 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar42 ^ (byte)uVar35)))))));
          puVar26[-4] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                          (byte)((ulong)uVar34 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                   (byte)((ulong)uVar34 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                            (byte)((ulong)uVar34 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar41 >> 0x18) ^
                                                                     (byte)((ulong)uVar34 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar41
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar41 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar41 ^ (byte)uVar34)))))));
          uVar33 = puVar26[-1];
          uVar31 = puVar26[-2];
          uVar35 = puVar26[1];
          uVar34 = *puVar26;
          puVar26[-1] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                          (byte)((ulong)uVar36 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                   (byte)((ulong)uVar36 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                            (byte)((ulong)uVar36 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                     (byte)((ulong)uVar36 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar33
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar33 >> 8) ^ (byte)((ulong)uVar36 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar36)))))));
          puVar26[-2] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                          (byte)((ulong)uVar32 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                   (byte)((ulong)uVar32 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                            (byte)((ulong)uVar32 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                                     (byte)((ulong)uVar32 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar31
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar32
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar31 >> 8) ^ (byte)((ulong)uVar32 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar32)))))));
          puVar26[1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                         (byte)((ulong)uVar38 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                  (byte)((ulong)uVar38 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                           (byte)((ulong)uVar38 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                                    (byte)((ulong)uVar38 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar35 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar38 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) ^ (byte)((ulong)uVar38 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar38)))))));
          *puVar26 = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                              CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                 (byte)((ulong)uVar37 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                          (byte)((ulong)uVar37 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                                   (byte)((ulong)uVar37 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar34 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar37 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar37)))))));
          puVar26 = puVar26 + 8;
          puVar28 = puVar28 + 8;
        } while (uVar19 != 0);
        if (uVar25 != uVar29) goto LAB_0046382c;
      }
      uVar29 = *(ulong *)(param_1 + 0xd0);
    }
    if (uVar29 < param_5) {
      param_5 = param_5 - uVar29;
      uVar25 = param_5;
      if (0xf < param_5) {
        uVar25 = 0x10;
      }
      if (uVar25 != 0) {
        if ((param_5 < 0x10) ||
           ((param_1 + 0xf8U < (long)param_4 + uVar29 + uVar25 &&
            ((long)param_4 + uVar29 < uVar25 + param_1 + 0xf8)))) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar25 & 0x10;
          uVar20 = (uVar19 - 0x10 >> 4) + 1;
          lVar22 = 0;
          if (uVar19 - 0x10 != 0) {
            lVar24 = -(uVar20 & 0x1ffffffffffffffe);
            do {
              puVar26 = (undefined8 *)(param_1 + 0xf8 + lVar22);
              puVar28 = (undefined8 *)((long)param_4 + uVar29 + lVar22);
              uVar33 = puVar28[1];
              uVar31 = *puVar28;
              uVar35 = puVar26[1];
              uVar34 = *puVar26;
              uVar36 = puVar26[3];
              uVar32 = puVar26[2];
              lVar22 = lVar22 + 0x20;
              lVar24 = lVar24 + 2;
              puVar26[1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                             (byte)((ulong)uVar33 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                      (byte)((ulong)uVar33 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                               (byte)((ulong)uVar33 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar35 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar33 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                           (byte)((ulong)uVar33 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar35 >> 8) ^
                                                                    (byte)((ulong)uVar33 >> 8),
                                                                    (byte)uVar35 ^ (byte)uVar33)))))
                                            ));
              *puVar26 = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                           (byte)((ulong)uVar31 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                    (byte)((ulong)uVar31 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                             (byte)((ulong)uVar31 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar34 >> 0x18)
                                                                      ^ (byte)((ulong)uVar31 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar34
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar31
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar34 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar31)))))));
              uVar33 = puVar28[3];
              uVar31 = puVar28[2];
              puVar26[3] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                             (byte)((ulong)uVar33 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                      (byte)((ulong)uVar33 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                               (byte)((ulong)uVar33 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar36 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar33 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                           (byte)((ulong)uVar33 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                                    (byte)((ulong)uVar33 >> 8),
                                                                    (byte)uVar36 ^ (byte)uVar33)))))
                                            ));
              puVar26[2] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                             (byte)((ulong)uVar31 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                      (byte)((ulong)uVar31 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                               (byte)((ulong)uVar31 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar32 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar31 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                           (byte)((ulong)uVar31 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                    (byte)((ulong)uVar31 >> 8),
                                                                    (byte)uVar32 ^ (byte)uVar31)))))
                                            ));
            } while (lVar24 != 0);
          }
          if ((uVar20 & 1) != 0) {
            puVar26 = (undefined8 *)((long)param_4 + lVar22 + uVar29);
            uVar33 = puVar26[1];
            uVar31 = *puVar26;
            lVar22 = param_1 + lVar22;
            uVar35 = *(undefined8 *)(lVar22 + 0x100);
            uVar34 = *(undefined8 *)(lVar22 + 0xf8);
            *(ulong *)(lVar22 + 0x100) =
                 CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                          CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                            (byte)((ulong)uVar33 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                     (byte)((ulong)uVar33 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                              (byte)((ulong)uVar33 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar35 >> 0x10)
                                                                       ^ (byte)((ulong)uVar33 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar35
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar33
                                                                                      >> 8),
                                                                                (byte)uVar35 ^
                                                                                (byte)uVar33)))))));
            *(ulong *)(lVar22 + 0xf8) =
                 CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                          CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                            (byte)((ulong)uVar31 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                     (byte)((ulong)uVar31 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                              (byte)((ulong)uVar31 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar34 >> 0x10)
                                                                       ^ (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar34
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar31
                                                                                      >> 8),
                                                                                (byte)uVar34 ^
                                                                                (byte)uVar31)))))));
          }
          if (uVar25 == uVar19) goto LAB_00464098;
        }
        uVar20 = uVar19;
        if ((uVar25 & 1) != 0) {
          *(byte *)(param_1 + uVar19 + 0xf8) =
               *(byte *)(param_1 + uVar19 + 0xf8) ^ *(byte *)((long)param_4 + uVar19 + uVar29);
          uVar20 = uVar19 | 1;
        }
        if (uVar25 != (uVar19 | 1)) {
          lVar22 = uVar25 - uVar20;
          pbVar30 = (byte *)(uVar20 + param_1 + 0xf9);
          pbVar27 = (byte *)((long)param_4 + uVar20 + uVar29 + 1);
          do {
            lVar22 = lVar22 + -2;
            pbVar30[-1] = pbVar30[-1] ^ pbVar27[-1];
            *pbVar30 = *pbVar30 ^ *pbVar27;
            pbVar30 = pbVar30 + 2;
            pbVar27 = pbVar27 + 2;
          } while (lVar22 != 0);
        }
      }
    }
    goto LAB_00464098;
  }
  if (((param_4 != (undefined8 *)0x0) || (param_2 != (undefined8 *)0x0)) ||
     (param_6 != (undefined8 *)0x0)) {
    uVar23 = 0x20;
    if (uVar29 != 0x10) {
      uVar23 = 0x30;
    }
    uVar25 = (ulong)uVar23;
    local_a4 = 0x10;
    bStack_88 = 0;
    uStack_87 = 0;
    local_90 = 0;
    uStack_8f = 0;
    uStack_8c = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_7f = 0;
    uStack_7c = 0;
    lVar22 = param_1 + 0x120;
    bStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_9f = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    bStack_8d = 1;
    bStack_7d = 2;
    local_64 = 0x10;
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x129) = *(undefined8 *)(param_1 + 0x129);
    *(undefined8 *)(param_1 + 0x121) = *(undefined8 *)(param_1 + 0x121);
    if (uVar29 != 0x10) {
      *(undefined8 *)(param_1 + 0x139) = *(undefined8 *)(param_1 + 0x139);
      *(ulong *)(param_1 + 0x131) = *(ulong *)(param_1 + 0x131) ^ 0x10000;
    }
    *(byte *)(lVar22 + (uVar25 - 0xf)) = *(byte *)(lVar22 + (uVar25 - 0xf)) ^ abStack_af[uVar25];
    *(byte *)(lVar22 + (uVar25 - 0xe)) = *(byte *)(lVar22 + (uVar25 - 0xe)) ^ abStack_af[uVar25 + 1]
    ;
    *(byte *)(lVar22 + (uVar25 - 0xd)) = *(byte *)(lVar22 + (uVar25 - 0xd)) ^ abStack_af[uVar25 + 2]
    ;
    *(byte *)(lVar22 + (uVar25 - 0xc)) = *(byte *)(lVar22 + (uVar25 - 0xc)) ^ abStack_af[uVar25 + 3]
    ;
    *(byte *)(lVar22 + (uVar25 - 0xb)) = *(byte *)(lVar22 + (uVar25 - 0xb)) ^ abStack_af[uVar25 + 4]
    ;
    *(byte *)(lVar22 + (uVar25 - 10)) = *(byte *)(lVar22 + (uVar25 - 10)) ^ abStack_af[uVar25 + 5];
    *(byte *)(lVar22 + (uVar25 - 9)) = *(byte *)(lVar22 + (uVar25 - 9)) ^ abStack_af[uVar25 + 6];
    *(byte *)(lVar22 + (uVar25 - 8)) = *(byte *)(lVar22 + (uVar25 - 8)) ^ abStack_af[uVar25 + 7];
    *(byte *)(lVar22 + (uVar25 - 7)) = *(byte *)(lVar22 + (uVar25 - 7)) ^ abStack_af[uVar25 + 8];
    *(byte *)(lVar22 + (uVar25 - 6)) = *(byte *)(lVar22 + (uVar25 - 6)) ^ abStack_af[uVar25 + 9];
    *(byte *)(lVar22 + (uVar25 - 5)) = *(byte *)(lVar22 + (uVar25 - 5)) ^ abStack_af[uVar25 + 10];
    *(byte *)(lVar22 + (uVar25 - 4)) = *(byte *)(lVar22 + (uVar25 - 4)) ^ abStack_af[uVar25 + 0xb];
    *(byte *)(lVar22 + (uVar25 - 3)) = *(byte *)(lVar22 + (uVar25 - 3)) ^ abStack_af[uVar25 + 0xc];
    *(byte *)(lVar22 + (uVar25 - 2)) = *(byte *)(lVar22 + (uVar25 - 2)) ^ abStack_af[uVar25 + 0xd];
    *(byte *)(lVar22 + (uVar25 - 1)) = *(byte *)(lVar22 + (uVar25 - 1)) ^ abStack_af[uVar25 + 0xe];
    iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar25);
    if (iVar18 == 0) {
      return 0;
    }
    if (local_64 != uVar23) {
      return 0;
    }
    uVar29 = 0;
    if (param_2 != (undefined8 *)0x0) {
      uVar29 = param_3;
    }
    uVar25 = 0;
    if (param_6 != (undefined8 *)0x0) {
      uVar25 = param_7;
    }
    puVar26 = (undefined8 *)(param_1 + 0x108);
    *(undefined2 *)(param_1 + 0x10c) = 0;
    *(undefined1 *)(param_1 + 0x10e) = 0;
    uVar19 = 0;
    if (param_4 != (undefined8 *)0x0) {
      uVar19 = param_5;
    }
    lVar24 = uVar19 + uVar29 + uVar25;
    *(char *)(param_1 + 0x108) = (char)((ulong)lVar24 >> 0x18);
    *(char *)(param_1 + 0x10b) = (char)lVar24;
    *(char *)(param_1 + 0x10a) = (char)((ulong)lVar24 >> 8);
    lVar21 = *(long *)(param_1 + 0xd0);
    *(char *)(param_1 + 0x109) = (char)((ulong)lVar24 >> 0x10);
    *(char *)(param_1 + 0x10f) = (char)lVar21 + '\x10';
    *(undefined8 *)(param_1 + 0x118) = 8;
    if ((param_2 != (undefined8 *)0x0) && (uVar29 != 0)) {
      uVar20 = uVar29 - 8;
      if (uVar29 < 8) {
        lVar24 = 8;
      }
      else {
        *(undefined8 *)(param_1 + 0x110) = *param_2;
        uVar35 = *(undefined8 *)(param_1 + 0x110);
        uVar34 = *puVar26;
        uVar33 = *(undefined8 *)(param_1 + 0x110);
        uVar31 = *puVar26;
        bStack_98 = (byte)uVar35;
        uStack_97 = (undefined7)((ulong)uVar35 >> 8);
        local_a0 = (byte)uVar34;
        uStack_9f = (undefined7)((ulong)uVar34 >> 8);
        bStack_88 = (byte)uVar33;
        uStack_87 = (undefined7)((ulong)uVar33 >> 8);
        local_90 = (byte)uVar31;
        uStack_8f = (undefined2)((ulong)uVar31 >> 8);
        bStack_8d = (byte)((ulong)uVar31 >> 0x18);
        uStack_8c = (undefined4)((ulong)uVar31 >> 0x20);
        if (lVar21 != 0x10) {
          uStack_78 = *(undefined8 *)(param_1 + 0x110);
          uVar32 = *puVar26;
          uVar23 = 0x30;
          local_80 = (byte)uVar32;
          uStack_7f = (undefined2)((ulong)uVar32 >> 8);
          bStack_7d = (byte)((ulong)uVar32 >> 0x18);
          uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
        }
        else {
          uVar23 = 0x20;
        }
        local_64 = 0x10;
        uVar36 = *(undefined8 *)(param_1 + 0x128);
        uVar32 = *(undefined8 *)(param_1 + 0x120);
        uVar38 = *(undefined8 *)(param_1 + 0x138);
        uVar37 = *(undefined8 *)(param_1 + 0x130);
        *(ulong *)(param_1 + 0x128) =
             CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar36 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar36 ^
                                                                                     bStack_98))))))
                     );
        *(ulong *)(param_1 + 0x120) =
             CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                        (byte)((ulong)uVar34 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                 (byte)((ulong)uVar34 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                          (byte)((ulong)uVar34 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                   (byte)((ulong)uVar34 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar32 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  8),(byte)uVar32 ^
                                                                                     local_a0)))))))
        ;
        *(ulong *)(param_1 + 0x138) =
             CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                               CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                        (byte)((ulong)uVar33 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                 (byte)((ulong)uVar33 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                          (byte)((ulong)uVar33 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                   (byte)((ulong)uVar33 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar38 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  8),(byte)uVar38 ^
                                                                                     bStack_88))))))
                     );
        *(ulong *)(param_1 + 0x130) =
             CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                      CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                               CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                        (byte)((ulong)uVar31 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                 (byte)((ulong)uVar31 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bStack_8d,
                                                          CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                   (byte)((ulong)uVar31 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar37 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar31 >>
                                                                                  8),(byte)uVar37 ^
                                                                                     local_90)))))))
        ;
        if (lVar21 != 0x10) {
          uVar33 = *(undefined8 *)(param_1 + 0x148);
          uVar31 = *(undefined8 *)(param_1 + 0x140);
          *(ulong *)(param_1 + 0x148) =
               CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                        CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                          (byte)((ulong)uStack_78 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                   (byte)((ulong)uStack_78 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                            (byte)((ulong)uStack_78 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                     (byte)((ulong)uStack_78 >> 0x10
                                                                           ),CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uStack_78 >> 8),
                                                  (byte)uVar33 ^ (byte)uStack_78)))))));
          *(ulong *)(param_1 + 0x140) =
               CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                        CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                 CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                          (byte)((uint)uStack_7c >> 8),
                                          CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c,
                                                   CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                            bStack_7d,
                                                            CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ushort)uStack_7f >> 8),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)uStack_7f,
                                                                              (byte)uVar31 ^
                                                                              local_80)))))));
        }
        iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
        if (iVar18 == 0) {
          return 0;
        }
        if (local_64 != uVar23) {
          return 0;
        }
        param_2 = param_2 + 1;
        *(undefined8 *)(param_1 + 0x118) = 0;
        uVar29 = uVar20;
        if (0xf < uVar20) {
          do {
            uVar34 = param_2[1];
            uVar31 = *param_2;
            bStack_98 = (byte)uVar34;
            uStack_97 = (undefined7)((ulong)uVar34 >> 8);
            local_a0 = (byte)uVar31;
            uStack_9f = (undefined7)((ulong)uVar31 >> 8);
            uVar35 = param_2[1];
            uVar33 = *param_2;
            bStack_88 = (byte)uVar35;
            uStack_87 = (undefined7)((ulong)uVar35 >> 8);
            local_90 = (byte)uVar33;
            uStack_8f = (undefined2)((ulong)uVar33 >> 8);
            bStack_8d = (byte)((ulong)uVar33 >> 0x18);
            uStack_8c = (undefined4)((ulong)uVar33 >> 0x20);
            bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
            if (bVar16) {
              uStack_78 = param_2[1];
              uVar32 = *param_2;
              uVar23 = 0x30;
              local_80 = (byte)uVar32;
              uStack_7f = (undefined2)((ulong)uVar32 >> 8);
              bStack_7d = (byte)((ulong)uVar32 >> 0x18);
              uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
            }
            else {
              uVar23 = 0x20;
            }
            local_64 = 0x10;
            uVar36 = *(undefined8 *)(param_1 + 0x128);
            uVar32 = *(undefined8 *)(param_1 + 0x120);
            uVar38 = *(undefined8 *)(param_1 + 0x138);
            uVar37 = *(undefined8 *)(param_1 + 0x130);
            *(ulong *)(param_1 + 0x128) =
                 CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                          CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                            (byte)((ulong)uVar34 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                     (byte)((ulong)uVar34 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                              (byte)((ulong)uVar34 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar36 >> 0x10)
                                                                       ^ (byte)((ulong)uVar34 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar36
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar34
                                                                                      >> 8),
                                                                                (byte)uVar36 ^
                                                                                bStack_98)))))));
            *(ulong *)(param_1 + 0x120) =
                 CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                          CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                            (byte)((ulong)uVar31 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                     (byte)((ulong)uVar31 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                              (byte)((ulong)uVar31 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar32 >> 0x10)
                                                                       ^ (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar32
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar31
                                                                                      >> 8),
                                                                                (byte)uVar32 ^
                                                                                local_a0)))))));
            *(ulong *)(param_1 + 0x138) =
                 CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                          CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                            (byte)((ulong)uVar35 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                     (byte)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                              (byte)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar38 >> 0x10)
                                                                       ^ (byte)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar38
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar35
                                                                                      >> 8),
                                                                                (byte)uVar38 ^
                                                                                bStack_88)))))));
            *(ulong *)(param_1 + 0x130) =
                 CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                          CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                            (byte)((ulong)uVar33 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                     (byte)((ulong)uVar33 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                              bStack_8d,
                                                              CONCAT12((byte)((ulong)uVar37 >> 0x10)
                                                                       ^ (byte)((ulong)uVar33 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar37
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar33
                                                                                      >> 8),
                                                                                (byte)uVar37 ^
                                                                                local_90)))))));
            if (bVar16) {
              uVar33 = *(undefined8 *)(param_1 + 0x148);
              uVar31 = *(undefined8 *)(param_1 + 0x140);
              *(ulong *)(param_1 + 0x148) =
                   CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                            CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                     (byte)((ulong)uStack_78 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                              (byte)((ulong)uStack_78 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                       (byte)((ulong)uStack_78 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                (byte)((ulong)uStack_78 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar33 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uStack_78 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uStack_78 >> 8),
                                                  (byte)uVar33 ^ (byte)uStack_78)))))));
              *(ulong *)(param_1 + 0x140) =
                   CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                            CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10)
                                     ,CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                               (byte)((uint)uStack_7c >> 8),
                                               CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                        (byte)uStack_7c,
                                                        CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                                 bStack_7d,
                                                                 CONCAT12((byte)((ulong)uVar31 >>
                                                                                0x10) ^
                                                                          (byte)((ushort)uStack_7f
                                                                                >> 8),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) ^ (byte)uStack_7f,
                                                  (byte)uVar31 ^ local_80)))))));
            }
            iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
            if (iVar18 == 0) {
              return 0;
            }
            if (local_64 != uVar23) {
              return 0;
            }
            uVar29 = uVar29 - 0x10;
            param_2 = param_2 + 2;
          } while (0xf < uVar29);
        }
        if (uVar29 == 0) goto LAB_004634e0;
        lVar24 = *(long *)(param_1 + 0x118);
      }
      memcpy((void *)(param_1 + lVar24 + 0x108),param_2,uVar29);
      *(ulong *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + uVar29;
    }
LAB_004634e0:
    if ((param_6 != (undefined8 *)0x0) && (uVar25 != 0)) {
      lVar24 = *(long *)(param_1 + 0x118);
      if (lVar24 != 0) {
        uVar29 = 0x10 - lVar24;
        if (uVar29 <= uVar25) {
          memcpy((void *)(param_1 + lVar24 + 0x108),param_6,uVar29);
          uVar35 = *(undefined8 *)(param_1 + 0x110);
          uVar34 = *puVar26;
          uVar33 = *(undefined8 *)(param_1 + 0x110);
          uVar31 = *puVar26;
          bStack_98 = (byte)uVar35;
          uStack_97 = (undefined7)((ulong)uVar35 >> 8);
          local_a0 = (byte)uVar34;
          uStack_9f = (undefined7)((ulong)uVar34 >> 8);
          bStack_88 = (byte)uVar33;
          uStack_87 = (undefined7)((ulong)uVar33 >> 8);
          local_90 = (byte)uVar31;
          uStack_8f = (undefined2)((ulong)uVar31 >> 8);
          bStack_8d = (byte)((ulong)uVar31 >> 0x18);
          uStack_8c = (undefined4)((ulong)uVar31 >> 0x20);
          bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
          if (bVar16) {
            uStack_78 = *(undefined8 *)(param_1 + 0x110);
            uVar32 = *puVar26;
            uVar23 = 0x30;
            local_80 = (byte)uVar32;
            uStack_7f = (undefined2)((ulong)uVar32 >> 8);
            bStack_7d = (byte)((ulong)uVar32 >> 0x18);
            uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
          }
          else {
            uVar23 = 0x20;
          }
          local_64 = 0x10;
          uVar36 = *(undefined8 *)(param_1 + 0x128);
          uVar32 = *(undefined8 *)(param_1 + 0x120);
          uVar38 = *(undefined8 *)(param_1 + 0x138);
          uVar37 = *(undefined8 *)(param_1 + 0x130);
          *(ulong *)(param_1 + 0x128) =
               CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                        CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                          (byte)((ulong)uVar35 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                   (byte)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                            (byte)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                     (byte)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar36
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 8),
                                                                              (byte)uVar36 ^
                                                                              bStack_98)))))));
          *(ulong *)(param_1 + 0x120) =
               CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                        CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                          (byte)((ulong)uVar34 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                   (byte)((ulong)uVar34 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                            (byte)((ulong)uVar34 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                     (byte)((ulong)uVar34 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar32
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 8),
                                                                              (byte)uVar32 ^
                                                                              local_a0)))))));
          *(ulong *)(param_1 + 0x138) =
               CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                        CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                          (byte)((ulong)uVar33 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                   (byte)((ulong)uVar33 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                            (byte)((ulong)uVar33 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                     (byte)((ulong)uVar33 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar38
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 8),
                                                                              (byte)uVar38 ^
                                                                              bStack_88)))))));
          *(ulong *)(param_1 + 0x130) =
               CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                        CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                          (byte)((ulong)uVar31 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                   (byte)((ulong)uVar31 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                            bStack_8d,
                                                            CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                     (byte)((ulong)uVar31 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar37
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 8),
                                                                              (byte)uVar37 ^
                                                                              local_90)))))));
          if (bVar16) {
            uVar33 = *(undefined8 *)(param_1 + 0x148);
            uVar31 = *(undefined8 *)(param_1 + 0x140);
            *(ulong *)(param_1 + 0x148) =
                 CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                          CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                            (byte)((ulong)uStack_78 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                     (byte)((ulong)uStack_78 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                              (byte)((ulong)uStack_78 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar33 >> 0x10)
                                                                       ^ (byte)((ulong)uStack_78 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar33
                                                                                      >> 8) ^
                                                                                (byte)((ulong)
                                                  uStack_78 >> 8),(byte)uVar33 ^ (byte)uStack_78))))
                                           )));
            *(ulong *)(param_1 + 0x140) =
                 CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                          CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                            (byte)((uint)uStack_7c >> 8),
                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c
                                                     ,CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                               bStack_7d,
                                                               CONCAT12((byte)((ulong)uVar31 >> 0x10
                                                                              ) ^ (byte)((ushort)
                                                  uStack_7f >> 8),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)uStack_7f,(byte)uVar31 ^ local_80))
                                                  )))));
          }
          iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
          if (iVar18 == 0) {
            return 0;
          }
          if (local_64 != uVar23) {
            return 0;
          }
          param_6 = (undefined8 *)((long)param_6 + uVar29);
          *(undefined8 *)(param_1 + 0x118) = 0;
          uVar25 = uVar25 - uVar29;
        }
      }
      for (; 0xf < uVar25; uVar25 = uVar25 - 0x10) {
        uVar34 = param_6[1];
        uVar31 = *param_6;
        bStack_98 = (byte)uVar34;
        uStack_97 = (undefined7)((ulong)uVar34 >> 8);
        local_a0 = (byte)uVar31;
        uStack_9f = (undefined7)((ulong)uVar31 >> 8);
        uVar35 = param_6[1];
        uVar33 = *param_6;
        bStack_88 = (byte)uVar35;
        uStack_87 = (undefined7)((ulong)uVar35 >> 8);
        local_90 = (byte)uVar33;
        uStack_8f = (undefined2)((ulong)uVar33 >> 8);
        bStack_8d = (byte)((ulong)uVar33 >> 0x18);
        uStack_8c = (undefined4)((ulong)uVar33 >> 0x20);
        bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
        if (bVar16) {
          uStack_78 = param_6[1];
          uVar32 = *param_6;
          uVar23 = 0x30;
          local_80 = (byte)uVar32;
          uStack_7f = (undefined2)((ulong)uVar32 >> 8);
          bStack_7d = (byte)((ulong)uVar32 >> 0x18);
          uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
        }
        else {
          uVar23 = 0x20;
        }
        local_64 = 0x10;
        uVar36 = *(undefined8 *)(param_1 + 0x128);
        uVar32 = *(undefined8 *)(param_1 + 0x120);
        uVar38 = *(undefined8 *)(param_1 + 0x138);
        uVar37 = *(undefined8 *)(param_1 + 0x130);
        *(ulong *)(param_1 + 0x128) =
             CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                      CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                               CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                        (byte)((ulong)uVar34 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                 (byte)((ulong)uVar34 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                          (byte)((ulong)uVar34 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                   (byte)((ulong)uVar34 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar36 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  8),(byte)uVar36 ^
                                                                                     bStack_98))))))
                     );
        *(ulong *)(param_1 + 0x120) =
             CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                        (byte)((ulong)uVar31 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                 (byte)((ulong)uVar31 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                          (byte)((ulong)uVar31 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                   (byte)((ulong)uVar31 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar32 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar31 >>
                                                                                  8),(byte)uVar32 ^
                                                                                     local_a0)))))))
        ;
        *(ulong *)(param_1 + 0x138) =
             CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar38 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar38 ^
                                                                                     bStack_88))))))
                     );
        *(ulong *)(param_1 + 0x130) =
             CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                      CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                               CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                        (byte)((ulong)uVar33 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                 (byte)((ulong)uVar33 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bStack_8d,
                                                          CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                   (byte)((ulong)uVar33 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar37 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  8),(byte)uVar37 ^
                                                                                     local_90)))))))
        ;
        if (bVar16) {
          uVar33 = *(undefined8 *)(param_1 + 0x148);
          uVar31 = *(undefined8 *)(param_1 + 0x140);
          *(ulong *)(param_1 + 0x148) =
               CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                        CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                          (byte)((ulong)uStack_78 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                   (byte)((ulong)uStack_78 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                            (byte)((ulong)uStack_78 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                     (byte)((ulong)uStack_78 >> 0x10
                                                                           ),CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uStack_78 >> 8),
                                                  (byte)uVar33 ^ (byte)uStack_78)))))));
          *(ulong *)(param_1 + 0x140) =
               CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                        CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                 CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                          (byte)((uint)uStack_7c >> 8),
                                          CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c,
                                                   CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                            bStack_7d,
                                                            CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ushort)uStack_7f >> 8),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)uStack_7f,
                                                                              (byte)uVar31 ^
                                                                              local_80)))))));
        }
        iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
        if (iVar18 == 0) {
          return 0;
        }
        if (local_64 != uVar23) {
          return 0;
        }
        param_6 = param_6 + 2;
      }
      if (uVar25 != 0) {
        memcpy((void *)(param_1 + *(long *)(param_1 + 0x118) + 0x108),param_6,uVar25);
        *(ulong *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + uVar25;
      }
    }
    if ((param_4 == (undefined8 *)0x0) || (uVar19 == 0)) {
LAB_00463ea8:
      lVar24 = *(long *)(param_1 + 0x118);
    }
    else {
      lVar24 = *(long *)(param_1 + 0x118);
      if (lVar24 != 0) {
        uVar29 = 0x10 - lVar24;
        if (uVar29 <= uVar19) {
          memcpy((void *)(param_1 + lVar24 + 0x108),param_4,uVar29);
          uVar35 = *(undefined8 *)(param_1 + 0x110);
          uVar34 = *puVar26;
          uVar33 = *(undefined8 *)(param_1 + 0x110);
          uVar31 = *puVar26;
          bStack_98 = (byte)uVar35;
          uStack_97 = (undefined7)((ulong)uVar35 >> 8);
          local_a0 = (byte)uVar34;
          uStack_9f = (undefined7)((ulong)uVar34 >> 8);
          bStack_88 = (byte)uVar33;
          uStack_87 = (undefined7)((ulong)uVar33 >> 8);
          local_90 = (byte)uVar31;
          uStack_8f = (undefined2)((ulong)uVar31 >> 8);
          bStack_8d = (byte)((ulong)uVar31 >> 0x18);
          uStack_8c = (undefined4)((ulong)uVar31 >> 0x20);
          bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
          if (bVar16) {
            uStack_78 = *(undefined8 *)(param_1 + 0x110);
            uVar32 = *puVar26;
            uVar23 = 0x30;
            local_80 = (byte)uVar32;
            uStack_7f = (undefined2)((ulong)uVar32 >> 8);
            bStack_7d = (byte)((ulong)uVar32 >> 0x18);
            uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
          }
          else {
            uVar23 = 0x20;
          }
          local_64 = 0x10;
          uVar36 = *(undefined8 *)(param_1 + 0x128);
          uVar32 = *(undefined8 *)(param_1 + 0x120);
          uVar38 = *(undefined8 *)(param_1 + 0x138);
          uVar37 = *(undefined8 *)(param_1 + 0x130);
          *(ulong *)(param_1 + 0x128) =
               CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                        CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                          (byte)((ulong)uVar35 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                   (byte)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                            (byte)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                     (byte)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar36
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 8),
                                                                              (byte)uVar36 ^
                                                                              bStack_98)))))));
          *(ulong *)(param_1 + 0x120) =
               CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                        CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                          (byte)((ulong)uVar34 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                   (byte)((ulong)uVar34 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                            (byte)((ulong)uVar34 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                     (byte)((ulong)uVar34 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar32
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 8),
                                                                              (byte)uVar32 ^
                                                                              local_a0)))))));
          *(ulong *)(param_1 + 0x138) =
               CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                        CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                          (byte)((ulong)uVar33 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                   (byte)((ulong)uVar33 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                            (byte)((ulong)uVar33 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                     (byte)((ulong)uVar33 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar38
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 8),
                                                                              (byte)uVar38 ^
                                                                              bStack_88)))))));
          *(ulong *)(param_1 + 0x130) =
               CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                        CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                          (byte)((ulong)uVar31 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                   (byte)((ulong)uVar31 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                            bStack_8d,
                                                            CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                     (byte)((ulong)uVar31 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar37
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 8),
                                                                              (byte)uVar37 ^
                                                                              local_90)))))));
          if (bVar16) {
            uVar33 = *(undefined8 *)(param_1 + 0x148);
            uVar31 = *(undefined8 *)(param_1 + 0x140);
            *(ulong *)(param_1 + 0x148) =
                 CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                          CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                            (byte)((ulong)uStack_78 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                     (byte)((ulong)uStack_78 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                              (byte)((ulong)uStack_78 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar33 >> 0x10)
                                                                       ^ (byte)((ulong)uStack_78 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar33
                                                                                      >> 8) ^
                                                                                (byte)((ulong)
                                                  uStack_78 >> 8),(byte)uVar33 ^ (byte)uStack_78))))
                                           )));
            *(ulong *)(param_1 + 0x140) =
                 CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                          CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                            (byte)((uint)uStack_7c >> 8),
                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c
                                                     ,CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                               bStack_7d,
                                                               CONCAT12((byte)((ulong)uVar31 >> 0x10
                                                                              ) ^ (byte)((ushort)
                                                  uStack_7f >> 8),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)uStack_7f,(byte)uVar31 ^ local_80))
                                                  )))));
          }
          iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
          if (iVar18 == 0) {
            return 0;
          }
          if (local_64 != uVar23) {
            return 0;
          }
          param_4 = (undefined8 *)((long)param_4 + uVar29);
          *(undefined8 *)(param_1 + 0x118) = 0;
          uVar19 = uVar19 - uVar29;
        }
      }
      for (; 0xf < uVar19; uVar19 = uVar19 - 0x10) {
        uVar34 = param_4[1];
        uVar31 = *param_4;
        bStack_98 = (byte)uVar34;
        uStack_97 = (undefined7)((ulong)uVar34 >> 8);
        local_a0 = (byte)uVar31;
        uStack_9f = (undefined7)((ulong)uVar31 >> 8);
        uVar35 = param_4[1];
        uVar33 = *param_4;
        bStack_88 = (byte)uVar35;
        uStack_87 = (undefined7)((ulong)uVar35 >> 8);
        local_90 = (byte)uVar33;
        uStack_8f = (undefined2)((ulong)uVar33 >> 8);
        bStack_8d = (byte)((ulong)uVar33 >> 0x18);
        uStack_8c = (undefined4)((ulong)uVar33 >> 0x20);
        bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
        if (bVar16) {
          uStack_78 = param_4[1];
          uVar32 = *param_4;
          uVar23 = 0x30;
          local_80 = (byte)uVar32;
          uStack_7f = (undefined2)((ulong)uVar32 >> 8);
          bStack_7d = (byte)((ulong)uVar32 >> 0x18);
          uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
        }
        else {
          uVar23 = 0x20;
        }
        local_64 = 0x10;
        uVar36 = *(undefined8 *)(param_1 + 0x128);
        uVar32 = *(undefined8 *)(param_1 + 0x120);
        uVar38 = *(undefined8 *)(param_1 + 0x138);
        uVar37 = *(undefined8 *)(param_1 + 0x130);
        *(ulong *)(param_1 + 0x128) =
             CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                      CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                               CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                        (byte)((ulong)uVar34 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                 (byte)((ulong)uVar34 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                          (byte)((ulong)uVar34 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                   (byte)((ulong)uVar34 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar36 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  8),(byte)uVar36 ^
                                                                                     bStack_98))))))
                     );
        *(ulong *)(param_1 + 0x120) =
             CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                        (byte)((ulong)uVar31 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                 (byte)((ulong)uVar31 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                          (byte)((ulong)uVar31 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                   (byte)((ulong)uVar31 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar32 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar31 >>
                                                                                  8),(byte)uVar32 ^
                                                                                     local_a0)))))))
        ;
        *(ulong *)(param_1 + 0x138) =
             CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar38 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar38 ^
                                                                                     bStack_88))))))
                     );
        *(ulong *)(param_1 + 0x130) =
             CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                      CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                               CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                        (byte)((ulong)uVar33 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                 (byte)((ulong)uVar33 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bStack_8d,
                                                          CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                   (byte)((ulong)uVar33 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar37 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  8),(byte)uVar37 ^
                                                                                     local_90)))))))
        ;
        if (bVar16) {
          uVar33 = *(undefined8 *)(param_1 + 0x148);
          uVar31 = *(undefined8 *)(param_1 + 0x140);
          *(ulong *)(param_1 + 0x148) =
               CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                        CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                          (byte)((ulong)uStack_78 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                   (byte)((ulong)uStack_78 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                            (byte)((ulong)uStack_78 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                     (byte)((ulong)uStack_78 >> 0x10
                                                                           ),CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uStack_78 >> 8),
                                                  (byte)uVar33 ^ (byte)uStack_78)))))));
          *(ulong *)(param_1 + 0x140) =
               CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                        CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                 CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                          (byte)((uint)uStack_7c >> 8),
                                          CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c,
                                                   CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                            bStack_7d,
                                                            CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ushort)uStack_7f >> 8),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)uStack_7f,
                                                                              (byte)uVar31 ^
                                                                              local_80)))))));
        }
        iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
        if (iVar18 == 0) {
          return 0;
        }
        if (local_64 != uVar23) {
          return 0;
        }
        param_4 = param_4 + 2;
      }
      if (uVar19 == 0) goto LAB_00463ea8;
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x118) + 0x108),param_4,uVar19);
      lVar24 = *(long *)(param_1 + 0x118) + uVar19;
      *(long *)(param_1 + 0x118) = lVar24;
    }
    if (lVar24 == 0) {
LAB_00463ec0:
      __n = 1;
      pbVar30 = &DAT_03cffd71;
LAB_00463ecc:
      memcpy((void *)(param_1 + lVar24 + 0x108),pbVar30,__n);
      lVar24 = *(long *)(param_1 + 0x118) + __n;
      *(long *)(param_1 + 0x118) = lVar24;
    }
    else {
      uVar29 = -lVar24 + 0x10;
      if (1 < uVar29) goto LAB_00463ec0;
      memcpy((void *)(param_1 + lVar24 + 0x108),&DAT_03cffd71,uVar29);
      uVar35 = *(undefined8 *)(param_1 + 0x110);
      uVar34 = *puVar26;
      uVar33 = *(undefined8 *)(param_1 + 0x110);
      uVar31 = *puVar26;
      bStack_98 = (byte)uVar35;
      uStack_97 = (undefined7)((ulong)uVar35 >> 8);
      local_a0 = (byte)uVar34;
      uStack_9f = (undefined7)((ulong)uVar34 >> 8);
      bStack_88 = (byte)uVar33;
      uStack_87 = (undefined7)((ulong)uVar33 >> 8);
      local_90 = (byte)uVar31;
      uStack_8f = (undefined2)((ulong)uVar31 >> 8);
      bStack_8d = (byte)((ulong)uVar31 >> 0x18);
      uStack_8c = (undefined4)((ulong)uVar31 >> 0x20);
      bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
      if (bVar16) {
        uStack_78 = *(undefined8 *)(param_1 + 0x110);
        uVar32 = *puVar26;
        uVar23 = 0x30;
        local_80 = (byte)uVar32;
        uStack_7f = (undefined2)((ulong)uVar32 >> 8);
        bStack_7d = (byte)((ulong)uVar32 >> 0x18);
        uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
      }
      else {
        uVar23 = 0x20;
      }
      local_64 = 0x10;
      uVar36 = *(undefined8 *)(param_1 + 0x128);
      uVar32 = *(undefined8 *)(param_1 + 0x120);
      uVar38 = *(undefined8 *)(param_1 + 0x138);
      uVar37 = *(undefined8 *)(param_1 + 0x130);
      *(ulong *)(param_1 + 0x128) =
           CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                    CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                             CONCAT15((byte)((ulong)uVar36 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                               (byte)((ulong)uVar35 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                        (byte)((ulong)uVar35 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                 (byte)((ulong)uVar35 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar36 >> 8)
                                                                          ^ (byte)((ulong)uVar35 >>
                                                                                  8),
                                                                          (byte)uVar36 ^ bStack_98))
                                                       )))));
      *(ulong *)(param_1 + 0x120) =
           CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ (byte)((ulong)uVar34 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                               (byte)((ulong)uVar34 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                        (byte)((ulong)uVar34 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                 (byte)((ulong)uVar34 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar32 >> 8)
                                                                          ^ (byte)((ulong)uVar34 >>
                                                                                  8),
                                                                          (byte)uVar32 ^ local_a0)))
                                              ))));
      *(ulong *)(param_1 + 0x138) =
           CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                    CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                             CONCAT15((byte)((ulong)uVar38 >> 0x28) ^ (byte)((ulong)uVar33 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                               (byte)((ulong)uVar33 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                        (byte)((ulong)uVar33 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                 (byte)((ulong)uVar33 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar38 >> 8)
                                                                          ^ (byte)((ulong)uVar33 >>
                                                                                  8),
                                                                          (byte)uVar38 ^ bStack_88))
                                                       )))));
      *(ulong *)(param_1 + 0x130) =
           CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                    CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                             CONCAT15((byte)((ulong)uVar37 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                               (byte)((ulong)uVar31 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bStack_8d,
                                                        CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                 (byte)((ulong)uVar31 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar37 >> 8)
                                                                          ^ (byte)((ulong)uVar31 >>
                                                                                  8),
                                                                          (byte)uVar37 ^ local_90)))
                                              ))));
      if (bVar16) {
        uVar33 = *(undefined8 *)(param_1 + 0x148);
        uVar31 = *(undefined8 *)(param_1 + 0x140);
        *(ulong *)(param_1 + 0x148) =
             CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                      CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                               CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                        (byte)((ulong)uStack_78 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                 (byte)((ulong)uStack_78 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                          (byte)((ulong)uStack_78 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                   (byte)((ulong)uStack_78 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar33 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uStack_78
                                                                                  >> 8),
                                                                            (byte)uVar33 ^
                                                                            (byte)uStack_78)))))));
        *(ulong *)(param_1 + 0x140) =
             CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                      CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                               CONCAT15((byte)((ulong)uVar31 >> 0x28) ^ (byte)((uint)uStack_7c >> 8)
                                        ,CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c,
                                                  CONCAT13((byte)((ulong)uVar31 >> 0x18) ^ bStack_7d
                                                           ,CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ushort)uStack_7f >> 8),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)uStack_7f,
                                                                              (byte)uVar31 ^
                                                                              local_80)))))));
      }
      iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
      if (iVar18 == 0) {
        return 0;
      }
      if (local_64 != uVar23) {
        return 0;
      }
      __n = lVar24 - 0xf;
      pbVar30 = &BYTE_03cffd81 + -lVar24;
      *(undefined8 *)(param_1 + 0x118) = 0;
      if (__n < 0x10) {
        lVar24 = 0;
      }
      else {
        do {
          uVar34 = *(undefined8 *)(pbVar30 + 8);
          uVar31 = *(undefined8 *)pbVar30;
          bStack_98 = (byte)uVar34;
          uStack_97 = (undefined7)((ulong)uVar34 >> 8);
          local_a0 = (byte)uVar31;
          uStack_9f = (undefined7)((ulong)uVar31 >> 8);
          uVar35 = *(undefined8 *)(pbVar30 + 8);
          uVar33 = *(undefined8 *)pbVar30;
          bStack_88 = (byte)uVar35;
          uStack_87 = (undefined7)((ulong)uVar35 >> 8);
          local_90 = (byte)uVar33;
          uStack_8f = (undefined2)((ulong)uVar33 >> 8);
          bStack_8d = (byte)((ulong)uVar33 >> 0x18);
          uStack_8c = (undefined4)((ulong)uVar33 >> 0x20);
          bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
          if (bVar16) {
            uStack_78 = *(undefined8 *)(pbVar30 + 8);
            uVar32 = *(undefined8 *)pbVar30;
            uVar23 = 0x30;
            local_80 = (byte)uVar32;
            uStack_7f = (undefined2)((ulong)uVar32 >> 8);
            bStack_7d = (byte)((ulong)uVar32 >> 0x18);
            uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
          }
          else {
            uVar23 = 0x20;
          }
          local_64 = 0x10;
          uVar36 = *(undefined8 *)(param_1 + 0x128);
          uVar32 = *(undefined8 *)(param_1 + 0x120);
          uVar38 = *(undefined8 *)(param_1 + 0x138);
          uVar37 = *(undefined8 *)(param_1 + 0x130);
          *(ulong *)(param_1 + 0x128) =
               CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                        CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                          (byte)((ulong)uVar34 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                   (byte)((ulong)uVar34 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                            (byte)((ulong)uVar34 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                     (byte)((ulong)uVar34 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar36
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 8),
                                                                              (byte)uVar36 ^
                                                                              bStack_98)))))));
          *(ulong *)(param_1 + 0x120) =
               CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                        CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                          (byte)((ulong)uVar31 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                   (byte)((ulong)uVar31 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                            (byte)((ulong)uVar31 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                     (byte)((ulong)uVar31 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar32
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 8),
                                                                              (byte)uVar32 ^
                                                                              local_a0)))))));
          *(ulong *)(param_1 + 0x138) =
               CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                        CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                          (byte)((ulong)uVar35 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                   (byte)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                            (byte)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                     (byte)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar38
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 8),
                                                                              (byte)uVar38 ^
                                                                              bStack_88)))))));
          *(ulong *)(param_1 + 0x130) =
               CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                        CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                          (byte)((ulong)uVar33 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                   (byte)((ulong)uVar33 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                            bStack_8d,
                                                            CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                     (byte)((ulong)uVar33 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar37
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 8),
                                                                              (byte)uVar37 ^
                                                                              local_90)))))));
          if (bVar16) {
            uVar33 = *(undefined8 *)(param_1 + 0x148);
            uVar31 = *(undefined8 *)(param_1 + 0x140);
            *(ulong *)(param_1 + 0x148) =
                 CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                          CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                            (byte)((ulong)uStack_78 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                     (byte)((ulong)uStack_78 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                              (byte)((ulong)uStack_78 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar33 >> 0x10)
                                                                       ^ (byte)((ulong)uStack_78 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar33
                                                                                      >> 8) ^
                                                                                (byte)((ulong)
                                                  uStack_78 >> 8),(byte)uVar33 ^ (byte)uStack_78))))
                                           )));
            *(ulong *)(param_1 + 0x140) =
                 CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                          CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                            (byte)((uint)uStack_7c >> 8),
                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c
                                                     ,CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                               bStack_7d,
                                                               CONCAT12((byte)((ulong)uVar31 >> 0x10
                                                                              ) ^ (byte)((ushort)
                                                  uStack_7f >> 8),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)uStack_7f,(byte)uVar31 ^ local_80))
                                                  )))));
          }
          iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
          if (iVar18 == 0) {
            return 0;
          }
          if (local_64 != uVar23) {
            return 0;
          }
          __n = __n - 0x10;
          pbVar30 = pbVar30 + 0x10;
        } while (0xf < __n);
        lVar24 = *(long *)(param_1 + 0x118);
      }
      if (__n != 0) goto LAB_00463ecc;
    }
    if (lVar24 != 0) {
      memset((void *)(param_1 + lVar24 + 0x108),0,0x10 - lVar24);
      uVar35 = *(undefined8 *)(param_1 + 0x110);
      uVar34 = *puVar26;
      uVar33 = *(undefined8 *)(param_1 + 0x110);
      uVar31 = *puVar26;
      bStack_98 = (byte)uVar35;
      uStack_97 = (undefined7)((ulong)uVar35 >> 8);
      local_a0 = (byte)uVar34;
      uStack_9f = (undefined7)((ulong)uVar34 >> 8);
      bStack_88 = (byte)uVar33;
      uStack_87 = (undefined7)((ulong)uVar33 >> 8);
      local_90 = (byte)uVar31;
      uStack_8f = (undefined2)((ulong)uVar31 >> 8);
      bStack_8d = (byte)((ulong)uVar31 >> 0x18);
      uStack_8c = (undefined4)((ulong)uVar31 >> 0x20);
      bVar16 = *(long *)(param_1 + 0xd0) != 0x10;
      if (bVar16) {
        uStack_78 = *(undefined8 *)(param_1 + 0x110);
        uVar32 = *puVar26;
        uVar23 = 0x30;
        local_80 = (byte)uVar32;
        uStack_7f = (undefined2)((ulong)uVar32 >> 8);
        bStack_7d = (byte)((ulong)uVar32 >> 0x18);
        uStack_7c = (undefined4)((ulong)uVar32 >> 0x20);
      }
      else {
        uVar23 = 0x20;
      }
      local_64 = 0x10;
      uVar36 = *(undefined8 *)(param_1 + 0x128);
      uVar32 = *(undefined8 *)(param_1 + 0x120);
      uVar38 = *(undefined8 *)(param_1 + 0x138);
      uVar37 = *(undefined8 *)(param_1 + 0x130);
      *(ulong *)(param_1 + 0x128) =
           CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                    CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                             CONCAT15((byte)((ulong)uVar36 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                               (byte)((ulong)uVar35 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                        (byte)((ulong)uVar35 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                 (byte)((ulong)uVar35 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar36 >> 8)
                                                                          ^ (byte)((ulong)uVar35 >>
                                                                                  8),
                                                                          (byte)uVar36 ^ bStack_98))
                                                       )))));
      *(ulong *)(param_1 + 0x120) =
           CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30),
                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ (byte)((ulong)uVar34 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                               (byte)((ulong)uVar34 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                        (byte)((ulong)uVar34 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                 (byte)((ulong)uVar34 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar32 >> 8)
                                                                          ^ (byte)((ulong)uVar34 >>
                                                                                  8),
                                                                          (byte)uVar32 ^ local_a0)))
                                              ))));
      *(ulong *)(param_1 + 0x138) =
           CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                    CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                             CONCAT15((byte)((ulong)uVar38 >> 0x28) ^ (byte)((ulong)uVar33 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                               (byte)((ulong)uVar33 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                        (byte)((ulong)uVar33 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                 (byte)((ulong)uVar33 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar38 >> 8)
                                                                          ^ (byte)((ulong)uVar33 >>
                                                                                  8),
                                                                          (byte)uVar38 ^ bStack_88))
                                                       )))));
      *(ulong *)(param_1 + 0x130) =
           CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                    CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                             CONCAT15((byte)((ulong)uVar37 >> 0x28) ^ (byte)((ulong)uVar31 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                               (byte)((ulong)uVar31 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bStack_8d,
                                                        CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                 (byte)((ulong)uVar31 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar37 >> 8)
                                                                          ^ (byte)((ulong)uVar31 >>
                                                                                  8),
                                                                          (byte)uVar37 ^ local_90)))
                                              ))));
      if (bVar16) {
        uVar33 = *(undefined8 *)(param_1 + 0x148);
        uVar31 = *(undefined8 *)(param_1 + 0x140);
        *(ulong *)(param_1 + 0x148) =
             CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uStack_78 >> 0x38),
                      CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uStack_78 >> 0x30),
                               CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                        (byte)((ulong)uStack_78 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                 (byte)((ulong)uStack_78 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                          (byte)((ulong)uStack_78 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                   (byte)((ulong)uStack_78 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar33 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uStack_78
                                                                                  >> 8),
                                                                            (byte)uVar33 ^
                                                                            (byte)uStack_78)))))));
        *(ulong *)(param_1 + 0x140) =
             CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((uint)uStack_7c >> 0x18),
                      CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((uint)uStack_7c >> 0x10),
                               CONCAT15((byte)((ulong)uVar31 >> 0x28) ^ (byte)((uint)uStack_7c >> 8)
                                        ,CONCAT14((byte)((ulong)uVar31 >> 0x20) ^ (byte)uStack_7c,
                                                  CONCAT13((byte)((ulong)uVar31 >> 0x18) ^ bStack_7d
                                                           ,CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                     (byte)((ushort)uStack_7f >> 8),
                                                                     CONCAT11((byte)((ulong)uVar31
                                                                                    >> 8) ^
                                                                              (byte)uStack_7f,
                                                                              (byte)uVar31 ^
                                                                              local_80)))))));
      }
      iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xb8),lVar22,&local_64,lVar22,uVar23);
      if (iVar18 == 0) {
        return 0;
      }
      if (local_64 != uVar23) {
        return 0;
      }
    }
    iVar18 = FUN_00439e90(*(undefined8 *)(param_1 + 0xa8),0,0,lVar22,0,0xffffffff);
    if (((iVar18 == 0) ||
        (iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xa8),lVar22,&local_a4,
                               param_1 + 0xa8 + *(long *)(param_1 + 0xd0) + 0x78,0x10), iVar18 == 0)
        ) || (local_a4 != 0x10)) {
      return 0;
    }
    iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xa8),param_1 + 0x130,&local_a4,lVar22,0x10);
    if (iVar18 == 0) {
      return 0;
    }
    if (local_a4 != 0x10) {
      return 0;
    }
    if (*(long *)(param_1 + 0xd0) != 0x10) {
      iVar18 = FUN_0043a2b0(*(undefined8 *)(param_1 + 0xa8),param_1 + 0x140,&local_a4,
                            param_1 + 0x130,0x10);
      if (iVar18 == 0) {
        return 0;
      }
      if (local_a4 != 0x10) {
        return 0;
      }
    }
  }
  if ((param_3 == 0) || (uVar29 = *(ulong *)(param_1 + 0x90), uVar29 == 0)) goto LAB_00464098;
  uVar19 = *(ulong *)(param_1 + 0xd0);
  uVar25 = uVar29;
  if (uVar19 <= uVar29) {
    uVar25 = uVar19;
  }
  if (uVar25 != 0) {
    if (uVar25 < 0x40) {
      uVar20 = 0;
LAB_004636cc:
      lVar22 = uVar25 - uVar20;
      pbVar30 = (byte *)(uVar20 + param_1 + 0xd8);
      do {
        lVar22 = lVar22 + -1;
        *pbVar30 = *pbVar30 ^ pbVar30[0x48];
        pbVar30 = pbVar30 + 1;
      } while (lVar22 != 0);
    }
    else {
      uVar20 = uVar25 & 0xffffffffffffffc0;
      puVar26 = (undefined8 *)(param_1 + 0xd8);
      uVar19 = uVar20;
      do {
        uVar37 = puVar26[1];
        uVar32 = *puVar26;
        uVar41 = puVar26[3];
        uVar39 = puVar26[2];
        uVar19 = uVar19 - 0x40;
        uVar33 = puVar26[10];
        uVar31 = puVar26[9];
        uVar35 = puVar26[0xc];
        uVar34 = puVar26[0xb];
        uVar38 = puVar26[5];
        uVar36 = puVar26[4];
        uVar42 = puVar26[7];
        uVar40 = puVar26[6];
        puVar26[1] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                              CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                 (byte)((ulong)uVar33 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                          (byte)((ulong)uVar33 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                                   (byte)((ulong)uVar33 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar37 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar37 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar37 ^ (byte)uVar33)))))));
        *puVar26 = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                            CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                              (byte)((ulong)uVar31 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                       (byte)((ulong)uVar31 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                                (byte)((ulong)uVar31 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar32 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar32 ^ (byte)uVar31)))))));
        puVar26[3] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                              CONCAT16((byte)((ulong)uVar41 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                 (byte)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                          (byte)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar41 >> 0x18) ^
                                                                   (byte)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar41 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar41 ^ (byte)uVar35)))))));
        puVar26[2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                              CONCAT16((byte)((ulong)uVar39 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                 (byte)((ulong)uVar34 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                          (byte)((ulong)uVar34 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                                   (byte)((ulong)uVar34 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar39 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar39 ^ (byte)uVar34)))))));
        uVar33 = puVar26[0xe];
        uVar31 = puVar26[0xd];
        uVar35 = puVar26[0x10];
        uVar34 = puVar26[0xf];
        puVar26[5] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                              CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                 (byte)((ulong)uVar33 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                          (byte)((ulong)uVar33 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                   (byte)((ulong)uVar33 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar38 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar33)))))));
        puVar26[4] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                              CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                 (byte)((ulong)uVar31 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                          (byte)((ulong)uVar31 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                                   (byte)((ulong)uVar31 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar36 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar31 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar36 ^ (byte)uVar31)))))));
        puVar26[7] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                              CONCAT16((byte)((ulong)uVar42 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                 (byte)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                          (byte)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar42 >> 0x18) ^
                                                                   (byte)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar42 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar42 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar42 ^ (byte)uVar35)))))));
        puVar26[6] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                              CONCAT16((byte)((ulong)uVar40 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                 (byte)((ulong)uVar34 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                          (byte)((ulong)uVar34 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar40 >> 0x18) ^
                                                                   (byte)((ulong)uVar34 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar40 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar40 ^ (byte)uVar34)))))));
        puVar26 = puVar26 + 8;
      } while (uVar19 != 0);
      if (uVar25 != uVar20) goto LAB_004636cc;
    }
    uVar19 = *(ulong *)(param_1 + 0xd0);
  }
  uVar25 = uVar29 - uVar19;
  if (uVar19 <= uVar29 && uVar25 != 0) {
    uVar29 = uVar25;
    if (0xf < uVar25) {
      uVar29 = 0x10;
    }
    if (uVar29 != 0) {
      if ((uVar25 < 0x10) ||
         ((param_1 + 0xf8U < uVar19 + uVar29 + param_1 + 0x120 &&
          (uVar19 + param_1 + 0x120 < uVar29 + param_1 + 0xf8)))) {
        uVar25 = 0;
      }
      else {
        uVar25 = uVar29 & 0x10;
        lVar22 = param_1 + 0x120;
        uVar20 = uVar25;
        do {
          uVar33 = ((undefined8 *)(lVar22 + uVar19))[1];
          uVar31 = *(undefined8 *)(lVar22 + uVar19);
          uVar20 = uVar20 - 0x10;
          uVar35 = *(undefined8 *)(lVar22 + -0x20);
          uVar34 = *(undefined8 *)(lVar22 + -0x28);
          *(ulong *)(lVar22 + -0x20) =
               CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                        CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                          (byte)((ulong)uVar33 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                   (byte)((ulong)uVar33 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                            (byte)((ulong)uVar33 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                     (byte)((ulong)uVar33 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar35
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 8),
                                                                              (byte)uVar35 ^
                                                                              (byte)uVar33)))))));
          *(ulong *)(lVar22 + -0x28) =
               CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                        CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                          (byte)((ulong)uVar31 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                   (byte)((ulong)uVar31 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                            (byte)((ulong)uVar31 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                                     (byte)((ulong)uVar31 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar34
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar31
                                                                                    >> 8),
                                                                              (byte)uVar34 ^
                                                                              (byte)uVar31)))))));
          lVar22 = lVar22 + 0x10;
        } while (uVar20 != 0);
        if (uVar29 == uVar25) goto LAB_00464098;
      }
      lVar22 = uVar25 + param_1 + 0x120;
      lVar24 = uVar29 - uVar25;
      do {
        lVar24 = lVar24 + -1;
        *(byte *)(lVar22 + -0x28) = *(byte *)(lVar22 + -0x28) ^ *(byte *)(lVar22 + uVar19);
        lVar22 = lVar22 + 1;
      } while (lVar24 != 0);
    }
  }
LAB_00464098:
  uVar29 = FUN_00439e90(*(undefined8 *)(param_1 + 0xa8),0,0,__dest,0,0xffffffff);
  if ((int)uVar29 != 0) {
    iVar18 = FUN_00439e90(*(undefined8 *)(param_1 + 0xb0),0,0,__dest,0,0xffffffff);
    uVar29 = (ulong)(iVar18 != 0);
  }
  return uVar29;
}


