/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d81fc; name: FUN_031d81fc
 */


int FUN_031d81fc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x60);
  iVar2 = (uint)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                      POPCOUNT((char)(uVar4 >> 0x10)) + POPCOUNT((char)(uVar4 >> 0x18))) * 8;
  iVar1 = iVar2 + 0x10;
  iVar3 = iVar1;
  if ((*(long *)(param_1 + 0x168) != 0) && (iVar3 = iVar2 + 8, (uVar4 & 1) != 0)) {
    iVar3 = iVar1;
  }
  return iVar3;
}


