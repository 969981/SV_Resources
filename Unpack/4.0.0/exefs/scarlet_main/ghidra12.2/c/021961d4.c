/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021961d4; name: FUN_021961d4
 */


void FUN_021961d4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2[3];
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  lVar2 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar3;
  param_1[6] = lVar2;
  param_1[3] = lVar4;
  param_1[4] = lVar1;
  if (param_2[1] - *param_2 != 0) {
    FUN_02196928(param_1,(param_2[1] - *param_2 >> 4) * -0x5555555555555555);
    lVar4 = *param_2;
    lVar1 = param_2[1];
    lVar3 = param_1[1];
    if (lVar4 != lVar1) {
      do {
        FUN_021969b4(param_1 + 3,lVar3,lVar4);
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + 0x30;
      } while (lVar1 != lVar4);
    }
    param_1[1] = lVar3;
  }
  return;
}


