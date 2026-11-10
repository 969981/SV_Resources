/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d6de0; name: FUN_003d6de0
 */


undefined8 FUN_003d6de0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x695) >> 6 & 1) == 0) {
    uVar1 = FUN_003af490(param_1,10,0,0,0);
    return uVar1;
  }
  return 0;
}


