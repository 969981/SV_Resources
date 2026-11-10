/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccc0d8; name: FUN_00ccc0d8
 */


undefined8 FUN_00ccc0d8(undefined8 param_1,char *param_2,byte param_3,byte param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*param_2 == '\0' || lVar1 == 0) {
    return 0;
  }
  *(byte *)(lVar1 + 0x40) = param_3 & 1;
  *(byte *)(lVar1 + 0x41) = param_4 & 1;
  return 1;
}


