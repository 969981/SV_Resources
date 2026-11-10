/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038be00; name: FUN_0038be00
 */


bool FUN_0038be00(char *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,"grpc-exp",param_2);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = strncmp(param_1,"h2",param_2);
  return iVar1 == 0;
}


