/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004542f0; name: FUN_004542f0
 */


undefined8 FUN_004542f0(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ulong uVar14;
  byte bVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  ulong uVar23;
  byte bVar30;
  byte bVar31;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulong uVar32;
  byte bVar40;
  undefined8 uVar33;
  byte bVar41;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  ulong uVar42;
  byte bVar50;
  undefined8 uVar43;
  ulong uVar51;
  ulong uVar52;
  undefined8 uVar53;
  ulong uVar54;
  undefined8 uVar55;
  ulong uVar56;
  undefined8 uVar57;
  ulong local_60 [2];
  
  bVar3 = *param_1;
  pcVar2 = *(code **)(param_1 + 0x28);
  uVar33 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar3 >> 6 & 1) == 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar33);
  }
  uVar4 = (ulong)bVar3 & 7;
  uVar12 = uVar4 ^ 0xf;
  *param_1 = (byte)uVar4;
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar12;
    if ((int)uVar12 == 0xe) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      lVar8 = -((ulong)bVar3 & 6);
      do {
        pbVar1 = param_1 + uVar6;
        uVar6 = uVar6 + 2;
        bVar13 = pbVar1[1];
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        uVar4 = (ulong)bVar13 << 8 | (uVar4 & 0xffffffffffff | (ulong)*pbVar1) << 0x10;
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0);
    }
    if ((bVar3 & 1) != 0) {
      bVar13 = param_1[uVar6];
      param_1[uVar6] = 0;
      uVar4 = (uVar4 | bVar13) << 8;
    }
  }
  bVar13 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar13) != param_4) {
    return 0xffffffff;
  }
  if (0xf < param_4) {
    do {
      (*pcVar2)(param_1,local_60,uVar33);
      bVar13 = param_1[0xf];
      param_1[0xf] = (byte)(bVar13 + 1);
      if ((((bVar13 + 1 >> 8 != 0) &&
           (bVar13 = param_1[0xe], param_1[0xe] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0)) &&
          (bVar13 = param_1[0xd], param_1[0xd] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0)) &&
         (((bVar13 = param_1[0xc], param_1[0xc] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0 &&
           (bVar13 = param_1[0xb], param_1[0xb] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0)) &&
          ((bVar13 = param_1[10], param_1[10] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0 &&
           (bVar13 = param_1[9], param_1[9] = (byte)(bVar13 + 1), bVar13 + 1 >> 8 != 0)))))) {
        param_1[8] = param_1[8] + 1;
      }
      uVar4 = *param_2;
      *param_3 = uVar4 ^ local_60[0];
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ uVar4 ^ local_60[0];
      uVar4 = param_2[1];
      param_3[1] = uVar4 ^ local_60[1];
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ uVar4 ^ local_60[1];
      (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar33);
      param_4 = param_4 - 0x10;
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
    } while (0xf < param_4);
  }
  if (param_4 == 0) goto LAB_00454654;
  (*pcVar2)(param_1,local_60,uVar33);
  if (param_4 < 0x20) {
    uVar4 = 0;
    uVar5 = 0;
LAB_00454618:
    do {
      uVar5 = uVar5 + 1;
      bVar13 = *(byte *)((long)param_2 + uVar4) ^ *(byte *)((long)local_60 + uVar4);
      *(byte *)((long)param_3 + uVar4) = bVar13;
      param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ bVar13;
      uVar4 = (ulong)uVar5;
    } while (uVar4 < param_4);
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    if (((int)(param_4 - 1) == -1) || (param_4 - 1 >> 0x20 != 0)) goto LAB_00454618;
    puVar7 = (ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)((long)puVar7 + param_4);
    puVar11 = (ulong *)((long)param_3 + param_4);
    uVar5 = 0;
    uVar4 = 0;
    if (((param_3 < puVar9 && puVar7 < puVar11) ||
        (((param_3 < (ulong *)((long)local_60 + param_4) && local_60 < puVar11 ||
          (param_3 < (ulong *)((long)param_2 + param_4) && param_2 < puVar11)) ||
         (puVar7 < (ulong *)((long)local_60 + param_4) && local_60 < puVar9)))) ||
       (puVar7 < (ulong *)((long)param_2 + param_4) && param_2 < puVar9)) goto LAB_00454618;
    uVar4 = param_4 & 0xffffffffffffffe0;
    uVar5 = (uint)param_4 & 0xffffffe0;
    puVar7 = local_60 + 2;
    puVar9 = param_2 + 2;
    puVar11 = param_3 + 2;
    uVar6 = uVar4;
    pbVar1 = param_1;
    do {
      pbVar10 = pbVar1 + 0x20;
      uVar23 = puVar7[-1];
      uVar14 = puVar7[-2];
      uVar42 = puVar7[1];
      uVar32 = *puVar7;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 0x20;
      uVar52 = puVar9[-1];
      uVar51 = puVar9[-2];
      uVar56 = puVar9[1];
      uVar54 = *puVar9;
      puVar9 = puVar9 + 4;
      bVar31 = (byte)uVar54 ^ (byte)uVar32;
      bVar34 = (byte)(uVar54 >> 8) ^ (byte)(uVar32 >> 8);
      bVar35 = (byte)(uVar54 >> 0x10) ^ (byte)(uVar32 >> 0x10);
      bVar36 = (byte)(uVar54 >> 0x18) ^ (byte)(uVar32 >> 0x18);
      bVar37 = (byte)(uVar54 >> 0x20) ^ (byte)(uVar32 >> 0x20);
      bVar38 = (byte)(uVar54 >> 0x28) ^ (byte)(uVar32 >> 0x28);
      bVar39 = (byte)(uVar54 >> 0x30) ^ (byte)(uVar32 >> 0x30);
      bVar40 = (byte)(uVar54 >> 0x38) ^ (byte)(uVar32 >> 0x38);
      bVar41 = (byte)uVar56 ^ (byte)uVar42;
      bVar44 = (byte)(uVar56 >> 8) ^ (byte)(uVar42 >> 8);
      bVar45 = (byte)(uVar56 >> 0x10) ^ (byte)(uVar42 >> 0x10);
      bVar46 = (byte)(uVar56 >> 0x18) ^ (byte)(uVar42 >> 0x18);
      bVar47 = (byte)(uVar56 >> 0x20) ^ (byte)(uVar42 >> 0x20);
      bVar48 = (byte)(uVar56 >> 0x28) ^ (byte)(uVar42 >> 0x28);
      bVar49 = (byte)(uVar56 >> 0x30) ^ (byte)(uVar42 >> 0x30);
      bVar50 = (byte)(uVar56 >> 0x38) ^ (byte)(uVar42 >> 0x38);
      bVar13 = (byte)uVar51 ^ (byte)uVar14;
      bVar15 = (byte)(uVar51 >> 8) ^ (byte)(uVar14 >> 8);
      bVar16 = (byte)(uVar51 >> 0x10) ^ (byte)(uVar14 >> 0x10);
      bVar17 = (byte)(uVar51 >> 0x18) ^ (byte)(uVar14 >> 0x18);
      bVar18 = (byte)(uVar51 >> 0x20) ^ (byte)(uVar14 >> 0x20);
      bVar19 = (byte)(uVar51 >> 0x28) ^ (byte)(uVar14 >> 0x28);
      bVar20 = (byte)(uVar51 >> 0x30) ^ (byte)(uVar14 >> 0x30);
      bVar21 = (byte)(uVar51 >> 0x38) ^ (byte)(uVar14 >> 0x38);
      bVar22 = (byte)uVar52 ^ (byte)uVar23;
      bVar24 = (byte)(uVar52 >> 8) ^ (byte)(uVar23 >> 8);
      bVar25 = (byte)(uVar52 >> 0x10) ^ (byte)(uVar23 >> 0x10);
      bVar26 = (byte)(uVar52 >> 0x18) ^ (byte)(uVar23 >> 0x18);
      bVar27 = (byte)(uVar52 >> 0x20) ^ (byte)(uVar23 >> 0x20);
      bVar28 = (byte)(uVar52 >> 0x28) ^ (byte)(uVar23 >> 0x28);
      bVar29 = (byte)(uVar52 >> 0x30) ^ (byte)(uVar23 >> 0x30);
      bVar30 = (byte)(uVar52 >> 0x38) ^ (byte)(uVar23 >> 0x38);
      puVar11[-1] = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,
                                                  CONCAT12(bVar25,CONCAT11(bVar24,bVar22)))))));
      puVar11[-2] = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar13)))))));
      puVar11[1] = CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar47,CONCAT13(bVar46,
                                                  CONCAT12(bVar45,CONCAT11(bVar44,bVar41)))))));
      *puVar11 = CONCAT17(bVar40,CONCAT16(bVar39,CONCAT15(bVar38,CONCAT14(bVar37,CONCAT13(bVar36,
                                                  CONCAT12(bVar35,CONCAT11(bVar34,bVar31)))))));
      puVar11 = puVar11 + 4;
      uVar53 = *(undefined8 *)(pbVar1 + 0x18);
      uVar43 = *(undefined8 *)(pbVar1 + 0x10);
      uVar57 = *(undefined8 *)(pbVar1 + 0x28);
      uVar55 = *(undefined8 *)pbVar10;
      *(ulong *)(pbVar1 + 0x18) =
           CONCAT17((byte)((ulong)uVar53 >> 0x38) ^ bVar30,
                    CONCAT16((byte)((ulong)uVar53 >> 0x30) ^ bVar29,
                             CONCAT15((byte)((ulong)uVar53 >> 0x28) ^ bVar28,
                                      CONCAT14((byte)((ulong)uVar53 >> 0x20) ^ bVar27,
                                               CONCAT13((byte)((ulong)uVar53 >> 0x18) ^ bVar26,
                                                        CONCAT12((byte)((ulong)uVar53 >> 0x10) ^
                                                                 bVar25,CONCAT11((byte)((ulong)
                                                  uVar53 >> 8) ^ bVar24,(byte)uVar53 ^ bVar22)))))))
      ;
      *(ulong *)(pbVar1 + 0x10) =
           CONCAT17((byte)((ulong)uVar43 >> 0x38) ^ bVar21,
                    CONCAT16((byte)((ulong)uVar43 >> 0x30) ^ bVar20,
                             CONCAT15((byte)((ulong)uVar43 >> 0x28) ^ bVar19,
                                      CONCAT14((byte)((ulong)uVar43 >> 0x20) ^ bVar18,
                                               CONCAT13((byte)((ulong)uVar43 >> 0x18) ^ bVar17,
                                                        CONCAT12((byte)((ulong)uVar43 >> 0x10) ^
                                                                 bVar16,CONCAT11((byte)((ulong)
                                                  uVar43 >> 8) ^ bVar15,(byte)uVar43 ^ bVar13)))))))
      ;
      *(ulong *)(pbVar1 + 0x28) =
           CONCAT17((byte)((ulong)uVar57 >> 0x38) ^ bVar50,
                    CONCAT16((byte)((ulong)uVar57 >> 0x30) ^ bVar49,
                             CONCAT15((byte)((ulong)uVar57 >> 0x28) ^ bVar48,
                                      CONCAT14((byte)((ulong)uVar57 >> 0x20) ^ bVar47,
                                               CONCAT13((byte)((ulong)uVar57 >> 0x18) ^ bVar46,
                                                        CONCAT12((byte)((ulong)uVar57 >> 0x10) ^
                                                                 bVar45,CONCAT11((byte)((ulong)
                                                  uVar57 >> 8) ^ bVar44,(byte)uVar57 ^ bVar41)))))))
      ;
      *(ulong *)pbVar10 =
           CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ bVar40,
                    CONCAT16((byte)((ulong)uVar55 >> 0x30) ^ bVar39,
                             CONCAT15((byte)((ulong)uVar55 >> 0x28) ^ bVar38,
                                      CONCAT14((byte)((ulong)uVar55 >> 0x20) ^ bVar37,
                                               CONCAT13((byte)((ulong)uVar55 >> 0x18) ^ bVar36,
                                                        CONCAT12((byte)((ulong)uVar55 >> 0x10) ^
                                                                 bVar35,CONCAT11((byte)((ulong)
                                                  uVar55 >> 8) ^ bVar34,(byte)uVar55 ^ bVar31)))))))
      ;
      pbVar1 = pbVar10;
    } while (uVar6 != 0);
    if (param_4 != uVar4) goto LAB_00454618;
  }
  (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar33);
LAB_00454654:
  memset(param_1 + uVar12,0,(ulong)(0x10 - (int)uVar12));
  (*pcVar2)(param_1,local_60,uVar33);
  *param_1 = bVar3;
  uVar43 = *(undefined8 *)(param_1 + 0x18);
  uVar33 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar43 >> 0x38) ^ (byte)(local_60[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar43 >> 0x30) ^ (byte)(local_60[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar43 >> 0x28) ^ (byte)(local_60[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                           (byte)(local_60[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar43 >> 0x18) ^
                                                    (byte)(local_60[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar43 >> 0x10) ^
                                                             (byte)(local_60[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                                      (byte)(local_60[1] >> 8),
                                                                      (byte)uVar43 ^
                                                                      (byte)local_60[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)(local_60[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)(local_60[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar33 >> 0x28) ^ (byte)(local_60[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                           (byte)(local_60[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                    (byte)(local_60[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                             (byte)(local_60[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                                      (byte)(local_60[0] >> 8),
                                                                      (byte)uVar33 ^
                                                                      (byte)local_60[0])))))));
  return 0;
}


