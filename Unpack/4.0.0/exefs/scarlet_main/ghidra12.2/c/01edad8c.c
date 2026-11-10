/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edad8c; name: FUN_01edad8c
 */


int FUN_01edad8c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x7ee8);
  if (uVar2 == 0xff) {
    return 0xff;
  }
  iVar1 = uVar2 + 1;
  *(byte *)(param_1 + 0x7ee8) = (byte)iVar1;
  return iVar1;
}


