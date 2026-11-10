/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a2448; name: FUN_030a2448
 */


void FUN_030a2448(float param_1,long *param_2)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    uVar6 = 1;
  }
  else {
    lVar5 = *param_2;
    pfVar1 = (float *)(lVar5 + (long)(int)(uVar2 - 1) * 8);
    fVar8 = *pfVar1;
    fVar7 = pfVar1[1];
    lVar3 = 0;
    lVar4 = 0;
    uVar6 = 0;
    do {
      fVar10 = fVar7 - ((float *)(lVar5 + lVar3))[1];
      fVar9 = fVar8 - *(float *)(lVar5 + lVar3);
      if (param_1 < fVar9 * fVar9 + fVar10 * fVar10) {
        *(undefined8 *)(lVar5 + (long)(int)uVar6 * 8) = *(undefined8 *)(lVar5 + lVar3);
        lVar5 = *param_2;
        fVar8 = *(float *)(lVar5 + lVar3);
        fVar7 = ((float *)(lVar5 + lVar3))[1];
        uVar2 = *(uint *)(param_2 + 1);
        uVar6 = uVar6 + 1;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < (int)uVar2);
    if ((int)uVar6 < 2) {
      uVar6 = 1;
    }
  }
  if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < uVar6) {
    FUN_0309d388(param_2,PTR_PTR_047d1a50,uVar6);
    uVar2 = *(uint *)(param_2 + 1);
  }
  if (uVar2 != uVar6) {
    *(uint *)(param_2 + 1) = uVar6;
  }
  return;
}


