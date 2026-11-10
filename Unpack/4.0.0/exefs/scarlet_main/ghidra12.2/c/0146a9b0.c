/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146a9b0; name: FUN_0146a9b0
 */


bool FUN_0146a9b0(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 1) {
    iVar3 = std::string::compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x3bf34eb);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


