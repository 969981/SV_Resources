/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c51e4; name: FUN_008c51e4
 */


void FUN_008c51e4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_80 [48];
  
  if (*(int *)(param_2 + 0xc4) != 0) {
    lVar7 = 0;
    lVar8 = 0;
    uVar9 = 0;
    do {
      uVar6 = FUN_008bea60(param_1,*(long *)(param_2 + 0xb0) + lVar7 + 0x68);
      lVar3 = *(long *)(param_2 + 0xb0);
      lVar4 = *(long *)(param_2 + 0xb8);
      uVar5 = *(uint *)(lVar3 + lVar7);
      if ((int)uVar5 < 0) {
        FUN_008c25fc(param_1,uVar6,lVar4 + lVar8,lVar3 + lVar7 + 8);
        fVar31 = extraout_s0;
      }
      else {
        FUN_008c25fc(param_1,uVar6,local_80,lVar3 + lVar7 + 8);
        puVar1 = (undefined8 *)(lVar4 + (ulong)uVar5 * 0x40);
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0xb8) + lVar8);
        uVar6 = puVar1[3];
        fVar17 = (float)*puVar1;
        fVar31 = local_80._0_4_;
        fVar10 = local_80._4_4_;
        fVar11 = local_80._8_4_;
        fVar12 = local_80._12_4_;
        fVar18 = (float)((ulong)*puVar1 >> 0x20);
        fVar13 = local_80._16_4_;
        fVar14 = local_80._20_4_;
        fVar15 = local_80._24_4_;
        fVar16 = local_80._28_4_;
        fVar19 = (float)puVar1[1];
        fVar27 = local_80._32_4_;
        fVar28 = local_80._36_4_;
        fVar29 = local_80._40_4_;
        fVar30 = local_80._44_4_;
        fVar20 = (float)puVar1[2];
        fVar21 = (float)((ulong)puVar1[2] >> 0x20);
        fVar22 = (float)uVar6;
        uVar26 = puVar1[5];
        fVar23 = (float)puVar1[4];
        fVar24 = (float)((ulong)puVar1[4] >> 0x20);
        fVar25 = (float)uVar26;
        puVar2[1] = CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                             fVar12 * fVar17 + fVar16 * fVar18 + fVar30 * fVar19,
                             fVar11 * fVar17 + fVar15 * fVar18 + fVar29 * fVar19 + 0.0);
        *puVar2 = CONCAT44(fVar10 * fVar17 + fVar14 * fVar18 + fVar28 * fVar19 + 0.0,
                           fVar31 * fVar17 + fVar13 * fVar18 + fVar27 * fVar19 + 0.0);
        puVar2[3] = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                             fVar12 * fVar20 + fVar16 * fVar21 + fVar30 * fVar22,
                             fVar11 * fVar20 + fVar15 * fVar21 + fVar29 * fVar22 + 0.0);
        puVar2[2] = CONCAT44(fVar10 * fVar20 + fVar14 * fVar21 + fVar28 * fVar22 + 0.0,
                             fVar31 * fVar20 + fVar13 * fVar21 + fVar27 * fVar22 + 0.0);
        puVar2[5] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                             fVar12 * fVar23 + fVar16 * fVar24 + fVar30 * fVar25,
                             fVar11 * fVar23 + fVar15 * fVar24 + fVar29 * fVar25 + 0.0);
        puVar2[4] = CONCAT44(fVar10 * fVar23 + fVar14 * fVar24 + fVar28 * fVar25 + 0.0,
                             fVar31 * fVar23 + fVar13 * fVar24 + fVar27 * fVar25 + 0.0);
        fVar31 = extraout_s0 * *(float *)(puVar1 + 6);
      }
      lVar3 = *(long *)(param_2 + 0xb8) + lVar8;
      lVar8 = lVar8 + 0x40;
      *(float *)(lVar3 + 0x30) = fVar31;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x78;
    } while (uVar9 < *(uint *)(param_2 + 0xc4));
  }
  return;
}


