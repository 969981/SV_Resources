/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1d474; name: FUN_02e1d474
 */


bool FUN_02e1d474(long *param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_1 + 0x38))();
  return sVar1 == param_3;
}


