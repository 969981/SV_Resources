/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d7aa0; name: FUN_008d7aa0
 */


void FUN_008d7aa0(float param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float __x;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar11 = param_3[1];
  uVar7 = *(undefined4 *)param_5;
  param_3[1] = uVar11;
  *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20),uVar7);
  uVar9 = CONCAT44(*(undefined4 *)((long)param_5 + 4),uVar7);
  param_3[1] = uVar11;
  *param_3 = uVar9;
  param_3[1] = (ulong)*(uint *)(param_5 + 1);
  *param_3 = uVar9;
  lVar5 = *(long *)(param_4 + 0x18);
  if (lVar5 != 0) {
    fVar17 = (float)*param_6;
    fVar18 = (float)((ulong)*param_6 >> 0x20);
    fVar19 = (float)param_6[1];
    __x = *(float *)(lVar5 + 0x6dc);
    fVar12 = *(float *)(lVar5 + 0x6c0);
    fVar13 = *(float *)(lVar5 + 0x6c4);
    fVar14 = *(float *)(lVar5 + 0x6c8);
    lVar6 = *(long *)(param_4 + 0x10);
    bVar4 = *(char *)(lVar6 + 0x8ad) == '\0';
    fVar15 = *(float *)(lVar5 + 0x6d0) + *(float *)(lVar5 + 0x6e0) * (fVar17 + fVar18) * 0.5;
    fVar10 = (float)((ulong)*param_5 >> 0x20);
    fVar8 = (float)*param_5;
    fVar1 = -fVar8;
    if (fVar18 < 0.5 || bVar4) {
      fVar1 = fVar8;
    }
    fVar16 = *(float *)(lVar5 + 0x6d4) + *(float *)(lVar5 + 0x6e4) * (fVar18 + fVar19) * 0.5;
    fVar8 = -fVar15;
    if (fVar18 < 0.5 || bVar4) {
      fVar8 = fVar15;
    }
    fVar15 = -fVar10;
    fVar3 = -fVar16;
    if (fVar19 < 0.5 || *(char *)(lVar6 + 0x8ae) == '\0') {
      fVar15 = fVar10;
      fVar3 = fVar16;
    }
    bVar4 = *(char *)(lVar6 + 0x8af) == '\0';
    fVar16 = *(float *)(lVar5 + 0x6d8) + *(float *)(lVar5 + 0x6e8) * (fVar19 + fVar17) * 0.5;
    fVar10 = -(float)param_5[1];
    if (fVar17 < 0.5 || bVar4) {
      fVar10 = (float)param_5[1];
    }
    fVar2 = -fVar16;
    if (fVar17 < 0.5 || bVar4) {
      fVar2 = fVar16;
    }
    fVar16 = powf(__x,param_1);
    if (__x != 1.0) {
      param_1 = (1.0 - fVar16) / (1.0 - __x);
    }
    param_3[1] = (ulong)(uint)(fVar14 * fVar19 + fVar10 + fVar2 * param_1);
    *param_3 = CONCAT44(fVar13 * fVar18 + fVar15 + fVar3 * param_1,
                        fVar12 * fVar17 + fVar1 + fVar8 * param_1);
  }
  return;
}


