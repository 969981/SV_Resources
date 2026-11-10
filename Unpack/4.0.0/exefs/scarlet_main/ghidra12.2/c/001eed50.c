/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eed50; name: FUN_001eed50
 */


bool FUN_001eed50(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) == 0) {
    iVar2 = FUN_001f2df4();
    if (iVar2 == 0) {
      iVar2 = FUN_001f32ac(param_1);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


