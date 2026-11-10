/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbd9f0; name: FUN_01dbd9f0
 */


bool FUN_01dbd9f0(long *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_01539950(*(undefined8 *)(*param_1 + 0x70));
    bVar1 = iVar2 - 0x18U < 6;
  }
  return bVar1;
}


