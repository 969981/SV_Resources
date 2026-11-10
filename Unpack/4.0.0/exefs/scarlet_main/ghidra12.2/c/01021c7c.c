/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01021c7c; name: FUN_01021c7c
 */


undefined8 FUN_01021c7c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
  return uVar1;
}


