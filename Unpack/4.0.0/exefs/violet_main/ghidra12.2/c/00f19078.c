/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f19078; name: FUN_00f19078
 */


void FUN_00f19078(long param_1,byte param_2)

{
  param_2 = *(char *)(param_1 + 0x150) == '\0' & param_2;
  FUN_00f190b8(*(undefined8 *)(param_1 + 200),param_2,1);
  *(byte *)(param_1 + 0x158) = param_2;
  return;
}


