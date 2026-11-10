/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c9c5c; name: FUN_016c9c5c
 */


void FUN_016c9c5c(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
  uVar1 = (*param_3)();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00c6c994(param_1,uVar1);
  return;
}


