/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ce0ec; name: FUN_018ce0ec
 */


void FUN_018ce0ec(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN_018ce148(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x25,param_2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),199,param_2,param_3);
  return;
}


