/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af4b74; name: FUN_01af4b74
 */


void FUN_01af4b74(long *param_1,code *param_2,ulong param_3,undefined1 *param_4,undefined2 *param_5)

{
  long *plVar1;
  long local_40;
  long local_38;
  
  if (*param_1 == 0) {
    local_40 = 0;
  }
  else {
    FUN_01af490c(&local_38);
    local_40 = local_38;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      (*param_2)(plVar1,*param_4,*param_5);
    }
  }
  FUN_01af4998(&local_40);
  return;
}


