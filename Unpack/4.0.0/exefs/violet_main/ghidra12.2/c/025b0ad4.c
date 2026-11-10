/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025b0ad4; name: FUN_025b0ad4
 */


undefined1  [16] FUN_025b0ad4(long *param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_025b07f0(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      auVar1 = (*param_2)();
      FUN_025b087c(&local_30);
      return auVar1;
    }
  }
  FUN_025b087c(&local_30);
  return ZEXT816(0);
}


