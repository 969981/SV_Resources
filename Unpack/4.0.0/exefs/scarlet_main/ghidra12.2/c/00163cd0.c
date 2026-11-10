/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163cd0; name: FUN_00163cd0
 */


void FUN_00163cd0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_3 = param_3 - *(long *)(param_1 + 200);
  if (param_3 < 1) {
    FUN_00163b30(param_1,param_2,0);
    return;
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = (param_3 + lVar2 + -1) / lVar2;
  }
  lVar3 = *(long *)(param_1 + 0xd0);
  if (param_4 - *(long *)(param_1 + 200) < lVar1 * lVar2 || lVar3 < lVar1 * lVar2) {
    if (lVar3 <= param_3) {
      param_3 = lVar3;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_3 / lVar2;
    }
  }
  FUN_00163b30(param_1,param_2,lVar1);
  return;
}


