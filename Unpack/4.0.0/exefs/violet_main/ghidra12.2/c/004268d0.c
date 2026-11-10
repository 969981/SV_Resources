/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004268d0; name: FUN_004268d0
 */


void FUN_004268d0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 local_60 [64];
  
  FUN_0042ab30(local_60,&DAT_03ced4e0,param_1);
  uVar1 = ~param_2;
  uVar12 = param_1[1];
  uVar10 = *param_1;
  uVar16 = param_1[3];
  uVar14 = param_1[2];
  bVar2 = (byte)param_2;
  bVar3 = (byte)(param_2 >> 8);
  bVar4 = (byte)(param_2 >> 0x10);
  bVar5 = (byte)(param_2 >> 0x18);
  bVar6 = (byte)uVar1;
  bVar7 = (byte)(uVar1 >> 8);
  bVar8 = (byte)(uVar1 >> 0x10);
  bVar9 = (byte)(uVar1 >> 0x18);
  uVar13 = param_1[5];
  uVar11 = param_1[4];
  uVar17 = param_1[7];
  uVar15 = param_1[6];
  param_1[1] = CONCAT17((byte)((ulong)uVar12 >> 0x38) & bVar9 | local_60[0xf] & bVar5,
                        CONCAT16((byte)((ulong)uVar12 >> 0x30) & bVar8 | local_60[0xe] & bVar4,
                                 CONCAT15((byte)((ulong)uVar12 >> 0x28) & bVar7 |
                                          local_60[0xd] & bVar3,
                                          CONCAT14((byte)((ulong)uVar12 >> 0x20) & bVar6 |
                                                   local_60[0xc] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar12 >> 0x18) & bVar9 |
                                                            local_60[0xb] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar12 >> 0x10) &
                                                                     bVar8 | local_60[10] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar12
                                                                                    >> 8) & bVar7 |
                                                                              local_60[9] & bVar3,
                                                                              (byte)uVar12 & bVar6 |
                                                                              local_60[8] & bVar2)))
                                                  ))));
  *param_1 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & bVar9 | local_60[7] & bVar5,
                      CONCAT16((byte)((ulong)uVar10 >> 0x30) & bVar8 | local_60[6] & bVar4,
                               CONCAT15((byte)((ulong)uVar10 >> 0x28) & bVar7 | local_60[5] & bVar3,
                                        CONCAT14((byte)((ulong)uVar10 >> 0x20) & bVar6 |
                                                 local_60[4] & bVar2,
                                                 CONCAT13((byte)((ulong)uVar10 >> 0x18) & bVar9 |
                                                          local_60[3] & bVar5,
                                                          CONCAT12((byte)((ulong)uVar10 >> 0x10) &
                                                                   bVar8 | local_60[2] & bVar4,
                                                                   CONCAT11((byte)((ulong)uVar10 >>
                                                                                  8) & bVar7 |
                                                                            local_60[1] & bVar3,
                                                                            (byte)uVar10 & bVar6 |
                                                                            local_60[0] & bVar2)))))
                              ));
  param_1[3] = CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar9 | local_60[0x1f] & bVar5,
                        CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar8 | local_60[0x1e] & bVar4,
                                 CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar7 |
                                          local_60[0x1d] & bVar3,
                                          CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar6 |
                                                   local_60[0x1c] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar9 |
                                                            local_60[0x1b] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar16 >> 0x10) &
                                                                     bVar8 | local_60[0x1a] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar16
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x19] & bVar3
                                                                              ,(byte)uVar16 & bVar6
                                                                               | local_60[0x18] &
                                                                                 bVar2)))))));
  param_1[2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & bVar9 | local_60[0x17] & bVar5,
                        CONCAT16((byte)((ulong)uVar14 >> 0x30) & bVar8 | local_60[0x16] & bVar4,
                                 CONCAT15((byte)((ulong)uVar14 >> 0x28) & bVar7 |
                                          local_60[0x15] & bVar3,
                                          CONCAT14((byte)((ulong)uVar14 >> 0x20) & bVar6 |
                                                   local_60[0x14] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar14 >> 0x18) & bVar9 |
                                                            local_60[0x13] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar14 >> 0x10) &
                                                                     bVar8 | local_60[0x12] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar14
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x11] & bVar3
                                                                              ,(byte)uVar14 & bVar6
                                                                               | local_60[0x10] &
                                                                                 bVar2)))))));
  param_1[5] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & bVar9 | local_60[0x2f] & bVar5,
                        CONCAT16((byte)((ulong)uVar13 >> 0x30) & bVar8 | local_60[0x2e] & bVar4,
                                 CONCAT15((byte)((ulong)uVar13 >> 0x28) & bVar7 |
                                          local_60[0x2d] & bVar3,
                                          CONCAT14((byte)((ulong)uVar13 >> 0x20) & bVar6 |
                                                   local_60[0x2c] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar13 >> 0x18) & bVar9 |
                                                            local_60[0x2b] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar13 >> 0x10) &
                                                                     bVar8 | local_60[0x2a] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar13
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x29] & bVar3
                                                                              ,(byte)uVar13 & bVar6
                                                                               | local_60[0x28] &
                                                                                 bVar2)))))));
  param_1[4] = CONCAT17((byte)((ulong)uVar11 >> 0x38) & bVar9 | local_60[0x27] & bVar5,
                        CONCAT16((byte)((ulong)uVar11 >> 0x30) & bVar8 | local_60[0x26] & bVar4,
                                 CONCAT15((byte)((ulong)uVar11 >> 0x28) & bVar7 |
                                          local_60[0x25] & bVar3,
                                          CONCAT14((byte)((ulong)uVar11 >> 0x20) & bVar6 |
                                                   local_60[0x24] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar11 >> 0x18) & bVar9 |
                                                            local_60[0x23] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar11 >> 0x10) &
                                                                     bVar8 | local_60[0x22] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar11
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x21] & bVar3
                                                                              ,(byte)uVar11 & bVar6
                                                                               | local_60[0x20] &
                                                                                 bVar2)))))));
  param_1[7] = CONCAT17((byte)((ulong)uVar17 >> 0x38) & bVar9 | local_60[0x3f] & bVar5,
                        CONCAT16((byte)((ulong)uVar17 >> 0x30) & bVar8 | local_60[0x3e] & bVar4,
                                 CONCAT15((byte)((ulong)uVar17 >> 0x28) & bVar7 |
                                          local_60[0x3d] & bVar3,
                                          CONCAT14((byte)((ulong)uVar17 >> 0x20) & bVar6 |
                                                   local_60[0x3c] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar17 >> 0x18) & bVar9 |
                                                            local_60[0x3b] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar17 >> 0x10) &
                                                                     bVar8 | local_60[0x3a] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar17
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x39] & bVar3
                                                                              ,(byte)uVar17 & bVar6
                                                                               | local_60[0x38] &
                                                                                 bVar2)))))));
  param_1[6] = CONCAT17((byte)((ulong)uVar15 >> 0x38) & bVar9 | local_60[0x37] & bVar5,
                        CONCAT16((byte)((ulong)uVar15 >> 0x30) & bVar8 | local_60[0x36] & bVar4,
                                 CONCAT15((byte)((ulong)uVar15 >> 0x28) & bVar7 |
                                          local_60[0x35] & bVar3,
                                          CONCAT14((byte)((ulong)uVar15 >> 0x20) & bVar6 |
                                                   local_60[0x34] & bVar2,
                                                   CONCAT13((byte)((ulong)uVar15 >> 0x18) & bVar9 |
                                                            local_60[0x33] & bVar5,
                                                            CONCAT12((byte)((ulong)uVar15 >> 0x10) &
                                                                     bVar8 | local_60[0x32] & bVar4,
                                                                     CONCAT11((byte)((ulong)uVar15
                                                                                    >> 8) & bVar7 |
                                                                              local_60[0x31] & bVar3
                                                                              ,(byte)uVar15 & bVar6
                                                                               | local_60[0x30] &
                                                                                 bVar2)))))));
  return;
}


