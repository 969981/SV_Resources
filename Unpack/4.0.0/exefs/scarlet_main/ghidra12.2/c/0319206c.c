/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319206c; name: FUN_0319206c
 */


void FUN_0319206c(float *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = param_2[1];
  fVar4 = (float)*param_2;
  fVar5 = (float)((ulong)*param_2 >> 0x20);
  fVar1 = ABS(fVar4 * fVar5 * (float)uVar2);
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  uVar3 = *param_2;
  *(ulong *)(param_1 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) *
                (float)((ulong)param_2[1] >> 0x20),
                (float)*(undefined8 *)(param_1 + 6) * (float)param_2[1]);
  *(ulong *)(param_1 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * (float)((ulong)uVar3 >> 0x20)
                ,(float)*(undefined8 *)(param_1 + 4) * (float)uVar3);
  uVar6 = *param_2;
  uVar3 = NEON_fmaxp(uVar6,uVar6,4);
  uVar9 = NEON_fminp(uVar6,uVar6,4);
  fVar12 = (float)param_2[1];
  uVar3 = NEON_fmax(CONCAT44(fVar12,fVar12),uVar3,4);
  uVar9 = NEON_fmin(CONCAT44(fVar12,fVar12),uVar9,4);
  fVar7 = (float)uVar6;
  if ((bool)(~((float)uVar3 == (float)uVar9) & 1)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    fVar10 = (float)((ulong)uVar6 >> 0x20);
    uVar2 = *(undefined8 *)(param_1 + 10);
    uVar6 = *(undefined8 *)(param_1 + 0xe);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_1 + 0x12);
    fVar5 = (float)*(undefined8 *)(param_1 + 8);
    fVar11 = ((fVar5 + fVar4) - fVar8) * 0.5 * fVar10 * fVar10;
    fVar13 = ((fVar8 + fVar4) - fVar5) * 0.5 * fVar7 * fVar7;
    fVar4 = ((fVar5 + fVar8) - fVar4) * 0.5 * fVar12 * fVar12;
    fVar5 = fVar1 * (fVar4 + fVar13);
    fVar10 = fVar1 * (fVar4 + fVar11);
    fVar7 = (float)*(undefined8 *)(param_1 + 0xc);
    uVar3 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20),fVar1 * (fVar13 + fVar11)
                    );
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(ulong *)(param_1 + 8) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),fVar10);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    *(ulong *)(param_1 + 0xc) = CONCAT44(fVar5,fVar7);
    *(undefined8 *)(param_1 + 0x12) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    fVar12 = fVar1 * (float)*param_2;
    fVar4 = (float)((ulong)*param_2 >> 0x20);
    fVar7 = fVar7 * fVar12 * fVar4;
    fVar12 = (float)uVar9 * fVar12 * (float)param_2[1];
    fVar4 = fVar1 * fVar4 * (float)param_2[1] * (float)((ulong)uVar9 >> 0x20);
    *(ulong *)(param_1 + 10) = CONCAT44((int)((ulong)uVar2 >> 0x20),fVar12);
    *(ulong *)(param_1 + 8) = CONCAT44(fVar7,fVar10);
    *(ulong *)(param_1 + 0xe) = CONCAT44((int)((ulong)uVar6 >> 0x20),fVar4);
    *(ulong *)(param_1 + 0xc) = CONCAT44(fVar5,fVar7);
    *(undefined8 *)(param_1 + 0x12) = uVar3;
    *(ulong *)(param_1 + 0x10) = CONCAT44(fVar4,fVar12);
    return;
  }
  fVar1 = fVar1 * fVar7 * fVar7;
  fVar7 = ABS(fVar4 * fVar5 * (float)uVar2) * fVar7 * fVar7;
  *(ulong *)(param_1 + 10) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 10));
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 8));
  *(ulong *)(param_1 + 0xe) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 0xe));
  *(ulong *)(param_1 + 0xc) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 0xc));
  *(ulong *)(param_1 + 0x12) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 0x12));
  *(ulong *)(param_1 + 0x10) =
       CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                fVar1 * (float)*(undefined8 *)(param_1 + 0x10));
  return;
}


