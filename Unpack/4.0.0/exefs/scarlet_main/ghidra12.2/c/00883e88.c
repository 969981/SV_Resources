/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00883e88; name: FUN_00883e88
 */


void FUN_00883e88(long param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  VibrationValue *pVVar9;
  VibrationDeviceHandle *pVVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  
  puVar4 = PTR_DAT_047d1eb8;
  iVar7 = *(int *)(param_1 + 0x4c);
  iVar5 = *(int *)PTR_DAT_047d1eb8;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar8 = iVar5 * iVar6;
  if (iVar7 + iVar8 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar11 = 0;
    pVVar9 = (VibrationValue *)(param_1 + 0x24);
    pVVar10 = (VibrationDeviceHandle *)(param_1 + 0x44);
    uVar12 = 1;
    do {
      pfVar1 = (float *)(*(long *)(param_1 + 8) + uVar11 * 4 + (ulong)*(uint *)(param_1 + 0x18) * 4)
      ;
      uVar3 = iVar6 * iVar5;
      if (*(float *)(pVVar9 + 8) == *pfVar1) {
        fVar13 = pfVar1[uVar3];
        if (*(float *)pVVar9 != fVar13) goto LAB_00883f2c;
      }
      else {
        fVar13 = pfVar1[uVar3];
LAB_00883f2c:
        *(float *)pVVar9 = *pfVar1;
        *(undefined4 *)(pVVar9 + 4) = 0x43200000;
        *(float *)(pVVar9 + 8) = fVar13;
        *(undefined4 *)(pVVar9 + 0xc) = 0x43a00000;
        nn::hid::SendVibrationValue(pVVar10,pVVar9);
      }
      *pfVar1 = 0.0;
      pfVar1[uVar3] = 0.0;
      if (*(uint *)(param_1 + 0x10) <= uVar12) goto LAB_00883f78;
      iVar5 = *(int *)puVar4;
      uVar12 = uVar12 + 1;
      pVVar9 = pVVar9 + 0x10;
      iVar6 = *(int *)(param_1 + 0x20);
      uVar11 = (ulong)((int)uVar11 + (uVar2 >> 3));
      pVVar10 = pVVar10 + 4;
    } while( true );
  }
LAB_00883f88:
  iVar5 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x4c) = iVar7 + -1;
  *(int *)(param_1 + 0x18) = iVar5;
  if (iVar5 == iVar8) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
LAB_00883f78:
  iVar8 = *(int *)(param_1 + 0x20) * *(int *)puVar4;
  iVar7 = *(int *)(param_1 + 0x4c);
  goto LAB_00883f88;
}


