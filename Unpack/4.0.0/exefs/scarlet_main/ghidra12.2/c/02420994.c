/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02420994; name: FUN_02420994
 */


undefined8
FUN_02420994(undefined8 param_1,code *param_2,ulong param_3,undefined8 param_4,undefined4 *param_5,
            undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long local_28;
  
  FUN_023dbb80(&local_28);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_28 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(*param_5,plVar1,param_4,*param_6);
  }
  FUN_018eb3a8(&local_28);
  return uVar2;
}


