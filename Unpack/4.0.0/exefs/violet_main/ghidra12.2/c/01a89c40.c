/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a89c40; name: FUN_01a89c40
 */


undefined8
FUN_01a89c40(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long local_48;
  long local_28;
  
  if (*param_1 == 0) {
    local_48 = 0;
  }
  else {
    FUN_0196c128(&local_28);
    local_48 = local_28;
    if (local_28 != 0) {
      plVar1 = (long *)(local_28 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      uVar2 = (*param_2)(*param_5,plVar1,param_4,*param_6);
      FUN_0196c0b0(&local_48);
      return uVar2;
    }
  }
  FUN_0196c0b0(&local_48);
  return 0;
}


