/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2a4c; name: FUN_026f2a4c
 */


undefined4 FUN_026f2a4c(long param_1)

{
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  
  local_1c = 0;
  if (*(long *)(param_1 + 0x88) == 0) {
    local_1c = 0;
  }
  else {
    FUN_01e643c8(auStack_18,&local_1c);
  }
  return local_1c;
}


