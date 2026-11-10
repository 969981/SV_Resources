/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271537c; name: FUN_0271537c
 */


undefined8 FUN_0271537c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  while( true ) {
    if (lVar2 == param_1 + 0x68) {
      return 0;
    }
    uVar1 = FUN_02714e60(*(undefined8 *)(lVar2 + 0x10));
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return 1;
}


