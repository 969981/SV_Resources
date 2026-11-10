/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ad980; name: FUN_029ad980
 */


void FUN_029ad980(undefined8 *param_1)

{
  long *local_28;
  long local_8;
  
  if (param_1[0xd] != 0) {
    FUN_029af564();
  }
  FUN_00c4b2c4(*param_1);
  FUN_00c4b2c4(param_1[1]);
  local_8 = param_1[0xd] + 0x30;
  local_28 = &local_8;
  FUN_029adc04(param_1[0xc],&local_28);
  return;
}


