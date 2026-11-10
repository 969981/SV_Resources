/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8d760; name: FUN_01f8d760
 */


void FUN_01f8d760(undefined8 param_1,long param_2)

{
  long local_28;
  
  if (*(long *)(param_2 + 0x158) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d7f0(&local_28);
    if (local_28 != 0) {
      FUN_0156cdb4(param_1);
    }
  }
  FUN_01018a28(&local_28);
  if (*(long *)(param_2 + 0x178) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d884(&local_28);
    if (local_28 != 0) {
      FUN_01f8d918(param_1);
    }
  }
  FUN_01018c54(&local_28);
  return;
}


