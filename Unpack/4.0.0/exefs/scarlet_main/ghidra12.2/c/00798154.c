/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00798154; name: FUN_00798154
 */


void FUN_00798154(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x40))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0x10);
  return;
}


