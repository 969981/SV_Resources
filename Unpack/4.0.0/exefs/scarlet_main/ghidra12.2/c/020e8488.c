/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e8488; name: FUN_020e8488
 */


long FUN_020e8488(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen((char *)*param_1);
  sVar2 = strlen((char *)*param_2);
  return sVar1 + sVar2 + 2;
}


