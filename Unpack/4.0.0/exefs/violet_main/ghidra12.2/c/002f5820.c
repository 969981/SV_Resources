/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f5820; name: FUN_002f5820
 */


long FUN_002f5820(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"TSI_INTEGRITY_ONLY");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,"TSI_PRIVACY_AND_INTEGRITY");
  return (ulong)(iVar1 == 0) << 1;
}


