/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02808da0; name: FUN_02808da0
 */


bool FUN_02808da0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char local_8 [8];
  
  FUN_02809d7c(local_8,param_2);
  if (local_8[0] == '\0') {
    bVar1 = false;
  }
  else if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(*param_1 + 0x1a) != 0;
  }
  return bVar1;
}


