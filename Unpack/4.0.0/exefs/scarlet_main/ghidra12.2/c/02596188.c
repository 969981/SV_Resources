/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02596188; name: FUN_02596188
 */


undefined8 FUN_02596188(long *param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,param_4);
  }
  return uVar2;
}


