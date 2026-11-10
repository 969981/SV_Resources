/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f96ec0; name: FUN_02f96ec0
 */


void FUN_02f96ec0(long param_1,ulong param_2,uint param_3,long *param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar14 = param_2 & 0xffffffff;
  do {
    iVar6 = *(int *)(param_1 + (long)((int)((int)uVar14 + param_3) >> 1) * 4);
    uVar8 = (ulong)param_3;
    uVar15 = uVar14;
    do {
      lVar11 = *param_4;
      lVar9 = lVar11 + (long)iVar6 * 0xa8;
      uVar2 = *(uint *)(lVar9 + 0x9c);
      pfVar1 = (float *)(lVar9 + 0x50);
      uVar10 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
      while( true ) {
        iVar4 = *(int *)(param_1 + uVar10);
        uVar3 = *(uint *)(lVar11 + (long)iVar4 * 0xa8 + 0x9c);
        iVar13 = (int)uVar15;
        if ((uVar2 <= uVar3) &&
           ((uVar3 != uVar2 || (*pfVar1 <= *(float *)(lVar11 + (long)iVar4 * 0xa8 + 0x50))))) break;
        uVar10 = uVar10 + 4;
        uVar15 = (ulong)(iVar13 + 1);
      }
      uVar12 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
      while( true ) {
        iVar5 = *(int *)(param_1 + uVar12);
        uVar3 = *(uint *)(lVar11 + (long)iVar5 * 0xa8 + 0x9c);
        iVar7 = (int)uVar8;
        if ((uVar3 <= uVar2) &&
           ((uVar2 != uVar3 || (*(float *)(lVar11 + (long)iVar5 * 0xa8 + 0x50) <= *pfVar1)))) break;
        uVar12 = uVar12 - 4;
        uVar8 = (ulong)(iVar7 - 1);
      }
      if (iVar13 <= iVar7) {
        if (iVar13 != iVar7) {
          *(int *)(param_1 + uVar12) = iVar4;
          *(int *)(param_1 + uVar10) = iVar5;
        }
        uVar8 = (ulong)(iVar7 - 1);
        uVar15 = (ulong)(iVar13 + 1);
      }
    } while ((int)uVar15 <= (int)uVar8);
    if ((int)uVar14 < (int)uVar8) {
      FUN_02f96ec0(param_1,uVar14,uVar8,param_4);
    }
    uVar14 = uVar15;
  } while ((int)uVar15 < (int)param_3);
  return;
}


