/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb6370; name: FUN_01bb6370
 */


uint FUN_01bb6370(undefined8 param_1,code *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  long local_18;
  
  FUN_01bb63e0(&local_18);
  if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    param_4 = (*param_2)(plVar1,param_4);
    param_4 = param_4 & 0xffffffff;
    uVar2 = 1;
  }
  FUN_01018e84(&local_18);
  return (uint)param_4 & uVar2;
}


