/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e9774; name: FUN_019e9774
 */


undefined8 FUN_019e9774(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    return 0;
  }
  uVar1 = FUN_0131cbf0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  return uVar1;
}


