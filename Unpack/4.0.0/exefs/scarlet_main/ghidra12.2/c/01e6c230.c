/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6c230; name: FUN_01e6c230
 */


void FUN_01e6c230(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = -0x7b;
  if (iVar2 != (short)iVar2) {
    iVar3 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar2 != (char)iVar2) {
    iVar1 = iVar3;
  }
  if (iVar2 + 0x40U < 0xc0) {
    iVar1 = iVar2;
  }
  FUN_0111b030(iVar1);
  return;
}


