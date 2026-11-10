/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003448e0; name: FUN_003448e0
 */


void FUN_003448e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  free(*(void **)(param_1 + 0x68));
  uVar1 = FUN_0038ccb0(param_2);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}


