/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02104ccc; name: FUN_02104ccc
 */


undefined8 FUN_02104ccc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return 0;
  }
  uVar1 = FUN_02978880(param_1 + 0x3c8);
  return uVar1;
}


