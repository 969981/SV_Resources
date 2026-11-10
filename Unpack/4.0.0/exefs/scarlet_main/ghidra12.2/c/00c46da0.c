/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c46da0; name: FUN_00c46da0
 */


void FUN_00c46da0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0x13;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
  return;
}


