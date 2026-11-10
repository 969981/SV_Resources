/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0338831c; name: FUN_0338831c
 */


void FUN_0338831c(int *param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong *local_30;
  long lStack_28;
  
  FUN_0339733c(&local_50,param_2,param_1,0);
  if (-1 < *param_1) {
    local_70 = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
    uStack_58 = uStack_38;
    FUN_033883ac(param_1,&local_70,0,0);
  }
  if (local_30[1] < *local_30 + lStack_28) {
    if ((long *)local_30[7] != (long *)0x0) {
      (**(code **)(*(long *)local_30[7] + 0x30))();
    }
  }
  else {
    *local_30 = *local_30 + lStack_28;
  }
  return;
}


