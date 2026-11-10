/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb0d24; name: FUN_00bb0d24
 */


long FUN_00bb0d24(long param_1,ulong param_2)

{
  char acStack_a0 [127];
  undefined1 local_21;
  
  snprintf(acStack_a0,0x80,"%d",param_2 & 0xffffffff);
  local_21 = 0;
  std::string::append((char *)(param_1 + 0x18));
  return param_1;
}


