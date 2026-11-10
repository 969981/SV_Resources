/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e97e40; name: FUN_01e97e40
 */


bool FUN_01e97e40(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_01f6496c(lVar3 + -0x28);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


