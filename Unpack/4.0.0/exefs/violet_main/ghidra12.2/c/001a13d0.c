/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a13d0; name: FUN_001a13d0
 */


void FUN_001a13d0(long param_1,int param_2,uint param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  char cVar14;
  ulong uVar15;
  char *pcVar16;
  undefined1 uVar17;
  int iVar18;
  byte bVar19;
  long lVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int local_a4 [33];
  
  uVar4 = (undefined2)param_4;
  if ((int)param_3 < 2) {
LAB_001a1794:
    if (((0xf < param_2) || (7 < (int)param_3)) || (0xffff < param_4)) {
      puVar13 = *(undefined8 **)(param_1 + 0x20);
      lVar12 = (long)(int)param_3;
      if (puVar13 != (undefined8 *)0x0) {
        lVar8 = -param_5;
        puVar22 = param_6;
        lVar20 = lVar12;
        if (8 < (int)param_3) {
          uVar15 = lVar12 - 9;
          if (((uint)uVar15 >> 4 & 1) == 0) {
            uVar30 = ((undefined8 *)((long)param_6 + lVar8))[1];
            uVar28 = *(undefined8 *)((long)param_6 + lVar8);
            uVar31 = param_6[1];
            uVar29 = *param_6;
            puVar13[1] = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                  CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                           (char)((ulong)uVar30 >> 0x30),
                                           CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                    (char)((ulong)uVar30 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                             (char)((ulong)uVar30 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar31 >> 0x18)
                                                                      - (char)((ulong)uVar30 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar31
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar30
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar31 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar31 - (char)uVar30)))))));
            *puVar13 = CONCAT17((char)((ulong)uVar29 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                                CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                         (char)((ulong)uVar28 >> 0x30),
                                         CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                  (char)((ulong)uVar28 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                           (char)((ulong)uVar28 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar29 >> 0x18) -
                                                                    (char)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar29 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar29 >> 8) - (char)((ulong)uVar28 >> 8),
                                                  (char)uVar29 - (char)uVar28)))))));
            puVar13 = puVar13 + 2;
            lVar20 = lVar12 + -0x10;
            puVar22 = param_6 + 2;
          }
          if (0xf < uVar15) {
            do {
              puVar7 = (undefined8 *)((long)puVar22 + lVar8);
              uVar30 = puVar22[1];
              uVar28 = *puVar22;
              lVar20 = lVar20 + -0x20;
              uVar31 = puVar7[1];
              uVar29 = *puVar7;
              puVar13[1] = CONCAT17((char)((ulong)uVar30 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                                    CONCAT16((char)((ulong)uVar30 >> 0x30) -
                                             (char)((ulong)uVar31 >> 0x30),
                                             CONCAT15((char)((ulong)uVar30 >> 0x28) -
                                                      (char)((ulong)uVar31 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar30 >> 0x20) -
                                                               (char)((ulong)uVar31 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar30 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar31 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar30 >> 0x10) -
                                                           (char)((ulong)uVar31 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar30 >> 8) -
                                                                    (char)((ulong)uVar31 >> 8),
                                                                    (char)uVar30 - (char)uVar31)))))
                                            ));
              *puVar13 = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar29 >> 0x38),
                                  CONCAT16((char)((ulong)uVar28 >> 0x30) -
                                           (char)((ulong)uVar29 >> 0x30),
                                           CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                    (char)((ulong)uVar29 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                             (char)((ulong)uVar29 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar28 >> 0x18)
                                                                      - (char)((ulong)uVar29 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar28
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar29
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar28 >> 8) - (char)((ulong)uVar29 >> 8),
                                                  (char)uVar28 - (char)uVar29)))))));
              uVar30 = puVar7[3];
              uVar28 = puVar7[2];
              uVar31 = puVar22[3];
              uVar29 = puVar22[2];
              puVar22 = puVar22 + 4;
              puVar13[3] = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                    CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                             (char)((ulong)uVar30 >> 0x30),
                                             CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                      (char)((ulong)uVar30 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                               (char)((ulong)uVar30 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar31 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar30 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar31 >> 0x10) -
                                                           (char)((ulong)uVar30 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar31 >> 8) -
                                                                    (char)((ulong)uVar30 >> 8),
                                                                    (char)uVar31 - (char)uVar30)))))
                                            ));
              puVar13[2] = CONCAT17((char)((ulong)uVar29 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                                    CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                             (char)((ulong)uVar28 >> 0x30),
                                             CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                      (char)((ulong)uVar28 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                               (char)((ulong)uVar28 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar29 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar28 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar29 >> 0x10) -
                                                           (char)((ulong)uVar28 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar29 >> 8) -
                                                                    (char)((ulong)uVar28 >> 8),
                                                                    (char)uVar29 - (char)uVar28)))))
                                            ));
              puVar13 = puVar13 + 4;
            } while (8 < lVar20);
          }
          lVar20 = (lVar12 - (uVar15 & 0xfffffffffffffff0)) + -0x10;
        }
        if (0 < lVar20) {
          uVar28 = *puVar22;
          uVar30 = *(undefined8 *)((long)puVar22 + lVar8);
          *puVar13 = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                              CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar30 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                 (char)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                          (char)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                                   (char)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar28 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar28 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar28 - (char)uVar30)))))));
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar12;
      }
      puVar13 = *(undefined8 **)(param_1 + 0x10);
      puVar22 = (undefined8 *)((long)puVar13 + lVar12);
      puVar7 = param_6;
      do {
        *puVar13 = *puVar7;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
        *(undefined8 **)(param_1 + 0x10) = puVar13;
        puVar7 = puVar7 + 1;
      } while (puVar13 < puVar22);
      *(undefined8 **)(param_1 + 0x10) = puVar22;
      if ((int)param_3 < 0x40) {
        for (; 7 < (int)param_3; param_3 = param_3 - 7) {
          puVar24 = *(undefined1 **)(param_1 + 0x30);
          *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
          *puVar24 = 0x87;
        }
      }
      else {
        puVar24 = *(undefined1 **)(param_1 + 0x60);
        param_3 = param_3 - 0x40;
        if (param_3 < 0xfc) {
          puVar25 = puVar24 + 1;
          *puVar24 = (char)param_3;
        }
        else {
          uVar10 = param_3 & 3 | 0xfc;
          *puVar24 = (char)uVar10;
          *(short *)(puVar24 + 1) = (short)(param_3 - uVar10 >> 2);
          puVar25 = puVar24 + 3;
        }
        *(undefined1 **)(param_1 + 0x60) = puVar25;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        param_3 = 0;
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = 0;
        if (param_2 == 0) {
          return;
        }
      }
      if ((param_2 < 0x5b) && (param_4 < 0x10000)) {
        iVar11 = param_2;
        if (0xe < param_2) {
          iVar11 = 0xf;
        }
        cVar14 = (byte)param_3 + (char)iVar11 * '\b';
        if (param_4 == 0) {
          cVar14 = cVar14 + -0x80;
        }
        else {
          **(undefined2 **)(param_1 + 0x40) = uVar4;
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 2;
        }
        pcVar16 = *(char **)(param_1 + 0x30);
        *(char **)(param_1 + 0x30) = pcVar16 + 1;
        *pcVar16 = cVar14;
        for (param_2 = param_2 - iVar11; 0 < param_2; param_2 = param_2 - iVar11) {
          pbVar26 = *(byte **)(param_1 + 0x30);
          iVar11 = param_2;
          if (0xe < param_2) {
            iVar11 = 0xf;
          }
          *(byte **)(param_1 + 0x30) = pbVar26 + 1;
          *pbVar26 = (byte)(iVar11 << 3) ^ 0x80;
        }
        return;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      if (0 < (int)param_3) {
        pbVar26 = *(byte **)(param_1 + 0x30);
        *(byte **)(param_1 + 0x30) = pbVar26 + 1;
        *pbVar26 = (byte)param_3 | 0x80;
      }
      if (param_4 != 0) {
        param_5 = param_4;
      }
      if ((int)param_5 < 0x10000) {
        uVar10 = param_2 - 0x5b;
        uVar17 = 1;
LAB_001a1b70:
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = uVar17;
        if (-1 < (int)uVar10) {
          puVar24 = *(undefined1 **)(param_1 + 0x60);
          if (uVar10 < 0xfc) {
            *puVar24 = (char)uVar10;
            *(undefined1 **)(param_1 + 0x60) = puVar24 + 1;
          }
          else {
            uVar1 = uVar10 & 3 | 0xfc;
            *puVar24 = (char)uVar1;
            *(short *)(puVar24 + 1) = (short)(uVar10 - uVar1 >> 2);
            *(undefined1 **)(param_1 + 0x60) = puVar24 + 3;
          }
        }
      }
      else {
        uVar17 = 2;
        if (0x17 < param_2 + -5) {
          uVar10 = param_2 - 0x1d;
          goto LAB_001a1b70;
        }
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = (char)(param_2 + -5);
      }
      if (0xffff < param_5) {
        lVar20 = *(long *)(param_1 + 0x80);
        param_5 = param_5 - ((long)param_6 + lVar12);
LAB_001a1e80:
        lVar12 = param_5 + lVar20 + (long)*(int *)(param_1 + 0x88);
        uVar17 = (undefined1)((ulong)lVar12 >> 8);
        if (lVar12 < 0xc00000) {
          **(undefined1 **)(param_1 + 0x50) = (char)lVar12;
          *(undefined1 *)(*(long *)(param_1 + 0x50) + 1) = uVar17;
          *(char *)(*(long *)(param_1 + 0x50) + 2) = (char)((ulong)lVar12 >> 0x10);
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 3;
        }
        else {
          **(undefined1 **)(param_1 + 0x50) = (char)lVar12;
          *(undefined1 *)(*(long *)(param_1 + 0x50) + 1) = uVar17;
          uVar10 = (uint)lVar12 & 0x3fffff | 0xc00000;
          *(char *)(*(long *)(param_1 + 0x50) + 2) = (char)(uVar10 >> 0x10);
          lVar20 = *(long *)(param_1 + 0x50);
          *(long *)(param_1 + 0x50) = lVar20 + 4;
          *(char *)(lVar20 + 3) = (char)((uint)lVar12 - uVar10 >> 0x16);
        }
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
        return;
      }
      **(undefined2 **)(param_1 + 0x40) = (short)param_5;
      goto LAB_001a18e8;
    }
    **(undefined8 **)(param_1 + 0x10) = *param_6;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)(int)param_3;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      uVar28 = *param_6;
      uVar30 = *(undefined8 *)((long)param_6 - param_5);
      **(undefined8 **)(param_1 + 0x20) =
           CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                    CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar30 >> 0x30),
                             CONCAT15((char)((ulong)uVar28 >> 0x28) - (char)((ulong)uVar30 >> 0x28),
                                      CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                               (char)((ulong)uVar30 >> 0x20),
                                               CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                        (char)((ulong)uVar30 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar28 >> 0x10) -
                                                                 (char)((ulong)uVar30 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar28 >> 8)
                                                                          - (char)((ulong)uVar30 >>
                                                                                  8),
                                                                          (char)uVar28 -
                                                                          (char)uVar30)))))));
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)(int)param_3;
    }
    pbVar26 = *(byte **)(param_1 + 0x30);
    *(byte **)(param_1 + 0x30) = pbVar26 + 1;
    *pbVar26 = (char)param_3 + (char)param_2 * '\b' | (param_4 == 0) << 7;
  }
  else {
    lVar12 = 0;
    uVar10 = 0;
    iVar11 = 0;
    pcVar16 = (char *)((long)param_6 + (1 - param_5));
    if (*(char *)((long)param_6 + 1) == *pcVar16) goto LAB_001a1434;
LAB_001a1418:
    lVar12 = lVar12 + 1;
    if ((ulong)param_3 - 1 != lVar12) {
      while (((char *)((long)param_6 + 1))[lVar12] == pcVar16[lVar12]) {
LAB_001a1434:
        iVar18 = (int)lVar12 - iVar11;
        if (iVar18 == -1) break;
        local_a4[(int)uVar10] = iVar18 + 1;
        uVar10 = uVar10 + 1;
        iVar11 = (int)lVar12 + 2;
        lVar12 = lVar12 + 1;
        if ((ulong)param_3 - 1 == lVar12) goto LAB_001a1460;
      }
      goto LAB_001a1418;
    }
LAB_001a1460:
    if (uVar10 == 0) goto LAB_001a1794;
    local_a4[(int)uVar10] = param_3 - iVar11;
    puVar13 = param_6;
    if (0 < (int)uVar10) {
      uVar15 = 0;
      lVar12 = -param_5;
      do {
        while( true ) {
          iVar11 = local_a4[uVar15];
          uVar15 = uVar15 + 1;
          iVar18 = local_a4[uVar15];
          if (7 < iVar11) break;
          iVar21 = iVar11;
          if (7 < iVar18) goto LAB_001a1584;
LAB_001a14d0:
          if (iVar21 + iVar18 + 1 < 8) goto LAB_001a1498;
LAB_001a14e0:
          lVar20 = (long)iVar11;
          if (iVar11 < 8) {
            **(undefined8 **)(param_1 + 0x10) = *puVar13;
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar20;
            if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
              uVar28 = *puVar13;
              uVar30 = *(undefined8 *)((long)puVar13 + lVar12);
              **(undefined8 **)(param_1 + 0x20) =
                   CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                            CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar30 >> 0x30),
                                     CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                              (char)((ulong)uVar30 >> 0x28),
                                              CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                       (char)((ulong)uVar30 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                                (char)((ulong)uVar30 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar28 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar30 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar28 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar28 - (char)uVar30)))))));
              *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar20;
            }
            pbVar26 = *(byte **)(param_1 + 0x30);
            bVar19 = (char)iVar11 + 8U | 0x80;
          }
          else {
            puVar22 = *(undefined8 **)(param_1 + 0x20);
            if (puVar22 != (undefined8 *)0x0) {
              puVar7 = puVar13;
              if (iVar11 < 9) {
LAB_001a1610:
                uVar28 = *puVar7;
                uVar30 = *(undefined8 *)((long)puVar7 + lVar12);
                *puVar22 = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                    CONCAT16((char)((ulong)uVar28 >> 0x30) -
                                             (char)((ulong)uVar30 >> 0x30),
                                             CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                      (char)((ulong)uVar30 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                               (char)((ulong)uVar30 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar28 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar30 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar28 >> 0x10) -
                                                           (char)((ulong)uVar30 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar28 >> 8) -
                                                                    (char)((ulong)uVar30 >> 8),
                                                                    (char)uVar28 - (char)uVar30)))))
                                            ));
              }
              else {
                uVar27 = lVar20 - 9;
                uVar1 = ((uint)(uVar27 >> 4) & 0xfffffff) + 1;
                lVar8 = lVar20;
                if ((uVar1 & 3) == 0) {
                  if (uVar27 < 0x30) goto LAB_001a1540;
LAB_001a1714:
                  lVar9 = 0;
                  do {
                    puVar6 = (undefined8 *)((long)puVar7 + lVar9 + lVar12);
                    puVar23 = (undefined8 *)((long)puVar7 + lVar9);
                    uVar30 = puVar6[1];
                    uVar28 = *puVar6;
                    uVar31 = puVar23[1];
                    uVar29 = *puVar23;
                    puVar2 = (undefined8 *)((long)puVar22 + lVar9);
                    lVar9 = lVar9 + 0x40;
                    lVar8 = lVar8 + -0x40;
                    puVar2[1] = CONCAT17((char)((ulong)uVar31 >> 0x38) -
                                         (char)((ulong)uVar30 >> 0x38),
                                         CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                                  (char)((ulong)uVar30 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                           (char)((ulong)uVar30 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                                    (char)((ulong)uVar30 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar31 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar30 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar31 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar31 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar31 - (char)uVar30)))))));
                    *puVar2 = CONCAT17((char)((ulong)uVar29 >> 0x38) - (char)((ulong)uVar28 >> 0x38)
                                       ,CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                                 (char)((ulong)uVar28 >> 0x30),
                                                 CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                          (char)((ulong)uVar28 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                                   (char)((ulong)uVar28 >> 0x20),
                                                                   CONCAT13((char)((ulong)uVar29 >>
                                                                                  0x18) -
                                                                            (char)((ulong)uVar28 >>
                                                                                  0x18),
                                                                            CONCAT12((char)((ulong)
                                                  uVar29 >> 0x10) - (char)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar29 >> 8) -
                                                           (char)((ulong)uVar28 >> 8),
                                                           (char)uVar29 - (char)uVar28)))))));
                    uVar30 = puVar6[3];
                    uVar28 = puVar6[2];
                    uVar31 = puVar23[3];
                    uVar29 = puVar23[2];
                    puVar2[3] = CONCAT17((char)((ulong)uVar31 >> 0x38) -
                                         (char)((ulong)uVar30 >> 0x38),
                                         CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                                  (char)((ulong)uVar30 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                           (char)((ulong)uVar30 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                                    (char)((ulong)uVar30 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar31 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar30 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar31 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar31 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar31 - (char)uVar30)))))));
                    puVar2[2] = CONCAT17((char)((ulong)uVar29 >> 0x38) -
                                         (char)((ulong)uVar28 >> 0x38),
                                         CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                                  (char)((ulong)uVar28 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                           (char)((ulong)uVar28 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                                    (char)((ulong)uVar28 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar29 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar29 >> 0x10) - (char)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar29 >> 8) -
                                                           (char)((ulong)uVar28 >> 8),
                                                           (char)uVar29 - (char)uVar28)))))));
                    uVar30 = puVar6[5];
                    uVar28 = puVar6[4];
                    uVar31 = puVar23[5];
                    uVar29 = puVar23[4];
                    puVar2[5] = CONCAT17((char)((ulong)uVar31 >> 0x38) -
                                         (char)((ulong)uVar30 >> 0x38),
                                         CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                                  (char)((ulong)uVar30 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                           (char)((ulong)uVar30 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                                    (char)((ulong)uVar30 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar31 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar30 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar31 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar31 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar31 - (char)uVar30)))))));
                    puVar2[4] = CONCAT17((char)((ulong)uVar29 >> 0x38) -
                                         (char)((ulong)uVar28 >> 0x38),
                                         CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                                  (char)((ulong)uVar28 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                           (char)((ulong)uVar28 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                                    (char)((ulong)uVar28 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar29 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar29 >> 0x10) - (char)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar29 >> 8) -
                                                           (char)((ulong)uVar28 >> 8),
                                                           (char)uVar29 - (char)uVar28)))))));
                    uVar30 = puVar6[7];
                    uVar28 = puVar6[6];
                    uVar31 = puVar23[7];
                    uVar29 = puVar23[6];
                    puVar2[7] = CONCAT17((char)((ulong)uVar31 >> 0x38) -
                                         (char)((ulong)uVar30 >> 0x38),
                                         CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                                  (char)((ulong)uVar30 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                           (char)((ulong)uVar30 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                                    (char)((ulong)uVar30 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar31 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar30 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar31 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar31 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar31 - (char)uVar30)))))));
                    puVar2[6] = CONCAT17((char)((ulong)uVar29 >> 0x38) -
                                         (char)((ulong)uVar28 >> 0x38),
                                         CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                                  (char)((ulong)uVar28 >> 0x30),
                                                  CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                           (char)((ulong)uVar28 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                                    (char)((ulong)uVar28 >> 0x20),
                                                                    CONCAT13((char)((ulong)uVar29 >>
                                                                                   0x18) -
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x18),
                                                                             CONCAT12((char)((ulong)
                                                  uVar29 >> 0x10) - (char)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar29 >> 8) -
                                                           (char)((ulong)uVar28 >> 8),
                                                           (char)uVar29 - (char)uVar28)))))));
                  } while (8 < lVar8);
                  puVar22 = (undefined8 *)((long)puVar22 + lVar9);
                  puVar7 = (undefined8 *)((long)puVar7 + lVar9);
                  if ((long)(uVar27 & 0xfffffffffffffff0) < lVar20 + -0x10) goto LAB_001a1610;
                }
                else {
                  lVar9 = -((ulong)uVar1 & 3);
                  puVar6 = puVar13;
                  puVar23 = puVar22;
                  do {
                    uVar30 = ((undefined8 *)((long)puVar6 + lVar12))[1];
                    uVar28 = *(undefined8 *)((long)puVar6 + lVar12);
                    lVar8 = lVar8 + -0x10;
                    puVar7 = puVar6 + 2;
                    uVar31 = puVar6[1];
                    uVar29 = *puVar6;
                    puVar22 = puVar23 + 2;
                    puVar23[1] = CONCAT17((char)((ulong)uVar31 >> 0x38) -
                                          (char)((ulong)uVar30 >> 0x38),
                                          CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                                   (char)((ulong)uVar30 >> 0x30),
                                                   CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                            (char)((ulong)uVar30 >> 0x28),
                                                            CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                                     (char)((ulong)uVar30 >> 0x20),
                                                                     CONCAT13((char)((ulong)uVar31
                                                                                    >> 0x18) -
                                                                              (char)((ulong)uVar30
                                                                                    >> 0x18),
                                                                              CONCAT12((char)((ulong
                                                  )uVar31 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar31 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar31 - (char)uVar30)))))));
                    *puVar23 = CONCAT17((char)((ulong)uVar29 >> 0x38) -
                                        (char)((ulong)uVar28 >> 0x38),
                                        CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                                 (char)((ulong)uVar28 >> 0x30),
                                                 CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                          (char)((ulong)uVar28 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                                   (char)((ulong)uVar28 >> 0x20),
                                                                   CONCAT13((char)((ulong)uVar29 >>
                                                                                  0x18) -
                                                                            (char)((ulong)uVar28 >>
                                                                                  0x18),
                                                                            CONCAT12((char)((ulong)
                                                  uVar29 >> 0x10) - (char)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar29 >> 8) -
                                                           (char)((ulong)uVar28 >> 8),
                                                           (char)uVar29 - (char)uVar28)))))));
                    bVar5 = lVar9 != -1;
                    lVar9 = lVar9 + 1;
                    puVar6 = puVar7;
                    puVar23 = puVar22;
                  } while (bVar5);
                  if (0x2f < uVar27) goto LAB_001a1714;
