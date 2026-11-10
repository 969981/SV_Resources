/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c292a8; name: FUN_01c292a8
 */


undefined8 FUN_01c292a8(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long local_18;
  
  FUN_01c27d8c(&local_18);
  if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4);
  }
  FUN_01c1abf8(&local_18);
  return uVar2;
}


