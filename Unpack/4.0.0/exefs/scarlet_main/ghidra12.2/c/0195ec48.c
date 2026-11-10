/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195ec48; name: FUN_0195ec48
 */


void FUN_0195ec48(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long local_28;
  
  if (*(long *)(param_3 + 0x158) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d7f0(&local_28);
    if (local_28 != 0) {
      FUN_01f8eee0(param_1,param_2,local_28,param_4);
    }
  }
  FUN_01018a28(&local_28);
  return;
}


