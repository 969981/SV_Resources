/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf3d44; name: FUN_01cf3d44
 */


void FUN_01cf3d44(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x24) = 3;
  memset(param_1 + 0x30,0,0x41);
  FUN_01f65400(param_1);
  return;
}


