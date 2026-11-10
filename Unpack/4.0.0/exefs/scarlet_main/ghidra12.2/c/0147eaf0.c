/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147eaf0; name: FUN_0147eaf0
 */


void FUN_0147eaf0(undefined1 param_1)

{
  undefined1 local_14 [4];
  
  if (DAT_0483b000 != (code *)0x0) {
    local_14[0] = param_1;
    (*DAT_0483b000)(&DAT_0483b020,local_14);
  }
  return;
}


