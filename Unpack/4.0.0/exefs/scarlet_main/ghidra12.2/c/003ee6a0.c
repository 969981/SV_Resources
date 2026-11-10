/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ee6a0; name: FUN_003ee6a0
 */


uint FUN_003ee6a0(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  if (param_4 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar3 = *param_2;
      uVar4 = *param_3;
      *param_1 = (uVar3 - uVar6) - uVar4;
      uVar1 = param_2[1];
      uVar2 = param_3[1];
      if (uVar3 != uVar4) {
        uVar6 = (uint)(uVar3 < uVar4);
      }
      iVar5 = uVar1 - uVar2;
      param_1[1] = iVar5 - uVar6;
      uVar3 = param_2[2];
      uVar4 = param_3[2];
      if (iVar5 != 0) {
        uVar6 = (uint)(uVar1 < uVar2);
      }
      iVar5 = uVar3 - uVar4;
      param_1[2] = iVar5 - uVar6;
      if (iVar5 != 0) {
        uVar6 = (uint)(uVar3 < uVar4);
      }
      uVar3 = param_2[3];
      uVar4 = param_3[3];
      param_3 = param_3 + 4;
      iVar5 = uVar3 - uVar4;
      param_4 = param_4 - 4;
      param_1[3] = iVar5 - uVar6;
      if (iVar5 != 0) {
        uVar6 = (uint)(uVar3 < uVar4);
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (3 < param_4);
    if (param_4 == 0) {
      return uVar6;
    }
  }
  do {
    uVar3 = *param_2;
    iVar5 = uVar3 - uVar6;
    uVar4 = *param_3;
    if (uVar3 != uVar4) {
      uVar6 = (uint)(uVar3 < uVar4);
    }
    param_4 = param_4 - 1;
    *param_1 = iVar5 - uVar4;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return uVar6;
}


