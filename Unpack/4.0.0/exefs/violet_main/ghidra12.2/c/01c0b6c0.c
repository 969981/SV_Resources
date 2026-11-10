/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0b6c0; name: FUN_01c0b6c0
 */


uint FUN_01c0b6c0(undefined8 param_1,code *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  long *plVar1;
  uint uVar2;
  long local_48;
  
  FUN_01c0b234(&local_48);
  if (local_48 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_48 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    param_7 = (*param_2)(plVar1,param_4,param_5,param_6,param_7);
    param_7 = param_7 & 0xffffffff;
    uVar2 = 1;
  }
  FUN_01c0b058(&local_48);
  return (uint)param_7 & uVar2;
}


