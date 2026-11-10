/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfad8c; name: FUN_01dfad8c
 */


void FUN_01dfad8c(long param_1,undefined1 *param_2,int param_3)

{
  param_1 = param_1 + (long)param_3 * 0x40;
  *(undefined1 *)(param_1 + 0x120) = *param_2;
  FUN_00d0a71c(param_1 + 0x128,param_2 + 8);
  memcpy((void *)(param_1 + 0x138),param_2 + 0x18,0x28);
  return;
}


