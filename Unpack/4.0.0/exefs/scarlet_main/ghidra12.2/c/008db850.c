/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008db850; name: FUN_008db850
 */


void FUN_008db850(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}


