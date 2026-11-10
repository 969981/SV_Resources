/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01930f9c; name: FUN_01930f9c
 */


undefined4 FUN_01930f9c(long param_1)

{
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    FUN_00d4a2a4(DAT_0485a0e8,param_1 + 0x24,param_1 + 0xd0,&local_14);
  }
  return local_14;
}


