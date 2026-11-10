/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8ec00; name: FUN_01f8ec00
 */


bool FUN_01f8ec00(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  bVar1 = false;
  if (*(long *)(param_1 + 200) != 0) {
    lVar2 = FUN_01f8ec30(*(long *)(param_1 + 200),auStack_18);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


