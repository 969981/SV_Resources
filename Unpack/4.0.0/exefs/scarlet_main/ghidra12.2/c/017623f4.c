/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017623f4; name: FUN_017623f4
 */


undefined8 FUN_017623f4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x38);
  }
  return *puVar1;
}


