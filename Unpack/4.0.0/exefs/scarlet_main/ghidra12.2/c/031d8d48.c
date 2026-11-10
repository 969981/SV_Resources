/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8d48; name: FUN_031d8d48
 */


undefined8 FUN_031d8d48(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1,param_2);
  return uVar1;
}


