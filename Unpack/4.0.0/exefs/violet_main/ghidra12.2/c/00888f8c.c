/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00888f8c; name: FUN_00888f8c
 */


void FUN_00888f8c(long param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(*(undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


