/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944020; name: FUN_02944020
 */


bool FUN_02944020(long param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  bVar1 = false;
  if (lVar3 != 0) {
    cVar2 = FUN_0294404c();
    bVar1 = cVar2 != '\0';
  }
  return bVar1;
}


