/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c6668; name: FUN_033c6668
 */


void FUN_033c6668(long param_1,uint param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  
  iVar5 = *(int *)(param_1 + 0x380);
  if (iVar5 == 1) {
    if (param_2 << 1 != 0) {
      iVar5 = *(int *)(param_1 + 0x280);
      pfVar6 = param_3;
      do {
        iVar5 = iVar5 * 0x343fd + 0x269ec3;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = (float)iVar5 * 2.3283064e-10;
        pfVar6 = pfVar7;
      } while (pfVar7 < param_3 + (param_2 << 1));
      *(int *)(param_1 + 0x280) = iVar5;
    }
    fVar13 = *(float *)(param_1 + 0x294);
    uVar3 = *(uint *)(param_1 + 0x290);
    if (param_2 == 0) {
      fVar38 = *(float *)(param_1 + 0x284);
      fVar14 = *(float *)(param_1 + 0x288);
    }
    else {
      pfVar6 = param_3;
      do {
        uVar1 = uVar3 + 1;
        uVar3 = uVar1 & 0xffff;
        lVar2 = param_1 + (long)*(int *)(&DAT_03d7e5e0 +
                                        (ulong)((uVar3 & -(uVar1 & 0xffff)) * 0x77cb531 >> 0x1b) * 4
                                        ) * 4;
        fVar14 = *(float *)(lVar2 + 0x298);
        fVar38 = pfVar6[param_2];
        *(float *)(lVar2 + 0x298) = fVar38;
        fVar13 = (fVar13 - fVar14) + fVar38;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = (*pfVar6 + fVar13) * 0.14705883;
        pfVar6 = pfVar7;
      } while (pfVar7 < param_3 + param_2);
      fVar16 = *(float *)(param_1 + 0x28c);
      fVar14 = *(float *)(param_1 + 0x288);
      pfVar6 = param_3;
      fVar37 = *(float *)(param_1 + 0x284);
      do {
        fVar38 = *pfVar6;
        fVar14 = (fVar38 - fVar37) + fVar16 * fVar14;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = fVar14;
        pfVar6 = pfVar7;
        fVar37 = fVar38;
      } while (pfVar7 < param_3 + param_2);
    }
    *(float *)(param_1 + 0x284) = fVar38;
    *(float *)(param_1 + 0x288) = fVar14;
    *(uint *)(param_1 + 0x290) = uVar3;
    *(float *)(param_1 + 0x294) = fVar13;
  }
  else if (iVar5 == 2) {
    if (param_2 == 0) {
      fVar13 = *(float *)(param_1 + 0x2d8);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x280);
      pfVar6 = param_3;
      do {
        iVar5 = iVar5 * 0x343fd + 0x269ec3;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = (float)iVar5 * 2.3283064e-10;
        pfVar6 = pfVar7;
      } while (pfVar7 < param_3 + param_2);
      fVar13 = *(float *)(param_1 + 0x2d8);
      *(int *)(param_1 + 0x280) = iVar5;
      pfVar6 = param_3;
      do {
        fVar13 = *(float *)(param_1 + 0x2dc) * *pfVar6 - *(float *)(param_1 + 0x2e0) * fVar13;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = fVar13;
        pfVar6 = pfVar7;
      } while (pfVar7 < param_3 + param_2);
    }
    *(float *)(param_1 + 0x2d8) = fVar13;
  }
  else if (iVar5 == 3) {
    if (param_2 != 0) {
      iVar5 = *(int *)(param_1 + 0x280);
      pfVar6 = param_3;
      do {
        iVar5 = iVar5 * 0x343fd + 0x269ec3;
        pfVar7 = pfVar6 + 1;
        *pfVar6 = (float)iVar5 * 2.3283064e-10;
        pfVar6 = pfVar7;
      } while (pfVar7 < param_3 + param_2);
      *(int *)(param_1 + 0x280) = iVar5;
      if ((param_2 & 3) != 0) {
        iVar5 = 4 - (param_2 & 3);
        memset(param_3 + param_2,0,(ulong)(uint)(iVar5 * 4));
        param_2 = iVar5 + param_2;
      }
    }
    fVar13 = *(float *)(param_1 + 0x2f0);
    fVar14 = *(float *)(param_1 + 0x2f4);
    fVar38 = *(float *)(param_1 + 0x2f8);
    fVar37 = *(float *)(param_1 + 0x2fc);
    if (param_2 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x308);
      uVar17 = *(undefined8 *)(param_1 + 0x300);
      uVar20 = *(undefined8 *)(param_1 + 0x318);
      uVar19 = *(undefined8 *)(param_1 + 0x310);
      uVar22 = *(undefined8 *)(param_1 + 0x328);
      uVar21 = *(undefined8 *)(param_1 + 800);
      uVar24 = *(undefined8 *)(param_1 + 0x338);
      uVar23 = *(undefined8 *)(param_1 + 0x330);
      uVar26 = *(undefined8 *)(param_1 + 0x348);
      uVar25 = *(undefined8 *)(param_1 + 0x340);
      uVar28 = *(undefined8 *)(param_1 + 0x358);
      uVar27 = *(undefined8 *)(param_1 + 0x350);
      uVar30 = *(undefined8 *)(param_1 + 0x368);
      uVar29 = *(undefined8 *)(param_1 + 0x360);
      uVar32 = *(undefined8 *)(param_1 + 0x378);
      uVar31 = *(undefined8 *)(param_1 + 0x370);
      uVar4 = 0;
      fVar16 = fVar13;
      fVar15 = fVar14;
      do {
        uVar3 = (int)uVar4 + 4;
        uVar36 = *(undefined8 *)(param_3 + uVar4 + 2);
        uVar34 = *(undefined8 *)(param_3 + uVar4);
        fVar33 = (float)uVar34;
        fVar35 = (float)((ulong)uVar34 >> 0x20);
        fVar14 = (float)uVar36;
        fVar13 = (float)((ulong)uVar36 >> 0x20);
        fVar8 = (float)uVar29 * fVar38;
        fVar10 = (float)((ulong)uVar29 >> 0x20) * fVar38;
        fVar9 = (float)uVar31 * fVar37;
        fVar11 = (float)((ulong)uVar31 >> 0x20) * fVar37;
        fVar12 = (float)((ulong)uVar32 >> 0x20) * fVar37;
        fVar37 = fVar14 * (float)uVar18 + (float)uVar26 * fVar16 + (float)uVar28 * fVar15 +
                 (float)uVar20 * fVar14 + (float)uVar22 * fVar35 + (float)uVar24 * fVar33 +
                 (float)uVar30 * fVar38 + (float)uVar32 * fVar37;
        fVar38 = fVar13 * (float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar26 >> 0x20) * fVar16 +
                 (float)((ulong)uVar28 >> 0x20) * fVar15 + (float)((ulong)uVar20 >> 0x20) * fVar14 +
                 (float)((ulong)uVar22 >> 0x20) * fVar35 + (float)((ulong)uVar24 >> 0x20) * fVar33 +
                 (float)((ulong)uVar30 >> 0x20) * fVar38 + fVar12;
        *(ulong *)(param_3 + uVar4 + 2) = CONCAT44(fVar38,fVar37);
        *(ulong *)(param_3 + uVar4) =
             CONCAT44(fVar35 * (float)((ulong)uVar17 >> 0x20) +
                      (float)((ulong)uVar25 >> 0x20) * fVar16 +
                      (float)((ulong)uVar27 >> 0x20) * fVar15 +
                      (float)((ulong)uVar19 >> 0x20) * fVar14 +
                      (float)((ulong)uVar21 >> 0x20) * fVar35 +
                      (float)((ulong)uVar23 >> 0x20) * fVar33 + fVar10 + fVar11,
                      fVar33 * (float)uVar17 + (float)uVar25 * fVar16 + (float)uVar27 * fVar15 +
                      (float)uVar19 * fVar14 + (float)uVar21 * fVar35 + (float)uVar23 * fVar33 +
                      fVar8 + fVar9);
        uVar4 = (ulong)uVar3;
        fVar16 = fVar13;
        fVar15 = fVar14;
      } while (uVar3 < param_2);
    }
    *(ulong *)(param_1 + 0x2f0) = CONCAT44(fVar14,fVar13);
    *(ulong *)(param_1 + 0x2f8) = CONCAT44(fVar37,fVar38);
  }
  else if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x280);
    pfVar6 = param_3;
    do {
      iVar5 = iVar5 * 0x343fd + 0x269ec3;
      pfVar7 = pfVar6 + 1;
      *pfVar6 = (float)iVar5 * 2.3283064e-10;
      pfVar6 = pfVar7;
    } while (pfVar7 < param_3 + param_2);
    *(int *)(param_1 + 0x280) = iVar5;
  }
  return;
}


