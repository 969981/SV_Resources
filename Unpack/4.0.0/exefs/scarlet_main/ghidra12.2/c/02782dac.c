/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02782dac; name: FUN_02782dac
 */


void FUN_02782dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_02784dd0(param_1 + 0x30);
  return;
}


