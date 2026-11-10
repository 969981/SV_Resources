/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4d90; name: FUN_008b4d90
 */


bool FUN_008b4d90(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 == 0)) {
    return false;
  }
  return *(char *)(lVar1 + 0x110) != '\0';
}


