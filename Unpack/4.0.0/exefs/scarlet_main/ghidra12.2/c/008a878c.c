/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a878c; name: FUN_008a878c
 */


void FUN_008a878c(long *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  undefined1 auStack_18 [4];
  float local_14;
  
  FUN_008b4f90(param_2,param_3);
  if ((*(byte *)(param_3 + 0x18e) >> 3 & 1) != 0) {
    (**(code **)(*param_1 + 0x60))(param_1,auStack_18);
    bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    fVar2 = 0.0;
    if (bVar1 != 0) {
      if (bVar1 == 2) {
        fVar2 = local_14;
      }
      else {
        fVar2 = -local_14;
      }
    }
    fVar7 = (float)*param_2;
    fVar15 = fVar7 * 0.0;
    fVar8 = (float)((ulong)*param_2 >> 0x20);
    fVar16 = fVar8 * 0.0;
    fVar9 = (float)param_2[1];
    fVar17 = fVar9 * 0.0;
    fVar10 = (float)((ulong)param_2[1] >> 0x20);
    fVar18 = fVar10 * 0.0;
    fVar11 = (float)param_2[2];
    fVar12 = (float)((ulong)param_2[2] >> 0x20);
    fVar13 = (float)param_2[3];
    fVar14 = (float)((ulong)param_2[3] >> 0x20);
    fVar3 = (float)param_2[4];
    fVar4 = (float)((ulong)param_2[4] >> 0x20);
    fVar5 = (float)param_2[5];
    fVar6 = (float)((ulong)param_2[5] >> 0x20);
    param_2[5] = CONCAT44(fVar6 + fVar18 + fVar14 * 0.0 + 0.0,fVar5 + fVar17 + fVar13 * 0.0 + 0.0);
    param_2[4] = CONCAT44(fVar4 + fVar16 + fVar12 * 0.0 + 0.0,fVar3 + fVar15 + fVar11 * 0.0 + 0.0);
    param_2[1] = CONCAT44(fVar10 + fVar14 * 0.0 + fVar6 * 0.0 + 0.0,
                          fVar9 + fVar13 * 0.0 + fVar5 * 0.0 + 0.0);
    *param_2 = CONCAT44(fVar8 + fVar12 * 0.0 + fVar4 * 0.0 + 0.0,
                        fVar7 + fVar11 * 0.0 + fVar3 * 0.0 + 0.0);
    param_2[3] = CONCAT44(fVar2 + fVar14 + fVar18 + fVar6 * 0.0,fVar13 + fVar17 + fVar5 * 0.0 + 0.0)
    ;
    param_2[2] = CONCAT44(fVar12 + fVar16 + fVar4 * 0.0 + 0.0,fVar11 + fVar15 + fVar3 * 0.0 + 0.0);
  }
  return;
}


