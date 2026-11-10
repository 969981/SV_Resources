/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db7cf0; name: FUN_00db7cf0
 */


void FUN_00db7cf0(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    *param_1 = uRam0000000000000001;
    param_1[2] = 0;
    puVar2 = (undefined8 *)&DAT_00000009;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
    }
    puVar1 = (undefined8 *)(*param_3)();
    puVar2 = puVar1 + 1;
    *param_1 = *puVar1;
    param_1[2] = 0;
  }
  param_1[1] = 0;
  FUN_00c43ef0(param_1 + 1,puVar2);
  return;
}


