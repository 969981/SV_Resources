/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024daae8; name: FUN_024daae8
 */


void FUN_024daae8(long param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  (*param_2)(*param_5,plVar1,param_4);
  return;
}


