/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085d9d0; name: FUN_0085d9d0
 */


void FUN_0085d9d0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  
  do {
    fVar12 = *(float *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10 + 8);
    iVar11 = param_2;
    iVar6 = param_3;
    do {
      puVar5 = (undefined8 *)(param_1 + -0x10 + (long)iVar11 * 0x10);
      do {
        iVar4 = iVar11;
        puVar8 = puVar5;
        puVar5 = puVar8 + 2;
        iVar11 = iVar4 + 1;
      } while (0.0 < *(float *)(puVar8 + 3) - fVar12);
      puVar10 = (undefined8 *)(param_1 + 0x10 + (long)iVar6 * 0x10);
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar6;
        puVar9 = puVar10;
        puVar10 = puVar9 + -2;
        iVar6 = iVar7 + -1;
      } while (0.0 < fVar12 - *(float *)(puVar9 + -1));
      iVar11 = iVar4;
      if (iVar4 <= iVar6) {
        if (iVar4 != iVar6) {
          uVar1 = *puVar10;
          uVar2 = puVar9[-1];
          uVar3 = puVar8[3];
          *puVar10 = *puVar5;
          puVar9[-1] = uVar3;
          *puVar5 = uVar1;
          puVar8[3] = uVar2;
        }
        iVar6 = iVar7 + -2;
        iVar11 = iVar4 + 1;
      }
    } while (iVar11 <= iVar6);
    if (param_2 < iVar6) {
      FUN_0085d9d0(param_1);
    }
    param_2 = iVar11;
  } while (iVar11 < param_3);
  return;
}


