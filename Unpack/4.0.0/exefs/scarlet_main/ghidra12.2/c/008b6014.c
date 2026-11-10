/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b6014; name: FUN_008b6014
 */


void FUN_008b6014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_008f0070();
  FUN_008b55b8(param_1);
  FUN_008f0078(param_1,param_4);
  iVar3 = FUN_008f004c(param_1);
  if (iVar3 != 2) {
    if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    psVar4 = (short *)FUN_008efff8();
    fVar9 = *(float *)(param_1 + 0x40);
    fVar10 = *(float *)(param_1 + 0x44);
    fVar11 = 2.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9 + fVar9;
    }
    iVar3 = *(int *)(param_1 + 0x48);
    fVar9 = 2.0;
    if (fVar10 <= 1.0) {
      fVar9 = fVar10 + fVar10;
    }
    sVar2 = (short)iVar3;
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        iVar6 = 0;
        do {
          sVar1 = (short)iVar6;
          iVar6 = iVar6 + 1;
          *psVar4 = 0;
          psVar4[1] = (short)iVar6;
          psVar4[2] = sVar1 + 2;
          psVar4 = psVar4 + 3;
        } while (iVar3 != iVar6);
      }
      iVar6 = iVar3 + 2;
      if (iVar3 != 0) {
        iVar7 = 0;
        do {
          sVar1 = sVar2 + (short)iVar7;
          iVar7 = iVar7 + 1;
          *psVar4 = (short)iVar6;
          psVar4[1] = sVar1 + 3;
          psVar4[2] = sVar1 + 4;
          psVar4 = psVar4 + 3;
        } while (iVar3 != iVar7);
      }
      if (iVar3 != 0) {
        iVar7 = iVar6 * 2 + 1;
        iVar8 = iVar3;
        do {
          psVar4[1] = (short)iVar7;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
          *psVar4 = (short)(iVar6 * 2);
          psVar4[2] = (short)iVar7;
          psVar4 = psVar4 + 3;
        } while (iVar8 != 0);
      }
      if (iVar3 != 0) {
        iVar7 = iVar6 * 3 + 1;
        do {
          psVar4[1] = (short)iVar7;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
          *psVar4 = (short)(iVar6 * 3);
          psVar4[2] = (short)iVar7;
          psVar4 = psVar4 + 3;
        } while (iVar3 != 0);
      }
    }
    sVar2 = sVar2 * 4;
    sVar1 = sVar2 + 8;
    if (fVar11 < 2.0) {
      *psVar4 = sVar1;
      psVar4[3] = sVar1;
      psVar4[5] = sVar2 + 9;
      psVar4[1] = sVar2 + 10;
      psVar4[2] = sVar2 + 0xb;
      psVar4[4] = sVar2 + 0xb;
      psVar4[6] = sVar2 + 0xc;
      psVar4[9] = sVar2 + 0xc;
      psVar4[7] = sVar2 + 0xf;
      psVar4[8] = sVar2 + 0xe;
      psVar4[10] = sVar2 + 0xd;
      sVar1 = sVar2 + 0x10;
      psVar4[0xb] = sVar2 + 0xf;
      psVar4 = psVar4 + 0xc;
    }
    if (fVar9 < 2.0) {
      *psVar4 = sVar1;
      psVar4[3] = sVar1;
      psVar4[1] = sVar1 + 1;
      psVar4[2] = sVar1 + 2;
      psVar4[4] = sVar1 + 2;
      psVar4[5] = sVar1 + 3;
      return;
    }
    return;
  }
  piVar5 = (int *)FUN_008efff8();
  fVar9 = *(float *)(param_1 + 0x40);
  fVar10 = *(float *)(param_1 + 0x44);
  fVar11 = 2.0;
  if (fVar9 <= 1.0) {
    fVar11 = fVar9 + fVar9;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  fVar9 = 2.0;
  if (fVar10 <= 1.0) {
    fVar9 = fVar10 + fVar10;
  }
  if (iVar3 != -1) {
    iVar7 = 0;
    iVar6 = iVar3 + 2;
    do {
      while (iVar7 == 0) {
        iVar7 = 1;
        if (iVar3 + 1 == 1) goto LAB_008b62ac;
      }
      *piVar5 = 0;
      piVar5[1] = iVar7;
      iVar7 = iVar7 + 1;
      piVar5[2] = iVar7;
      piVar5 = piVar5 + 3;
    } while (iVar7 != iVar3 + 1);
LAB_008b62ac:
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        iVar8 = iVar3 + iVar7;
        iVar7 = iVar7 + 1;
        *piVar5 = iVar6;
        piVar5[1] = iVar8 + 3;
        piVar5[2] = iVar8 + 4;
        piVar5 = piVar5 + 3;
      } while (iVar3 != iVar7);
    }
    if (iVar3 != 0) {
      iVar7 = iVar6 * 2 + 2;
      iVar8 = iVar3;
      do {
        *piVar5 = iVar6 * 2;
        piVar5[1] = iVar7 + -1;
        piVar5[2] = iVar7;
        piVar5 = piVar5 + 3;
        iVar8 = iVar8 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar8 != 0);
    }
    if (iVar3 != 0) {
      iVar7 = iVar6 * 3 + 2;
      iVar8 = iVar3;
      do {
        *piVar5 = iVar6 * 3;
        piVar5[1] = iVar7 + -1;
        piVar5[2] = iVar7;
        piVar5 = piVar5 + 3;
        iVar8 = iVar8 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar8 != 0);
    }
  }
  iVar3 = iVar3 * 4;
  iVar6 = iVar3 + 8;
  if (fVar11 < 2.0) {
    *piVar5 = iVar6;
    piVar5[1] = iVar3 + 10;
    piVar5[2] = iVar3 + 0xb;
    piVar5[3] = iVar6;
    piVar5[4] = iVar3 + 0xb;
    piVar5[5] = iVar3 + 9;
    piVar5[6] = iVar3 + 0xc;
    piVar5[7] = iVar3 + 0xf;
    piVar5[8] = iVar3 + 0xe;
    piVar5[9] = iVar3 + 0xc;
    piVar5[10] = iVar3 + 0xd;
    piVar5[0xb] = iVar3 + 0xf;
    piVar5 = piVar5 + 0xc;
    iVar6 = iVar3 + 0x10;
  }
  if (fVar9 < 2.0) {
    *piVar5 = iVar6;
    piVar5[1] = iVar6 + 1;
    piVar5[2] = iVar6 + 2;
    piVar5[3] = iVar6;
    piVar5[4] = iVar6 + 2;
    piVar5[5] = iVar6 + 3;
    return;
  }
  return;
}


