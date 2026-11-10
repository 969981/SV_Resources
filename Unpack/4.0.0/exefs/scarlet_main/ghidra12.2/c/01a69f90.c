/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a69f90; name: FUN_01a69f90
 */


void FUN_01a69f90(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long *plVar1;
  long local_48;
  
  FUN_01d93d88(&local_48);
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(*param_5,*param_6,*param_7,plVar1,*param_4);
  }
  FUN_01847410(&local_48);
  return;
}


