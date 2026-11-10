/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8ebb8; name: FUN_01f8ebb8
 */


void FUN_01f8ebb8(long param_1)

{
  long local_18;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    local_18 = 0;
  }
  else {
    FUN_01bb642c(&local_18);
    if (local_18 != 0) {
      FUN_01f8ebfc();
    }
  }
  FUN_01018e84(&local_18);
  return;
}


