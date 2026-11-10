/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022eb8fc; name: FUN_022eb8fc
 */


bool FUN_022eb8fc(long param_1,long param_2)

{
  long lVar1;
  ulong local_18;
  
  local_18 = param_2 << 0x20 | 1;
  lVar1 = FUN_00d74de4(param_1,param_1 + 0x80,&local_18);
  return **(char **)(lVar1 + 8) != '\0';
}