LAB_001a1540:
                  if ((long)(uVar27 & 0xfffffffffffffff0) < lVar20 + -0x10) goto LAB_001a1610;
                }
              }
              *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar20;
            }
            puVar22 = *(undefined8 **)(param_1 + 0x10);
            puVar7 = (undefined8 *)((long)puVar22 + lVar20);
            puVar6 = puVar13;
            do {
              *puVar22 = *puVar6;
              puVar22 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
              *(undefined8 **)(param_1 + 0x10) = puVar22;
              puVar6 = puVar6 + 1;
            } while (puVar22 < puVar7);
            *(undefined8 **)(param_1 + 0x10) = puVar7;
            iVar18 = iVar11;
            if (iVar11 < 0x40) {
              do {
                puVar24 = *(undefined1 **)(param_1 + 0x30);
                iVar18 = iVar18 + -7;
                *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
                *puVar24 = 0x87;
              } while (7 < iVar18);
            }
            else {
              puVar24 = *(undefined1 **)(param_1 + 0x60);
              uVar1 = iVar11 - 0x40;
              if (uVar1 < 0xfc) {
                puVar25 = puVar24 + 1;
                *puVar24 = (char)uVar1;
              }
              else {
                uVar3 = uVar1 & 3 | 0xfc;
                *puVar24 = (char)uVar3;
                *(short *)(puVar24 + 1) = (short)(uVar1 - uVar3 >> 2);
                puVar25 = puVar24 + 3;
              }
              *(undefined1 **)(param_1 + 0x60) = puVar25;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              puVar24 = *(undefined1 **)(param_1 + 0x30);
              iVar18 = 0;
              *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
              *puVar24 = 0;
            }
            pbVar26 = *(byte **)(param_1 + 0x30);
            bVar19 = (char)iVar18 + 0x88;
          }
          *(byte **)(param_1 + 0x30) = pbVar26 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + (long)(iVar11 + 1));
          *pbVar26 = bVar19;
          if (uVar15 == uVar10) goto LAB_001a185c;
        }
        iVar21 = (iVar11 + -1) % 7 + 1;
        if (iVar18 < 8) goto LAB_001a14d0;
