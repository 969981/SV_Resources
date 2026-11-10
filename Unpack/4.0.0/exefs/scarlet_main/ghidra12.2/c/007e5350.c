/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5350; name: FUN_007e5350
 */


void FUN_007e5350(long param_1,byte param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = 0x10;
  if ((param_3 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xe3 | bVar1 | (param_2 & 3) << 2;
  return;
}


