/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fd207c; name: FUN_01fd207c
 */


bool FUN_01fd207c(long param_1)

{
  long lVar1;
  
  if ((((*(char *)(param_1 + 0x40) == '\0') ||
       (lVar1 = *(long *)(param_1 + 0x78), *(char *)(lVar1 + 0x14f) != '\0')) ||
      (*(char *)(lVar1 + 0x14a) != '\0')) || (*(char *)(lVar1 + 0x149) == '\0')) {
    return false;
  }
  return *(char *)(lVar1 + 0x148) == '\0';
}


