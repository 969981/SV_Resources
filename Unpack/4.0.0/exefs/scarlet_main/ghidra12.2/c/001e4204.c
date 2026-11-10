/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4204; name: FUN_001e4204
 */


bool FUN_001e4204(undefined1 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_001cb370(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_001cb268(param_1), iVar2 == 0)) {
    iVar2 = FUN_001cb2f8(param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


