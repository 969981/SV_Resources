/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdf148; name: FUN_00fdf148
 */


bool FUN_00fdf148(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
    return false;
  }
  return *(int *)(lVar1 + 0x40) == 0;
}


