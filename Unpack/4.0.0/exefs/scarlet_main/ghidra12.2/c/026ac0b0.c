/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ac0b0; name: FUN_026ac0b0
 */


void FUN_026ac0b0(undefined8 param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long local_18;
  
  FUN_026abfd0(&local_18);
  if (local_18 != 0) {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,param_4);
  }
  FUN_0269f2b8(&local_18);
  return;
}


