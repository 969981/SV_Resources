/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


