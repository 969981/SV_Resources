/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00459660; name: FUN_00459660
 */


undefined8 FUN_00459660(undefined8 *param_1,ulong *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar14;
  byte bVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_50;
  ulong uStack_48;
  
  uVar8 = param_1[0xd];
  uVar12 = param_4 >> 4;
  uVar1 = uVar8 + uVar12;
  if ((uVar12 == 0) || (param_1[4] == 0)) {
    while (uVar8 = uVar8 + 1, uVar8 <= uVar1) {
      iVar7 = 0;
      if ((uVar8 & 1) == 0) {
        uVar12 = uVar8;
        do {
          uVar3 = (uint)uVar12;
          uVar12 = uVar12 >> 1;
          iVar7 = iVar7 + 1;
        } while ((uVar3 >> 1 & 1) == 0);
      }
      puVar6 = (ulong *)FUN_004592d0(param_1,iVar7);
      if (puVar6 == (ulong *)0x0) {
        return 0;
      }
      uVar9 = *puVar6;
      uVar12 = param_1[0x12];
      uVar2 = param_1[0x13];
      param_1[0x12] = uVar9 ^ uVar12;
      uVar11 = puVar6[1];
      param_1[0x13] = uVar11 ^ uVar2;
      local_50 = *param_2 ^ uVar9 ^ uVar12;
      uStack_48 = param_2[1] ^ uVar11 ^ uVar2;
      (*(code *)param_1[1])(&local_50,&local_50,param_1[3]);
      uVar23 = param_1[0x13];
      uVar14 = param_1[0x12];
      bVar13 = (byte)local_50 ^ (byte)uVar14;
      bVar15 = (byte)(local_50 >> 8) ^ (byte)((ulong)uVar14 >> 8);
      bVar16 = (byte)(local_50 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10);
      bVar17 = (byte)(local_50 >> 0x18) ^ (byte)((ulong)uVar14 >> 0x18);
      bVar18 = (byte)(local_50 >> 0x20) ^ (byte)((ulong)uVar14 >> 0x20);
      bVar19 = (byte)(local_50 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28);
      bVar20 = (byte)(local_50 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30);
      bVar21 = (byte)(local_50 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38);
      local_50 = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar13)))))));
      bVar22 = (byte)uStack_48 ^ (byte)uVar23;
      bVar24 = (byte)(uStack_48 >> 8) ^ (byte)((ulong)uVar23 >> 8);
      bVar25 = (byte)(uStack_48 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10);
      bVar26 = (byte)(uStack_48 >> 0x18) ^ (byte)((ulong)uVar23 >> 0x18);
      bVar27 = (byte)(uStack_48 >> 0x20) ^ (byte)((ulong)uVar23 >> 0x20);
      bVar28 = (byte)(uStack_48 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28);
      bVar29 = (byte)(uStack_48 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30);
      bVar30 = (byte)(uStack_48 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38);
      uStack_48 = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,
                                                  CONCAT12(bVar25,CONCAT11(bVar24,bVar22)))))));
      uVar23 = param_1[0x15];
      uVar14 = param_1[0x14];
      param_1[0x15] =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ bVar30,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ bVar29,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ bVar28,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^ bVar27,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) ^ bVar26,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                 bVar25,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ bVar24,(byte)uVar23 ^ bVar22)))))))
      ;
      param_1[0x14] =
           CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ bVar21,
                    CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ bVar20,
                             CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ bVar19,
                                      CONCAT14((byte)((ulong)uVar14 >> 0x20) ^ bVar18,
                                               CONCAT13((byte)((ulong)uVar14 >> 0x18) ^ bVar17,
                                                        CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                                 bVar16,CONCAT11((byte)((ulong)
                                                  uVar14 >> 8) ^ bVar15,(byte)uVar14 ^ bVar13)))))))
      ;
      param_3[1] = uStack_48;
      *param_3 = local_50;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
  }
  else {
    lVar4 = FUN_004592d0(param_1,0x40 - LZCOUNT(uVar1 >> 1));
    if (lVar4 == 0) {
      return 0;
    }
    (*(code *)param_1[4])
              (param_2,param_3,uVar12,param_1[3],param_1[0xd] + 1,param_1 + 0x12,param_1[0xb],
               param_1 + 0x14);
  }
  uVar8 = param_4 & 0xf;
  if (uVar8 != 0) {
    puVar5 = param_1 + 0x12;
    uVar23 = param_1[0x13];
    uVar14 = *puVar5;
    uVar32 = param_1[8];
    uVar31 = param_1[7];
    param_1[0x13] =
         CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                  CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                           CONCAT15((byte)((ulong)uVar32 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                             (byte)((ulong)uVar23 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                      (byte)((ulong)uVar23 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                               (byte)((ulong)uVar23 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                        (byte)((ulong)uVar23 >> 8),
                                                                        (byte)uVar32 ^ (byte)uVar23)
                                                              ))))));
    *puVar5 = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                       CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                                CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                         (byte)((ulong)uVar14 >> 0x28),
                                         CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                  (byte)((ulong)uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar31 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar31 ^
                                                                                      (byte)uVar14))
                                                          )))));
    (*(code *)*param_1)(puVar5,&local_50,param_1[2]);
    if (uVar8 == 1) {
      lVar10 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar10 = lVar4 + 2;
        *(byte *)((long)param_3 + lVar4) =
             *(byte *)((long)&local_50 + lVar4) ^ *(byte *)((long)param_2 + lVar4);
        ((byte *)((long)param_3 + lVar4))[1] =
             *(byte *)((long)&local_50 + lVar4 + 1) ^ ((byte *)((long)param_2 + lVar4))[1];
        lVar4 = lVar10;
      } while (uVar8 - (param_4 & 1) != lVar10);
    }
    if ((param_4 & 1) != 0) {
      *(byte *)((long)param_3 + lVar10) =
           *(byte *)((long)&local_50 + lVar10) ^ *(byte *)((long)param_2 + lVar10);
    }
    memset((undefined1 *)((ulong)&local_50 | uVar8),0,0x10 - uVar8);
    memcpy(&local_50,param_3,uVar8);
    *(undefined1 *)((ulong)&local_50 | uVar8) = 0x80;
    uVar23 = param_1[0x15];
    uVar14 = param_1[0x14];
    param_1[0x15] =
         CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(uStack_48 >> 0x38),
                  CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(uStack_48 >> 0x30),
                           CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)(uStack_48 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                             (byte)(uStack_48 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                      (byte)(uStack_48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                               (byte)(uStack_48 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                        (byte)(uStack_48 >> 8),
                                                                        (byte)uVar23 ^
                                                                        (byte)uStack_48)))))));
    param_1[0x14] =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)(local_50 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)(local_50 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)(local_50 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)(local_50 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)(local_50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)(local_50 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                        (byte)(local_50 >> 8),
                                                                        (byte)uVar14 ^
                                                                        (byte)local_50)))))));
  }
  param_1[0xd] = uVar1;
  return 1;
}


