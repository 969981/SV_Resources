/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215e448; name: FUN_0215e448
 */


void FUN_0215e448(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(float *)(*(long *)(param_1 + 0x880) + 0x1d4) * 10.0);
  iVar1 = iVar2 / 10;
  if (4 < iVar2 % 10) {
    iVar1 = iVar1 + 1;
  }
  FUN_01733b00((float)iVar1,*(long *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa24));
  return;
}


