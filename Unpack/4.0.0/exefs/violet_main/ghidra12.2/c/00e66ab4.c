/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e66ab4; name: FUN_00e66ab4
 */


undefined8 FUN_00e66ab4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  while( true ) {
    if (lVar1 == param_1 + 0xd0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  return 1;
}


