/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cb8ce0; name: FUN_01cb8ce0
 */


undefined8
FUN_01cb8ce0(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long local_38;
  
  FUN_01cb8938(&local_38);
  if (local_38 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4,*param_5);
  }
  FUN_01996b54(&local_38);
  return uVar2;
}


