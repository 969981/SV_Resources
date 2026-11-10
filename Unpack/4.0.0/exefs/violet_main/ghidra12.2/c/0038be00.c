/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


