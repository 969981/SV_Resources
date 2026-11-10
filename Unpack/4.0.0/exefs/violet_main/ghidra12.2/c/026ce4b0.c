/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ce4b0; name: FUN_026ce4b0
 */


void FUN_026ce4b0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_026bac24(&local_30,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_026ba144(param_1 + 8,&local_30);
  FUN_026b974c(&local_30);
  return;
}


