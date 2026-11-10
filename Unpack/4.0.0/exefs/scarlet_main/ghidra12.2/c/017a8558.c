/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a8558; name: FUN_017a8558
 */


void FUN_017a8558(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3ac) = param_2 & 1;
  return;
}


