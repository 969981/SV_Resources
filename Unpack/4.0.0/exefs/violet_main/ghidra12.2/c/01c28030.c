/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c28030; name: FUN_01c28030
 */


void FUN_01c28030(undefined1 *param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_01c10d18(&local_30,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_01c10f78(param_1 + 8,&local_30);
  FUN_01c102fc(&local_30);
  return;
}


