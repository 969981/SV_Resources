/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