LAB_001a1584:
        if (7 < iVar21 + (iVar18 + -1) % 7 + 2) goto LAB_001a14e0;
LAB_001a1498:
        local_a4[uVar15] = iVar11 + iVar18 + 1;
      } while (uVar15 != uVar10);
    }
LAB_001a185c:
    uVar15 = (long)param_6 + ((long)(int)param_3 - (long)puVar13);
    uVar10 = (uint)uVar15;
    lVar12 = (long)(int)uVar10;
    if (((0xffff < param_4) || (0xf < param_2)) || (7 < (int)uVar10)) {
      puVar22 = *(undefined8 **)(param_1 + 0x20);
      if (puVar22 != (undefined8 *)0x0) {
        lVar8 = -param_5;
        puVar7 = puVar13;
        lVar20 = lVar12;
        if (8 < (int)uVar10) {
          uVar27 = lVar12 - 9;
          if (((uint)uVar27 >> 4 & 1) == 0) {
            uVar30 = ((undefined8 *)((long)puVar13 + lVar8))[1];
            uVar28 = *(undefined8 *)((long)puVar13 + lVar8);
            uVar31 = puVar13[1];
            uVar29 = *puVar13;
            puVar22[1] = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                  CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                           (char)((ulong)uVar30 >> 0x30),
                                           CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                    (char)((ulong)uVar30 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                             (char)((ulong)uVar30 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar31 >> 0x18)
                                                                      - (char)((ulong)uVar30 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar31
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar30
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar31 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar31 - (char)uVar30)))))));
            *puVar22 = CONCAT17((char)((ulong)uVar29 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                                CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                         (char)((ulong)uVar28 >> 0x30),
                                         CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                  (char)((ulong)uVar28 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                           (char)((ulong)uVar28 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar29 >> 0x18) -
                                                                    (char)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar29 >>
                                                                                   0x10) -
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar29 >> 8) - (char)((ulong)uVar28 >> 8),
                                                  (char)uVar29 - (char)uVar28)))))));
            lVar20 = lVar12 + -0x10;
            puVar22 = puVar22 + 2;
            puVar7 = puVar13 + 2;
          }
          if (0xf < uVar27) {
            do {
              puVar6 = (undefined8 *)((long)puVar7 + lVar8);
              uVar30 = puVar7[1];
              uVar28 = *puVar7;
              lVar20 = lVar20 + -0x20;
              uVar31 = puVar6[1];
              uVar29 = *puVar6;
              puVar22[1] = CONCAT17((char)((ulong)uVar30 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                                    CONCAT16((char)((ulong)uVar30 >> 0x30) -
                                             (char)((ulong)uVar31 >> 0x30),
                                             CONCAT15((char)((ulong)uVar30 >> 0x28) -
                                                      (char)((ulong)uVar31 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar30 >> 0x20) -
                                                               (char)((ulong)uVar31 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar30 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar31 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar30 >> 0x10) -
                                                           (char)((ulong)uVar31 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar30 >> 8) -
                                                                    (char)((ulong)uVar31 >> 8),
                                                                    (char)uVar30 - (char)uVar31)))))
                                            ));
              *puVar22 = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar29 >> 0x38),
                                  CONCAT16((char)((ulong)uVar28 >> 0x30) -
                                           (char)((ulong)uVar29 >> 0x30),
                                           CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                    (char)((ulong)uVar29 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                             (char)((ulong)uVar29 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar28 >> 0x18)
                                                                      - (char)((ulong)uVar29 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar28
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar29
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar28 >> 8) - (char)((ulong)uVar29 >> 8),
                                                  (char)uVar28 - (char)uVar29)))))));
              uVar30 = puVar6[3];
              uVar28 = puVar6[2];
              uVar31 = puVar7[3];
              uVar29 = puVar7[2];
              puVar7 = puVar7 + 4;
              puVar22[3] = CONCAT17((char)((ulong)uVar31 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                    CONCAT16((char)((ulong)uVar31 >> 0x30) -
                                             (char)((ulong)uVar30 >> 0x30),
                                             CONCAT15((char)((ulong)uVar31 >> 0x28) -
                                                      (char)((ulong)uVar30 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar31 >> 0x20) -
                                                               (char)((ulong)uVar30 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar31 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar30 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar31 >> 0x10) -
                                                           (char)((ulong)uVar30 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar31 >> 8) -
                                                                    (char)((ulong)uVar30 >> 8),
                                                                    (char)uVar31 - (char)uVar30)))))
                                            ));
              puVar22[2] = CONCAT17((char)((ulong)uVar29 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                                    CONCAT16((char)((ulong)uVar29 >> 0x30) -
                                             (char)((ulong)uVar28 >> 0x30),
                                             CONCAT15((char)((ulong)uVar29 >> 0x28) -
                                                      (char)((ulong)uVar28 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar29 >> 0x20) -
                                                               (char)((ulong)uVar28 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar29 >> 0x18
                                                                              ) - (char)((ulong)
                                                  uVar28 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar29 >> 0x10) -
                                                           (char)((ulong)uVar28 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar29 >> 8) -
                                                                    (char)((ulong)uVar28 >> 8),
                                                                    (char)uVar29 - (char)uVar28)))))
                                            ));
              puVar22 = puVar22 + 4;
            } while (8 < lVar20);
          }
          lVar20 = (lVar12 - (uVar27 & 0xfffffffffffffff0)) + -0x10;
        }
        if (0 < lVar20) {
          uVar28 = *puVar7;
          uVar30 = *(undefined8 *)((long)puVar7 + lVar8);
          *puVar22 = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                              CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar30 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                 (char)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                          (char)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                                   (char)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar28 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar28 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar28 - (char)uVar30)))))));
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar12;
      }
      puVar22 = *(undefined8 **)(param_1 + 0x10);
      puVar7 = (undefined8 *)((long)puVar22 + lVar12);
      puVar6 = puVar13;
      do {
        *puVar22 = *puVar6;
        puVar22 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
        *(undefined8 **)(param_1 + 0x10) = puVar22;
        puVar6 = puVar6 + 1;
      } while (puVar22 < puVar7);
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      if ((int)uVar10 < 0x40) {
        while (7 < (int)uVar10) {
          puVar24 = *(undefined1 **)(param_1 + 0x30);
          uVar10 = (int)uVar15 - 7;
          uVar15 = (ulong)uVar10;
          *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
          *puVar24 = 0x87;
        }
      }
      else {
        puVar24 = *(undefined1 **)(param_1 + 0x60);
        uVar10 = uVar10 - 0x40;
        if (uVar10 < 0xfc) {
          puVar25 = puVar24 + 1;
          *puVar24 = (char)uVar10;
        }
        else {
          uVar1 = uVar10 & 3 | 0xfc;
          *puVar24 = (char)uVar1;
          *(short *)(puVar24 + 1) = (short)(uVar10 - uVar1 >> 2);
          puVar25 = puVar24 + 3;
        }
        *(undefined1 **)(param_1 + 0x60) = puVar25;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        uVar10 = 0;
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = 0;
        if (param_2 == 0) {
          return;
        }
      }
      if ((param_2 < 0x5b) && (param_4 < 0x10000)) {
        iVar11 = param_2;
        if (0xe < param_2) {
          iVar11 = 0xf;
        }
        cVar14 = (byte)uVar10 + (char)iVar11 * '\b';
        if (param_4 == 0) {
          cVar14 = cVar14 + -0x80;
        }
        else {
          **(undefined2 **)(param_1 + 0x40) = uVar4;
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 2;
        }
        pcVar16 = *(char **)(param_1 + 0x30);
        *(char **)(param_1 + 0x30) = pcVar16 + 1;
        *pcVar16 = cVar14;
        for (param_2 = param_2 - iVar11; 0 < param_2; param_2 = param_2 - iVar11) {
          pbVar26 = *(byte **)(param_1 + 0x30);
          iVar11 = param_2;
          if (0xe < param_2) {
            iVar11 = 0xf;
          }
          *(byte **)(param_1 + 0x30) = pbVar26 + 1;
          *pbVar26 = (byte)(iVar11 << 3) ^ 0x80;
        }
        return;
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      if (0 < (int)uVar10) {
        pbVar26 = *(byte **)(param_1 + 0x30);
        *(byte **)(param_1 + 0x30) = pbVar26 + 1;
        *pbVar26 = (byte)uVar10 | 0x80;
      }
      if (param_4 != 0) {
        param_5 = param_4;
      }
      if ((int)param_5 < 0x10000) {
        uVar10 = param_2 - 0x5b;
        uVar17 = 1;
LAB_001a1dd0:
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = uVar17;
        if (-1 < (int)uVar10) {
          puVar24 = *(undefined1 **)(param_1 + 0x60);
          if (uVar10 < 0xfc) {
            puVar25 = puVar24 + 1;
            *puVar24 = (char)uVar10;
          }
          else {
            uVar1 = uVar10 & 3 | 0xfc;
            *puVar24 = (char)uVar1;
            *(short *)(puVar24 + 1) = (short)(uVar10 - uVar1 >> 2);
            puVar25 = puVar24 + 3;
          }
          *(undefined1 **)(param_1 + 0x60) = puVar25;
        }
      }
      else {
        uVar17 = 2;
        if (0x17 < param_2 + -5) {
          uVar10 = param_2 - 0x1d;
          goto LAB_001a1dd0;
        }
        puVar24 = *(undefined1 **)(param_1 + 0x30);
        *(undefined1 **)(param_1 + 0x30) = puVar24 + 1;
        *puVar24 = (char)(param_2 + -5);
      }
      if (0xffff < param_5) {
        lVar20 = *(long *)(param_1 + 0x80);
        param_5 = param_5 - ((long)puVar13 + lVar12);
        goto LAB_001a1e80;
      }
      **(undefined2 **)(param_1 + 0x40) = (short)param_5;
      goto LAB_001a18e8;
    }
    **(undefined8 **)(param_1 + 0x10) = *puVar13;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar12;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      uVar28 = *puVar13;
      uVar30 = *(undefined8 *)((long)puVar13 - param_5);
      **(undefined8 **)(param_1 + 0x20) =
           CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                    CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar30 >> 0x30),
                             CONCAT15((char)((ulong)uVar28 >> 0x28) - (char)((ulong)uVar30 >> 0x28),
                                      CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                               (char)((ulong)uVar30 >> 0x20),
                                               CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                        (char)((ulong)uVar30 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar28 >> 0x10) -
                                                                 (char)((ulong)uVar30 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar28 >> 8)
                                                                          - (char)((ulong)uVar30 >>
                                                                                  8),
                                                                          (char)uVar28 -
                                                                          (char)uVar30)))))));
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar12;
    }
    pbVar26 = *(byte **)(param_1 + 0x30);
    *(byte **)(param_1 + 0x30) = pbVar26 + 1;
    *pbVar26 = (char)uVar15 + (char)param_2 * '\b' | (param_4 == 0) << 7;
  }
  if (param_4 == 0) {
    return;
  }
  **(undefined2 **)(param_1 + 0x40) = uVar4;
LAB_001a18e8:
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 2;
  return;
}


