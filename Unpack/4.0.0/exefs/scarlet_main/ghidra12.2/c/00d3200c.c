/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d3200c; name: FUN_00d3200c
 */


void FUN_00d3200c(long *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 param_5)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,*param_4,param_5);
  }
  return;
}


