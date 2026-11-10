/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a5a1ec; name: FUN_01a5a1ec
 */


undefined4 FUN_01a5a1ec(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  long local_38;
  long local_18;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_025bcd58(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      uVar2 = (*param_2)(plVar1,*param_4);
      FUN_025bcde4(&local_38);
      return uVar2;
    }
  }
  FUN_025bcde4(&local_38);
  return 0;
}


