/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02687e24; name: FUN_02687e24
 */


uint FUN_02687e24(long *param_1,code *param_2,ulong param_3)

{
  uint uVar1;
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_02687b80(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      uVar1 = (*param_2)();
      FUN_02687c0c(&local_30);
      return uVar1 & 1;
    }
  }
  FUN_02687c0c(&local_30);
  return 0;
}


