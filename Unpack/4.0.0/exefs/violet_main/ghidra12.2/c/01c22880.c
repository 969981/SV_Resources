/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c22880; name: FUN_01c22880
 */


uint FUN_01c22880(undefined8 param_1,code *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long local_28;
  
  FUN_01c228e8(&local_28);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
    param_2 = (code *)(uVar1 & 0xffffffff);
    uVar2 = 1;
  }
  FUN_01c226f8(&local_28);
  return (uint)param_2 & uVar2;
}


