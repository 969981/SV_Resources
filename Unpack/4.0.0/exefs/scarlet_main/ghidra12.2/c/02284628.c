/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02284628; name: FUN_02284628
 */


undefined4 FUN_02284628(long param_1)

{
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    FUN_00d4a2a4(DAT_0485a0e8,param_1 + 0x24,param_1 + 0xb0,&local_14);
  }
  return local_14;
}


