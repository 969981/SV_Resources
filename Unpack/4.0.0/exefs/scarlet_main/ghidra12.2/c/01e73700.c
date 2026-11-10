/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e73700; name: FUN_01e73700
 */


void FUN_01e73700(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    FUN_01f70d3c(param_1,0);
    return;
  }
  lVar2 = *(long *)(*param_2 + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  FUN_01f70d3c(param_1,lVar1);
  return;
}


