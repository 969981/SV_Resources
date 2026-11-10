/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0a18; name: FUN_001e0a18
 */


ulong FUN_001e0a18(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (ulong)(param_1 == 0 && param_2 == 0);
  }
  uVar1 = FUN_001e0990();
  return uVar1;
}


