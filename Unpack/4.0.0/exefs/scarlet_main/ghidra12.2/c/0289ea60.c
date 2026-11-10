/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289ea60; name: FUN_0289ea60
 */


bool FUN_0289ea60(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((char)param_2[3] == '\0') {
    lVar1 = 0;
    if (*param_2 != 0) {
      if (*(short *)(*param_2 + 0x1a) != 0) goto LAB_0289ea68;
      lVar1 = 0;
    }
  }
  else {
LAB_0289ea68:
    lVar1 = param_2[2];
  }
  if ((char)param_1[3] == '\0') {
    lVar2 = 0;
    if (*param_1 == 0) goto LAB_0289ea78;
    if (*(short *)(*param_1 + 0x1a) == 0) {
      lVar2 = 0;
      goto LAB_0289ea78;
    }
  }
  lVar2 = param_1[2];
LAB_0289ea78:
  return lVar1 == lVar2;
}


