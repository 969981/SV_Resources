/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011db690; name: FUN_011db690
 */


void FUN_011db690(long param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x150) + 1;
  *(byte *)(param_1 + 0x150) = bVar1;
  if ((bVar1 & 1) != 0) {
    FUN_011db9c0(param_1);
  }
  FUN_011db6c8(param_1);
  return;
}


