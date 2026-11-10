/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d6af0; name: FUN_003d6af0
 */


undefined8 FUN_003d6af0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar4 + 0x334) = 0;
  FUN_003d6bb0(lVar4 + 0x338,param_1,0x5000e);
  iVar3 = FUN_003cb8a0(param_1,*(long *)(param_1 + 0xa8) + 0x33c,*(long *)(param_1 + 0xa8) + 0x340,0
                      );
  if (iVar3 != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x640) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x334);
    uVar5 = *puVar1;
    *puVar1 = CONCAT17((byte)((ulong)uVar5 >> 0x38) | (byte)((ulong)DAT_03cb53d8 >> 0x38),
                       CONCAT16((byte)((ulong)uVar5 >> 0x30) | (byte)((ulong)DAT_03cb53d8 >> 0x30),
                                CONCAT15((byte)((ulong)uVar5 >> 0x28) |
                                         (byte)((ulong)DAT_03cb53d8 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar5 >> 0x20) |
                                                  (byte)((ulong)DAT_03cb53d8 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar5 >> 0x18) |
                                                           (byte)((ulong)DAT_03cb53d8 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar5 >> 0x10) |
                                                                    (byte)((ulong)DAT_03cb53d8 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((ulong)uVar5 >>
                                                                                   8) |
                                                                             (byte)((ulong)
                                                  DAT_03cb53d8 >> 8),
                                                  (byte)uVar5 | (byte)DAT_03cb53d8)))))));
    bVar2 = *(byte *)(param_1 + 0x938);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x938);
  }
  if ((bVar2 >> 5 & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x334);
    uVar5 = *puVar1;
    *puVar1 = CONCAT17((byte)((ulong)uVar5 >> 0x38) | (byte)((ulong)DAT_03cb5548 >> 0x38),
                       CONCAT16((byte)((ulong)uVar5 >> 0x30) | (byte)((ulong)DAT_03cb5548 >> 0x30),
                                CONCAT15((byte)((ulong)uVar5 >> 0x28) |
                                         (byte)((ulong)DAT_03cb5548 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar5 >> 0x20) |
                                                  (byte)((ulong)DAT_03cb5548 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar5 >> 0x18) |
                                                           (byte)((ulong)DAT_03cb5548 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar5 >> 0x10) |
                                                                    (byte)((ulong)DAT_03cb5548 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((ulong)uVar5 >>
                                                                                   8) |
                                                                             (byte)((ulong)
                                                  DAT_03cb5548 >> 8),
                                                  (byte)uVar5 | (byte)DAT_03cb5548)))))));
    return 1;
  }
  return 1;
}


