/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8938; name: FUN_001c8938
 */


void FUN_001c8938(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  FUN_001ec308(param_2);
  return;
}


