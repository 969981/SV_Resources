/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8b9c8; name: FUN_01f8b9c8
 */


void FUN_01f8b9c8(long param_1)

{
  long local_8;
  
  if (*(long *)(param_1 + 0x178) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01f8d884(&local_8);
    if (local_8 != 0) {
      FUN_01f8e804();
    }
  }
  FUN_01018c54(&local_8);
  if (*(long *)(param_1 + 0x158) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01f8d7f0(&local_8);
    if (local_8 != 0) {
      FUN_015a057c(local_8,1);
    }
  }
  FUN_01018a28(&local_8);
  return;
}


