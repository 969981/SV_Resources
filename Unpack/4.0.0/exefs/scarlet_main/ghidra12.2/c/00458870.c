/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00458870; name: FUN_00458870
 */


bool FUN_00458870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte bVar17;
  
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 5;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  lVar12 = FUN_00452c30(0x50,"external/openssl/crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = lVar12;
  if (lVar12 == 0) {
    FUN_004806c0(0xf,0x7a,0x41,"external/openssl/crypto/modes/ocb128.c",0x9f);
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    param_1[3] = param_3;
    param_1[4] = param_6;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    uVar11 = DAT_03cb53a0;
    *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x47) << 1;
    *(byte *)((long)param_1 + 0x56) =
         *(byte *)((long)param_1 + 0x47) >> 7 | *(byte *)((long)param_1 + 0x46) << 1;
    *(byte *)((long)param_1 + 0x55) =
         *(byte *)((long)param_1 + 0x46) >> 7 | *(byte *)((long)param_1 + 0x45) << 1;
    *(byte *)((long)param_1 + 0x54) =
         *(byte *)((long)param_1 + 0x45) >> 7 | *(byte *)((long)param_1 + 0x44) << 1;
    *(byte *)((long)param_1 + 0x53) =
         *(byte *)((long)param_1 + 0x44) >> 7 | *(byte *)((long)param_1 + 0x43) << 1;
    *(byte *)((long)param_1 + 0x52) =
         *(byte *)((long)param_1 + 0x43) >> 7 | *(byte *)((long)param_1 + 0x42) << 1;
    *(byte *)((long)param_1 + 0x51) =
         *(byte *)((long)param_1 + 0x42) >> 7 | *(byte *)((long)param_1 + 0x41) << 1;
    *(byte *)(param_1 + 10) = *(byte *)((long)param_1 + 0x41) >> 7 | *(byte *)(param_1 + 8) << 1;
    cVar4 = *(char *)(param_1 + 7);
    *(byte *)((long)param_1 + 0x4f) =
         *(byte *)(param_1 + 8) >> 7 | *(byte *)((long)param_1 + 0x3f) << 1;
    *(byte *)((long)param_1 + 0x4e) =
         *(byte *)((long)param_1 + 0x3f) >> 7 | *(byte *)((long)param_1 + 0x3e) << 1;
    *(byte *)((long)param_1 + 0x4d) =
         *(byte *)((long)param_1 + 0x3e) >> 7 | *(byte *)((long)param_1 + 0x3d) << 1;
    *(byte *)((long)param_1 + 0x4b) =
         *(byte *)((long)param_1 + 0x3c) >> 7 | *(byte *)((long)param_1 + 0x3b) << 1;
    pbVar15 = (byte *)param_1[0xb];
    *(byte *)((long)param_1 + 0x4c) =
         *(byte *)((long)param_1 + 0x3d) >> 7 | *(byte *)((long)param_1 + 0x3c) << 1;
    *(byte *)((long)param_1 + 0x4a) =
         *(byte *)((long)param_1 + 0x3b) >> 7 | *(byte *)((long)param_1 + 0x3a) << 1;
    uVar1 = (uint)*(byte *)((long)param_1 + 0x57) ^ (int)cVar4 >> 7 & 0xffffff87U;
    *(byte *)((long)param_1 + 0x49) =
         *(byte *)((long)param_1 + 0x3a) >> 7 | *(byte *)((long)param_1 + 0x39) << 1;
    *(byte *)(param_1 + 9) = *(byte *)((long)param_1 + 0x39) >> 7 | (byte)((int)cVar4 << 1);
    *(char *)((long)param_1 + 0x57) = (char)uVar1;
    bVar5 = (byte)(uVar1 << 1);
    pbVar15[0xf] = bVar5;
    bVar17 = *(byte *)((long)param_1 + 0x56);
    pbVar15[0xe] = (byte)(uVar1 >> 7) & 1 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x55);
    pbVar15[0xd] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)((long)param_1 + 0x54);
    pbVar15[0xc] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x53);
    pbVar15[0xb] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)((long)param_1 + 0x52);
    pbVar15[10] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x51);
    pbVar15[9] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)(param_1 + 10);
    pbVar15[8] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x4f);
    pbVar15[7] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)((long)param_1 + 0x4e);
    pbVar15[6] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x4d);
    pbVar15[5] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)((long)param_1 + 0x4c);
    pbVar15[4] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x4b);
    pbVar15[3] = bVar17 >> 7 | bVar2 << 1;
    bVar17 = *(byte *)((long)param_1 + 0x4a);
    pbVar15[2] = bVar2 >> 7 | bVar17 << 1;
    bVar2 = *(byte *)((long)param_1 + 0x49);
    pbVar15[1] = bVar17 >> 7 | bVar2 << 1;
    cVar3 = *(char *)(param_1 + 9);
    pbVar15[0xf] = bVar5 ^ (byte)((uint)(int)(char)(cVar4 << 1) >> 7) & 0x87;
    *pbVar15 = bVar2 >> 7 | cVar3 << 1;
    pcVar13 = (char *)param_1[0xb];
    cVar3 = *pcVar13;
    uVar16 = *(undefined8 *)(pcVar13 + 1);
    bVar17 = (byte)((ulong)uVar16 >> 0x38);
    pcVar13[0x1e] = (byte)pcVar13[0xf] >> 7 | pcVar13[0xe] << 1;
    pcVar13[0x1d] = (byte)pcVar13[0xe] >> 7 | pcVar13[0xd] << 1;
    auVar6[2] = cVar3 >> 7;
    auVar6._0_2_ = (short)cVar3;
    auVar6[3] = cVar3 >> 7;
    auVar6._4_4_ = 0;
    auVar6._8_8_ = uVar16;
    uVar7 = a64_TBL(ZEXT816(0),auVar6,uVar11);
    pcVar13[0x1c] = (byte)pcVar13[0xd] >> 7 | pcVar13[0xc] << 1;
    pcVar13[0x1b] = (byte)pcVar13[0xc] >> 7 | pcVar13[0xb] << 1;
    pcVar13[0x1a] = (byte)pcVar13[0xb] >> 7 | pcVar13[10] << 1;
    pcVar13[0x19] = (byte)pcVar13[10] >> 7 | pcVar13[9] << 1;
    pcVar13[0x1f] = (byte)((ulong)(long)cVar3 >> 7) & 0x87 ^ pcVar13[0xf] << 1;
    pcVar13[0x18] = (byte)pcVar13[9] >> 7 | bVar17 << 1;
    *(ulong *)(pcVar13 + 0x10) =
         CONCAT17(bVar17 >> 7 | (char)((ulong)uVar7 >> 0x38) << 1,
                  CONCAT16((byte)((ulong)uVar16 >> 0x30) >> 7 | (char)((ulong)uVar7 >> 0x30) << 1,
                           CONCAT15((byte)((ulong)uVar16 >> 0x28) >> 7 |
                                    (char)((ulong)uVar7 >> 0x28) << 1,
                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) >> 7 |
                                             (char)((ulong)uVar7 >> 0x20) << 1,
                                             CONCAT13((byte)((ulong)uVar16 >> 0x18) >> 7 |
                                                      (char)((ulong)uVar7 >> 0x18) << 1,
                                                      CONCAT12((byte)((ulong)uVar16 >> 0x10) >> 7 |
                                                               (char)((ulong)uVar7 >> 0x10) << 1,
                                                               CONCAT11((byte)((ulong)uVar16 >> 8)
                                                                        >> 7 | (char)((ulong)uVar7
                                                                                     >> 8) << 1,
                                                                        (byte)uVar16 >> 7 |
                                                                        (char)uVar7 << 1)))))));
    lVar14 = param_1[0xb];
    cVar3 = *(char *)(lVar14 + 0x10);
    uVar7 = *(undefined8 *)(lVar14 + 0x11);
    bVar17 = (byte)((ulong)uVar7 >> 0x38);
    *(byte *)(lVar14 + 0x2e) = *(byte *)(lVar14 + 0x1f) >> 7 | *(byte *)(lVar14 + 0x1e) << 1;
    *(byte *)(lVar14 + 0x2d) = *(byte *)(lVar14 + 0x1e) >> 7 | *(byte *)(lVar14 + 0x1d) << 1;
    *(byte *)(lVar14 + 0x2c) = *(byte *)(lVar14 + 0x1d) >> 7 | *(byte *)(lVar14 + 0x1c) << 1;
    auVar8[2] = cVar3 >> 7;
    auVar8._0_2_ = (short)cVar3;
    auVar8[3] = cVar3 >> 7;
    auVar8._4_4_ = 0;
    auVar8._8_8_ = uVar7;
    uVar16 = a64_TBL(ZEXT816(0),auVar8,uVar11);
    *(byte *)(lVar14 + 0x2b) = *(byte *)(lVar14 + 0x1c) >> 7 | *(byte *)(lVar14 + 0x1b) << 1;
    *(byte *)(lVar14 + 0x2a) = *(byte *)(lVar14 + 0x1b) >> 7 | *(byte *)(lVar14 + 0x1a) << 1;
    *(byte *)(lVar14 + 0x29) = *(byte *)(lVar14 + 0x1a) >> 7 | *(byte *)(lVar14 + 0x19) << 1;
    *(byte *)(lVar14 + 0x2f) =
         (byte)((ulong)(long)cVar3 >> 7) & 0x87 ^ *(byte *)(lVar14 + 0x1f) << 1;
    *(byte *)(lVar14 + 0x28) = *(byte *)(lVar14 + 0x19) >> 7 | bVar17 << 1;
    *(ulong *)(lVar14 + 0x20) =
         CONCAT17(bVar17 >> 7 | (char)((ulong)uVar16 >> 0x38) << 1,
                  CONCAT16((byte)((ulong)uVar7 >> 0x30) >> 7 | (char)((ulong)uVar16 >> 0x30) << 1,
                           CONCAT15((byte)((ulong)uVar7 >> 0x28) >> 7 |
                                    (char)((ulong)uVar16 >> 0x28) << 1,
                                    CONCAT14((byte)((ulong)uVar7 >> 0x20) >> 7 |
                                             (char)((ulong)uVar16 >> 0x20) << 1,
                                             CONCAT13((byte)((ulong)uVar7 >> 0x18) >> 7 |
                                                      (char)((ulong)uVar16 >> 0x18) << 1,
                                                      CONCAT12((byte)((ulong)uVar7 >> 0x10) >> 7 |
                                                               (char)((ulong)uVar16 >> 0x10) << 1,
                                                               CONCAT11((byte)((ulong)uVar7 >> 8) >>
                                                                        7 | (char)((ulong)uVar16 >>
                                                                                  8) << 1,
                                                                        (byte)uVar7 >> 7 |
                                                                        (char)uVar16 << 1)))))));
    lVar14 = param_1[0xb];
    cVar3 = *(char *)(lVar14 + 0x20);
    uVar7 = *(undefined8 *)(lVar14 + 0x21);
    bVar17 = (byte)((ulong)uVar7 >> 0x38);
    *(byte *)(lVar14 + 0x3e) = *(byte *)(lVar14 + 0x2f) >> 7 | *(byte *)(lVar14 + 0x2e) << 1;
    *(byte *)(lVar14 + 0x3d) = *(byte *)(lVar14 + 0x2e) >> 7 | *(byte *)(lVar14 + 0x2d) << 1;
    *(byte *)(lVar14 + 0x3c) = *(byte *)(lVar14 + 0x2d) >> 7 | *(byte *)(lVar14 + 0x2c) << 1;
    auVar9[2] = cVar3 >> 7;
    auVar9._0_2_ = (short)cVar3;
    auVar9[3] = cVar3 >> 7;
    auVar9._4_4_ = 0;
    auVar9._8_8_ = uVar7;
    uVar16 = a64_TBL(ZEXT816(0),auVar9,uVar11);
    *(byte *)(lVar14 + 0x3b) = *(byte *)(lVar14 + 0x2c) >> 7 | *(byte *)(lVar14 + 0x2b) << 1;
    *(byte *)(lVar14 + 0x3a) = *(byte *)(lVar14 + 0x2b) >> 7 | *(byte *)(lVar14 + 0x2a) << 1;
    *(byte *)(lVar14 + 0x39) = *(byte *)(lVar14 + 0x2a) >> 7 | *(byte *)(lVar14 + 0x29) << 1;
    *(byte *)(lVar14 + 0x3f) =
         (byte)((ulong)(long)cVar3 >> 7) & 0x87 ^ *(byte *)(lVar14 + 0x2f) << 1;
    *(byte *)(lVar14 + 0x38) = *(byte *)(lVar14 + 0x29) >> 7 | bVar17 << 1;
    *(ulong *)(lVar14 + 0x30) =
         CONCAT17(bVar17 >> 7 | (char)((ulong)uVar16 >> 0x38) << 1,
                  CONCAT16((byte)((ulong)uVar7 >> 0x30) >> 7 | (char)((ulong)uVar16 >> 0x30) << 1,
                           CONCAT15((byte)((ulong)uVar7 >> 0x28) >> 7 |
                                    (char)((ulong)uVar16 >> 0x28) << 1,
                                    CONCAT14((byte)((ulong)uVar7 >> 0x20) >> 7 |
                                             (char)((ulong)uVar16 >> 0x20) << 1,
                                             CONCAT13((byte)((ulong)uVar7 >> 0x18) >> 7 |
                                                      (char)((ulong)uVar16 >> 0x18) << 1,
                                                      CONCAT12((byte)((ulong)uVar7 >> 0x10) >> 7 |
                                                               (char)((ulong)uVar16 >> 0x10) << 1,
                                                               CONCAT11((byte)((ulong)uVar7 >> 8) >>
                                                                        7 | (char)((ulong)uVar16 >>
                                                                                  8) << 1,
                                                                        (byte)uVar7 >> 7 |
                                                                        (char)uVar16 << 1)))))));
    lVar14 = param_1[0xb];
    cVar3 = *(char *)(lVar14 + 0x30);
    uVar7 = *(undefined8 *)(lVar14 + 0x31);
    bVar17 = (byte)((ulong)uVar7 >> 0x38);
    *(byte *)(lVar14 + 0x4d) = *(byte *)(lVar14 + 0x3e) >> 7 | *(byte *)(lVar14 + 0x3d) << 1;
    *(byte *)(lVar14 + 0x4e) = *(byte *)(lVar14 + 0x3f) >> 7 | *(byte *)(lVar14 + 0x3e) << 1;
    *(byte *)(lVar14 + 0x4c) = *(byte *)(lVar14 + 0x3d) >> 7 | *(byte *)(lVar14 + 0x3c) << 1;
    auVar10[2] = cVar3 >> 7;
    auVar10._0_2_ = (short)cVar3;
    auVar10[3] = cVar3 >> 7;
    auVar10._4_4_ = 0;
    auVar10._8_8_ = uVar7;
    uVar16 = a64_TBL(ZEXT816(0),auVar10,uVar11);
    *(byte *)(lVar14 + 0x4b) = *(byte *)(lVar14 + 0x3c) >> 7 | *(byte *)(lVar14 + 0x3b) << 1;
    *(byte *)(lVar14 + 0x4a) = *(byte *)(lVar14 + 0x3b) >> 7 | *(byte *)(lVar14 + 0x3a) << 1;
    *(byte *)(lVar14 + 0x49) = *(byte *)(lVar14 + 0x3a) >> 7 | *(byte *)(lVar14 + 0x39) << 1;
    *(byte *)(lVar14 + 0x4f) = (byte)((uint)(int)cVar3 >> 7) & 0x87 ^ *(byte *)(lVar14 + 0x3f) << 1;
    *(byte *)(lVar14 + 0x48) = *(byte *)(lVar14 + 0x39) >> 7 | bVar17 << 1;
    *(ulong *)(lVar14 + 0x40) =
         CONCAT17(bVar17 >> 7 | (char)((ulong)uVar16 >> 0x38) << 1,
                  CONCAT16((byte)((ulong)uVar7 >> 0x30) >> 7 | (char)((ulong)uVar16 >> 0x30) << 1,
                           CONCAT15((byte)((ulong)uVar7 >> 0x28) >> 7 |
                                    (char)((ulong)uVar16 >> 0x28) << 1,
                                    CONCAT14((byte)((ulong)uVar7 >> 0x20) >> 7 |
                                             (char)((ulong)uVar16 >> 0x20) << 1,
                                             CONCAT13((byte)((ulong)uVar7 >> 0x18) >> 7 |
                                                      (char)((ulong)uVar16 >> 0x18) << 1,
                                                      CONCAT12((byte)((ulong)uVar7 >> 0x10) >> 7 |
                                                               (char)((ulong)uVar16 >> 0x10) << 1,
                                                               CONCAT11((byte)((ulong)uVar7 >> 8) >>
                                                                        7 | (char)((ulong)uVar16 >>
                                                                                  8) << 1,
                                                                        (byte)uVar7 >> 7 |
                                                                        (char)uVar16 << 1)))))));
    param_1[5] = 4;
  }
  return lVar12 != 0;
}


