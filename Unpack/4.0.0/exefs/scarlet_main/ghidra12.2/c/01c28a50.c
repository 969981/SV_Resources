/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c28a50; name: FUN_01c28a50
 */


void FUN_01c28a50(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4,char *param_5,
                 char *param_6)

{
  long *plVar1;
  long local_28;
  
  FUN_01c27d8c(&local_28);
  if (local_28 == 0) {
    FUN_01c1abf8(&local_28);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(local_28 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5 != '\0',*param_6 != '\0');
    FUN_01c1abf8(&local_28);
  }
  return;
}


