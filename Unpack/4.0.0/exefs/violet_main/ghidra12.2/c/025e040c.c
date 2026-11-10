/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e040c; name: FUN_025e040c
 */


uint FUN_025e040c(undefined8 param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long local_18;
  
  FUN_025e0238(&local_18);
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4);
    param_2 = (code *)(uVar2 & 0xffffffff);
    uVar3 = 1;
  }
  FUN_025e0048(&local_18);
  return (uint)param_2 & uVar3;
}


