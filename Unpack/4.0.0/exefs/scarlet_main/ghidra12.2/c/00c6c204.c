/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6c204; name: FUN_00c6c204
 */


void FUN_00c6c204(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return;
  }
  bVar2 = *(byte *)(param_2 + -1);
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  uVar3 = *(ulong *)((param_2 - (ulong)bVar2) + -0x10);
  lVar1 = uVar3 + 0x18;
  if (uVar3 < 0x11) {
    lVar1 = 0x28;
  }
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar1;
  FUN_00c6c244();
  return;
}


