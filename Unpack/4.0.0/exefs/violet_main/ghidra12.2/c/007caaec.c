/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007caaec; name: FUN_007caaec
 */


void FUN_007caaec(long *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(PTR_DAT_047d1158 + 0x10);
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  FUN_007c9d80(param_1 + 8);
  param_1[0x10] = 0;
  nn::os::SdkAllocateTlsSlot((TlsSlot *)(param_1 + 0x11),(_func_void_ulong *)0x0);
  return;
}


