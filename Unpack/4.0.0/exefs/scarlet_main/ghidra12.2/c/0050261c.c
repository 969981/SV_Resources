/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050261c; name: FUN_0050261c
 */


undefined8 * FUN_0050261c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return puVar1;
  }
  return (undefined8 *)*puVar1;
}


