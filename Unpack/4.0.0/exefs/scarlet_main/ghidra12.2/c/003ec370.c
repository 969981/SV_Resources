/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec370; name: FUN_003ec370
 */


void FUN_003ec370(uint param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar13;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar21;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined8 uVar37;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined8 uVar46;
  byte bVar53;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 uVar55;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined8 uVar64;
  byte bVar71;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined8 uVar73;
  byte bVar80;
  
  if (param_2 != param_3) {
    uVar2 = 0xffffffff - ((int)(param_1 - 1 & (param_1 ^ 0xffffffff)) >> 0x1f);
    uVar1 = ((uint)param_3[1] ^ (uint)param_2[1]) & uVar2;
    *(uint *)(param_2 + 1) = uVar1 ^ (uint)param_2[1];
    *(uint *)(param_3 + 1) = (uint)param_3[1] ^ uVar1;
    uVar1 = ((uint)param_3[2] ^ (uint)param_2[2]) & uVar2;
    *(uint *)(param_2 + 2) = uVar1 ^ (uint)param_2[2];
    *(uint *)(param_3 + 2) = (uint)param_3[2] ^ uVar1;
    uVar1 = uVar2 & (*(uint *)((long)param_3 + 0x14) ^ *(uint *)((long)param_2 + 0x14)) & 4;
    *(uint *)((long)param_2 + 0x14) = uVar1 ^ *(uint *)((long)param_2 + 0x14);
    *(uint *)((long)param_3 + 0x14) = uVar1 ^ *(uint *)((long)param_3 + 0x14);
    if (0 < (int)param_4) {
      uVar5 = *param_2;
      uVar3 = (ulong)param_4;
      uVar7 = *param_3;
      if ((param_4 < 8) || ((uVar5 < uVar7 + uVar3 * 4 && (uVar7 < uVar5 + uVar3 * 4)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar3 & 0xfffffff8;
        puVar10 = (undefined8 *)(uVar5 + 0x10);
        puVar11 = (undefined8 *)(uVar7 + 0x10);
        uVar12 = uVar9;
        do {
          uVar21 = puVar10[-1];
          uVar13 = puVar10[-2];
          uVar37 = puVar10[1];
          uVar29 = *puVar10;
          uVar12 = uVar12 - 8;
          uVar55 = puVar11[-1];
          uVar46 = puVar11[-2];
          uVar73 = puVar11[1];
          uVar64 = *puVar11;
          bVar30 = (byte)((ulong)uVar29 >> 8);
          bVar31 = (byte)((ulong)uVar29 >> 0x10);
          bVar32 = (byte)((ulong)uVar29 >> 0x18);
          bVar33 = (byte)((ulong)uVar29 >> 0x20);
          bVar34 = (byte)((ulong)uVar29 >> 0x28);
          bVar35 = (byte)((ulong)uVar29 >> 0x30);
          bVar36 = (byte)((ulong)uVar29 >> 0x38);
          bVar38 = (byte)((ulong)uVar37 >> 8);
          bVar39 = (byte)((ulong)uVar37 >> 0x10);
          bVar40 = (byte)((ulong)uVar37 >> 0x18);
          bVar41 = (byte)((ulong)uVar37 >> 0x20);
          bVar42 = (byte)((ulong)uVar37 >> 0x28);
          bVar43 = (byte)((ulong)uVar37 >> 0x30);
          bVar44 = (byte)((ulong)uVar37 >> 0x38);
          bVar14 = (byte)((ulong)uVar13 >> 8);
          bVar15 = (byte)((ulong)uVar13 >> 0x10);
          bVar16 = (byte)((ulong)uVar13 >> 0x18);
          bVar17 = (byte)((ulong)uVar13 >> 0x20);
          bVar18 = (byte)((ulong)uVar13 >> 0x28);
          bVar19 = (byte)((ulong)uVar13 >> 0x30);
          bVar20 = (byte)((ulong)uVar13 >> 0x38);
          bVar22 = (byte)((ulong)uVar21 >> 8);
          bVar23 = (byte)((ulong)uVar21 >> 0x10);
          bVar24 = (byte)((ulong)uVar21 >> 0x18);
          bVar25 = (byte)((ulong)uVar21 >> 0x20);
          bVar26 = (byte)((ulong)uVar21 >> 0x28);
          bVar27 = (byte)((ulong)uVar21 >> 0x30);
          bVar28 = (byte)((ulong)uVar21 >> 0x38);
          bVar59 = (byte)uVar2;
          bVar63 = ((byte)uVar64 ^ (byte)uVar29) & bVar59;
          bVar60 = (byte)(uVar2 >> 8);
          bVar65 = ((byte)((ulong)uVar64 >> 8) ^ bVar30) & bVar60;
          bVar61 = (byte)(uVar2 >> 0x10);
          bVar66 = ((byte)((ulong)uVar64 >> 0x10) ^ bVar31) & bVar61;
          bVar62 = (byte)(uVar2 >> 0x18);
          bVar67 = ((byte)((ulong)uVar64 >> 0x18) ^ bVar32) & bVar62;
          bVar68 = ((byte)((ulong)uVar64 >> 0x20) ^ bVar33) & bVar59;
          bVar69 = ((byte)((ulong)uVar64 >> 0x28) ^ bVar34) & bVar60;
          bVar70 = ((byte)((ulong)uVar64 >> 0x30) ^ bVar35) & bVar61;
          bVar71 = ((byte)((ulong)uVar64 >> 0x38) ^ bVar36) & bVar62;
          bVar72 = ((byte)uVar73 ^ (byte)uVar37) & bVar59;
          bVar74 = ((byte)((ulong)uVar73 >> 8) ^ bVar38) & bVar60;
          bVar75 = ((byte)((ulong)uVar73 >> 0x10) ^ bVar39) & bVar61;
          bVar76 = ((byte)((ulong)uVar73 >> 0x18) ^ bVar40) & bVar62;
          bVar77 = ((byte)((ulong)uVar73 >> 0x20) ^ bVar41) & bVar59;
          bVar78 = ((byte)((ulong)uVar73 >> 0x28) ^ bVar42) & bVar60;
          bVar79 = ((byte)((ulong)uVar73 >> 0x30) ^ bVar43) & bVar61;
          bVar80 = ((byte)((ulong)uVar73 >> 0x38) ^ bVar44) & bVar62;
          bVar45 = ((byte)uVar46 ^ (byte)uVar13) & bVar59;
          bVar47 = ((byte)((ulong)uVar46 >> 8) ^ bVar14) & bVar60;
          bVar48 = ((byte)((ulong)uVar46 >> 0x10) ^ bVar15) & bVar61;
          bVar49 = ((byte)((ulong)uVar46 >> 0x18) ^ bVar16) & bVar62;
          bVar50 = ((byte)((ulong)uVar46 >> 0x20) ^ bVar17) & bVar59;
          bVar51 = ((byte)((ulong)uVar46 >> 0x28) ^ bVar18) & bVar60;
          bVar52 = ((byte)((ulong)uVar46 >> 0x30) ^ bVar19) & bVar61;
          bVar53 = ((byte)((ulong)uVar46 >> 0x38) ^ bVar20) & bVar62;
          bVar54 = ((byte)uVar55 ^ (byte)uVar21) & bVar59;
          bVar56 = ((byte)((ulong)uVar55 >> 8) ^ bVar22) & bVar60;
          bVar57 = ((byte)((ulong)uVar55 >> 0x10) ^ bVar23) & bVar61;
          bVar58 = ((byte)((ulong)uVar55 >> 0x18) ^ bVar24) & bVar62;
          bVar59 = ((byte)((ulong)uVar55 >> 0x20) ^ bVar25) & bVar59;
          bVar60 = ((byte)((ulong)uVar55 >> 0x28) ^ bVar26) & bVar60;
          bVar61 = ((byte)((ulong)uVar55 >> 0x30) ^ bVar27) & bVar61;
          bVar62 = ((byte)((ulong)uVar55 >> 0x38) ^ bVar28) & bVar62;
          puVar10[-1] = CONCAT17(bVar62 ^ bVar28,
                                 CONCAT16(bVar61 ^ bVar27,
                                          CONCAT15(bVar60 ^ bVar26,
                                                   CONCAT14(bVar59 ^ bVar25,
                                                            CONCAT13(bVar58 ^ bVar24,
                                                                     CONCAT12(bVar57 ^ bVar23,
                                                                              CONCAT11(bVar56 ^ 
                                                  bVar22,bVar54 ^ (byte)uVar21)))))));
          puVar10[-2] = CONCAT17(bVar53 ^ bVar20,
                                 CONCAT16(bVar52 ^ bVar19,
                                          CONCAT15(bVar51 ^ bVar18,
                                                   CONCAT14(bVar50 ^ bVar17,
                                                            CONCAT13(bVar49 ^ bVar16,
                                                                     CONCAT12(bVar48 ^ bVar15,
                                                                              CONCAT11(bVar47 ^ 
                                                  bVar14,bVar45 ^ (byte)uVar13)))))));
          puVar10[1] = CONCAT17(bVar80 ^ bVar44,
                                CONCAT16(bVar79 ^ bVar43,
                                         CONCAT15(bVar78 ^ bVar42,
                                                  CONCAT14(bVar77 ^ bVar41,
                                                           CONCAT13(bVar76 ^ bVar40,
                                                                    CONCAT12(bVar75 ^ bVar39,
                                                                             CONCAT11(bVar74 ^ 
                                                  bVar38,bVar72 ^ (byte)uVar37)))))));
          *puVar10 = CONCAT17(bVar71 ^ bVar36,
                              CONCAT16(bVar70 ^ bVar35,
                                       CONCAT15(bVar69 ^ bVar34,
                                                CONCAT14(bVar68 ^ bVar33,
                                                         CONCAT13(bVar67 ^ bVar32,
                                                                  CONCAT12(bVar66 ^ bVar31,
                                                                           CONCAT11(bVar65 ^ bVar30,
                                                                                    bVar63 ^ (byte)
                                                  uVar29)))))));
          puVar10 = puVar10 + 4;
          uVar21 = puVar11[-1];
          uVar13 = puVar11[-2];
          uVar37 = puVar11[1];
          uVar29 = *puVar11;
          puVar11[-1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ bVar62,
                                 CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ bVar61,
                                          CONCAT15((byte)((ulong)uVar21 >> 0x28) ^ bVar60,
                                                   CONCAT14((byte)((ulong)uVar21 >> 0x20) ^ bVar59,
                                                            CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                     bVar58,CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) ^ bVar57,
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^ bVar56,
                                                           (byte)uVar21 ^ bVar54)))))));
          puVar11[-2] = CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ bVar53,
                                 CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ bVar52,
                                          CONCAT15((byte)((ulong)uVar13 >> 0x28) ^ bVar51,
                                                   CONCAT14((byte)((ulong)uVar13 >> 0x20) ^ bVar50,
                                                            CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                                     bVar49,CONCAT12((byte)((ulong)
                                                  uVar13 >> 0x10) ^ bVar48,
                                                  CONCAT11((byte)((ulong)uVar13 >> 8) ^ bVar47,
                                                           (byte)uVar13 ^ bVar45)))))));
          puVar11[1] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ bVar80,
                                CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ bVar79,
                                         CONCAT15((byte)((ulong)uVar37 >> 0x28) ^ bVar78,
                                                  CONCAT14((byte)((ulong)uVar37 >> 0x20) ^ bVar77,
                                                           CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                                    bVar76,CONCAT12((byte)((ulong)
                                                  uVar37 >> 0x10) ^ bVar75,
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^ bVar74,
                                                           (byte)uVar37 ^ bVar72)))))));
          *puVar11 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ bVar71,
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ bVar70,
                                       CONCAT15((byte)((ulong)uVar29 >> 0x28) ^ bVar69,
                                                CONCAT14((byte)((ulong)uVar29 >> 0x20) ^ bVar68,
                                                         CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                  bVar67,CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ bVar66,
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^ bVar65,
                                                           (byte)uVar29 ^ bVar63)))))));
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        if (uVar9 == uVar3) {
          return;
        }
      }
      lVar4 = uVar3 - uVar9;
      puVar6 = (uint *)(uVar5 + uVar9 * 4);
      puVar8 = (uint *)(uVar7 + uVar9 * 4);
      do {
        lVar4 = lVar4 + -1;
        uVar1 = (*puVar8 ^ *puVar6) & uVar2;
        *puVar6 = uVar1 ^ *puVar6;
        *puVar8 = *puVar8 ^ uVar1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}


