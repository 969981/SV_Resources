/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001edb4c; name: FUN_001edb4c
 */


void FUN_001edb4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_8;
  
  iVar1 = FUN_001edb90(&local_8,param_2,param_3,0,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_8 + 0x930) = 1;
    *param_1 = local_8;
  }
  return;
}


