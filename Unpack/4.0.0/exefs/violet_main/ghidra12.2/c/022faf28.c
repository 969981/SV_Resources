/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022faf28; name: FUN_022faf28
 */


undefined4 FUN_022faf28(long *param_1,code *param_2,ulong param_3)

{
  undefined4 uVar1;
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_022fafa4(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      uVar1 = (*param_2)();
      FUN_022fb030(&local_30);
      return uVar1;
    }
  }
  FUN_022fb030(&local_30);
  return 0;
}


