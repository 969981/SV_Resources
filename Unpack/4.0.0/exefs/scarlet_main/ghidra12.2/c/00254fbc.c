/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00254fbc; name: FUN_00254fbc
 */


void FUN_00254fbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_00255044(param_4,param_2);
  }
  else if (param_4 != param_3) {
    uVar1 = FUN_0026ae18(param_4);
    FUN_00255058(param_2,uVar1);
    if (param_3 == 0) {
      FUN_00267ec4(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
    }
  }
  FUN_00255068(param_1,uVar1);
  return;
}


