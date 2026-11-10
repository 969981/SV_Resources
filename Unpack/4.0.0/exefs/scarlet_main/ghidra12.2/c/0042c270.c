/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042c270; name: FUN_0042c270
 */


bool FUN_0042c270(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((*param_1 == 0) || (pcVar2 = *(code **)(*param_1 + 0x48), pcVar2 == (code *)0x0)) {
    return false;
  }
  iVar1 = (*pcVar2)();
  return 0 < iVar1;
}


