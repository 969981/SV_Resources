/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb5a60; name: FUN_01eb5a60
 */


void FUN_01eb5a60(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_3[2];
  cVar2 = *(char *)(*param_3 + lVar4);
  param_3[2] = lVar4 + 1;
  if (cVar2 == -0x78) {
    uVar3 = *(undefined4 *)(*param_3 + lVar4 + 1);
    param_3[2] = lVar4 + 5;
    *param_2 = uVar3;
    lVar4 = param_3[2];
    cVar2 = *(char *)(*param_3 + lVar4);
    param_3[2] = lVar4 + 1;
    if (cVar2 == -0x78) {
      uVar1 = *(undefined4 *)(*param_3 + lVar4 + 1);
      uVar3 = 0;
      param_3[2] = lVar4 + 5;
      param_2[1] = uVar1;
      goto LAB_01eb5ac4;
    }
  }
  uVar3 = 1;
LAB_01eb5ac4:
  *param_1 = uVar3;
  return;
}


