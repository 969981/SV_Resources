/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea8940; name: FUN_01ea8940
 */


long FUN_01ea8940(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = FUN_01ea8a00();
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = -0x7b;
  if (iVar2 != (short)iVar2) {
    iVar5 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar2 != (char)iVar2) {
    iVar1 = iVar5;
  }
  if (iVar2 + 0x40U < 0xc0) {
    iVar1 = iVar2;
  }
  lVar4 = FUN_0111b030(iVar1);
  return lVar4 + lVar3;
}


