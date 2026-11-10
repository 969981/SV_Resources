/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079d1ec; name: FUN_0079d1ec
 */


int FUN_0079d1ec(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(short *)(param_1 + 0x114e) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = FUN_00796784(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10);
      if ((uVar1 & 1) != 0) {
        uVar1 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10,param_1 + 0x98)
        ;
        if ((uVar1 & 1) == 0) {
          iVar2 = (1 << (ulong)((uint)uVar3 & 0x1f)) + iVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x114e));
  }
  return iVar2;
}


