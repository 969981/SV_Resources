/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c3a4c; name: FUN_006c3a4c
 */


char FUN_006c3a4c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x1c') {
    cVar1 = '\x10';
  }
  return cVar1;
}


