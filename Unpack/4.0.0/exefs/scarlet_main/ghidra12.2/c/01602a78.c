/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01602a78; name: FUN_01602a78
 */


void FUN_01602a78(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_01613e70();
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar4;
  if (lVar3 != 0) {
    FUN_0160a93c(param_1 + 1);
  }
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  lVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar1;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  lVar4 = param_2[0xb];
  param_1[0xb] = lVar4;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  if (lVar4 != 0) {
    uVar6 = param_1[1];
    uVar5 = *(ulong *)(lVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar2 * uVar6;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


