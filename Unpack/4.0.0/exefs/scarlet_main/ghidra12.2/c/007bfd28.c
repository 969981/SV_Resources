/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfd28; name: FUN_007bfd28
 */


void FUN_007bfd28(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(long **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  param_2[1] = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}


