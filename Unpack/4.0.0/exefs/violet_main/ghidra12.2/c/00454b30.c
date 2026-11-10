/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00454b30; name: FUN_00454b30
 */


undefined8 FUN_00454b30(byte *param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar15;
  byte bVar22;
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar24;
  byte bVar31;
  byte bVar32;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined8 uVar33;
  undefined8 uVar34;
  byte bVar41;
  byte bVar42;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined8 uVar43;
  byte bVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  byte local_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar33 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar33);
  }
  uVar4 = (ulong)bVar2 & 7;
  uVar13 = uVar4 ^ 0xf;
  *param_1 = (byte)uVar4;
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar13;
    if ((int)uVar13 == 0xe) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      lVar8 = -((ulong)bVar2 & 6);
      do {
        pbVar7 = param_1 + uVar6;
        uVar6 = uVar6 + 2;
        bVar14 = pbVar7[1];
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        uVar4 = (ulong)bVar14 << 8 | (uVar4 & 0xffffffffffff | (ulong)*pbVar7) << 0x10;
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0);
    }
    if ((bVar2 & 1) != 0) {
      bVar14 = param_1[uVar6];
      param_1[uVar6] = 0;
      uVar4 = (uVar4 | bVar14) << 8;
    }
  }
  bVar14 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar14) != param_4) {
    return 0xffffffff;
  }
  uVar4 = param_4 >> 4;
  if (uVar4 == 0) {
    uVar6 = param_4;
  }
  else {
    (*param_5)(param_2,param_3,uVar4,uVar33,param_1,param_1 + 0x10);
    uVar6 = param_4 & 0xf;
    if (uVar6 == 0) goto LAB_00454db0;
    param_2 = param_2 + (param_4 & 0xfffffffffffffff0);
    param_3 = param_3 + (param_4 & 0xfffffffffffffff0);
    uVar4 = (ulong)param_1[0xf] + (uVar4 & 0xff);
    param_1[0xf] = (byte)uVar4;
    uVar4 = uVar4 >> 8;
    if (uVar4 != 0 || param_4 >> 0xc != 0) {
      uVar4 = uVar4 + (param_4 >> 0xc & 0xff) + (ulong)param_1[0xe];
      param_1[0xe] = (byte)uVar4;
      uVar4 = uVar4 >> 8;
      if (uVar4 != 0 || param_4 >> 0x14 != 0) {
        uVar4 = uVar4 + (param_4 >> 0x14 & 0xff) + (ulong)param_1[0xd];
        param_1[0xd] = (byte)uVar4;
        uVar4 = uVar4 >> 8;
        if (uVar4 != 0 || param_4 >> 0x1c != 0) {
          uVar4 = uVar4 + (param_4 >> 0x1c & 0xff) + (ulong)param_1[0xc];
          param_1[0xc] = (byte)uVar4;
          uVar4 = uVar4 >> 8;
          if (uVar4 != 0 || param_4 >> 0x24 != 0) {
            uVar4 = uVar4 + (param_4 >> 0x24 & 0xff) + (ulong)param_1[0xb];
            param_1[0xb] = (byte)uVar4;
            uVar4 = uVar4 >> 8;
            if (uVar4 != 0 || param_4 >> 0x2c != 0) {
              uVar4 = uVar4 + (param_4 >> 0x2c & 0xff) + (ulong)param_1[10];
              param_1[10] = (byte)uVar4;
              uVar4 = uVar4 >> 8;
              if (uVar4 != 0 || param_4 >> 0x34 != 0) {
                uVar4 = uVar4 + (param_4 >> 0x34 & 0xff) + (ulong)param_1[9];
                param_1[9] = (byte)uVar4;
                if (uVar4 >> 8 != 0 || param_4 >> 0x3c != 0) {
                  param_1[8] = param_1[8] + (char)(uVar4 >> 8) + (byte)(param_4 >> 0x3c);
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar6 == 0) goto LAB_00454db0;
  (*pcVar1)(param_1,local_70,uVar33);
  if (uVar6 < 0x20) {
    uVar4 = 0;
    uVar5 = 0;
LAB_00454d74:
    do {
      uVar5 = uVar5 + 1;
      bVar14 = local_70[uVar4];
      bVar16 = param_2[uVar4];
      param_3[uVar4] = bVar16 ^ bVar14;
      param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ bVar16 ^ bVar14;
      uVar4 = (ulong)uVar5;
    } while (uVar4 < uVar6);
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    if (((int)(uVar6 - 1) == -1) || (uVar6 - 1 >> 0x20 != 0)) goto LAB_00454d74;
    pbVar7 = param_1 + 0x10;
    uVar5 = 0;
    uVar4 = 0;
    if ((param_3 < pbVar7 + uVar6 && pbVar7 < param_3 + uVar6) ||
       ((param_3 < param_2 + uVar6 && param_2 < param_3 + uVar6 ||
        (pbVar7 < param_2 + uVar6 && param_2 < pbVar7 + uVar6)))) goto LAB_00454d74;
    uVar4 = uVar6 & 0xffffffffffffffe0;
    uVar5 = (uint)uVar6 & 0xffffffe0;
    pbVar7 = local_70 + 0x10;
    pbVar9 = param_2 + 0x10;
    pbVar11 = param_3 + 0x10;
    uVar12 = uVar4;
    pbVar3 = param_1;
    do {
      pbVar10 = pbVar3 + 0x20;
      uVar24 = *(undefined8 *)(pbVar7 + -8);
      uVar15 = *(undefined8 *)(pbVar7 + -0x10);
      uVar43 = *(undefined8 *)(pbVar7 + 8);
      uVar34 = *(undefined8 *)pbVar7;
      pbVar7 = pbVar7 + 0x20;
      uVar12 = uVar12 - 0x20;
      uVar52 = *(undefined8 *)(pbVar9 + -8);
      uVar51 = *(undefined8 *)(pbVar9 + -0x10);
      uVar54 = *(undefined8 *)(pbVar9 + 8);
      uVar53 = *(undefined8 *)pbVar9;
      pbVar9 = pbVar9 + 0x20;
      bVar32 = (byte)uVar53 ^ (byte)uVar34;
      bVar35 = (byte)((ulong)uVar53 >> 8) ^ (byte)((ulong)uVar34 >> 8);
      bVar36 = (byte)((ulong)uVar53 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10);
      bVar37 = (byte)((ulong)uVar53 >> 0x18) ^ (byte)((ulong)uVar34 >> 0x18);
      bVar38 = (byte)((ulong)uVar53 >> 0x20) ^ (byte)((ulong)uVar34 >> 0x20);
      bVar39 = (byte)((ulong)uVar53 >> 0x28) ^ (byte)((ulong)uVar34 >> 0x28);
      bVar40 = (byte)((ulong)uVar53 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30);
      bVar41 = (byte)((ulong)uVar53 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38);
      bVar42 = (byte)uVar54 ^ (byte)uVar43;
      bVar44 = (byte)((ulong)uVar54 >> 8) ^ (byte)((ulong)uVar43 >> 8);
      bVar45 = (byte)((ulong)uVar54 >> 0x10) ^ (byte)((ulong)uVar43 >> 0x10);
      bVar46 = (byte)((ulong)uVar54 >> 0x18) ^ (byte)((ulong)uVar43 >> 0x18);
      bVar47 = (byte)((ulong)uVar54 >> 0x20) ^ (byte)((ulong)uVar43 >> 0x20);
      bVar48 = (byte)((ulong)uVar54 >> 0x28) ^ (byte)((ulong)uVar43 >> 0x28);
      bVar49 = (byte)((ulong)uVar54 >> 0x30) ^ (byte)((ulong)uVar43 >> 0x30);
      bVar50 = (byte)((ulong)uVar54 >> 0x38) ^ (byte)((ulong)uVar43 >> 0x38);
      bVar14 = (byte)uVar51 ^ (byte)uVar15;
      bVar16 = (byte)((ulong)uVar51 >> 8) ^ (byte)((ulong)uVar15 >> 8);
      bVar17 = (byte)((ulong)uVar51 >> 0x10) ^ (byte)((ulong)uVar15 >> 0x10);
      bVar18 = (byte)((ulong)uVar51 >> 0x18) ^ (byte)((ulong)uVar15 >> 0x18);
      bVar19 = (byte)((ulong)uVar51 >> 0x20) ^ (byte)((ulong)uVar15 >> 0x20);
      bVar20 = (byte)((ulong)uVar51 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28);
      bVar21 = (byte)((ulong)uVar51 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30);
      bVar22 = (byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38);
      bVar23 = (byte)uVar52 ^ (byte)uVar24;
      bVar25 = (byte)((ulong)uVar52 >> 8) ^ (byte)((ulong)uVar24 >> 8);
      bVar26 = (byte)((ulong)uVar52 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10);
      bVar27 = (byte)((ulong)uVar52 >> 0x18) ^ (byte)((ulong)uVar24 >> 0x18);
      bVar28 = (byte)((ulong)uVar52 >> 0x20) ^ (byte)((ulong)uVar24 >> 0x20);
      bVar29 = (byte)((ulong)uVar52 >> 0x28) ^ (byte)((ulong)uVar24 >> 0x28);
      bVar30 = (byte)((ulong)uVar52 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30);
      bVar31 = (byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38);
      *(ulong *)(pbVar11 + -8) =
           CONCAT17(bVar31,CONCAT16(bVar30,CONCAT15(bVar29,CONCAT14(bVar28,CONCAT13(bVar27,CONCAT12(
                                                  bVar26,CONCAT11(bVar25,bVar23)))))));
      *(ulong *)(pbVar11 + -0x10) =
           CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(bVar18,CONCAT12(
                                                  bVar17,CONCAT11(bVar16,bVar14)))))));
      *(ulong *)(pbVar11 + 8) =
           CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar47,CONCAT13(bVar46,CONCAT12(
                                                  bVar45,CONCAT11(bVar44,bVar42)))))));
      *(ulong *)pbVar11 =
           CONCAT17(bVar41,CONCAT16(bVar40,CONCAT15(bVar39,CONCAT14(bVar38,CONCAT13(bVar37,CONCAT12(
                                                  bVar36,CONCAT11(bVar35,bVar32)))))));
      pbVar11 = pbVar11 + 0x20;
      uVar24 = *(undefined8 *)(pbVar3 + 0x18);
      uVar15 = *(undefined8 *)(pbVar3 + 0x10);
      uVar43 = *(undefined8 *)(pbVar3 + 0x28);
      uVar34 = *(undefined8 *)pbVar10;
      *(ulong *)(pbVar3 + 0x18) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ bVar31,
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ bVar30,
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ bVar29,
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^ bVar28,
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) ^ bVar27,
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                 bVar26,CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ bVar25,(byte)uVar24 ^ bVar23)))))))
      ;
      *(ulong *)(pbVar3 + 0x10) =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ bVar22,
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ bVar21,
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ bVar20,
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^ bVar19,
                                               CONCAT13((byte)((ulong)uVar15 >> 0x18) ^ bVar18,
                                                        CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                 bVar17,CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ bVar16,(byte)uVar15 ^ bVar14)))))))
      ;
      *(ulong *)(pbVar3 + 0x28) =
           CONCAT17((byte)((ulong)uVar43 >> 0x38) ^ bVar50,
                    CONCAT16((byte)((ulong)uVar43 >> 0x30) ^ bVar49,
                             CONCAT15((byte)((ulong)uVar43 >> 0x28) ^ bVar48,
                                      CONCAT14((byte)((ulong)uVar43 >> 0x20) ^ bVar47,
                                               CONCAT13((byte)((ulong)uVar43 >> 0x18) ^ bVar46,
                                                        CONCAT12((byte)((ulong)uVar43 >> 0x10) ^
                                                                 bVar45,CONCAT11((byte)((ulong)
                                                  uVar43 >> 8) ^ bVar44,(byte)uVar43 ^ bVar42)))))))
      ;
      *(ulong *)pbVar10 =
           CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ bVar41,
                    CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ bVar40,
                             CONCAT15((byte)((ulong)uVar34 >> 0x28) ^ bVar39,
                                      CONCAT14((byte)((ulong)uVar34 >> 0x20) ^ bVar38,
                                               CONCAT13((byte)((ulong)uVar34 >> 0x18) ^ bVar37,
                                                        CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                                 bVar36,CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) ^ bVar35,(byte)uVar34 ^ bVar32)))))))
      ;
      pbVar3 = pbVar10;
    } while (uVar12 != 0);
    if (uVar6 != uVar4) goto LAB_00454d74;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar33);
LAB_00454db0:
  memset(param_1 + uVar13,0,(ulong)(0x10 - (int)uVar13));
  (*pcVar1)(param_1,local_70,uVar33);
  *param_1 = bVar2;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar33 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uStack_68 >> 0x38),
                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uStack_68 >> 0x30),
                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)((ulong)uStack_68 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                           (byte)((ulong)uStack_68 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                    (byte)((ulong)uStack_68 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                             (byte)((ulong)uStack_68 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                      (byte)((ulong)uStack_68 >> 8),
                                                                      (byte)uVar15 ^ (byte)uStack_68
                                                                     )))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ local_70[7],
                CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ local_70[6],
                         CONCAT15((byte)((ulong)uVar33 >> 0x28) ^ local_70[5],
                                  CONCAT14((byte)((ulong)uVar33 >> 0x20) ^ local_70[4],
                                           CONCAT13((byte)((ulong)uVar33 >> 0x18) ^ local_70[3],
                                                    CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                             local_70[2],
                                                             CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                                      local_70[1],
                                                                      (byte)uVar33 ^ local_70[0]))))
                                 )));
  return 0;
}


