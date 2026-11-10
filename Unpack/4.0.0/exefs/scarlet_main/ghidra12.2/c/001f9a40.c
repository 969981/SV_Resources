/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9a40; name: FUN_001f9a40
 */


undefined8 FUN_001f9a40(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 0xe6) == '\0') {
    return 0;
  }
  FUN_001f9484(param_2 + 0x18,param_3 + 0x10);
  *(undefined1 *)(param_3 + 0xe6) = 0;
  uVar1 = FUN_001f9a90(param_1,param_3);
  return uVar1;
}


