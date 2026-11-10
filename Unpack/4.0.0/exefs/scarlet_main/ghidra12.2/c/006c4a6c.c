/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4a6c; name: FUN_006c4a6c
 */


uint FUN_006c4a6c(long *param_1)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  FUN_006c48a4(auStack_30);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  FUN_006c4990(auStack_30);
  return uVar1 & 1;
}


