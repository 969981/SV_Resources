/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c0134; name: FUN_022c0134
 */


void FUN_022c0134(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  long local_38;
  long local_18;
  
  if (*param_2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_022bfc28(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
      }
      (*param_3)(param_1);
      FUN_022bfcb4(&local_38);
      return;
    }
  }
  FUN_022bfcb4(&local_38);
  *param_1 = 0;
  return;
}


