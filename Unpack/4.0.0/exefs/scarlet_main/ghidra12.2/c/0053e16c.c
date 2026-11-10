/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053e16c; name: FUN_0053e16c
 */


void FUN_0053e16c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_0053e1f4(param_4,param_2);
  }
  else if (param_4 != param_3) {
    uVar1 = FUN_00585648(param_4);
    FUN_0053e208(param_2,uVar1);
    if (param_3 == 0) {
      FUN_0057a198(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
    }
  }
  FUN_0053e218(param_1,uVar1);
  return;
}


