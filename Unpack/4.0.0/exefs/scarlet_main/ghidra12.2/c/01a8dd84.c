/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a8dd84; name: FUN_01a8dd84
 */


undefined4
FUN_01a8dd84(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 *param_6,undefined4 *param_7,char *param_8)

{
  long *plVar1;
  undefined4 uVar2;
  long local_58;
  long local_38;
  
  if (*param_1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_01ba6114(&local_38);
    local_58 = local_38;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      uVar2 = (*param_2)(plVar1,param_4,param_5,*param_6,*param_7,*param_8 != '\0');
      FUN_01ba61a0(&local_58);
      return uVar2;
    }
  }
  FUN_01ba61a0(&local_58);
  return 0;
}


