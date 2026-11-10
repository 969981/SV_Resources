/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e677bc; name: FUN_00e677bc
 */


bool FUN_00e677bc(long param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(*(long *)(param_1 + 0x70) + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
  }
  return bVar1;
}


