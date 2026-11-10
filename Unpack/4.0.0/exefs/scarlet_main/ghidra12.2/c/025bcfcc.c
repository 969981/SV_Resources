/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025bcfcc; name: FUN_025bcfcc
 */


void FUN_025bcfcc(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long local_40;
  long local_38;
  
  if (*param_2 == 0) {
    local_40 = 0;
  }
  else {
    FUN_025bcd58(&local_38);
    local_40 = local_38;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar1);
      }
      (*param_3)(param_1,plVar1,param_5);
      FUN_025bcde4(&local_40);
      return;
    }
  }
  FUN_025bcde4(&local_40);
  *param_1 = 0;
  return;
}


