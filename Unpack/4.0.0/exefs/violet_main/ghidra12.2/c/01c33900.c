/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c33900; name: FUN_01c33900
 */


uint FUN_01c33900(undefined8 param_1,code *param_2,ulong param_3,undefined2 *param_4,
                 undefined2 *param_5)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long local_38;
  
  FUN_01c33704(&local_38);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(plVar1,*param_4,*param_5);
    param_2 = (code *)(uVar2 & 0xffffffff);
    uVar3 = 1;
  }
  FUN_01c0b508(&local_38);
  return (uint)param_2 & uVar3;
}


