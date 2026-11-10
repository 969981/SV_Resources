/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c601e0; name: FUN_01c601e0
 */


void FUN_01c601e0(void *param_1,undefined8 param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long *plVar1;
  long local_38;
  
  FUN_01c5fc38(&local_38);
  if (local_38 == 0) {
    FUN_01c5d338(&local_38);
    memset(param_1,0,0x48);
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5);
    FUN_01c5d338(&local_38);
  }
  return;
}


