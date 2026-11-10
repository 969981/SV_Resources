/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f7580; name: FUN_033f7580
 */


void FUN_033f7580(undefined8 param_1,long param_2,uint param_3,ulong param_4,long param_5,
                 undefined8 param_6,uint param_7,uint param_8,undefined8 param_9)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  
  if (*(char *)(param_2 + (param_4 & 0xffffffff) * 0x1c + 0xf0) == '\0') {
    return;
  }
  param_4 = param_4 & 0xffffffff;
  FUN_033f6088(param_2 + param_4 * 0x48,param_1,param_7,param_8 & 1,param_3,param_5,param_9);
  if (*(int *)(param_2 + param_4 * 0x1c + 0xd8) != 0) {
    lVar7 = param_2 + param_4 * 0x20;
    uVar9 = param_7;
    if ((param_7 & 3) != 0) {
      iVar5 = 4 - (param_7 & 3);
      memset((void *)(param_5 + (ulong)param_7 * 4),0,(ulong)(uint)(iVar5 * 4));
      uVar9 = iVar5 + param_7;
    }
    uVar10 = *(uint *)(lVar7 + 0x9c);
    uVar4 = param_3 >> 2;
    uVar2 = param_3 & 3;
    plVar1 = (long *)(lVar7 + 0x90);
    uVar12 = uVar10 & 1;
    uVar3 = uVar4 << 4;
    if ((uVar10 - 1 == param_3) && (uVar12 != 0)) {
      pfVar14 = (float *)(*plVar1 + (ulong)((uVar4 + (1 < uVar2 && uVar10 != 1)) * 0x10) * 4);
      pfVar15 = pfVar14 + 1;
      pfVar16 = pfVar14 + 2;
      pfVar6 = pfVar14 + 3;
    }
    else {
      pfVar14 = (float *)(*plVar1 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4);
      pfVar15 = pfVar14 + 4;
      pfVar16 = pfVar14 + 8;
      pfVar6 = pfVar14 + 0xc;
    }
    fVar24 = *pfVar14;
    fVar22 = *pfVar15;
    fVar47 = *pfVar16;
    fVar46 = *pfVar6;
    if (uVar9 != 0) {
      puVar13 = *(undefined8 **)(lVar7 + 0xa0);
      uVar27 = puVar13[1];
      uVar26 = *puVar13;
      uVar29 = puVar13[3];
      uVar28 = puVar13[2];
      uVar31 = puVar13[5];
      uVar30 = puVar13[4];
      uVar33 = puVar13[7];
      uVar32 = puVar13[6];
      uVar35 = puVar13[9];
      uVar34 = puVar13[8];
      uVar37 = puVar13[0xb];
      uVar36 = puVar13[10];
      uVar39 = puVar13[0xd];
      uVar38 = puVar13[0xc];
      uVar41 = puVar13[0xf];
      uVar40 = puVar13[0xe];
      uVar11 = 0;
      fVar25 = fVar24;
      fVar23 = fVar22;
      do {
        uVar12 = (int)uVar11 + 4;
        puVar13 = (undefined8 *)(param_5 + uVar11 * 4);
        uVar45 = puVar13[1];
        uVar43 = *puVar13;
        fVar42 = (float)uVar43;
        fVar44 = (float)((ulong)uVar43 >> 0x20);
        fVar22 = (float)uVar45;
        fVar24 = (float)((ulong)uVar45 >> 0x20);
        fVar17 = (float)uVar38 * fVar47;
        fVar19 = (float)((ulong)uVar38 >> 0x20) * fVar47;
        fVar18 = (float)uVar40 * fVar46;
        fVar20 = (float)((ulong)uVar40 >> 0x20) * fVar46;
        fVar21 = (float)((ulong)uVar41 >> 0x20) * fVar46;
        fVar46 = fVar22 * (float)uVar27 + (float)uVar35 * fVar25 + (float)uVar37 * fVar23 +
                 (float)uVar29 * fVar22 + (float)uVar31 * fVar44 + (float)uVar33 * fVar42 +
                 (float)uVar39 * fVar47 + (float)uVar41 * fVar46;
        fVar47 = fVar24 * (float)((ulong)uVar27 >> 0x20) + (float)((ulong)uVar35 >> 0x20) * fVar25 +
                 (float)((ulong)uVar37 >> 0x20) * fVar23 + (float)((ulong)uVar29 >> 0x20) * fVar22 +
                 (float)((ulong)uVar31 >> 0x20) * fVar44 + (float)((ulong)uVar33 >> 0x20) * fVar42 +
                 (float)((ulong)uVar39 >> 0x20) * fVar47 + fVar21;
        puVar13 = (undefined8 *)(param_5 + uVar11 * 4);
        puVar13[1] = CONCAT44(fVar47,fVar46);
        *puVar13 = CONCAT44(fVar44 * (float)((ulong)uVar26 >> 0x20) +
                            (float)((ulong)uVar34 >> 0x20) * fVar25 +
                            (float)((ulong)uVar36 >> 0x20) * fVar23 +
                            (float)((ulong)uVar28 >> 0x20) * fVar22 +
                            (float)((ulong)uVar30 >> 0x20) * fVar44 +
                            (float)((ulong)uVar32 >> 0x20) * fVar42 + fVar19 + fVar20,
                            fVar42 * (float)uVar26 + (float)uVar34 * fVar25 + (float)uVar36 * fVar23
                            + (float)uVar28 * fVar22 + (float)uVar30 * fVar44 +
                            (float)uVar32 * fVar42 + fVar17 + fVar18);
        uVar11 = (ulong)uVar12;
        fVar25 = fVar24;
        fVar23 = fVar22;
      } while (uVar12 < uVar9);
      uVar10 = *(uint *)(lVar7 + 0x9c);
      uVar12 = uVar10 & 1;
    }
    if ((uVar12 == 0) || (uVar10 - 1 != param_3)) {
      *(float *)(*plVar1 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4) = fVar24;
      *(float *)(*plVar1 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4 + 0x10) = fVar22;
      *(float *)(*plVar1 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4 + 0x20) = fVar47;
      lVar7 = *plVar1 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4;
      lVar8 = 0xc;
    }
    else {
      uVar9 = (uVar4 + (1 < uVar2 && uVar10 != 1)) * 0x10;
      *(float *)(*plVar1 + (ulong)uVar9 * 4) = fVar24;
      *(float *)(*plVar1 + (ulong)uVar9 * 4 + 4) = fVar22;
      *(float *)(*plVar1 + (ulong)uVar9 * 4 + 8) = fVar47;
      lVar7 = *plVar1 + (ulong)uVar9 * 4;
      lVar8 = 3;
    }
    *(float *)(lVar7 + lVar8 * 4) = fVar46;
  }
  param_2 = param_2 + param_4 * 0x1c;
  FUN_033d5580(0x3f800000,0x3f800000,*(undefined4 *)(param_2 + 0x138),
               *(undefined4 *)(param_2 + 0xec),param_6,param_5,param_7);
  return;
}


