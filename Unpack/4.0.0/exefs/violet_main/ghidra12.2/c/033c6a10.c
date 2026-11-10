/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c6a10; name: FUN_033c6a10
 */


void FUN_033c6a10(long param_1,uint param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  
  if ((*(float *)(param_1 + 0xa0) <= 1.6e-05) && (*(float *)(param_1 + 0x98) <= 1.6e-05)) {
    if (param_2 != 0) {
      uVar2 = 0;
      fVar15 = *(float *)(param_1 + 0xa4);
      fVar7 = fVar15 + *(float *)(param_1 + 0xac);
      fVar8 = fVar7 + fVar15;
      fVar9 = fVar8 + fVar15;
      fVar10 = fVar9 + fVar15;
      fVar11 = fVar15 * 4.0;
      fVar20 = fVar15 * 8.0;
      fVar15 = fVar15 * 16.0;
      fVar12 = fVar7 + fVar11;
      fVar13 = fVar8 + fVar11;
      fVar14 = fVar9 + fVar11;
      fVar11 = fVar10 + fVar11;
      fVar16 = fVar12 + fVar20;
      fVar17 = fVar13 + fVar20;
      fVar18 = fVar14 + fVar20;
      fVar19 = fVar11 + fVar20;
      fVar21 = fVar7 + fVar20;
      fVar22 = fVar8 + fVar20;
      fVar23 = fVar9 + fVar20;
      fVar20 = fVar10 + fVar20;
      do {
        uVar6 = (ulong)uVar2;
        lVar3 = (ulong)(uVar2 + 4) * 4;
        lVar4 = (ulong)(uVar2 + 8) * 4;
        lVar5 = (ulong)(uVar2 + 0xc) * 4;
        uVar2 = uVar2 + 0x10;
        puVar1 = (undefined8 *)(param_3 + uVar6 * 4);
        uVar28 = puVar1[1];
        uVar25 = *puVar1;
        fVar24 = (float)uVar25 * fVar7;
        fVar26 = (float)((ulong)uVar25 >> 0x20) * fVar8;
        fVar27 = (float)uVar28 * fVar9;
        fVar29 = (float)((ulong)uVar28 >> 0x20) * fVar10;
        puVar1 = (undefined8 *)(param_3 + lVar3);
        uVar28 = puVar1[1];
        uVar25 = *puVar1;
        puVar1 = (undefined8 *)(param_3 + lVar4);
        uVar38 = puVar1[1];
        uVar35 = *puVar1;
        puVar1 = (undefined8 *)(param_3 + lVar5);
        uVar44 = puVar1[1];
        uVar41 = *puVar1;
        fVar30 = (float)uVar25 * fVar12;
        fVar31 = (float)((ulong)uVar25 >> 0x20) * fVar13;
        fVar32 = (float)uVar28 * fVar14;
        fVar33 = (float)((ulong)uVar28 >> 0x20) * fVar11;
        fVar34 = (float)uVar35 * fVar21;
        fVar36 = (float)((ulong)uVar35 >> 0x20) * fVar22;
        fVar37 = (float)uVar38 * fVar23;
        fVar39 = (float)((ulong)uVar38 >> 0x20) * fVar20;
        fVar40 = (float)uVar41 * fVar16;
        fVar42 = (float)((ulong)uVar41 >> 0x20) * fVar17;
        fVar43 = (float)uVar44 * fVar18;
        fVar45 = (float)((ulong)uVar44 >> 0x20) * fVar19;
        fVar7 = fVar7 + fVar15;
        fVar8 = fVar8 + fVar15;
        fVar9 = fVar9 + fVar15;
        fVar10 = fVar10 + fVar15;
        fVar12 = fVar12 + fVar15;
        fVar13 = fVar13 + fVar15;
        fVar14 = fVar14 + fVar15;
        fVar11 = fVar11 + fVar15;
        fVar21 = fVar21 + fVar15;
        fVar22 = fVar22 + fVar15;
        fVar23 = fVar23 + fVar15;
        fVar20 = fVar20 + fVar15;
        fVar16 = fVar16 + fVar15;
        fVar17 = fVar17 + fVar15;
        fVar18 = fVar18 + fVar15;
        fVar19 = fVar19 + fVar15;
        puVar1 = (undefined8 *)(param_3 + uVar6 * 4);
        puVar1[1] = CONCAT44(fVar29,fVar27);
        *puVar1 = CONCAT44(fVar26,fVar24);
        puVar1 = (undefined8 *)(param_3 + lVar3);
        puVar1[1] = CONCAT44(fVar33,fVar32);
        *puVar1 = CONCAT44(fVar31,fVar30);
        puVar1 = (undefined8 *)(param_3 + lVar4);
        puVar1[1] = CONCAT44(fVar39,fVar37);
        *puVar1 = CONCAT44(fVar36,fVar34);
        puVar1 = (undefined8 *)(param_3 + lVar5);
        puVar1[1] = CONCAT44(fVar45,fVar43);
        *puVar1 = CONCAT44(fVar42,fVar40);
      } while (uVar2 < param_2);
    }
    return;
  }
  FUN_033c6668(param_1,param_2,param_4);
  FUN_033c6980(param_1,param_2,param_3,param_4);
  return;
}


