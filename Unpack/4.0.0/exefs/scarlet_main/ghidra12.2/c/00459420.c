/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00459420; name: FUN_00459420
 */


undefined8 FUN_00459420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = param_1[0xd];
  uVar10 = param_4 >> 4;
  uVar1 = uVar7 + uVar10;
  if ((uVar10 == 0) || (param_1[4] == 0)) {
    while (uVar7 = uVar7 + 1, uVar7 <= uVar1) {
      iVar6 = 0;
      if ((uVar7 & 1) == 0) {
        uVar10 = uVar7;
        do {
          uVar2 = (uint)uVar10;
          uVar10 = uVar10 >> 1;
          iVar6 = iVar6 + 1;
        } while ((uVar2 >> 1 & 1) == 0);
      }
      puVar5 = (ulong *)FUN_004592d0(param_1,iVar6);
      if (puVar5 == (ulong *)0x0) {
        return 0;
      }
      uVar10 = *puVar5 ^ param_1[0x12];
      param_1[0x12] = uVar10;
      uVar9 = puVar5[1] ^ param_1[0x13];
      param_1[0x13] = uVar9;
      uVar19 = param_2[1];
      uVar11 = *param_2;
      uVar28 = param_1[0x15];
      uVar27 = param_1[0x14];
      bVar12 = (byte)((ulong)uVar11 >> 8);
      bVar13 = (byte)((ulong)uVar11 >> 0x10);
      bVar14 = (byte)((ulong)uVar11 >> 0x18);
      bVar15 = (byte)((ulong)uVar11 >> 0x20);
      bVar16 = (byte)((ulong)uVar11 >> 0x28);
      bVar17 = (byte)((ulong)uVar11 >> 0x30);
      bVar18 = (byte)((ulong)uVar11 >> 0x38);
      bVar20 = (byte)((ulong)uVar19 >> 8);
      bVar21 = (byte)((ulong)uVar19 >> 0x10);
      bVar22 = (byte)((ulong)uVar19 >> 0x18);
      bVar23 = (byte)((ulong)uVar19 >> 0x20);
      bVar24 = (byte)((ulong)uVar19 >> 0x28);
      bVar25 = (byte)((ulong)uVar19 >> 0x30);
      bVar26 = (byte)((ulong)uVar19 >> 0x38);
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ bVar26,
                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ bVar25,
                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ bVar24,
                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^ bVar23,
                                               CONCAT13((byte)((ulong)uVar28 >> 0x18) ^ bVar22,
                                                        CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                 bVar21,CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ bVar20,(byte)uVar28 ^ (byte)uVar19)
                                                  ))))));
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ bVar18,
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ bVar17,
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ bVar16,
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^ bVar15,
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) ^ bVar14,
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                 bVar13,CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ bVar12,(byte)uVar27 ^ (byte)uVar11)
                                                  ))))));
      local_50 = CONCAT17(bVar18 ^ (byte)(uVar10 >> 0x38),
                          CONCAT16(bVar17 ^ (byte)(uVar10 >> 0x30),
                                   CONCAT15(bVar16 ^ (byte)(uVar10 >> 0x28),
                                            CONCAT14(bVar15 ^ (byte)(uVar10 >> 0x20),
                                                     CONCAT13(bVar14 ^ (byte)(uVar10 >> 0x18),
                                                              CONCAT12(bVar13 ^ (byte)(uVar10 >>
                                                                                      0x10),
                                                                       CONCAT11(bVar12 ^ (byte)(
                                                  uVar10 >> 8),(byte)uVar11 ^ (byte)uVar10)))))));
      uStack_48 = CONCAT17(bVar26 ^ (byte)(uVar9 >> 0x38),
                           CONCAT16(bVar25 ^ (byte)(uVar9 >> 0x30),
                                    CONCAT15(bVar24 ^ (byte)(uVar9 >> 0x28),
                                             CONCAT14(bVar23 ^ (byte)(uVar9 >> 0x20),
                                                      CONCAT13(bVar22 ^ (byte)(uVar9 >> 0x18),
                                                               CONCAT12(bVar21 ^ (byte)(uVar9 >> 
                                                  0x10),CONCAT11(bVar20 ^ (byte)(uVar9 >> 8),
                                                                 (byte)uVar19 ^ (byte)uVar9)))))));
      (*(code *)*param_1)(&local_50,&local_50,param_1[2]);
      uVar19 = param_1[0x13];
      uVar11 = param_1[0x12];
      local_50 = CONCAT17((byte)((ulong)local_50 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                          CONCAT16((byte)((ulong)local_50 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                   CONCAT15((byte)((ulong)local_50 >> 0x28) ^
                                            (byte)((ulong)uVar11 >> 0x28),
                                            CONCAT14((byte)((ulong)local_50 >> 0x20) ^
                                                     (byte)((ulong)uVar11 >> 0x20),
                                                     CONCAT13((byte)((ulong)local_50 >> 0x18) ^
                                                              (byte)((ulong)uVar11 >> 0x18),
                                                              CONCAT12((byte)((ulong)local_50 >>
                                                                             0x10) ^
                                                                       (byte)((ulong)uVar11 >> 0x10)
                                                                       ,CONCAT11((byte)((ulong)
                                                  local_50 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)local_50 ^ (byte)uVar11)))))));
      uStack_48 = CONCAT17((byte)((ulong)uStack_48 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                           CONCAT16((byte)((ulong)uStack_48 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                    ,CONCAT15((byte)((ulong)uStack_48 >> 0x28) ^
                                              (byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14((byte)((ulong)uStack_48 >> 0x20) ^
                                                       (byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13((byte)((ulong)uStack_48 >> 0x18) ^
                                                                (byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12((byte)((ulong)uStack_48 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uStack_48 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uStack_48 ^ (byte)uVar19)))))));
      param_3[1] = uStack_48;
      *param_3 = local_50;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar3 = FUN_004592d0(param_1,0x40 - LZCOUNT(uVar1 >> 1));
    if (lVar3 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,uVar10,param_1[2],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar7 = param_4 & 0xf;
  if (uVar7 != 0) {
    puVar4 = param_1 + 0x12;
    uVar19 = param_1[0x13];
    uVar11 = *puVar4;
    uVar28 = param_1[8];
    uVar27 = param_1[7];
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                  CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                           CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                             (byte)((ulong)uVar19 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                      (byte)((ulong)uVar19 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                               (byte)((ulong)uVar19 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                                        (byte)((ulong)uVar19 >> 8),
                                                                        (byte)uVar28 ^ (byte)uVar19)
                                                              ))))));
    *puVar4 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                       CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                         (byte)((ulong)uVar11 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                  (byte)((ulong)uVar11 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                           (byte)((ulong)uVar11 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                    (byte)((ulong)uVar11 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar27 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar11 >>
                                                                                   8),(byte)uVar27 ^
                                                                                      (byte)uVar11))
                                                          )))));
    (*(code *)*param_1)(puVar4,&local_50,param_1[2]);
    if (uVar7 == 1) {
      lVar8 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar8 = lVar3 + 2;
        *(byte *)((long)param_3 + lVar3) =
             *(byte *)((long)&local_50 + lVar3) ^ *(byte *)((long)param_2 + lVar3);
        ((byte *)((long)param_3 + lVar3))[1] =
             *(byte *)((long)&local_50 + lVar3 + 1) ^ ((byte *)((long)param_2 + lVar3))[1];
        lVar3 = lVar8;
      } while (uVar7 - (param_4 & 1) != lVar8);
    }
    if ((param_4 & 1) != 0) {
      *(byte *)((long)param_3 + lVar8) =
           *(byte *)((long)&local_50 + lVar8) ^ *(byte *)((long)param_2 + lVar8);
    }
    memset((undefined1 *)((ulong)&local_50 | uVar7),0,0x10 - uVar7);
    memcpy(&local_50,param_2,uVar7);
    *(undefined1 *)((ulong)&local_50 | uVar7) = 0x80;
    uVar19 = param_1[0x15];
    uVar11 = param_1[0x14];
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uStack_48 >> 0x38),
                  CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uStack_48 >> 0x30),
                           CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uStack_48 >> 0x28)
                                    ,CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                              (byte)((ulong)uStack_48 >> 0x20),
                                              CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                       (byte)((ulong)uStack_48 >> 0x18),
                                                       CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                (byte)((ulong)uStack_48 >> 0x10),
                                                                CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                         ^ (byte)((ulong)uStack_48
                                                                                 >> 8),
                                                                         (byte)uVar19 ^
                                                                         (byte)uStack_48)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ (byte)((ulong)local_50 >> 0x38),
                  CONCAT16((byte)((ulong)uVar11 >> 0x30) ^ (byte)((ulong)local_50 >> 0x30),
                           CONCAT15((byte)((ulong)uVar11 >> 0x28) ^ (byte)((ulong)local_50 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar11 >> 0x20) ^
                                             (byte)((ulong)local_50 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar11 >> 0x18) ^
                                                      (byte)((ulong)local_50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar11 >> 0x10) ^
                                                               (byte)((ulong)local_50 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar11 >> 8) ^
                                                                        (byte)((ulong)local_50 >> 8)
                                                                        ,(byte)uVar11 ^
                                                                         (byte)local_50)))))));
  }
  param_1[0xd] = uVar1;
  return 1;
}


