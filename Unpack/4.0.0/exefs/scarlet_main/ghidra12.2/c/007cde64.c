/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cde64; name: FUN_007cde64
 */


void FUN_007cde64(long param_1,undefined4 *param_2)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x45c) = *param_2;
  memcpy((void *)(param_1 + 0x460),param_2 + 1,0x10);
  FUN_007f6f90(auStack_20,*(undefined8 *)PTR_DAT_047d0860,param_1 + 0x45c);
  return;
}


