/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001068f0; name: FUN_001068f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001068f0(long param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6,
                 ulong param_7,long param_8)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  ushort *puVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (param_6 != param_7) {
    uVar12 = param_7 & 0xfffffffffffffffe;
    uVar5 = param_6;
    if ((param_6 & 1) != 0) {
      uVar5 = param_6 + 1;
      FUN_00106c30(param_1,param_2,param_3,param_4,param_5,param_6,uVar5,param_8);
    }
    uVar4 = _UNK_03cab438;
    uVar3 = _DAT_03cab430;
    if (uVar5 < uVar12) {
      lVar10 = uVar5 * 8;
      pfVar6 = (float *)(param_5 + lVar10);
      puVar7 = (ushort *)(param_8 + uVar5 * 2 + 2);
      pfVar8 = (float *)(param_2 + lVar10);
      pfVar9 = (float *)(param_4 + lVar10);
      pfVar11 = (float *)(param_3 + lVar10);
      do {
        uVar5 = uVar5 + 2;
        fVar29 = *pfVar11 + *pfVar6;
        fVar30 = pfVar11[1] + pfVar6[1];
        fVar31 = pfVar11[2] + pfVar6[2];
        fVar32 = pfVar11[3] + pfVar6[3];
        puVar1 = (undefined8 *)(param_1 + (ulong)puVar7[-1] * 8);
        auVar22._0_4_ = *pfVar11 - *pfVar6;
        auVar22._4_4_ = pfVar11[1] - pfVar6[1];
        auVar22._8_4_ = pfVar11[2] - pfVar6[2];
        auVar22._12_4_ = pfVar11[3] - pfVar6[3];
        auVar20 = NEON_rev64(auVar22,4);
        fVar25 = *pfVar8 - *pfVar9;
        fVar26 = pfVar8[1] - pfVar9[1];
        fVar27 = pfVar8[2] - pfVar9[2];
        fVar28 = pfVar8[3] - pfVar9[3];
        fVar18 = (float)CONCAT13(auVar20[3] ^ (byte)((ulong)uVar3 >> 0x18),
                                 CONCAT12(auVar20[2] ^ (byte)((ulong)uVar3 >> 0x10),
                                          CONCAT11(auVar20[1] ^ (byte)((ulong)uVar3 >> 8),
                                                   auVar20[0] ^ (byte)uVar3)));
        auVar19._0_8_ =
             CONCAT17(auVar20[7] ^ (byte)((ulong)uVar3 >> 0x38),
                      CONCAT16(auVar20[6] ^ (byte)((ulong)uVar3 >> 0x30),
                               CONCAT15(auVar20[5] ^ (byte)((ulong)uVar3 >> 0x28),
                                        CONCAT14(auVar20[4] ^ (byte)((ulong)uVar3 >> 0x20),fVar18)))
                     );
        auVar19[8] = auVar20[8] ^ (byte)uVar4;
        auVar19[9] = auVar20[9] ^ (byte)((ulong)uVar4 >> 8);
        auVar19[10] = auVar20[10] ^ (byte)((ulong)uVar4 >> 0x10);
        auVar19[0xb] = auVar20[0xb] ^ (byte)((ulong)uVar4 >> 0x18);
        auVar24[0xc] = auVar20[0xc] ^ (byte)((ulong)uVar4 >> 0x20);
        auVar24._0_12_ = auVar19;
        auVar24[0xd] = auVar20[0xd] ^ (byte)((ulong)uVar4 >> 0x28);
        auVar24[0xe] = auVar20[0xe] ^ (byte)((ulong)uVar4 >> 0x30);
        auVar24[0xf] = auVar20[0xf] ^ (byte)((ulong)uVar4 >> 0x38);
        fVar13 = *pfVar8 + *pfVar9;
        fVar14 = pfVar8[1] + pfVar9[1];
        fVar15 = pfVar8[2] + pfVar9[2];
        fVar16 = pfVar8[3] + pfVar9[3];
        auVar17._0_8_ = CONCAT44(fVar14 + fVar30,fVar13 + fVar29);
        auVar17._8_4_ = fVar15 + fVar31;
        auVar17._12_4_ = fVar16 + fVar32;
        auVar20._0_8_ = CONCAT44(fVar14 - fVar30,fVar13 - fVar29);
        auVar20._8_4_ = fVar15 - fVar31;
        auVar20._12_4_ = fVar16 - fVar32;
        uVar2 = *puVar7;
        fVar13 = (float)((ulong)auVar19._0_8_ >> 0x20);
        auVar23._0_8_ = CONCAT44(fVar26 + fVar13,fVar25 + fVar18);
        auVar23._8_4_ = fVar27 + auVar19._8_4_;
        auVar23._12_4_ = fVar28 + auVar24._12_4_;
        auVar21._0_8_ = CONCAT44(fVar26 - fVar13,fVar25 - fVar18);
        auVar21._8_4_ = fVar27 - auVar19._8_4_;
        auVar21._12_4_ = fVar28 - auVar24._12_4_;
        *puVar1 = auVar17._0_8_;
        puVar1[1] = auVar23._0_8_;
        auVar17 = NEON_ext(auVar17,auVar17,8,1);
        puVar1[2] = auVar20._0_8_;
        puVar1[3] = auVar21._0_8_;
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        auVar24 = NEON_ext(auVar23,auVar23,8,1);
        auVar22 = NEON_ext(auVar21,auVar21,8,1);
        puVar1 = (undefined8 *)(param_1 + (ulong)uVar2 * 8);
        *puVar1 = auVar17._0_8_;
        puVar1[1] = auVar24._0_8_;
        puVar1[2] = auVar20._0_8_;
        puVar1[3] = auVar22._0_8_;
        pfVar6 = pfVar6 + 4;
        puVar7 = puVar7 + 2;
        pfVar8 = pfVar8 + 4;
        pfVar9 = pfVar9 + 4;
        pfVar11 = pfVar11 + 4;
      } while (uVar5 < uVar12);
    }
    if (uVar12 != param_7) {
      FUN_00106c30(param_1,param_2,param_3,param_4,param_5,uVar12,param_7,param_8);
      return;
    }
  }
  return;
}


