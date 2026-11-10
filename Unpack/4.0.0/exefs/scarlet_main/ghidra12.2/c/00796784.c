/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796784; name: FUN_00796784
 */


bool FUN_00796784(long param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ef,0x10);
  return iVar1 != 0;
}


