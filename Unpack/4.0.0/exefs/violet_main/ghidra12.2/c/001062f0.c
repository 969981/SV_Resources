/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001062f0; name: FUN_001062f0
 */


void FUN_001062f0(long param_1,ulong param_2)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ushort local_28;
  undefined2 local_26;
  
  uVar10 = param_2 >> 2;
  if (param_2 < 0x101) {
    puVar3 = (ushort *)&UNK_03caed40;
  }
  else {
    local_28 = 0;
    local_26 = (undefined2)uVar10;
    FUN_001062f0(param_1,uVar10 << 1);
    FUN_001062f0(param_1 + uVar10 * 0x10,uVar10);
    FUN_001062f0(param_1 + uVar10 * 0x18,uVar10);
    puVar3 = &local_28;
  }
  do {
    uVar4 = (ulong)puVar3[1];
    lVar6 = uVar4 * 8;
    pfVar5 = (float *)(param_1 + (ulong)*puVar3 * 8);
    if (uVar4 < 4) {
      pfVar7 = pfVar5 + uVar4 * 6;
      pfVar2 = pfVar5 + uVar4 * 2;
      fVar13 = *(float *)(&DAT_03cacd40 + lVar6);
      fVar27 = *(float *)(&DAT_03cacd44 + lVar6);
      fVar26 = *(float *)(&DAT_03cacd48 + lVar6);
      fVar18 = *(float *)(&DAT_03cacd4c + lVar6);
      pfVar1 = pfVar5 + uVar4 * 4;
      fVar11 = *pfVar5;
      fVar12 = pfVar5[1];
      fVar23 = pfVar5[2];
      fVar24 = pfVar5[3];
      fVar19 = *pfVar2;
      fVar29 = pfVar2[1];
      fVar20 = pfVar2[2];
      fVar21 = pfVar2[3];
      fVar17 = fVar13 * *pfVar1 - fVar27 * pfVar1[1];
      fVar28 = fVar26 * pfVar1[2] - fVar18 * pfVar1[3];
      fVar14 = fVar13 * pfVar1[1] + fVar27 * *pfVar1;
      fVar16 = fVar26 * pfVar1[3] + fVar18 * pfVar1[2];
      fVar25 = fVar13 * pfVar7[1] - fVar27 * *pfVar7;
      fVar15 = fVar26 * pfVar7[3] - fVar18 * pfVar7[2];
      fVar13 = fVar13 * *pfVar7 + fVar27 * pfVar7[1];
      fVar26 = fVar26 * pfVar7[2] + fVar18 * pfVar7[3];
      fVar27 = fVar17 + fVar13;
      fVar18 = fVar28 + fVar26;
      fVar22 = fVar14 + fVar25;
      fVar30 = fVar16 + fVar15;
      fVar14 = fVar14 - fVar25;
      fVar16 = fVar16 - fVar15;
      fVar13 = fVar13 - fVar17;
      fVar26 = fVar26 - fVar28;
      *pfVar5 = fVar11 + fVar27;
      pfVar5[1] = fVar12 + fVar22;
      pfVar5[2] = fVar23 + fVar18;
      pfVar5[3] = fVar24 + fVar30;
      *pfVar2 = fVar19 + fVar14;
      pfVar2[1] = fVar29 + fVar13;
      pfVar2[2] = fVar20 + fVar16;
      pfVar2[3] = fVar21 + fVar26;
      *pfVar1 = fVar11 - fVar27;
      pfVar1[1] = fVar12 - fVar22;
      pfVar1[2] = fVar23 - fVar18;
      pfVar1[3] = fVar24 - fVar30;
      *pfVar7 = fVar19 - fVar14;
      pfVar7[1] = fVar29 - fVar13;
      pfVar7[2] = fVar20 - fVar16;
      pfVar7[3] = fVar21 - fVar26;
    }
    else {
      uVar8 = (ulong)(puVar3[1] >> 1);
      puVar9 = &DAT_03cacd40;
      do {
        pfVar2 = (float *)(puVar9 + lVar6);
        pfVar1 = pfVar5 + uVar4 * 6;
        fVar11 = *pfVar2;
        fVar15 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar17 = pfVar2[3];
        fVar13 = pfVar2[4];
        fVar19 = pfVar2[5];
        fVar14 = pfVar2[6];
        fVar21 = pfVar2[7];
        pfVar2 = pfVar5 + uVar4 * 4;
        uVar8 = uVar8 - 2;
        puVar9 = puVar9 + 0x20;
        fVar31 = *pfVar5;
        fVar35 = pfVar5[1];
        fVar32 = pfVar5[2];
        fVar36 = pfVar5[3];
        fVar33 = pfVar5[4];
        fVar37 = pfVar5[5];
        fVar34 = pfVar5[6];
        fVar38 = pfVar5[7];
        pfVar7 = pfVar5 + uVar4 * 2;
        fVar16 = fVar11 * *pfVar2 - fVar15 * pfVar2[1];
        fVar18 = fVar12 * pfVar2[2] - fVar17 * pfVar2[3];
        fVar20 = fVar13 * pfVar2[4] - fVar19 * pfVar2[5];
        fVar22 = fVar14 * pfVar2[6] - fVar21 * pfVar2[7];
        fVar23 = fVar11 * pfVar2[1] + fVar15 * *pfVar2;
        fVar24 = fVar12 * pfVar2[3] + fVar17 * pfVar2[2];
        fVar25 = fVar13 * pfVar2[5] + fVar19 * pfVar2[4];
        fVar26 = fVar14 * pfVar2[7] + fVar21 * pfVar2[6];
        fVar27 = fVar11 * *pfVar1 + fVar15 * pfVar1[1];
        fVar28 = fVar12 * pfVar1[2] + fVar17 * pfVar1[3];
        fVar29 = fVar13 * pfVar1[4] + fVar19 * pfVar1[5];
        fVar30 = fVar14 * pfVar1[6] + fVar21 * pfVar1[7];
        fVar11 = fVar11 * pfVar1[1] - fVar15 * *pfVar1;
        fVar12 = fVar12 * pfVar1[3] - fVar17 * pfVar1[2];
        fVar13 = fVar13 * pfVar1[5] - fVar19 * pfVar1[4];
        fVar14 = fVar14 * pfVar1[7] - fVar21 * pfVar1[6];
        fVar15 = *pfVar7;
        fVar39 = pfVar7[1];
        fVar17 = pfVar7[2];
        fVar40 = pfVar7[3];
        fVar19 = pfVar7[4];
        fVar41 = pfVar7[5];
        fVar21 = pfVar7[6];
        fVar42 = pfVar7[7];
        fVar43 = fVar16 + fVar27;
        fVar44 = fVar18 + fVar28;
        fVar45 = fVar20 + fVar29;
        fVar46 = fVar22 + fVar30;
        fVar47 = fVar23 + fVar11;
        fVar48 = fVar24 + fVar12;
        fVar49 = fVar25 + fVar13;
        fVar50 = fVar26 + fVar14;
        fVar23 = fVar23 - fVar11;
        fVar24 = fVar24 - fVar12;
        fVar25 = fVar25 - fVar13;
        fVar26 = fVar26 - fVar14;
        fVar27 = fVar27 - fVar16;
        fVar28 = fVar28 - fVar18;
        fVar29 = fVar29 - fVar20;
        fVar30 = fVar30 - fVar22;
        *pfVar5 = fVar31 + fVar43;
        pfVar5[1] = fVar35 + fVar47;
        pfVar5[2] = fVar32 + fVar44;
        pfVar5[3] = fVar36 + fVar48;
        pfVar5[4] = fVar33 + fVar45;
        pfVar5[5] = fVar37 + fVar49;
        pfVar5[6] = fVar34 + fVar46;
        pfVar5[7] = fVar38 + fVar50;
        pfVar5 = pfVar5 + 8;
        *pfVar7 = fVar15 + fVar23;
        pfVar7[1] = fVar39 + fVar27;
        pfVar7[2] = fVar17 + fVar24;
        pfVar7[3] = fVar40 + fVar28;
        pfVar7[4] = fVar19 + fVar25;
        pfVar7[5] = fVar41 + fVar29;
        pfVar7[6] = fVar21 + fVar26;
        pfVar7[7] = fVar42 + fVar30;
        *pfVar2 = fVar31 - fVar43;
        pfVar2[1] = fVar35 - fVar47;
        pfVar2[2] = fVar32 - fVar44;
        pfVar2[3] = fVar36 - fVar48;
        pfVar2[4] = fVar33 - fVar45;
        pfVar2[5] = fVar37 - fVar49;
        pfVar2[6] = fVar34 - fVar46;
        pfVar2[7] = fVar38 - fVar50;
        *pfVar1 = fVar15 - fVar23;
        pfVar1[1] = fVar39 - fVar27;
        pfVar1[2] = fVar17 - fVar24;
        pfVar1[3] = fVar40 - fVar28;
        pfVar1[4] = fVar19 - fVar25;
        pfVar1[5] = fVar41 - fVar29;
        pfVar1[6] = fVar21 - fVar26;
        pfVar1[7] = fVar42 - fVar30;
      } while (uVar8 != 0);
    }
    puVar3 = puVar3 + 2;
  } while (uVar4 < uVar10);
  return;
}


