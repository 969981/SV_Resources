/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b970f0; name: FUN_01b970f0
 */


void FUN_01b970f0(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long local_38;
  long local_18;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_01b97f8c(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_18 + ((long)param_3 >> 1)));
      }
      (*param_2)(*param_4);
    }
  }
  FUN_01b98018(&local_38);
  return;
}


