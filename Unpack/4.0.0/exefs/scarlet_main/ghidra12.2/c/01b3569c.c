/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b3569c; name: FUN_01b3569c
 */


uint FUN_01b3569c(long *param_1,code *param_2,ulong param_3)

{
  uint uVar1;
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_01b35718(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      uVar1 = (*param_2)();
      FUN_01b357a4(&local_30);
      return uVar1 & 1;
    }
  }
  FUN_01b357a4(&local_30);
  return 0;
}


