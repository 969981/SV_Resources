/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a648c4; name: FUN_01a648c4
 */


void FUN_01a648c4(long *param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  long *plVar1;
  long local_48;
  long local_28;
  
  if (*param_1 == 0) {
    local_48 = 0;
  }
  else {
    FUN_01d92b4c(&local_28);
    local_48 = local_28;
    if (local_28 != 0) {
      plVar1 = (long *)(local_28 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      (*param_2)(*param_6,plVar1,*param_4,*param_5);
    }
  }
  FUN_01d92bd8(&local_48);
  return;
}


