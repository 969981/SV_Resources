/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


