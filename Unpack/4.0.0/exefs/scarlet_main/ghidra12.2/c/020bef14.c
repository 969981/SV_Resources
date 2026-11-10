/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020bef14; name: FUN_020bef14
 */


undefined8 FUN_020bef14(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
  }
  return *puVar1;
}


