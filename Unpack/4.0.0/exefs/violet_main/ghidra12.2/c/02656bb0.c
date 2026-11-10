/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02656bb0; name: FUN_02656bb0
 */


void FUN_02656bb0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_0265619c(&local_30,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_02655618(param_1 + 8,&local_30);
  FUN_02655270(&local_30);
  return;
}


