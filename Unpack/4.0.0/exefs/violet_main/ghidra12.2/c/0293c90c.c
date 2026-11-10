/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293c90c; name: FUN_0293c90c
 */


undefined8 FUN_0293c90c(long param_1,ushort param_2)

{
  long lVar1;
  
  if ((param_2 < 0x86) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 8 + 8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
  return 0;
}


