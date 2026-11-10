/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fc240; name: FUN_028fc240
 */


undefined8 FUN_028fc240(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar1 = *(long *)(param_1 + 0x40);
    while( true ) {
      if (lVar1 == *(long *)(param_1 + 0x48)) {
        return 1;
      }
      if ((*(long *)(lVar1 + 8) == 0) || ((*(byte *)(*(long *)(lVar1 + 8) + 0x1e8) & 1) == 0))
      break;
      lVar1 = lVar1 + 0x40;
    }
  }
  return 0;
}


