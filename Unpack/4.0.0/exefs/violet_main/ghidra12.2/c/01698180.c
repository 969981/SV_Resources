/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01698180; name: FUN_01698180
 */


undefined8 FUN_01698180(long param_1)

{
  long lVar1;
  
  if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) == 0) &&
      (*(char *)(param_1 + 0x3ad) != '\0')) && (*(char *)(param_1 + 0x98) != '\0')) {
    lVar1 = FUN_016981f8(*(undefined8 *)(param_1 + 0x30));
    if (*(char *)(lVar1 + 0xa8) != '\0') {
      return 0;
    }
    lVar1 = FUN_016981f8(*(undefined8 *)(param_1 + 0x30));
    FUN_011e2180(param_1 + 0x88,lVar1 + 0xe0);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return 1;
}


