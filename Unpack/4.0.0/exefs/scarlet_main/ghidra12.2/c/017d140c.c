/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d140c; name: FUN_017d140c
 */


void FUN_017d140c(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xe8)) {
    local_18 = param_2;
    FUN_017d1440((long *)(param_1 + 0xe8),&local_18);
  }
  return;
}


