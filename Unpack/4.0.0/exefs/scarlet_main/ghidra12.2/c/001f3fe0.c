/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f3fe0; name: FUN_001f3fe0
 */


undefined8 FUN_001f3fe0(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1[1] - *param_1;
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    lVar1 = FUN_001f45ec(param_3,*param_1,param_2);
    if (lVar1 == 0) {
      uVar2 = 0xfffffc7b;
    }
    else {
      lVar4 = *param_1;
      uVar2 = 0;
      param_1[2] = lVar1 + (param_1[2] - lVar4);
      param_1[3] = lVar1 + (param_1[3] - lVar4);
      *param_1 = lVar1;
      param_1[4] = lVar1 + (param_1[4] - lVar4);
      param_1[1] = lVar1 + param_2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


