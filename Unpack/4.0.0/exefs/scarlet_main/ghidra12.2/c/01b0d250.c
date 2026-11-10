/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0d250; name: FUN_01b0d250
 */


bool FUN_01b0d250(byte *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 < 2) {
    lVar1 = *(long *)(param_1 + 8);
  }
  else {
    lVar1 = 0;
  }
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    lVar2 = *(long *)(param_2 + 8);
  }
  else {
    lVar2 = 0;
  }
  return lVar1 == lVar2;
}


