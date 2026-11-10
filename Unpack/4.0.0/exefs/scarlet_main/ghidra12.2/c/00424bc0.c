/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00424bc0; name: FUN_00424bc0
 */


long FUN_00424bc0(long param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  FUN_0042b500(auStack_60,param_1 + 0x40,param_2);
  FUN_0042b500(auStack_a0,param_2 + 0x40,param_1);
  iVar1 = FUN_0042ad30(auStack_60,auStack_a0);
  return (long)iVar1;
}


