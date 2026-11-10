/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796d04; name: FUN_00796d04
 */


int FUN_00796d04(long param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x48);
  iVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    iVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 0x48) = (short)iVar1;
  return iVar1;
}


