/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02104ce4; name: FUN_02104ce4
 */


int FUN_02104ce4(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  uVar3 = FUN_01a375b0(param_1 + 0x3c8);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - *(uint *)(param_1 + 0x58);
  if ((uVar3 < *(uint *)(param_1 + 0x58) || iVar2 == 0) || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2 + iVar1;
}


