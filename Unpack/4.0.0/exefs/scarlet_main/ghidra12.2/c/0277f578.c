/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277f578; name: FUN_0277f578
 */


undefined4 FUN_0277f578(long param_1)

{
  undefined4 *puVar1;
  
  if ((*(long *)(param_1 + 0x38) == 0) || ((*(byte *)(*(long *)(param_1 + 0x38) + 0x1e8) & 1) == 0))
  {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x38) + 0x234);
  }
  return *puVar1;
}


