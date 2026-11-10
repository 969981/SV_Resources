/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a0190; name: FUN_017a0190
 */


void FUN_017a0190(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  FUN_017a01cc(param_1 + 0x48,*(undefined8 *)(param_2 + 2));
  FUN_017a01cc(param_1 + 0x50,*(undefined8 *)(param_2 + 4));
  return;
}


