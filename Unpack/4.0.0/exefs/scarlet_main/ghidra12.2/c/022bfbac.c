/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022bfbac; name: FUN_022bfbac
 */


undefined8 FUN_022bfbac(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_022bfc28(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      uVar1 = (*param_2)();
      FUN_022bfcb4(&local_30);
      return uVar1;
    }
  }
  FUN_022bfcb4(&local_30);
  return 0;
}


