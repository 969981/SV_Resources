/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004592d0; name: FUN_004592d0
 */


long FUN_004592d0(long param_1,ulong param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar9;
  undefined8 uVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar6 < param_2) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    if (uVar5 <= param_2) {
      lVar4 = ((param_2 - uVar5) + 4 & 0xfffffffffffffffc) + uVar5;
      *(long *)(param_1 + 0x30) = lVar4;
      lVar4 = FUN_00452db0(*(undefined8 *)(param_1 + 0x58),lVar4 * 0x10,
                           "external/openssl/crypto/modes/ocb128.c",0x71);
      if (lVar4 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0x58) = lVar4;
    }
    uVar3 = DAT_03cb53a0;
    uVar5 = uVar6 << 4 | 0xf;
    do {
      pbVar1 = (byte *)(*(long *)(param_1 + 0x58) + uVar5);
      uVar5 = uVar5 + 0x10;
      uVar7 = *(undefined8 *)(pbVar1 + -0xe);
      pbVar1[0xe] = pbVar1[-1] >> 7 | pbVar1[-2] << 1;
      pbVar1[0xd] = pbVar1[-2] >> 7 | pbVar1[-3] << 1;
      bVar9 = (byte)((ulong)uVar7 >> 0x38);
      auVar2._1_7_ = 0;
      auVar2[0] = pbVar1[-0xf];
      auVar2._8_8_ = uVar7;
      uVar8 = a64_TBL(ZEXT816(0),auVar2,uVar3);
      pbVar1[0xf] = *pbVar1 >> 7 | pbVar1[-1] << 1;
      uVar6 = uVar6 + 1;
      pbVar1[0xc] = pbVar1[-3] >> 7 | pbVar1[-4] << 1;
      pbVar1[0xb] = pbVar1[-4] >> 7 | pbVar1[-5] << 1;
      pbVar1[10] = pbVar1[-5] >> 7 | pbVar1[-6] << 1;
      pbVar1[0x10] = pbVar1[-0xf] >> 7 ^ *pbVar1 << 1;
      pbVar1[9] = pbVar1[-6] >> 7 | bVar9 << 1;
      *(ulong *)(pbVar1 + 1) =
           CONCAT17(bVar9 >> 7 | (char)((ulong)uVar8 >> 0x38) << 1,
                    CONCAT16((byte)((ulong)uVar7 >> 0x30) >> 7 | (char)((ulong)uVar8 >> 0x30) << 1,
                             CONCAT15((byte)((ulong)uVar7 >> 0x28) >> 7 |
                                      (char)((ulong)uVar8 >> 0x28) << 1,
                                      CONCAT14((byte)((ulong)uVar7 >> 0x20) >> 7 |
                                               (char)((ulong)uVar8 >> 0x20) << 1,
                                               CONCAT13((byte)((ulong)uVar7 >> 0x18) >> 7 |
                                                        (char)((ulong)uVar8 >> 0x18) << 1,
                                                        CONCAT12((byte)((ulong)uVar7 >> 0x10) >> 7 |
                                                                 (char)((ulong)uVar8 >> 0x10) << 1,
                                                                 CONCAT11((byte)((ulong)uVar7 >> 8)
                                                                          >> 7 | (char)((ulong)uVar8
                                                                                       >> 8) << 1,
                                                                          (byte)uVar7 >> 7 |
                                                                          (char)uVar8 << 1)))))));
    } while (param_2 != uVar6);
    *(ulong *)(param_1 + 0x28) = param_2;
  }
  return *(long *)(param_1 + 0x58) + param_2 * 0x10;
}


