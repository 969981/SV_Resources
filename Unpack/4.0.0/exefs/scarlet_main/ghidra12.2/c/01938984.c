/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01938984; name: FUN_01938984
 */


void FUN_01938984(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xb8))();
  if (param_1[0x19] == 0) {
    return;
  }
  FUN_028bfc90(param_1[0x19] + 0xb8,param_2);
  return;
}


