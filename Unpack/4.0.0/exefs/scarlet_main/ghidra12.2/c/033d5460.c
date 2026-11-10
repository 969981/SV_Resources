/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d5460; name: FUN_033d5460
 */


void FUN_033d5460(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6,float *param_7,uint param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  undefined8 uVar33;
  undefined8 uVar34;
  
  if ((param_2 == param_1) && (param_4 == param_3)) {
    pfVar3 = param_7 + param_8;
    if ((param_8 & 0x1f) == 0) {
      if (param_8 != 0) {
        do {
          uVar12 = *(undefined8 *)param_6;
          uVar14 = *(undefined8 *)(param_6 + 6);
          uVar13 = *(undefined8 *)(param_6 + 4);
          uVar4 = *(undefined8 *)param_5;
          uVar9 = *(undefined8 *)(param_5 + 6);
          uVar7 = *(undefined8 *)(param_5 + 4);
          uVar24 = *(undefined8 *)(param_6 + 10);
          uVar23 = *(undefined8 *)(param_6 + 8);
          uVar26 = *(undefined8 *)(param_6 + 0xe);
          uVar25 = *(undefined8 *)(param_6 + 0xc);
          uVar29 = *(undefined8 *)(param_5 + 0x12);
          uVar27 = *(undefined8 *)(param_5 + 0x10);
          uVar33 = *(undefined8 *)(param_5 + 0x16);
          uVar31 = *(undefined8 *)(param_5 + 0x14);
          uVar17 = *(undefined8 *)(param_5 + 10);
          uVar15 = *(undefined8 *)(param_5 + 8);
          uVar21 = *(undefined8 *)(param_5 + 0xe);
          uVar19 = *(undefined8 *)(param_5 + 0xc);
          uVar6 = *(undefined8 *)(param_6 + 0x12);
          uVar5 = *(undefined8 *)(param_6 + 0x10);
          uVar10 = *(undefined8 *)(param_6 + 0x16);
          uVar8 = *(undefined8 *)(param_6 + 0x14);
          uVar30 = *(undefined8 *)(param_6 + 0x1a);
          uVar28 = *(undefined8 *)(param_6 + 0x18);
          uVar34 = *(undefined8 *)(param_6 + 0x1e);
          uVar32 = *(undefined8 *)(param_6 + 0x1c);
          uVar18 = *(undefined8 *)(param_5 + 0x1a);
          uVar16 = *(undefined8 *)(param_5 + 0x18);
          uVar22 = *(undefined8 *)(param_5 + 0x1e);
          uVar20 = *(undefined8 *)(param_5 + 0x1c);
          *(ulong *)(param_7 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20) * param_4 +
                        (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2,
                        (float)*(undefined8 *)(param_6 + 2) * param_4 +
                        (float)*(undefined8 *)(param_5 + 2) * param_2);
          *(ulong *)param_7 =
               CONCAT44((float)((ulong)uVar12 >> 0x20) * param_4 +
                        (float)((ulong)uVar4 >> 0x20) * param_2,
                        (float)uVar12 * param_4 + (float)uVar4 * param_2);
          *(ulong *)(param_7 + 6) =
               CONCAT44((float)((ulong)uVar14 >> 0x20) * param_4 +
                        (float)((ulong)uVar9 >> 0x20) * param_2,
                        (float)uVar14 * param_4 + (float)uVar9 * param_2);
          *(ulong *)(param_7 + 4) =
               CONCAT44((float)((ulong)uVar13 >> 0x20) * param_4 +
                        (float)((ulong)uVar7 >> 0x20) * param_2,
                        (float)uVar13 * param_4 + (float)uVar7 * param_2);
          param_5 = param_5 + 0x20;
          *(ulong *)(param_7 + 10) =
               CONCAT44((float)((ulong)uVar24 >> 0x20) * param_4 +
                        (float)((ulong)uVar17 >> 0x20) * param_2,
                        (float)uVar24 * param_4 + (float)uVar17 * param_2);
          *(ulong *)(param_7 + 8) =
               CONCAT44((float)((ulong)uVar23 >> 0x20) * param_4 +
                        (float)((ulong)uVar15 >> 0x20) * param_2,
                        (float)uVar23 * param_4 + (float)uVar15 * param_2);
          *(ulong *)(param_7 + 0xe) =
               CONCAT44((float)((ulong)uVar26 >> 0x20) * param_4 +
                        (float)((ulong)uVar21 >> 0x20) * param_2,
                        (float)uVar26 * param_4 + (float)uVar21 * param_2);
          *(ulong *)(param_7 + 0xc) =
               CONCAT44((float)((ulong)uVar25 >> 0x20) * param_4 +
                        (float)((ulong)uVar19 >> 0x20) * param_2,
                        (float)uVar25 * param_4 + (float)uVar19 * param_2);
          *(ulong *)(param_7 + 0x12) =
               CONCAT44((float)((ulong)uVar6 >> 0x20) * param_4 +
                        (float)((ulong)uVar29 >> 0x20) * param_2,
                        (float)uVar6 * param_4 + (float)uVar29 * param_2);
          *(ulong *)(param_7 + 0x10) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * param_4 +
                        (float)((ulong)uVar27 >> 0x20) * param_2,
                        (float)uVar5 * param_4 + (float)uVar27 * param_2);
          *(ulong *)(param_7 + 0x16) =
               CONCAT44((float)((ulong)uVar10 >> 0x20) * param_4 +
                        (float)((ulong)uVar33 >> 0x20) * param_2,
                        (float)uVar10 * param_4 + (float)uVar33 * param_2);
          *(ulong *)(param_7 + 0x14) =
               CONCAT44((float)((ulong)uVar8 >> 0x20) * param_4 +
                        (float)((ulong)uVar31 >> 0x20) * param_2,
                        (float)uVar8 * param_4 + (float)uVar31 * param_2);
          param_6 = param_6 + 0x20;
          *(ulong *)(param_7 + 0x1a) =
               CONCAT44((float)((ulong)uVar30 >> 0x20) * param_4 +
                        (float)((ulong)uVar18 >> 0x20) * param_2,
                        (float)uVar30 * param_4 + (float)uVar18 * param_2);
          *(ulong *)(param_7 + 0x18) =
               CONCAT44((float)((ulong)uVar28 >> 0x20) * param_4 +
                        (float)((ulong)uVar16 >> 0x20) * param_2,
                        (float)uVar28 * param_4 + (float)uVar16 * param_2);
          *(ulong *)(param_7 + 0x1e) =
               CONCAT44((float)((ulong)uVar34 >> 0x20) * param_4 +
                        (float)((ulong)uVar22 >> 0x20) * param_2,
                        (float)uVar34 * param_4 + (float)uVar22 * param_2);
          *(ulong *)(param_7 + 0x1c) =
               CONCAT44((float)((ulong)uVar32 >> 0x20) * param_4 +
                        (float)((ulong)uVar20 >> 0x20) * param_2,
                        (float)uVar32 * param_4 + (float)uVar20 * param_2);
          param_7 = param_7 + 0x20;
        } while (param_7 < pfVar3);
      }
    }
    else if (param_8 != 0) {
      do {
        uVar4 = *(undefined8 *)param_5;
        uVar5 = *(undefined8 *)param_6;
        pfVar2 = param_7 + 4;
        *(ulong *)(param_7 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20) * param_4 +
                      (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2,
                      (float)*(undefined8 *)(param_6 + 2) * param_4 +
                      (float)*(undefined8 *)(param_5 + 2) * param_2);
        *(ulong *)param_7 =
             CONCAT44((float)((ulong)uVar5 >> 0x20) * param_4 +
                      (float)((ulong)uVar4 >> 0x20) * param_2,
                      (float)uVar5 * param_4 + (float)uVar4 * param_2);
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = pfVar2;
      } while (pfVar2 < pfVar3);
    }
  }
  else if (param_8 != 0) {
    param_2 = param_2 - param_1;
    param_4 = param_4 - param_3;
    pfVar3 = param_7;
    do {
      fVar11 = *param_5 * param_1;
      fVar1 = param_3 * *param_6;
      param_1 = param_1 + param_2 / (float)param_8;
      param_3 = param_3 + param_4 / (float)param_8;
      pfVar2 = pfVar3 + 1;
      *pfVar3 = fVar11 + fVar1;
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      pfVar3 = pfVar2;
    } while (pfVar2 < param_7 + param_8);
  }
  return;
}


