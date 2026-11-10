/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b1ef8; name: FUN_019b1ef8
 */


void FUN_019b1ef8(undefined8 param_1,char *param_2)

{
  int iVar1;
  ThreadType *local_8;
  
  iVar1 = FUN_019b1f30(param_1,&local_8);
  if (iVar1 != 0) {
    nn::os::SetThreadName(local_8,param_2);
  }
  return;
}


