/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdfc40; name: FUN_00fdfc40
 */


void FUN_00fdfc40(long param_1)

{
  long local_30;
  long *plStack_28;
  long local_8;
  
  local_8 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
  plStack_28 = &local_8;
  local_30 = param_1;
  FUN_00fdfe2c(*(undefined8 *)(param_1 + 0x60),&local_30);
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}


