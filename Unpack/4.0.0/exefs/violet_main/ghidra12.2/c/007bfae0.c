/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfae0; name: FUN_007bfae0
 */


undefined8 FUN_007bfae0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -0x20;
  if ((*(ulong *)(param_1 + -8) & 1) != 0) {
    lVar1 = *(ulong *)(param_1 + -8) - 1;
  }
  return *(undefined8 *)(lVar1 + 0x18);
}


