/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02762b74; name: FUN_02762b74
 */


undefined8 FUN_02762b74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  while( true ) {
    if (lVar1 == *(long *)(param_1 + 0x40)) {
      return 1;
    }
    if ((*(long *)(lVar1 + 8) == 0) || ((*(byte *)(*(long *)(lVar1 + 8) + 0x1e8) & 1) == 0)) break;
    lVar1 = lVar1 + 0x40;
  }
  return 0;
}


