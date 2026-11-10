/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f25f90; name: FUN_02f25f90
 */


void FUN_02f25f90(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined1 uVar5;
  float fVar6;
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
  undefined1 auVar18 [16];
  
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  fVar11 = (float)param_1[3];
  fVar9 = (float)((ulong)param_1[2] >> 0x20);
  fVar7 = (float)param_1[2];
  fVar6 = -fVar7;
  fVar8 = -fVar9;
  fVar10 = -fVar11;
  pfVar4 = (float *)*param_3;
  fVar12 = (float)*(undefined8 *)(lVar1 + 0x60) * fVar11 +
           (float)*(undefined8 *)(lVar1 + 0x40) * fVar7 +
           (float)*(undefined8 *)(lVar1 + 0x50) * fVar9;
  fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20) * fVar11 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) * fVar7 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) * fVar9;
  fVar14 = (float)*(undefined8 *)(lVar1 + 0x68) * fVar11 +
           (float)*(undefined8 *)(lVar1 + 0x48) * fVar7 +
           (float)*(undefined8 *)(lVar1 + 0x58) * fVar9;
  fVar15 = (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20) * fVar11 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) * fVar7 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20) * fVar9;
  fVar17 = *(float *)(param_2 + 0x74);
  fVar7 = *(float *)(lVar2 + 0x60) * fVar10 +
          (float)*(undefined8 *)(lVar2 + 0x40) * fVar6 +
          (float)*(undefined8 *)(lVar2 + 0x50) * fVar8;
  fVar9 = *(float *)(lVar2 + 100) * fVar10 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar6 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar8;
  fVar11 = *(float *)(lVar2 + 0x68) * fVar10 +
           (float)*(undefined8 *)(lVar2 + 0x48) * fVar6 +
           (float)*(undefined8 *)(lVar2 + 0x58) * fVar8;
  fVar6 = *(float *)(lVar2 + 0x6c) * fVar10 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar6 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar8;
  *(ulong *)(pfVar4 + 6) = CONCAT44(fVar6,fVar11);
  *(ulong *)(pfVar4 + 4) = CONCAT44(fVar9,fVar7);
  fVar8 = fVar12 * fVar12 * (float)*(undefined8 *)(lVar1 + 0x30) +
          fVar7 * fVar7 * (float)*(undefined8 *)(lVar2 + 0x30);
  fVar10 = fVar13 * fVar13 * (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) +
           fVar9 * fVar9 * (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
  fVar16 = fVar14 * fVar14 * (float)*(undefined8 *)(lVar1 + 0x38) +
           fVar11 * fVar11 * (float)*(undefined8 *)(lVar2 + 0x38);
  fVar6 = fVar15 * fVar15 * (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20) +
          fVar6 * fVar6 * (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
  auVar18._4_4_ = fVar10;
  auVar18._0_4_ = fVar8;
  auVar18._8_4_ = fVar16;
  auVar18._12_4_ = fVar6;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar16;
  auVar3._12_4_ = fVar6;
  auVar18 = NEON_ext(auVar18,auVar3,8,1);
  *(ulong *)(pfVar4 + 2) =
       CONCAT44(fVar17 / (fVar8 + fVar10 + auVar18._0_4_ + 1.1920929e-07),fVar14);
  *(ulong *)pfVar4 = CONCAT44(fVar13,fVar12);
  *(ulong *)(pfVar4 + 6) =
       CONCAT44(*(float *)(param_2 + 0x1c) *
                -((float)*param_1 * (float)param_1[4] +
                  (float)((ulong)*param_1 >> 0x20) * (float)((ulong)param_1[4] >> 0x20) +
                 (float)param_1[1] * (float)param_1[5]),fVar11);
  *(ulong *)(pfVar4 + 4) = CONCAT44(fVar9,fVar7);
  if ((*(float *)(param_1 + 6) < 0.0) || (*(float *)((long)param_1 + 0x34) < 0.0)) {
    *param_3 = (long)(pfVar4 + 8);
    uVar5 = 0xb;
  }
  else {
    *param_3 = (long)(pfVar4 + 0xc);
    fVar7 = *(float *)((long)param_1 + 0x34);
    pfVar4[8] = *(float *)(param_1 + 6);
    pfVar4[9] = fVar7;
    uVar5 = 0xc;
  }
  *pfVar4 = *pfVar4 + 1.1920929e-07;
  *(undefined1 *)pfVar4 = uVar5;
  return;
}


