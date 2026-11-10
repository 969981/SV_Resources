/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02100b84; name: FUN_02100b84
 */


long FUN_02100b84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (lVar1 != 0) {
      lVar1 = FUN_01091070(param_1,lVar1,0);
      return lVar1;
    }
    lVar1 = 1;
  }
  return lVar1;
}


