/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cdcc10; name: FUN_01cdcc10
 */


uint FUN_01cdcc10(long *param_1,code *param_2,ulong param_3,undefined1 *param_4)

{
  long *plVar1;
  uint uVar2;
  long local_38;
  long local_18;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_0196c128(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      uVar2 = (*param_2)(plVar1,*param_4);
      FUN_0196c0b0(&local_38);
      return uVar2 & 1;
    }
  }
  FUN_0196c0b0(&local_38);
  return 0;
}


