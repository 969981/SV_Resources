/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016fe00; name: FUN_0016fe00
 */


void FUN_0016fe00(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = (long)param_3;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  lVar6 = -(long)*(int *)(param_1 + 0x88);
  puVar7 = param_2;
  lVar9 = lVar1;
  if (8 < param_3) {
    uVar8 = lVar1 - 9;
    if (((uint)uVar8 >> 4 & 1) == 0) {
      uVar12 = ((undefined8 *)((long)param_2 + lVar6))[1];
      uVar10 = *(undefined8 *)((long)param_2 + lVar6);
      uVar13 = param_2[1];
      uVar11 = *param_2;
      puVar3[1] = CONCAT17((char)((ulong)uVar13 >> 0x38) - (char)((ulong)uVar12 >> 0x38),
                           CONCAT16((char)((ulong)uVar13 >> 0x30) - (char)((ulong)uVar12 >> 0x30),
                                    CONCAT15((char)((ulong)uVar13 >> 0x28) -
                                             (char)((ulong)uVar12 >> 0x28),
                                             CONCAT14((char)((ulong)uVar13 >> 0x20) -
                                                      (char)((ulong)uVar12 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar13 >> 0x18) -
                                                               (char)((ulong)uVar12 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar13 >> 0x10
                                                                              ) - (char)((ulong)
                                                  uVar12 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar13 >> 8) -
                                                           (char)((ulong)uVar12 >> 8),
                                                           (char)uVar13 - (char)uVar12)))))));
      *puVar3 = CONCAT17((char)((ulong)uVar11 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                         CONCAT16((char)((ulong)uVar11 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                                  CONCAT15((char)((ulong)uVar11 >> 0x28) -
                                           (char)((ulong)uVar10 >> 0x28),
                                           CONCAT14((char)((ulong)uVar11 >> 0x20) -
                                                    (char)((ulong)uVar10 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar11 >> 0x18) -
                                                             (char)((ulong)uVar10 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar11 >> 0x10)
                                                                      - (char)((ulong)uVar10 >> 0x10
                                                                              ),
                                                                      CONCAT11((char)((ulong)uVar11
                                                                                     >> 8) -
                                                                               (char)((ulong)uVar10
                                                                                     >> 8),
                                                                               (char)uVar11 -
                                                                               (char)uVar10)))))));
      lVar9 = lVar1 + -0x10;
      puVar3 = puVar3 + 2;
      puVar7 = param_2 + 2;
    }
    if (0xf < uVar8) {
      do {
        puVar4 = (undefined8 *)((long)puVar7 + lVar6);
        uVar12 = puVar7[1];
        uVar10 = *puVar7;
        lVar9 = lVar9 + -0x20;
        uVar13 = puVar4[1];
        uVar11 = *puVar4;
        puVar3[1] = CONCAT17((char)((ulong)uVar12 >> 0x38) - (char)((ulong)uVar13 >> 0x38),
                             CONCAT16((char)((ulong)uVar12 >> 0x30) - (char)((ulong)uVar13 >> 0x30),
                                      CONCAT15((char)((ulong)uVar12 >> 0x28) -
                                               (char)((ulong)uVar13 >> 0x28),
                                               CONCAT14((char)((ulong)uVar12 >> 0x20) -
                                                        (char)((ulong)uVar13 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar12 >> 0x18) -
                                                                 (char)((ulong)uVar13 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar12 >>
                                                                                0x10) -
                                                                          (char)((ulong)uVar13 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar12 >> 8) - (char)((ulong)uVar13 >> 8),
                                                  (char)uVar12 - (char)uVar13)))))));
        *puVar3 = CONCAT17((char)((ulong)uVar10 >> 0x38) - (char)((ulong)uVar11 >> 0x38),
                           CONCAT16((char)((ulong)uVar10 >> 0x30) - (char)((ulong)uVar11 >> 0x30),
                                    CONCAT15((char)((ulong)uVar10 >> 0x28) -
                                             (char)((ulong)uVar11 >> 0x28),
                                             CONCAT14((char)((ulong)uVar10 >> 0x20) -
                                                      (char)((ulong)uVar11 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar10 >> 0x18) -
                                                               (char)((ulong)uVar11 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar10 >> 0x10
                                                                              ) - (char)((ulong)
                                                  uVar11 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar10 >> 8) -
                                                           (char)((ulong)uVar11 >> 8),
                                                           (char)uVar10 - (char)uVar11)))))));
        uVar12 = puVar4[3];
        uVar10 = puVar4[2];
        uVar13 = puVar7[3];
        uVar11 = puVar7[2];
        puVar7 = puVar7 + 4;
        puVar3[3] = CONCAT17((char)((ulong)uVar13 >> 0x38) - (char)((ulong)uVar12 >> 0x38),
                             CONCAT16((char)((ulong)uVar13 >> 0x30) - (char)((ulong)uVar12 >> 0x30),
                                      CONCAT15((char)((ulong)uVar13 >> 0x28) -
                                               (char)((ulong)uVar12 >> 0x28),
                                               CONCAT14((char)((ulong)uVar13 >> 0x20) -
                                                        (char)((ulong)uVar12 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar13 >> 0x18) -
                                                                 (char)((ulong)uVar12 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar13 >>
                                                                                0x10) -
                                                                          (char)((ulong)uVar12 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar13 >> 8) - (char)((ulong)uVar12 >> 8),
                                                  (char)uVar13 - (char)uVar12)))))));
        puVar3[2] = CONCAT17((char)((ulong)uVar11 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                             CONCAT16((char)((ulong)uVar11 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                                      CONCAT15((char)((ulong)uVar11 >> 0x28) -
                                               (char)((ulong)uVar10 >> 0x28),
                                               CONCAT14((char)((ulong)uVar11 >> 0x20) -
                                                        (char)((ulong)uVar10 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar11 >> 0x18) -
                                                                 (char)((ulong)uVar10 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar11 >>
                                                                                0x10) -
                                                                          (char)((ulong)uVar10 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar11 >> 8) - (char)((ulong)uVar10 >> 8),
                                                  (char)uVar11 - (char)uVar10)))))));
        puVar3 = puVar3 + 4;
      } while (8 < lVar9);
    }
    lVar9 = (lVar1 - (uVar8 & 0xfffffffffffffff0)) + -0x10;
  }
  if (0 < lVar9) {
    uVar10 = *puVar7;
    uVar12 = *(undefined8 *)((long)puVar7 + lVar6);
    *puVar3 = CONCAT17((char)((ulong)uVar10 >> 0x38) - (char)((ulong)uVar12 >> 0x38),
                       CONCAT16((char)((ulong)uVar10 >> 0x30) - (char)((ulong)uVar12 >> 0x30),
                                CONCAT15((char)((ulong)uVar10 >> 0x28) -
                                         (char)((ulong)uVar12 >> 0x28),
                                         CONCAT14((char)((ulong)uVar10 >> 0x20) -
                                                  (char)((ulong)uVar12 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar10 >> 0x18) -
                                                           (char)((ulong)uVar12 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar10 >> 0x10) -
                                                                    (char)((ulong)uVar12 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar10 >>
                                                                                   8) -
                                                                             (char)((ulong)uVar12 >>
                                                                                   8),(char)uVar10 -
                                                                                      (char)uVar12))
                                                          )))));
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + lVar1;
  puVar7 = (undefined8 *)((long)*(undefined8 **)(param_1 + 8) + lVar1);
  puVar3 = *(undefined8 **)(param_1 + 8);
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar4;
  } while (puVar4 < puVar7);
  *(undefined8 **)(param_1 + 8) = puVar7;
  if (param_3 + -3 < 0xff) {
    puVar5 = *(undefined1 **)(param_1 + 0x58);
    *(undefined1 **)(param_1 + 0x58) = puVar5 + 1;
    *puVar5 = (char)(param_3 + -3);
    return;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x58);
  *(undefined1 **)(param_1 + 0x58) = puVar5 + 1;
  *puVar5 = 0xff;
  piVar2 = *(int **)(param_1 + 0x68);
  *(int **)(param_1 + 0x68) = piVar2 + 1;
  *piVar2 = param_3 + -0x102;
  return;
}


