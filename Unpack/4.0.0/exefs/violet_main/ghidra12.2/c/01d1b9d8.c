/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1b9d8; name: FUN_01d1b9d8
 */


void FUN_01d1b9d8(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_40 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_40[0] = param_2;
  local_30 = FUN_01d1bbb4(local_40);
  *param_1 = 1;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_01d1bbc4(param_1 + 8,&local_30);
  return;
}


