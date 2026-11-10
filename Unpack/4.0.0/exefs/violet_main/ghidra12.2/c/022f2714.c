/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f2714; name: FUN_022f2714
 */


bool FUN_022f2714(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong local_18;
  
  local_18 = param_2 << 0x20 | 1;
  lVar1 = FUN_022f2750(param_1,&local_18);
  return **(char **)(lVar1 + 8) != '\0';
}


