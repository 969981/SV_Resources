/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004598a0; name: FUN_004598a0
 */


undefined8 FUN_004598a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_3 - 1U < 0x10) {
    uVar5 = param_1[0x13];
    uVar3 = param_1[0x12];
    uVar2 = param_1[0x15];
    uVar1 = param_1[0x14];
    uVar6 = param_1[10];
    uVar4 = param_1[9];
    local_30 = CONCAT17((byte)((ulong)uVar3 >> 0x38) ^ (byte)((ulong)uVar1 >> 0x38) ^
                        (byte)((ulong)uVar4 >> 0x38),
                        CONCAT16((byte)((ulong)uVar3 >> 0x30) ^ (byte)((ulong)uVar1 >> 0x30) ^
                                 (byte)((ulong)uVar4 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar3 >> 0x28) ^
                                          (byte)((ulong)uVar1 >> 0x28) ^
                                          (byte)((ulong)uVar4 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar3 >> 0x20) ^
                                                   (byte)((ulong)uVar1 >> 0x20) ^
                                                   (byte)((ulong)uVar4 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar3 >> 0x18) ^
                                                            (byte)((ulong)uVar1 >> 0x18) ^
                                                            (byte)((ulong)uVar4 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar3 >> 0x10) ^
                                                                     (byte)((ulong)uVar1 >> 0x10) ^
                                                                     (byte)((ulong)uVar4 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar3 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar1 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar4 >>
                                                                                    8),(byte)uVar3 ^
                                                                                       (byte)uVar1 ^
                                                                                       (byte)uVar4))
                                                           )))));
    uStack_28 = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar2 >> 0x38) ^
                         (byte)((ulong)uVar6 >> 0x38),
                         CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar2 >> 0x30) ^
                                  (byte)((ulong)uVar6 >> 0x30),
                                  CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                           (byte)((ulong)uVar2 >> 0x28) ^
                                           (byte)((ulong)uVar6 >> 0x28),
                                           CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                    (byte)((ulong)uVar2 >> 0x20) ^
                                                    (byte)((ulong)uVar6 >> 0x20),
                                                    CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                             (byte)((ulong)uVar2 >> 0x18) ^
                                                             (byte)((ulong)uVar6 >> 0x18),
                                                             CONCAT12((byte)((ulong)uVar5 >> 0x10) ^
                                                                      (byte)((ulong)uVar2 >> 0x10) ^
                                                                      (byte)((ulong)uVar6 >> 0x10),
                                                                      CONCAT11((byte)((ulong)uVar5
                                                                                     >> 8) ^
                                                                               (byte)((ulong)uVar2
                                                                                     >> 8) ^
                                                                               (byte)((ulong)uVar6
                                                                                     >> 8),
                                                                               (byte)uVar5 ^
                                                                               (byte)uVar2 ^
                                                                               (byte)uVar6)))))));
    (*(code *)*param_1)(&local_30,&local_30,param_1[2]);
    uVar2 = param_1[0x11];
    uVar1 = param_1[0x10];
    local_30 = CONCAT17((byte)((ulong)uVar1 >> 0x38) ^ (byte)((ulong)local_30 >> 0x38),
                        CONCAT16((byte)((ulong)uVar1 >> 0x30) ^ (byte)((ulong)local_30 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar1 >> 0x28) ^
                                          (byte)((ulong)local_30 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar1 >> 0x20) ^
                                                   (byte)((ulong)local_30 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar1 >> 0x18) ^
                                                            (byte)((ulong)local_30 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar1 >> 0x10) ^
                                                                     (byte)((ulong)local_30 >> 0x10)
                                                                     ,CONCAT11((byte)((ulong)uVar1
                                                                                     >> 8) ^
                                                                               (byte)((ulong)
                                                  local_30 >> 8),(byte)uVar1 ^ (byte)local_30)))))))
    ;
    uStack_28 = CONCAT17((byte)((ulong)uVar2 >> 0x38) ^ (byte)((ulong)uStack_28 >> 0x38),
                         CONCAT16((byte)((ulong)uVar2 >> 0x30) ^ (byte)((ulong)uStack_28 >> 0x30),
                                  CONCAT15((byte)((ulong)uVar2 >> 0x28) ^
                                           (byte)((ulong)uStack_28 >> 0x28),
                                           CONCAT14((byte)((ulong)uVar2 >> 0x20) ^
                                                    (byte)((ulong)uStack_28 >> 0x20),
                                                    CONCAT13((byte)((ulong)uVar2 >> 0x18) ^
                                                             (byte)((ulong)uStack_28 >> 0x18),
                                                             CONCAT12((byte)((ulong)uVar2 >> 0x10) ^
                                                                      (byte)((ulong)uStack_28 >>
                                                                            0x10),
                                                                      CONCAT11((byte)((ulong)uVar2
                                                                                     >> 8) ^
                                                                               (byte)((ulong)
                                                  uStack_28 >> 8),(byte)uVar2 ^ (byte)uStack_28)))))
                                 ));
    uVar1 = FUN_003f6d80(&local_30,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


