/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00899808; name: FUN_00899808
 */


void FUN_00899808(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_00892dc4(param_2,param_1);
  (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))(*(long **)(param_1 + 0x18),param_2,param_3);
  FUN_00892ddc(param_2);
  return;
}


