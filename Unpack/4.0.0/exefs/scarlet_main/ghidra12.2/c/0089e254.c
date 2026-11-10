/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089e254; name: FUN_0089e254
 */


uint FUN_0089e254(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00897bf0();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  }
  return uVar1 & 1;
}


