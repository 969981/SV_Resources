/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b3e0; name: FUN_0045b3e0
 */


undefined8 FUN_0045b3e0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar1 = param_3[2] * 0xe10 + param_3[1] * 0x3c + *param_3;
  if ((int)uVar1 < 0x15180) {
    lVar6 = -(ulong)(uVar1 >> 0x1f);
    uVar7 = uVar1 + 0x15180;
    if (-1 < (int)uVar1) {
      uVar7 = uVar1;
    }
  }
  else {
    uVar7 = uVar1 - 0x15180;
    lVar6 = 1;
  }
  iVar5 = (param_3[4] + -0xd) / 0xc;
  iVar2 = param_3[5] + iVar5;
  iVar4 = iVar2 * 0x5b5;
  iVar3 = iVar4 + 0x955d1c;
  iVar4 = iVar4 + 0x955d1f;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = ((iVar2 + 0x1a90) / 100) * 3;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  lVar6 = lVar6 + (((param_3[3] + (iVar4 >> 2) +
                    ((param_3[4] + iVar5 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar2 >> 2)) + -0x7d4b)
  ;
  if (-1 < lVar6) {
    uVar1 = param_4[2] * 0xe10 + param_4[1] * 0x3c + *param_4;
    if ((int)uVar1 < 0x15180) {
      lVar9 = -(ulong)(uVar1 >> 0x1f);
      uVar8 = uVar1 + 0x15180;
      if (-1 < (int)uVar1) {
        uVar8 = uVar1;
      }
    }
    else {
      uVar8 = uVar1 - 0x15180;
      lVar9 = 1;
    }
    iVar5 = (param_4[4] + -0xd) / 0xc;
    iVar2 = param_4[5] + iVar5;
    iVar4 = iVar2 * 0x5b5;
    iVar3 = iVar4 + 0x955d1c;
    iVar4 = iVar4 + 0x955d1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = ((iVar2 + 0x1a90) / 100) * 3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    lVar9 = lVar9 + (((param_4[3] + (iVar4 >> 2) +
                      ((param_4[4] + iVar5 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar2 >> 2)) +
                    -0x7d4b);
    if (-1 < lVar9) {
      lVar9 = lVar9 - lVar6;
      iVar3 = uVar8 - uVar7;
      uVar1 = (uint)(iVar3 < 0 && 0 < lVar9);
      iVar2 = iVar3 + 0x15180;
      if (uVar1 == 0) {
        iVar2 = iVar3;
      }
      lVar9 = lVar9 - (ulong)uVar1;
      iVar3 = iVar2 + -0x15180;
      if (0 >= iVar2 || lVar9 >= 0) {
        iVar3 = iVar2;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = (int)lVar9 + (uint)(0 < iVar2 && lVar9 < 0);
      }
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      return 1;
    }
  }
  return 0;
}


